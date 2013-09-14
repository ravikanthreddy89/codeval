#include<stdio.h>

int main(int argc, char *argv[]){

//variables used
char x[1024];
char *c;
FILE *fp;
//open the file 
fp=fopen(argv[1],"r");

if(fp==NULL){
	close(fp);
	return 1;	
	}
while(1){
c=fgets(fp,x,1024);
}
close(fp);
}
