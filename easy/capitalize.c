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
if(x[0]>=97 && x[0]<=122){
  x[0]=x[0]-32;
  }
for(i=1;i<1024; i++){
 if(x[i]==32 && x[i+1]>=97 && x[i+1]<=122){
  x[i+1]=x[i+1]-32;
  }
}

printf("%s",x);
}
close(fp);
}
