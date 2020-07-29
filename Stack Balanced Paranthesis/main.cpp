/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h> 
using namespace std; 
  
void showstack(stack <char> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
  
int main () 
{ 
    stack <char> s; 
    string expression;
    unsigned int i;
    cin>>expression;
    
    for(i=0; i<expression.length(); i++)
    {
        if(expression[i]=='{'|| expression[i]=='('|| expression[i]=='['){
            s.push(expression[i]);
        }
        else {
            if(s.empty()){
            cout<<"Stack underflow";
            return false;
            }
            else if(expression[i]*s.top()==1640 || expression[i]*s.top()==8463 || expression[i]*s.top()==15375)
            s.pop();
        }
    }
    if(s.empty())
    cout<<"Balanced Paranthesis";
    else 
    cout<<"Unbalanced Paranthesis";
    
    // showstack(s); 
  
    return 0; 
} 