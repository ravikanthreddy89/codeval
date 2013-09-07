#include<stdio.h>

int main(int argc, char *argv[]){

//variable declaration
char x[1024];
char *c;
FILE *fp;
int i;
int count=0;
int num=0;

//open the file
fp=fopen(argv[1],"r");
if(fp==NULL){
printf("errror in opening the file");
exit(1);
}

//start reading form the file
while(1){

//reset the variables before entering new iteration
count=0;
num=0;

c=fgets(x,1024, fp);
	
	//if EOF break and exit
	if(c==NULL) break;
	
	//else process the line
	for(i=0;x[i]!='\n';i++){
	num=((num*10)+(x[i]-48));	
	}

	//count the number of set bits....	
	while(num!=0){
	if((num&1)==1) count=count+1;
	num=num>>1;	
	}
	printf("%d\n",count);
}

//close the file before exiting
close(fp);
return 0;
}// end of main funciton
