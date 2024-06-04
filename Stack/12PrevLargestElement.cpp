//aka - smallest number on left (gfg done)
#include<stdio.h>
#include<vector>
#include<iostream>
#include<stack>
using namespace std;
vector<int> leftSmaller(int n, int arr[]){
        // code here
         vector<int>ans;
    
    stack<int>st;
    st.push(-1);
    
    for(int i=0;i<n;i++)
    {
        if(st.top()<arr[i])
        {
            ans.push_back(st.top());
            st.push(arr[i]);
        }
        else
        {
            while(st.top()>=arr[i])
            {
                st.pop();
            }
            ans.push_back(st.top());
            st.push(arr[i]);
        }
    }
    return ans;
    }

    int main()
    {
        int arr[] = {2,1,4,3};
        vector<int>ans = leftSmaller(4,arr);
        for(const auto i:ans)
        {
            cout<<i<<" ";
        }
    }