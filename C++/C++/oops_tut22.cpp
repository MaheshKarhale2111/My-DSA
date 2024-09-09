#include <iostream>
#include <string>
using namespace std;
// nesting of member function
class binary
{
    string s;

public:
    void read(void); // declaring function in class but not necessary it should be written in class
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{ // here we are writing function with scope resolution opereator(::) obviously ouside the class
    cout << "Enter binary number"<<endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++) // length () gives total number of chzrcters in that string
    {
        if (s.at(i) != '0' && s.at(i) != '1') // this is checking each position of our string. note that
        {                                     // string countdown starts from 0
            cout << "Incorrect binary format";
            exit(0);

        }
        
    }
}
void binary::ones(void) // to make ones complement
{     chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')// note that here writing in inverted comme in imp
        {
            s.at(i) = '1';// note that here writing in inverted comme in imp
        }
        else
            
            {
                s.at(i) = '0';// note that here writing in inverted comme in imp
            }
    }
}
void binary::display(void)
{ cout<<"Ones complement of binary number is"<<endl;
    for (int i = 0; i < s.length(); i++)
    {  
        cout << s.at(i);
    }
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin(); chk_bin is called in ones() .this is called nesting of functions
    b.ones();
    b.display();

    return 0;
}