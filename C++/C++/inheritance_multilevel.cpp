#include<iostream>
// multiple inheritance means A-->B-->c
using namespace std;

class student{
    protected:
    int rollnum;
    public:
    void set_roll_num(int);
    void get_roll_num(void);

};
void student :: set_roll_num(int r){
    rollnum=r;
}

void student:: get_roll_num(void){
    cout<<"the roll number is"<< rollnum<< endl;

}

class exam: public student{
protected:
float maths;
float phy;

public:
void setmarks(float, float);
void getmarks(void);
};

void exam :: setmarks(float m1, float m2){
    maths=m1;
    phy=m2;
}
void exam :: getmarks(void){
    cout<<"The marks obtained in maths are "<<maths<<endl;
    cout<<"The marks obtained in physics are "<<phy<<endl;

}

class result :public exam{
    float percentage;
    public :
    void display(){
        get_roll_num();
        getmarks();
        cout<<"your percentage is "<<(maths+phy)/2<<endl;
    }
};

int main(){

    result harry;
    harry.set_roll_num(420);
    harry.setmarks(90,95.0);
    harry.display();
    
    return 0;
}