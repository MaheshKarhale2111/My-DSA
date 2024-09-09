#include <stdio.h>


struct  empl{
    char ref[10];
    int id;
}emp[10];

int main()
{
//  struct emp mah;

    scanf("%s", &emp[0].ref);
    // mah.id= 20;
    // if(emp.ref== "mahesh"){
    //     printf("ys");
    // }
    printf("%s", emp->ref);




return 0;
}
