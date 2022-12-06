#include <stdio.h>

int main(){
     int tab, mult, r;
     
     for(tab=1; tab<=10; tab++){
         for(mult=1; mult<=10; mult++){
             r = mult * tab;
             printf("%2d * %2d = %2d\n", tab, mult, r);
         }
         printf("\n");
       }
        return 0;
     }
