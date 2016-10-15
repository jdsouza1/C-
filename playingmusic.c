 
 #include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
 
 //http://cboard.cprogramming.com/c-programming/136738-music-playing-program.html
//printf( "When you come to a fork in the road,\take it --- Yogi Berra");


  
   int freq, dur, freq1, dur1; // Declare the variables
  printf("Enter the frequency (HZ) and duration (ms): ");
  scanf("%i %i", &freq, &dur); 
  Beep(freq, dur); 
  
   printf("Enter the frequency (HZ) and duration (ms): ");
  scanf("%i %i", &freq1, &dur1); 
  Beep(freq1, dur1); 

   getch();
  }
