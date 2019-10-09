#include <sys/time.h>
#include <sys/resource.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(){
    for (size_t i = 0; i < 10; i++){
        struct rusage usage;
        void* p = malloc(10*1024*1024);
        memset(p, 0, 10*1024*1024);
        getrusage(RUSAGE_SELF, &usage);
        printf("%ld KB\n", usage.ru_maxrss);
        sleep(1);
    }
    return 0;
}