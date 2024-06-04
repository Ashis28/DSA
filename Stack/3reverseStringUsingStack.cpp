//27-05-2024
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> st;
    string str = "MalyalaM1";
    for(int i=0;i<str.length();i++)
    {
        st.push(str[i]);
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    
}