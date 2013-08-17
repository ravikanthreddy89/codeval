#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){

//variable declarations
FILE *fp;
char x[1024];
char *c;
int i,j;

fp=fopen(argv[1], "r");

while(1){
c=fgets(x,1024,fp);
if(c==NULL) break;

for(i=0; x[i]!='|'; i++) ;
i=i+2;
j=0;
while(x[i]!='\n'){
if(x[i]==32){
//printf("%c : %d || ",x[j-1], j-1);
printf("%c",x[j-1]);
j=0;
}
else j=(j*10)+(x[i]-48);
i=i+1;
}
printf("%c",x[j-1]);
printf("\n");
}
close(fp);
return 0;
}
