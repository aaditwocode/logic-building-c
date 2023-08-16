#include<stdio.h>

    int main(){
      for(int line=1;line<=4;line++)
      {
         for(int character=1;character<=line;character++)
         {
             printf("* ");
         }
         printf("\n");
      } 
    return 0;
}



// Rule 1. lines count -> loop
/*
   Rule 2. *,a,1 -> characters 
   characters relate line -> loop
   (Rule 2 is same for spaces as well)
*/ 

/*
1.
****
***
**
*

2.
1
23
456
78910

3.
1
22
333
4444

4.
  *
 * *
* * *
 

*/