#include<stdio.h>
#include<stdlib.h>
//Joel Dsouza
	int main()
	{
        
        char str[50];
        char fil[50];
        char name[50];
        int numberofchar = -1;
          int numberoflines = 1;
          int numberofspaces = 1;
          int numberofwords = 0;
  printf("Enter a option(-l,-w,-c,-lw,-lc,-lwc) or n for no perfered option : ");
    gets(str);
    //C:\\Users\\Personal\\Desktop\\test.txt
   printf("Enter a the path of the file example(C:\\Users\\Personal\\Desktop\\test.txt) : ");
   gets(fil);
      printf("Enter name of the file: ");
     gets(name);
     //easier way to test replace  fil with path name :)
		FILE *ptr_file =fopen(fil, "r");        
          if (ptr_file == NULL )
       {
       printf("%s" , name);
       printf(": ");
      puts ("No such file or directory" );
   }
  
		char c;
		do
		{
             c = fgetc(ptr_file);
             if(c != ' '){
                 numberofchar++; 
                  }
                  if(c == '\n'){
                 numberofchar--; 
                  }  
                   if(c == '\n'){
                 numberoflines++; 
                  }   
                    if(c == ' '){
                numberofspaces++; 
                
                  } 
                  numberofwords =  numberofspaces + 1;    
             }
        while  (c != EOF);
          if(strcmp(str,"-l") == 0 & ptr_file != NULL )
          {
              printf("%d", numberoflines); 
           }
          if(strcmp(str,"-w") == 0 & ptr_file != NULL )
          {
            printf("%d", numberofwords);
           }
             if(strcmp(str,"-c") == 0 & ptr_file != NULL )
           {
            printf("%d", numberofchar);
           }
              if(strcmp(str,"-lw") == 0 & ptr_file != NULL )
           {
           printf("\n");   
           printf(" %d", numberoflines);
           printf(" ");
           printf("%d", numberofwords);
           }
             if(strcmp(str,"-lc") == 0 & ptr_file != NULL )
           {
           printf("%d", numberoflines);
           printf(" ");
           printf("%d", numberofchar);
           }
             if(strcmp(str,"-lwc") == 0 & ptr_file != NULL )
           {
           printf("%d", numberoflines);
            printf(" ");
           printf("%d", numberofchar);
            printf(" ");
            printf("%d", numberofwords);
           }
            if(strcmp(str,"n") == 0 & ptr_file != NULL )
           {
           printf("\n");                   
           printf("%d", numberoflines);
           printf(" ");
           printf("%d", numberofchar);
           printf(" ");
            printf("%d", numberofwords);
            printf(" ");
            printf("%s" , name);
           }
         getch();
        fclose(ptr_file);
		return  0;
	}
