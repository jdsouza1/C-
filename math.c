#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
int i, *p = &i;
printf("i=%d\n" , i);
printf("*p = %d\n", *p);
i = 1;
printf("i=%d\n" , i);
printf("*p = %d\n", *p);
*p =4;
printf("i=%d\n", i);
printf("*p = %d\n", *p);  
   // while(getch() != 27) // Loop until ESC is pressed (27 = ESC)
    //printf("\a");  // Beep.
   
    //int a= 40;
 //printf("%.3d", a);
   getch();
   return 0;
}
