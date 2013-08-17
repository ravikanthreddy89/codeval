#include<stdio.h>

int main(int argc, char *argv[]){
FILE *fp;
char x;
char next='d';
int beginning=1;
char prev_char;


fp=fopen(argv[1],"r");

while((x=fgetc(fp))!=EOF) {

if(isdigit(x)) {
  if(beginning==1) {
   printf("%c",x);
   beginning=0;
   prev_char=x;
   }

   else {
    if(x!=prev_char){
       printf(",");
       printf("%c",x);
       prev_char=x;
     }
    }
  }
else if(x==',') continue;
 
 else  {
    beginning=1;
    printf("\n");
   }


printf("%c",x);
}// end of while loop
fclose(fp);

}
