#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){

//variable declarations
FILE *fp;
char x[1024];
char *c;
int i;

fp=fopen(argv[1],"r");
if(fp==NULL){
printf("error in opening file");
exit(1);
}

while(1){
c=fgets(x, 1024, fp);
if(c==NULL) break;
for(i=0; x[i]!='\n';i++){
 if(x[i]>=97 && x[i]<=122) x[i]=x[i]-32;
 else if(x[i]>=65 && x[i]<=90) x[i]=x[i]+32;
}
printf("%s",x);
close(fp);
}
return 0;
}
