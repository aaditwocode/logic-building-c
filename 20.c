int i=2,x=36;
while (x>1)
{
   while(x%i==0)
   {
    x/=i;   //it means x=x/i
    printf("%d" , i);
   }
   i++;
}
