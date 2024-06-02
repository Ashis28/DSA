// wrong code practise again
#include<iostream>
#include<stack>
using namespace std;

bool findRedundant(string str)
{
    stack<int>st;
    for(int i=0 ;i<str.length();i++)
    {
        char ch = str[i];
        if((ch=='(' || ch=='['|| ch=='{') || (ch=='+' || ch=='-' || ch=='*' || ch=='/'))
        {
            st.push(ch);
        }

        else{ 
        
        if((ch=='}' || ch==')' || ch==']'))
        {
        //     if(st.top()=='+' || st.top()=='*'||st.top()=='/'||st.top()=='-')
        //     {
        //         st.pop();
        //         st.pop();
        //     }
        //     else
        //     return false;
        bool isredundant = true;

            while(st.top()!=')')
            {
                 if(st.top()=='+' || st.top()=='*'||st.top()=='/'||st.top()=='-')
                    {
                        isredundant = false;
                    }
            }
           

        }
        }
    }
    if(st.empty())
    return true;
    else 
    return false;
}
int main()
{
    string str = "((a+b))";
    bool ans = findRedundant(str);
    cout<<ans;
    return 0;
}