#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){

char x[1024];
int y[10];
char *c;
int i,j;
FILE *fp;
int uniq_min_found=0;

for(i=0; i <10; i++){
y[i]=0;
}

fp=fopen(argv[1], "r");

while(1){

for(i=0; i <10; i++){
y[i]=0;
}

c=fgets(x, 1024, fp);
if(c==NULL) break;

for(i=0; x[i]!='\n'; i++){

if(x[i]>=48 && x[i]<=57){
 y[x[i]-48]=y[x[i]-48]+1;
}


}
for(i=1;i<10;i++){
if(y[i]==1) {
uniq_min_found=1;
break;
}
}
if(uniq_min_found==1) {
j=i;
for(i=0;;i++) if((x[i]-48)==j){
 printf("%d\n",i);
 break;
}

}
else printf("0\n");
uniq_min_found=0;
}//end of while loop

close(fp);


}
