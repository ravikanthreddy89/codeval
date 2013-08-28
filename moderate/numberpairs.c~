#include<stdio.h>

int main(){

int a[]={2,4,5,6,9,11,15};
int sum=20;
int i;
int low=0;
int high=6;

while(low< high){
  if((a[low]+a[high])==sum) {
      printf("%d,%d\n",a[low],a[high]);
      low++;
    }
   if((a[low]+a[high])>sum) high--;
   if((a[low]+a[high])<sum) low++;
 }

}


