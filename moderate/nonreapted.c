#include<stdio.h>
#include<string.h>

char line[1024];
char *c;
FILE *fp;
int i;
int hashtable[256];

void nonrepeated(char *);

int main(int argc, char *argv[]){

//open the file
fp=fopen(argv[1], "r");
if(argc< 2|| fp==NULL){
fprintf(stderr,"Error in opening the file\n");
return 1;
}

while(fgets(line,1024,fp)){
if(c=strchr(line, '\n')) *c='\0';	
if(line=='\0') continue;
nonrepeated(line);
}

return 0;
}

void nonrepeated(char *line){
for(i=0;i<256;i++) hashtable[i]=0;

for(i=0;line[i]!='\0';i++){
 hashtable[line[i]]++;
}

for(i=0;line[i]!='\0';i++){
 if(hashtable[line[i]]==1) {
		printf("%c\n",line[i]);
		break;
 		} 
}

}
