//include standard input and output io
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
FILE *fpt;
 char name[20],c;
 int nw=0;
 printf("Enter the name of file to be checked:-  ");
 gets(name);
 fpt=fopen(name,"r");
 if (fpt==NULL)
 {
  printf("ERROR - can/'t open file %s",name);
  exit(0);
 }
 else
 {
 while ((c=getc(fpt))!=EOF)
 {
  switch(1)
  {
   case 1:
	  if (c==' ')
	  {
   point: // do
 //	    nw=nw+1-1;
	   while((c=getc(fpt))==' ');

	   if (c!=' ')
		nw=nw+1;
	   if(c=='')nw--;
	  }


 //  case 3:
	  if(c==''){
	    goto point;}

  }
 }
 }
 printf("The no. of words in %s is %d.  ",name,nw);
 
}
