// in cac so chan trong day so tu 1 den 20
#include <stdio.h>
int main (){
   int i = 1 ;
   printf("gia tri cac so chan la:\n");
   do {
   if (i%2 ==0){
    printf("%d \n", i);
   }
    i++;
   }while (i<=20);
    
return 0;
}