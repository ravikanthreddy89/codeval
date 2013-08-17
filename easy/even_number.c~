#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
int even=0;
char x[1024];
char *c;
FILE *fp;
int i;

fp=fopen(argv[1], "r");

while(1){
c=fgets(x,1024, fp);
if(c==NULL) break;

for(i=0;x[i]!='\n';i++);
if((x[i-1]-48)%2==0) printf("1\n");
else printf("0\n");
}
close(fp);
return 0;
}
