#include<stdio.h>
#include<stdlib.h>
#include <string.h>
//Joel Dsouza
int main() {
        
        char str[100];
        char a = '7';
        int i;
        int length;
        //str stores the users string
        printf("Enter a phone numbers: ");
        gets(str);
        //stores the length of str
        length = strlen(str);
        
        
    for( i=0; i<length; i++ ){
  printf("Iteration %d", &str[i]);                     
   }
            //isdigit takes in char and checks if it a number
              if(isdigit(a)) {
                printf("Success");             
                     
               }
    
         
        getch();
        return  0;		
}
     
//int check_whitespace (char *str) {
  //char key[] = { '\n', 0 };
  //return strpbrk (str, key);
//}   
 
