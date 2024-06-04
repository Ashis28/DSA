// all ways take example  2  1  4  3
// next smaller element : 1 -1  3 -1
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> NextSmallerElement(int arr[],int n)
{
    vector<int>ans(n);
    stack<int>st;
    st.push(-1);
    for(int i=arr[n-1];i>=0;i--)
    {
        while(st.top()>arr[i] )
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(arr[i]);

    }
    return ans;
}
int main()
{
    int arr[] = {2,1,4,3};
        vector<int>ans = NextSmallerElement(arr,4);
        for(const auto i:ans)
        {
            cout<<i<<" ";
        }
}