#include<stdio.h>
int main(){
  int N,i,num,max;
  max=0;
  printf("Enter how many numbers: ");
  scanf("%d",&N);
  printf("Enter 1 number: ");
  scanf("%d",&num);
  num=max;
  for(i=2; i<=N; i++){
      printf("Enter %d Number: ",i);
      scanf("%d",&num);
      if(num>max){
          max=num;
      }
  }
  printf("Maximum Number is %d",max);
  return 0;
}  
