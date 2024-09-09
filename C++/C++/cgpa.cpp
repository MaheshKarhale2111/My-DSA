#include<iostream>

using namespace std;

int main(){
      float cgpa,name;
    cout<<"Enter your current CGPA"<<endl;
    cin>>cgpa;
 
    if(cgpa<=4.0){
        cout<<"PAIN!!"<<endl<<"You made me a, you made me a Believer "<<endl<<"BELIEVER";
        
    }
    else if((cgpa>4.0)&&(cgpa<=6.0)){
        cout<<"Padhai vadhai karo, coding sikho"<<endl<<"lekin nahi... Game khlana hai  ";

    }
    else if((cgpa>6.0)&&(cgpa<=7.0)){
        cout<<"CODM bahot khelate ho.Aur jara social media kam karo"<<endl<<"Aur dosto pe sticker banavoge to CGPA nahi badhega";
        

    }
    else if((cgpa>7.0)&&(cgpa<=9.0)){
        cout<<"Bhai thodi kam padai karo.... Thoda CODM,Rummy Circle jaise game khelo.. achha rahata hai  ";
    }

    else if((cgpa>9.0)&&(cgpa<=10.0)){
        cout<<"Bhai ye mai kar leta hu aap jake Dream 11 pe team banao  ";

    }
    else{
        cout<<"Bahut tej ho rahe ho BC"<<endl<<cgpa<<" tere baap ne rakha tha kya ";
    }
    
  cout<<endl<<"Enter your name to complete our data and get lost"<<endl;
  cin>>name;
  cout<<"A c++ programme by k.Mahesh";

}