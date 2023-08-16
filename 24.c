#include<stdio.h>

    int main(){
        int a,b;
        for (a= 0; a<=5; a++)
        {
           for (b= 0; b<=2*a-1; b++)
           {
            printf("%d" , b) ;
            printf("/n");
           }
           
        }
        
    return 0;
}