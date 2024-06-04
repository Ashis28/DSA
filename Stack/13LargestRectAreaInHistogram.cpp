#include<iostream>
using namespace std;

void print(int *arr)
{
    cout<<&arr;
}
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    print(arr[0]);
}