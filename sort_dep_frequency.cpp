#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<char,int>& p1,pair<char,int>& p2) {
        return p1.first > p2.first;
}
    
void frequencySort(string s) {
    set<char> se(begin(s),end(s)) ;
    vector<pair<char,int>> m;
    for (auto it = se.begin();it != se.end();it++) {
        m.push_back(make_pair(char(*it),int(count(s.begin(),s.end(),char(*it)))));
        //cout << char(*it) << " " ;
    }
    sort(m.begin(),m.end(),cmp);
    for(int i = 0; i < m.size();i++) {
        cout << m[i].first << " " << m[i].second <<endl;
    }
    string res = "";
    for(int i = 0; i < int(m.size());i++) {
        for(int j = 0; j < m[i].second;j++) {
            res += m[i].first;
        }
    }
    cout << res <<endl;
}

int main() {
    frequencySort("cccaaa");
}
