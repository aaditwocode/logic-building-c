#include<stdio.h>

    int main(){
        int n;
        printf("enter a number");
        scanf("%d" ,&n);
        for (int i = 0; i < n; i++)
        {
          printf("%d" , (i*i)+1);
        }
        
    return 0;
}