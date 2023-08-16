#include<stdio.h>

    int main(){
       
        for(int line=1;line<=3;line++)
        {
         for(int spaces=3;spaces>=line;spaces--)
         {
            printf("  ");
         }

         
         for(int character=1;character<=line;character++)
         {
            printf("*   ");
         }
         
         printf("\n");
      }
    return 0;
}