#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node {
    ll val;
    string index;
    vector<node*> isChildPresent;
    vector<node*> childList;
};
int m = 0;
node* getNewNode( int val, string index) {
    node* newNode = new node();
    newNode->val = max(val, 0);
    newNode->index = index;
    for(ll i=0;i<100;i++) {
        newNode->isChildPresent.push_back(NULL);
    }
    return newNode;
}
void print(string s, node* n, int level) {
    if(level == 3) {
        if(n->val > 0) {
            cout<<s+n->index<<" "<<n->val<<endl;
        }
        return;
    }
    if(n->val <= 0) return;
    for(node* n1 : n->childList) {
        print(s+n->index, n1, level+1);
    }
}
void printAll(node *dummy) {
    for(node* n : dummy->childList) {
        print("", n, 1);
    }
}
void copyChildren(node* cn1, node* cn2) {
    for(int i=0;i<cn2->childList.size();i++) {
        node* n = cn1->isChildPresent[stoi(cn2->childList[i]->index)];
        if(n != NULL) {
            n->val = max(n->val + cn2->childList[i]->val, (ll)0);
            copyChildren(n, cn2->childList[i]);
        } else {
            cn1->childList.push_back(cn2->childList[i]);
            cn1->isChildPresent[stoi(cn2->childList[i]->index)] = cn2->childList[i];
        }
    }
}
node* merge(node *dummy, int n1, int n2) {
    n1 = n1%(m+1);
    n2 = n2%(m+1);
    node *cn1, *cn2;
    for(int i=0,j=0;i<dummy->childList.size();i++) {
        if(dummy->childList[i]->val > 0) {
            j++;
            if(j == n1) {
                cn1 = dummy->childList[i];
            }
            if(j == n2) {
                cn2 = dummy->childList[i];
            }
        }  
    }
    if(cn1->index[0] != '0' || cn2->index[0] != '0') return dummy;
    dummy->isChildPresent[stoi(cn1->index)] = NULL;
    cn1->index[0] = cn1->index[1];
    cn1->index[1] = cn2->index[1];
    dummy->isChildPresent[stoi(cn1->index)] = cn1;
    cn1->val += cn2->val;
    cn2->val = 0;
    dummy->isChildPresent[stoi(cn2->index)] = NULL;
    copyChildren(cn1, cn2);
    return dummy;
}
node* addData(node* dummy, string str, int val) {
    int c, sc, ssc;
    node *cn, *scn, *sscn;
    node *cn1 = getNewNode(val, str.substr(0,2));
    node *cn2 = getNewNode(val, str.substr(2,2));
    node *cn3 = getNewNode(val, str.substr(4,2));
    c = stoi(str.substr(0,2));
    sc = stoi(str.substr(2,2));
    ssc = stoi(str.substr(4,2));
    if(dummy->isChildPresent[c] != NULL) {
        cn = dummy->isChildPresent[c];
        if(cn->val > 0 && cn->val + val <= 0) m--;
        if(cn->val == 0 && cn->val + val > 0) m++;
        cn->val = max(cn->val + val, (ll)0);
        if(cn->isChildPresent[sc] != NULL) {
            scn = cn->isChildPresent[sc];
            scn->val = max(scn->val + val, (ll)0);
            if(scn->isChildPresent[ssc] != NULL) {
                sscn = scn->isChildPresent[ssc];
                sscn->val = max(sscn->val + val, (ll)0);
            } else {
                scn->childList.push_back(cn3);
                scn->isChildPresent[ssc] = cn3;
            }
        } else {
            cn->childList.push_back(cn2);
            cn->isChildPresent[sc] = cn2;
            cn2->childList.push_back(cn3);
            cn2->isChildPresent[ssc] = cn3;
        }
    } else {
        dummy->childList.push_back(cn1);
        dummy->isChildPresent[c] = cn1;
        if(cn1->val > 0) m++;
        cn1->childList.push_back(cn2);
        cn1->isChildPresent[sc] = cn2;
        cn2->childList.push_back(cn3);
        cn2->isChildPresent[ssc] = cn3;
    }
    return dummy;
}
int getval(node* dummy, string str) {
    int c, sc, ssc;
    node *cn, *scn, *sscn;
    c = stoi(str.substr(0,2));
    if(str.size() > 2)
    sc = stoi(str.substr(2,2));
    if(str.size() > 4)
    ssc = stoi(str.substr(4,2));
    if(dummy->isChildPresent[c] != NULL) {
        cn = dummy->isChildPresent[c];
        if(str.size() == 2) return cn->val;
        if(cn->isChildPresent[sc] != NULL) {
            scn = cn->isChildPresent[sc];
            if(str.size() == 4) return scn->val;
            if(scn->isChildPresent[ssc] != NULL) {
                sscn = scn->isChildPresent[ssc];
                return sscn->val;
            }
        } 
    }
    return -1;
}
int main() {
    node* dummy = getNewNode(0, "0");
    ll commands, n1, n2, val;
    string str;
    char type;
    cin>>commands;
    while(commands--) {
        cin>>type;
        if(type == 'I') {
            cin>>str>>val;
            dummy = addData(dummy, str, val);
        } else if(type == 'P') {
            printAll(dummy);
        } else if(type == 'S') {
            cin>>str;
            val = getval(dummy, str);
            if(val > 0) cout<<val<<endl;
        } else {
            cin>>n1>>n2;
            dummy = merge(dummy, n1, n2);
        }
    }
    return 0;
}
