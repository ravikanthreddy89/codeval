#include<stdio.h>
#include<string.h>
#include<math.h>

int main(int argc, char *argv[]){

FILE *fp;
char x[1024];
char *c;
int i,j; 
int x1=0;
int y1=0;
int x2=0;
int y2=0;

int dist;
int count;
double l,m;
int negative=0;

fp=fopen(argv[1],"r");
while(1){
j=0;
count=0;
negative=0;
x1=0;
y1=0;
x2=0;
y2=0;

c=fgets(x, 1024, fp);
if(c==NULL) break;



for(i=0; x[i]!='\n';i++){
if((x[i]>=48 && x[i]<=57)|| x[i]=='-'){
if(x[i]=='-'){
negative=1;
i=i+1;
}

if(count==0){

do{
   x1=(x1*10)+(x[i]-48);
   i=i+1;
  }while(x[i]>=48 && x[i]<=57);
 count++;
 if(negative==1) x1=-x1;
 negative=0;
} 
else if(count==1){
do{
   y1=(y1*10)+(x[i]-48);
   i=i+1;
  }while(x[i]>=48 && x[i]<=57);
   if(negative==1) y1=-y1;
   negative=0;
count++;
}

else if(count==2){
do{
   x2=(x2*10)+(x[i]-48);
   i=i+1;
  }while(x[i]>=48 && x[i]<=57);
  if(negative==1) x2=-x2;
  negative=0;
count++;

}

else {
do{
   y2=(y2*10)+(x[i]-48);
   i=i+1;
  }while(x[i]>=48 && x[i]<=57);
  if(negative==1) y2=-y2;
  negative=0;

}

}


}

l=((y2-y1)*(y2-y1));
m=((x2-x1)*(x2-x1));
dist=(int)sqrt(l+m);
printf("%d\n",dist);
}

return 0;
}
