//28-05-2024
#include<iostream>
#include<stack>
using namespace std;

bool checkvalid(string str)
{
    stack<char>st;
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];

            if(st.empty())
            st.push(ch);

        else if((ch==']' && st.top()=='[' )||( ch=='}'&&st.top()=='{') ||(ch==')' || st.top()=='('))
            {
                st.pop();
            }
        else
        st.push(ch);
    }
if(st.empty())
return true;
else
return false;

}

int main()
{
    string str = "{()}[]";
    bool ans = checkvalid(str);
    if(ans)
    {
        cout<<"valid parenthesis";
    }
    else
    {
        cout<<"Parenthesis are not valid";
    }
}