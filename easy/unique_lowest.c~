#include<stdio.h>
#include<string.h>

int main(int argc, char **argv){
char x[1024];
char *c;
int i, j;
int temp;
int y[10];
int uniq_min_found=0;
FILE *fp;

//open the file...
fp=fopen(argv[1], "r");

//keep reading the file....
while(1){

c=fgets(x,1024,fp);

	//break at EOF from the file
	if(c==NULL) break;

	//reset the y array
	for(i=0;i<10;i++) y[i]=0;
	
	//start reading the characters
	for(i=0;x[i]!='\n';i++){
		
		if(x[i]>=48 && x[i]<=57){
 		y[x[i]-48]=y[x[i]-48]+1;
		}	
	}
	
	//scan if there is a unique minimum value	
	for(i=0;i<10;i++){
		if(y[i]==1) {
		uniq_min_found=1;
		j=i;
		break;	
		}
	}


	//now search for unique minimum's position in the original array
	if(uniq_min_found==1){
		uniq_min_found=0;
		temp=0;
		for(i=0;;i++){
			if(x[i]>=48 && x[i]<=57) temp++;
			if((x[i]-48)==j){
			//printf("j=%d\n", j);
			//printf("x[i]=%c\n",x[i]);			
			j=0;
			printf("%d\n",temp);
			break;
			}		
		}
	
	}
	
 	//if not dere print 0
	else printf("0\n");

	//for(i=0;i<10;i++) printf("%d %d : ",i,y[i]);

	//printf("\n");
	

}// end of while loop
close(fp);
return 0;
}
