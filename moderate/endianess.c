#include<stdio.h>

int main(){

int i;
char *c;
i=1;

c=(char *)&i;
if(c[0]==1) printf("LittleEndian");
else printf("BigEndian");
}
