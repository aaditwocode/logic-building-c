#include<stdio.h>

    int main(){
       
        for(int line=1;line<=3;line++)
      {
         for(int character=1;character<=line;character++)
         {
           printf("*");
            
         }
         printf("\t");
         printf("\n");
      }
    return 0;
}