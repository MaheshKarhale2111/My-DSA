#include <iostream>
using namespace std;

class student
{
protected:
    int roll_num;

public:
    void set_number(int a)
    {
        roll_num = a;
    }
    void print_num(void)
    {
        cout << "Your roll number is " << roll_num << endl;
    }
};

class test : virtual public student
{

protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    } 

    void print_marks()
    {
        cout << "your result is here :" << endl
             << "maths :" << maths << endl
             << "Physics :" << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;

        print_num();
        print_marks();
        print_score();
        cout << "Your total score is :" << total << endl;
    }
};
int main()
{
result harry;
harry.set_marks(78,80);
harry.set_number(6798);
harry.set_score(9);
harry.display();
    return 0;
}
