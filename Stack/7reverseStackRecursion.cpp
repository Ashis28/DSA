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

void reverse(stack<int>&st)
{
    if(st.empty())
    return;

    int element = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,element);
}
int main()
{
    stack<int>st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    cout<<st.top()<<endl;
    reverse(st);
    cout<<st.top()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}