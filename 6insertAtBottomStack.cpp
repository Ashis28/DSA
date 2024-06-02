//28-05-2024
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }

    int val = st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(val);
}
int main()
{
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(6);
    st.push(8);
    insertAtBottom(st,11);

   while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}