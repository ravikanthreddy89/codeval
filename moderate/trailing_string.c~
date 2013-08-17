#include<stdio.h>

int main(int argc, char *argv[]){

char x[1024];
char *c;
FILE *fp;
int i;
int j;
int marker;
int equal;

fp=fopen(argv[1],"r");
if(fp==NULL) {
printf("error in opening file \n");
close(fp);
return 1;
}

while(1){
c=fgets(x, 1024, fp);
equal=1;

	if(c==NULL) break;
	
	for(i=0;x[i]!=',';i++);
	
	marker=i;
	for(;x[i]!='\n';i++);
	
 	j=i-1;
	
	for(i=marker-1;x[j]!=',';i--,j--){
		if(x[i]!=x[j]){
		equal=0;
		break;		
		}	
	}

	printf("%d\n",equal);
}


close(fp);
}
