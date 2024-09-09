#include<stdio.h>
#include<math.h>

int main(){
  long  ThetaInRadian, ThetaInDegree,SinCosSum,SecTanSqDiff;
  printf("Enter the value in radian\n");
  scanf("%Lf", &ThetaInRadian);
  
  ThetaInDegree = (ThetaInRadian*180)/3.14;
  printf("Value in degree is %Lf",ThetaInDegree); 

return 0;
}