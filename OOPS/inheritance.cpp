//when a subclass inherits the properties or behaviour of a parent class then it is called inheritance.
#include<bits/stdc++.h>
using namespace std;

class Human{
    
    public:
    int age;
    int height;
    int weight;

    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{                       //This class is publicly inheriting all the public data and member fuction from class human
    
    public:
    string color;

    void sleep(){
        cout<<"Man is sleeping"<<endl;
    }
};

int main(){

    Male m1;
    cout<<m1.age<<endl;
    cout<<m1.color<<endl;
    m1.sleep();
    return 0;
}