#include<stdio.h>

int main(int argc, char *argv[]){

//variable declartaions
char x[1024];
char *c;
FILE *fp;
int hashtable[26];
int i;
int panagram=0;

//open the file 
fp=fopen(argv[1],"r");
if(fp==NULL) {
printf("error in opening file");
exit(1);
}

//reset the hashtable array
	for(i=0;i<26;i++) hashtable[i]=0;



//start reading from the file....
while(1){
	
		c=fgets(x,1024,fp);
	if(c==NULL) break;

	//process the line	
	for(i=0;x[i]!='\n';i++){
		//upper case letters
		if(x[i]>=65 && x[i]<=91){
		hashtable[x[i]-65]=1;		
		}

		//lower case letters
		if(x[i]>=97 && x[i]<=122){
		hashtable[x[i]-97]=1;		
		}
	}// end of for loop;

	panagram=1;
	//print the required numbers
	for(i=0;i<26;i++){
	if(hashtable[i]==0){ 
	printf("%c",i+97);
	panagram=0;
	}
	hashtable[i]=0;	
	}
	
	if(panagram==1)printf("NULL");
	printf("\n");

}//end of while loop


//close the file
close(fp);




return 0;
}// end of main funciton
