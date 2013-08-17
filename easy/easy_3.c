#include<stdio.h>

int palindrome(int a);
int prime(int b);

int main(){
int N=1000;
float sum=0;
int i;
for(i=N;i>0;i--){
  if(prime(i)==1){
//     printf("%d\n",i);
	sum=sum+i;	
	}	
}
printf("%f", sum);
return 0;
}

int prime(int b){
int j;
int count=0;
for(j=2;j<9;j++){
 if(b%j==0) {
  count++;	
	}
 else {
  continue;
  }
}
if(count>=2) return 0;
else return 1;
}


