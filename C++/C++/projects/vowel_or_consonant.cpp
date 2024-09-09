//this is a prgramme to check wherether th input alphabet entered by user is Vowel or Consnant
//Date created 22-04-2021
//K.Mahesh

#include <iostream>
#include<conio.h> // we included this to use gtech(); function

using namespace std;
void charCheck(char x)  //common mistake here is to write char c
{
    int it_is_lower_case_vowel, it_is_uppar_case_vowel;
    it_is_lower_case_vowel = (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');// if true then value stored will become 1



    it_is_uppar_case_vowel = (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
    // Common mistake here is to not to use ||  and using ',' to seperate itmes
    

    if (!isalpha(x)) // isalpha() is a function to check whether input is alphabet or not
                      // library function
    {
        cout << "Abe saale!!";
    }
    else if (it_is_lower_case_vowel || it_is_uppar_case_vowel)
    {
        cout << x << " is a vowel";
    }
    else
    {
        cout << x << " is a consonant";
    }

    // note that we to return a statement we use vois. There are other methods too
    //also note that it can return only one value at one time 
    // so if we cout something else including above programme then only first one in series will be successfully returned
}

int main() // main function
{
    // int a=0,check;
    // check = a==0;
    // cout<<check;

    char c;

    cout << "Enter a character : ";
    cin >> c;
    charCheck(c); //calling the charcheck function

    getch();// this will hold your output till any key is pressed
    return 0;
}

// IMPORTANT NOTE: If the input is 'lk' then compiler will only take 'l' as a input and ignore 'k'