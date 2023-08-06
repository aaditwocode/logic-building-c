#include<stdio.h>

    int main(){
        int N;
        printf("enter  a nos");
        scanf("%d" , &N);
        for (int i = 0 ; i < N ;  i++)
        {
            printf("%d\n" , (2*i)-1);
        }
        
        
    return 0;
}