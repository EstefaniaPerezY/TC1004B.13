#include <stdio.h>
#include <unistd.h>

// banderas de compilacion: 
// gcc fork.c -o fork
// ls
// para correr:
// ./fork

int main(){
    int pid = fork();
    if( pid == 0){
        printf("Soy el proceso hijo: pid = %d\n",pid);
    }else{
        printf("Soy el proceso padre: pid  = %d\n",pid);
    }
    return 0;
}