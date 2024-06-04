//31-05-2024

//no of open base = no of close brace (hence its even)
// if string len is odd then return -1;
// every close brace should have open brace before it.

//invalid string patterns {{{{    or   }}}}} or   }}}}{{{{ (even or odd)

// sol- remove the valid part then invalid must be from above 1

// hence formula that works is (a/2)+1 + (b/2)+1
#include<iostream>
#include<stack>
using namespace std;
int findMinimumCost(string str) {
  	
    //odd condition
    if(str.length()%2 == 1) {
        return -1;
    }
    
    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        
        if(ch == '{') 
            s.push(ch);
		else
        {
            //ch is closed brace
            if(!s.empty() && s.top() == '{') {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    
        //stack contains invalid expression
        int a = 0, b = 0;
        while(!s.empty()) {
            if(s.top() == '{') {
                b++;
            }
            else
            {
                a++;
            }
            s.pop();
        }
        
		int ans = (a+1)/2 + (b+1)/2;
        return ans;

}
int main()
{
    string str =  "{{}}}{";
    int ans  = findMinimumCost(str);
    cout<<"min cost is : "<<ans;
}

