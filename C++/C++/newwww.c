#include <stdio.h>
#include <string.h>

struct student  // constructing a structure student
{    
    char name[30];
    int age;
    int markphy;
    int markchem;
    int markmath;
    int total;
    char reference[10];
    int count;
} student[1000], dummy;// array of structers and dummy student for temporty student to store student structre

int main(void)
{
    int total_students, to_be_shortlisted;
    char temp[10];
    int count1 = 0, count2=0;
    int check1, check2;

    scanf("%d", &total_students);
    scanf("%d", &to_be_shortlisted);

    for (int i = 0; i < total_students; i++)
    {
        scanf("%s", student[i].name);
        scanf("%d", &student[i].age);
        scanf("%d", &student[i].markphy);
        scanf("%d", &student[i].markchem);
        scanf("%d", &student[i].markmath);
        scanf("%s", student[i].reference);
        student[i].total = student[i].markphy + student[i].markchem + student[i].markmath;

        check1 = strcmp(student[i].reference, "excellent");
        check2 = strcmp(student[i].reference, "good");

        if (check1 == 0)
        {
            count1++;
        }
        if (check2==0)
        {
            count2++;
        }
       
    }
    
    for (int i = 0; i < total_students - 1; i++)
    {
        for (int j = i; j < total_students; j++)
        {

            if (strcmp(student[i].reference, student[j].reference) > 0)
            {

                dummy = student[i];
                student[i] = student[j];
                student[j] = dummy;
            }
        }
    }
    
if (count1+ count2 < to_be_shortlisted)
{for (int i = 0; i < count1+count2; i++)

    {
        for (int j = 0; j < count1 + count2; j++)
            
            if (student[i].total > student[j].total)
            {
                dummy = student[i];
                student[i] = student[j];
                student[j] = dummy;
            }
        
    }
    printf("Only %d candidates found\n",count1+ count2 );
    printf("Rank\tName\tAge\tTotal Marks\tShortlisted\n");
    for (int i = 0; i < count1+ count2; i++)
    {

        printf("%d\t%s\t%d\t%d\tYes\n", i + 1, student[i].name, student[i].age, student[i].total);
    }
}
if (count1+ count2 > to_be_shortlisted && count1 < to_be_shortlisted)
{for (int i = 0; i < count1+count2; i++)

    {
        for (int j = 0; j < count1 + count2; j++)
            
            if (student[i].total > student[j].total)
            {
                dummy = student[i];
                student[i] = student[j];
                student[j] = dummy;
            }
        
    }
    printf("List of %d selected candidates\n", to_be_shortlisted);
    printf("Rank\tName\tAge\tTotal Marks\tShortlisted\n");
    for (int i = 0; i < to_be_shortlisted; i++)
    {

        printf("%d\t%s\t%d\t%d\tYes\n", i + 1, student[i].name, student[i].age, student[i].total);
    }
}
if (count1 == to_be_shortlisted || count1 > to_be_shortlisted)
{
for (int i = 0; i < count1; i++)

    {
        for (int j = 0; j < count1; j++)
            if (student[i].total > student[j].total)
            {
                dummy = student[i];
                student[i] = student[j];
                student[j] = dummy;
            }
        
    }

    printf("List of %d selected candidates\n", to_be_shortlisted);
    printf("Rank\tName\tAge\tTotal Marks\tShortlisted\n");
    for (int i = 0; i < to_be_shortlisted; i++)
    {

        printf("%d\t%s\t%d\t%d\tYes\n", i + 1, student[i].name, student[i].age, student[i].total);
    }
}

return 0;
}
