
#include<bits/stdc++.h>
using namespace std;
void check(string s,int n){
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    priority_queue<pair<int,char>,vector<pair<int,char>>> q;
    unordered_map<char, int>:: iterator itr; 
    for (itr = mp.begin(); itr != mp.end(); itr++){
        q.push(make_pair(itr->second,itr->first));//first one is number and second one is character
    }
    string result = "";
    pair<int, char> y (-1,'+');
    while(!q.empty()){
        pair<int,char> x= q.top();
        q.pop();
        result+=x.second;
        if(y.first>0){
            q.push(make_pair(y.first,y.second));
        }
        x.first-=1;
        y.first=x.first;
        y.second=x.second;
    }
    if (n != result.length()) 
        cout << 0; 
    else
    cout<<1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        check(s,n);
        cout<<endl;
    }
    return 0;
}
