#include<bits/stdc++.h>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    public:
    char level;
    char *name;
    static int timeToComplete;                     //static keyword

    Hero(){                                        //Default Constructor
        cout<<"constructor called"<<endl; 
        name = new char[100];               
    }

    Hero(int health, int level){                   //Parameterized constructor
    /* left side health will point to line no 7 health using this keyword*/    this -> health = health;          //Right side health denote input health
    this->level = level;
    }

    Hero(Hero& temp){                              //Copy constructor     
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);                                    //This will do deep copy of name
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth(){                             // getter return value of private dataypes
        return health;
    }

    void setHealth(int health){                       // setter used for setting the value of both private and public
        this->health = health;
    }

    int getLevel(){
        return level;
    }

    void setLevel(char level){
        this->level = level;
    }

    char* getName(){
        return name;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    void print(){
        cout<<endl<<endl;
        cout<<"["<<"Name: "<<name<<", ";
        cout<<"Health: "<<health<<", ";
        cout<<"Level: "<<level<<"]";
        cout<<endl<<endl;
    }

    static int random(){                      //static functions only uses statice data type
        cout<<timeToComplete<<endl;
    }

    ~Hero(){                                       //Destructor
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete = 5;             //Initializing static keyword

int main(){
    /*//creating object
    Hero Ramesh;
    cin>>Ramesh.level;
    int h;
    cin>>h;
    Ramesh.setHealth(h);
    //cout<<" size: "<<sizeof(h1)<<endl;
    cout<<"Level of Ramesh is "<<Ramesh.level<<endl;
    cout<<"Health of Ramesh is "<<Ramesh.getHealth()<<endl;
    

    //static allocation
    Hero a;
    //cout<<" size: "<<sizeof(a)<<endl;
    //dynamic allocation
    Hero *b = new Hero;
    //cout<<" size: "<<sizeof(b)<<endl;
    cout<<"Level "<<(*b).level<<endl;
    cout<<"Health "<<(*b).getHealth()<<endl;
    //or we can access it by -> operator
    cout<<"Level "<<b->level<<endl;
    cout<<"Health "<<b->getHealth()<<endl;

    //constructor
    Hero ramesh;          //object created
    
    Hero R(22, 'C');
    R.print();
    //copy constructor
    Hero S(R);
    S.print();


    //shallow copy
    Hero hero1;
    char name[10] = "Sudhanshu";
    hero1.setName(name);
    hero1.setHealth(100);
    hero1.setLevel('Z');
    hero1.print();

    //Call Default constructor                 It uses shallow copy
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'B';
    hero1.print();
    hero2.print();
    
    //call parmeterized constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'B';
    hero1.print();
    hero2.print();

    //statically               for static objects destructor automatically called
    Hero a;

    //dynamically              for dynamic objects we have to call destructor manually
    Hero *b = new Hero;
    delete b;

    cout<<Hero::timeToComplete<<endl;             //we don't need to declare object for using static keyword
    */

    Hero::random();
    return 0;
}