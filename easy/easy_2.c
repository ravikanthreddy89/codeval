#include<stdio.h>

int palindrome(int a);
int prime(int b);

int main(){
int N=1000;
int i;
for(i=N;i>0;i--){
if(palindrome(i)==1){
    if(prime(i)==1){
	printf("%d", i);
	break;		
	}	
    printf("palindrome \n");
   }
}

return 0;
}

int prime(int b){
int j;
for(j=2;j<b;j++){
 if(b%j==0) return 0;
 else continue;
return 1;
}

}

int palindrome(int b){
int rev=0;
int temp=b;

while(temp!=0){
 rev=10*rev+(temp%10);
 temp=temp/10;
}

if(rev==b) return 1;
else return 0;
}

