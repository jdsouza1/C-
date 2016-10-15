#include <stdio.h>
#define ARRAY_SIZE 20

int main ()
{
    int index, my_array[ARRAY_SIZE];
    char str[ARRAY_SIZE], ph_array[ARRAY_SIZE];
    char a = '7';
    char line[256];
    
     FILE *file = fopen ("C:\\Users\\Personal\\Desktop\\test.txt", "r" );
  //str stores the users string
  while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
    {
        // fputs ( line, stdout ); /* write the line */

   

    
    
    int ph_array_ind = 0;
    for (index = 0; index < ARRAY_SIZE - 1; index++)
    {
        if(isdigit(line[index])) {
                //printf ("my_array[%d] = %c\n", index, str[index]);
                ph_array[ph_array_ind] = line[index];
                ph_array_ind++;                        
        }
      
    }
    
    // (404) 556-7246   -- Format array !
    
    char formatted_phone[12]; 
    
    formatted_phone[0] = '(';
    formatted_phone[1] = ph_array[0];
    formatted_phone[2] = ph_array[1];
    formatted_phone[3] = ph_array[2];
    formatted_phone[4] = ')';
    formatted_phone[5] = ' ';
    formatted_phone[6] = ph_array[3];
    formatted_phone[7] = ph_array[4];
    formatted_phone[8] = ph_array[5]; 
    formatted_phone[9] = '-';
    formatted_phone[10] = ph_array[6];
    formatted_phone[11] = ph_array[7];
    formatted_phone[12] = ph_array[8];
    formatted_phone[13] = ph_array[9];
    
    for(index = 0; index < 14; index++) {
          printf ("%c", formatted_phone[index]);  
    }
    printf ("\n");
}
    getch();
    return 0;
}
