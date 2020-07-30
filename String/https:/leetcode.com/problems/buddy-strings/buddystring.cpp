int cnt=0;
        int maxi=0;
        int a=-1;
        int b=-1;
        for(int i=0;i<A.length();i++){
            if(A[i]!=B[i]){
                cnt++;
                if(a==-1){
                    a=i;
                }else if(b==-1){
                    b=i;
                }
            }
            vt[A[i]-'a']++;
            maxi=max(maxi,vt[A[i]-'a']);
        }
        
        if(cnt==2){
            if(A[a]==B[b]&&A[b]==B[a]){
                return true;
            }else{
                false;
            }
        }
        if(cnt==0){
            if(maxi>=2){
                return true;
            }
        }
        return false;
