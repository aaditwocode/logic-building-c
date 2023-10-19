#include<stdio.h>

    int main(){
        int n , i;
        printf("how many lines you need");
        scanf("%d" , &n);
      for(int line=1;line<=n;line++)
      {
        i=1;
         for(int character=1;character<=2*(n)-1;character++)
         {
            if(character>=6-line && character<=line+4)
            {

                printf("%d " , i);
                
                if (character<line)
                {
                    i++;
                }else
                {
                    i--;
                }
                
                
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