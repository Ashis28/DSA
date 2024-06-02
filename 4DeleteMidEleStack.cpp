//27-05-2024
#include<iostream>
#include<stack>
using namespace std;

void delRecursive(stack<int>&s,int size,int i)
{
        if(i==(size/2)+1)
        {
            s.pop();
            return;
        }
        
        int val= s.top();
        s.pop();
        delRecursive(s,size,i+1);
        s.push(val);
}
void delMidEle(stack<int>&s,int size)
{
    delRecursive(s,size,1);
}
int main()
{
    stack<int> even;
    for(int i=1;i<5;i++)
    {
        even.push(i);
    }

    stack<int>odd;
    for(int i=1;i<6;i++)
    {
        odd.push(i);
    }
    delMidEle(even,4);
    delMidEle(odd,5);

    while(!even.empty())
    {
        cout<<even.top()<<" ";
        even.pop();
    }
    while(!odd.empty())
    {
        cout<<odd.top()<<" ";
        odd.pop();
    }
}