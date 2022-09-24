#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    //pushing elements in the stack
    s.push(2);
    s.push(3);
    //popping elements from the stack
    s.pop();

    //seeing top element of stack
    cout<<"Top element of stack is "<<s.top()<<endl;

    //checking for stack is empty or not
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is "<<s.size()<<endl;
    
    return 0;
}