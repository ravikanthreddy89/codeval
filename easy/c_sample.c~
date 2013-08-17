#include<stdio.h>
#include<string.h>


int main(int argc, char **argv){
FILE *fp;
char x[1024];
char *c;
int i,len;
int beginning=1;


fp=fopen(argv[1], "r");

if(fp==NULL){
 printf("error in opening file \n");
 return 1;
}

while(1){
c=fgets(x,1024, fp);
if(c==NULL) break;
printf("%s",x);
}
close(fp);
}
