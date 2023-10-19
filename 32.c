#include<stdio.h>

    int main(){
      for(int line=1;line<=5;line++)
      {
         for(int character=1;character<=9;character++)
         {
            if(character>=6-line && character<=line+4)
            {
                printf("*");
            }
            
             else
             {
                printf("");
             }
             
         }
         printf("\n");
      } 
    return 0;
}