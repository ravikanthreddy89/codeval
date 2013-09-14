#include<stdio.h>

int main(int argc, char *argv[]){

char x[1024];
char *c;
FILE *fp;
int i;
int n;
int k;
int one_printed;

fp=fopen(argv[1], "r");

if(fp==NULL){
printf("error in opening file");
close(fp);
}

while(1){
n=0;
one_printed=0;
c=fgets(x,1024,fp);
	
	if(c==NULL) break;
	for(i=0;x[i]!='\n';i++){
	n=n*10+(x[i]-48);	
	}

	for(i=31;i>=0;i--){
	k=n>>i;
	if(k&1) {
	printf("1");
	one_printed=1;	
	}
	else {
		if(one_printed==1) printf("0");
		}
	}
	printf("\n");
}
close(fp);
}
