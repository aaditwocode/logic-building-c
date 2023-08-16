#include<stdio.h>

    int main(){
        int n;
        printf("enter your number");
        scanf("%d" , &n);
        // if (n%1==0 && n%n==0)
        // {
        //    printf("the number is prime");
        // }else
        // {
        //      printf("the number is not prime");
        // }
        for (int i = 2; i < sqrt(n); i++)
        {
           if(n%i==0)
           break;
           if(i==sqrt(n)+1)
          { printf("the number is prime");}

           else { printf("the number is not prime"); }

        }
        
        
        
    return 0;
}