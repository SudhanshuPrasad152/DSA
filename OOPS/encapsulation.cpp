#include<bits/stdc++.h>
using namespace std;

class student {
    
    private:
    char Name[100];
    int age;
    int height;                               //Wrapping up of data and member functions in single entity to acheive data hiding is called encapsulation.
    
    public:
    int getAge(){
        return age;
    }
};

int main(){
    student s1;
    return 0;
}