#include<stdio.h>
#include<math.h>

int main(){
  long double ThetaInRadian, ThetaInDegree,SinCosSum,SecTanSqDiff;
  printf("Enter the value in radian\n");
  scanf("%Lf", &ThetaInRadian);
  
  ThetaInDegree = (ThetaInRadian*180)/M_PI;
  printf("Value in degree is %Lf",ThetaInDegree); 

return 0;
}