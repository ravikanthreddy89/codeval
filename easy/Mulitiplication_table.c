#include<stdio.h>

int main(){
int i;
int j;

for(i=1; i <=12; i++){
   for(j=1; j<=12; j++) {
	if(j==1)printf("%d", i*j);
	else printf("%4d", i*j);
      }
   printf("\n"); 
 }
 

}
