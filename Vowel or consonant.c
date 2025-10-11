#include<stdio.h>
int main(){
  char ch;
  printf("Enter any character: ");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
      if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("Vowel\n");
            
        }
        else{
            printf("Consonant\n");
            
        }
    
  }    
  else{
      printf("Invaild Input");
  }
return 0;
}


  
