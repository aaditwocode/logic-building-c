#include<stdio.h>

    int main(){
          for(int line=1;line<=4;line++)
      {
         for(int character=4;character>=line;character--)
         {
             printf("*");
         }
         printf("\n");
      } 
    return 0;
}
    