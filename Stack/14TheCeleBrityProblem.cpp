bool aknowsb(vector<vector<int> >& M,int a,int b,int n)
    {
        if(M[a][b]==1)
        {
            return true;
        }
        else
            return false;
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        
        while(st.size()>1)
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            
            if(aknowsb(M,a,b,n))
            {
                st.push(b);
            }
            else
            {
                st.push(a);
            }
        }
        int ans = st.top();
        
        int zeroCnt = 0;
        for(int i=0;i<n;i++)
        {
            if(M[ans][i]==0)
            zeroCnt++;
        }
        
        int OneCnt = 0;
        for(int i=0;i<n;i++)
        {
            if(M[i][ans]==1)
            OneCnt++;
        }
        if(zeroCnt==n && OneCnt==n-1)
        return ans;
        else
        return -1;
        
    }