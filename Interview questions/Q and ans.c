1. Find the largest number among the three numbers.
#include <stdio.h>
int main(){
    int num1=10;
    int num2=20;
    int num3=30;
    if (num1 > num2 && num1 > num3) {
        printf("num1 is largest\n");
    }
    else if (num2 > num1 && num2 > num3) {
        printf("num2 is largest\n");
    }
    else {
        printf("num3 is largest\n");
    }

    return 0;
}



2. Write a Program to check whether a number is prime or not.
#include <stdio.h>
int main(){
   int number;
   printf("enter number");
   scanf("%d",&number);
   int cnt=0;
   for(int i=2;i<number;i++){
       if(number%i==0){
           cnt++;
       }
   }
   if(cnt>0){
       printf("it is not a prime number");
   }
   else{
       printf("it is a prime number");
   }
}

3. Write a C program to calculate Compound Interest.



4. Write a Program in C to Swap the values of two variables without using any extra variable.
#include <stdio.h>
int main(){
    int a;
    printf("inter number one");
    scanf("%d",&a);
    int b;
    printf("inter number second");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n",a);
    printf("%d",b);
    
}


5. Write a Program to Replace all 0’s with 1’s in a Number.

