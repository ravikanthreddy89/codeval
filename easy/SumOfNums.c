#include<stdio.h>

int main(int argc, char *argv[]){
int sum=0;
FILE *fp;
int num;

fp=fopen(argv[1],"r");

while(fscanf(fp,"%d", &num)!=EOF) sum=sum+num;

printf("%d",sum);

}
