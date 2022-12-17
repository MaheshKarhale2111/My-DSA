#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(struct myarray *a, int tsize, int usize) // this function will take input of type myarray* same like int*
                                                          // we know we use struct for custom data types
{
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr = (int*) malloc(tsize*sizeof(int));// ptr will point to first place of memory allocated

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int)); // ptr will point to first place of memory allocated
}

void show (struct myarray *a)
{
    for (int  i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}
 
void setdata(struct myarray *a)
{ int n;
    for (int  i = 0; i < a->used_size; i++)
    {   printf("Enter element %d",i);
        scanf("%d",&(a->ptr)[i]);
    }
}
 
int main()
{
    struct myarray marks;
    createarray(&marks, 10, 3);
    setdata(&marks); 
    show(&marks);
    return 0;
}
