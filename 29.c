
#include<stdio.h>

    int main(){
        int count =1;
        for(int line=1;line<=4;line++)
      {
         for(int character=1;character<=line;character++)
         {
            printf("%d" , count);
            
         }
         count++;
         printf("\n");
      }
    return 0;
}