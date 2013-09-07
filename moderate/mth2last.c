#include<stdio.h>
#include<math.h>


int main(int argc, char *argv[]){

char x[1024];
char *c;
FILE *fp;
int i,j;
int count;
int temp;
int reverse_count;


fp=fopen(argv[1],"r");
if(fp==NULL){
printf("error in opening the file");
exit(1);
}

while(1){
	c=fgets(x,1024,fp);
	if(c==NULL) break;
	count=0;
	reverse_count=0;
	temp=0;	
	
	for(i=0;x[i]!='\n';i++){
        count=count+1;
	}

	for(i=count-1,j=0;;i--,j++){
		if(x[i]>=48 && x[i]<=57){
		temp=temp+((x[i]-48)*pow(10,j));	
			
		}
		else break;
	}
	// now iterate back and print mth last element
	for(i=count-3;temp>0;i=i-2,temp--);
	printf("i=%d  ",i);
	printf("%c\n",x[i]);
}
close(fp);
}// end of main function
