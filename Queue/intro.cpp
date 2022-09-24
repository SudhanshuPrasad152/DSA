#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(34);
    q.push(15);
    q.push(17);

    cout<<"Size of queue is "<<q.size()<<endl;

    q.pop();

    cout<<"Size of queue is "<<q.size()<<endl;

    return 0;
}