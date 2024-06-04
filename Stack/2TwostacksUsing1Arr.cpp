//27-05-2024
#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top1;
    int top2;

    Stack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    void push1(int ele)
    {
        // if(top2 - top1 > 1)
        if(top1<size-1 && top1<top2-1)
        {
            top1++;
            arr[top1] = ele;
        }
        else
        {
            cout<<"Stack OverFlow\n";
        }
    }
    void pop1()
    {
        if(top1>-1)
        {
            top1--;
        }
        else
        cout<<"Stack1 is empty";
    }
    void push2(int ele)
    {
        if(top2>0 && top2>top1+1)
        {
            top2--;
            arr[top2]=ele;
        }
        else
        cout<<"Stack overflow\n";
    }
    void pop2()
    {
        if(top2>=size)
        cout<<"Stack2 is empty";
        else
        top2++;
    }
    void print()
    {
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Stack st(5);
    st.push1(1);
    st.push2(5);
    st.push2(4);
    st.push1(2);
    st.push1(3);
    st.push1(14);

    st.print();

    
    
}