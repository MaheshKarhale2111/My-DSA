#include <stdio.h>
typedef struct student{
    int id;
     int marks ;
      char favchar;

}std;

int main()
{
     std harry , ravi , mahesh;
     harry.id=1;
     ravi.id=2;
      mahesh.id=3;
      harry.marks= 45;
      ravi.marks= 69;
          

 // use of typedef
 // int* a, b;
// here it will only create a as a pointer and b as a int 
// to solve this we  use typedef
typedef int* intpointer;
// typedef old name new name ///// syntax of typedef
intpointer a, b;
int c;
a=&c;
b=&c;
printf("%d",a);
printf("%d",b);

  
return 0; 