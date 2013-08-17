#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>


int main(int argc, char *argv[]){

struct stat buf;
//int fd;
int size=0;

//fd= open((const char)argv[1], O_RDONLY) ;
//fstat(fd, &buf);
stat(argv[1], &buf);

size=(int)buf.st_size;

printf("%d", size);

//close(fd);
}
