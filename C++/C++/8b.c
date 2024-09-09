#include<stdio.h>
#include<string.h>


struct data
{ 
  
  char name[50]; 
  int age,physics,chemistry,maths,total;
  char reference[10];
  char shortlisted[3]; 
}rec[1000];

int main(void)
{
  
  int N,S;
  scanf("%d%d", &N,&S);

  for(int i = 0;i < N; i++)
  {
   
    scanf("%s",rec[i].name); 
    scanf("%d",&rec[i].age);
    scanf("%d",&rec[i].chemistry);
    scanf("%d",&rec[i].physics);
    scanf("%d",&rec[i].maths);
    scanf("%s",rec[i].reference);   
   
  }

 
 for(int i = 0;i < N; i++)
 {
   rec[i].total=rec[i].physics+rec[i].maths+rec[i].chemistry;
 }


  for (int i = 0; i < N; i++)
  {     
      for (int j = i+1; j < N; j++)
      {     
        if(rec[i].total < rec[j].total)
        { 
          struct data p1;   
          p1 = rec[i];    
          rec[i] = rec[j];    
          rec[j] = p1;
        }     
      }     
  }   

   
  
   int count=0;
   for( int i=0;i<N;i++)
   {
     int output1,output2;
     output1=strcmp(rec[i].reference,"good");
     output2=strcmp(rec[i].reference,"excellent");
     if(output2==0 || output1==0) count++;
   }


   if(count<S)
   {
     int num=1; 
     printf("Only %d candidates found\n",count);
     printf("Rank\tName\tAge\tTotal Marks\tShortlisted\n");
     for( int i=0;i<N;i++)
     {
       int output1,output2;
       output1=strcmp(rec[i].reference,"good");
       output2=strcmp(rec[i].reference,"excellent");
       if(output2==0 || output1==0)
       {
        printf("%d\t%s\t%d\t%d\tYes\n",num,rec[i].name,rec  [i].age,rec[i].total);
        num++;
       }
     }
    }  

   else
   {
     int num1=1,count_exe=0;
     printf("List of %d selected candidates\n",S);
     printf("Rank\tName\tAge\tTotal Marks\tShortlisted\n");
    
   
     for( int i=0;i<N;i++)
     {
      int output1;
      output1=strcmp(rec[i].reference,"excellent");
      if(output1==0){
      count_exe++;
     }
    }
    
     
     if(count_exe==S)
     {
       for( int i=0;i<N;i++)
       {
        int output1;
        output1=strcmp(rec[i].reference,"excellent");
        if(output1==0)
        {
         printf("%d\t%s\t%d\t%d\tYes\n",num1,rec[i].name,
         rec[i].age,rec[i].total);
         num1++;
        }
       }
      }
    
    
     else
     {
       for( int i=0;i<N;i++)
       {
         int output1,output2;
         output1=strcmp(rec[i].reference,"good");
         output2=strcmp(rec[i].reference,"excellent");
         if(output1==0 || output2==0)
         {
           printf("%d\t%s\t%d\t%d\tYes\n",num1,rec[i].name,rec[i].age,rec[i].total);
           num1++;
         }
         if(num1-1==S)
         {
           break;
         }
        }
      }
  }