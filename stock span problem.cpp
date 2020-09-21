#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int s[n],a[n];
	    s[0] = 1;
	    stack<int> st;
	    st.push(0);
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        if(i!=0){
	            while(!st.empty() && a[st.top()] <= a[i]){
	                st.pop();
	            }
	            s[i] = (st.empty())?(i+1):(i-st.top());
	            st.push(i);
	        }
	    }
        for(int i=0;i<n;i++){
            cout << s[i] << " ";
        }  
	    cout << endl;
	}
	return 0;
}
