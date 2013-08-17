#include<stdio.h>

struct node{
int data;
struct node *next;
};

struct node *head;
struct node *dummy;
int size=0;
int ret;
int *ptr;

void push(int a);
int* pop();



int main(int argc, char *argv[]){

//variables
char x[1024];
char *c;
FILE *fp;
int i;
int temp;
int negative;

//open the file
fp=fopen(argv[1],"r");
if(fp==NULL){
printf("errror in opening the file");
exit(1);
}



while(1){
	
	//read the file
	c=fgets(x,1024,fp);
	if(c==NULL) break;

	//process the lines	
	temp=0;
	negative=0;	
	for(i=0;;i++){
		
		//if it is a number
		if(x[i]>=48 && x[i]<=57)
			temp=temp*10+(x[i]-48);

		//if it is a new line character
		else if(x[i]=='\n'){
			// first push the number
			if(negative==1) {
			temp=-temp;
			push(temp);
			}
			else push(temp);
			negative=0;
			//do the poping and printing thing		
			while(1){
				ptr=pop();
				if(ptr==NULL)break;
				else printf("%d",*ptr);				
					
				printf(" ");
				ptr=pop();
				if(ptr==NULL)break;
				}
			printf("\n");			
			break;
			}

		else if(x[i]=='-') {
		negative=1;
		
		}
		
		else {
			if(negative==1) {
			temp=-temp;			
			push(temp);
			}
			else push(temp);		
			temp=0; // reset the temp;	
			negative=0;
                    }

	 }// end of for loop;

	
  }// end of while loop

close(fp);

}


//push method
void push(int d){


struct node *dummy;

//printf("pushing %d on to stack\n", d);
//if the stack is empty
	if(head==NULL){
	head=(struct node *)malloc(sizeof(struct node));
	head->data=d;
	head->next=NULL;	
	}

// if the stack is not empty
	else {
	dummy=(struct node *)malloc(sizeof(struct node));
	dummy->data=d;
	dummy->next=head;
	head=dummy;
	}

//increement the size;
size=size+1;
}


//pop method...
int * pop(){
	
	if(head==NULL) return NULL;
	else {
	ret=head->data;
	dummy=head;
	head=head->next;
	free(dummy);
	return (&ret);	
	}	

size=size-1;
}
