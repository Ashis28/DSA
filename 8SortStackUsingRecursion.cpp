#30-05-2024
#include<iostream>
#include<stack>
using namespace std;

void sorted_insert(stack<int>&st,int coming_element)
{
    if(st.empty()||(st.top( )<coming_element && !st.empty()))
    {
        st.push(coming_element);
        return;
    }

    int top = st.top();
    st.pop();
    sorted_insert(st,coming_element);
    st.push(top);
}

void empty_stack(stack<int>&st)
{
    if(st.empty())
    {
        return;
    }

    int top = st.top();
    st.pop();
    empty_stack(st);
    sorted_insert(st,top);
}
int main()
{
    stack<int>s;
    s.push(11);
    s.push(-2);
    s.push(8);
    s.push(33);
    s.push(-1);
   
    empty_stack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}