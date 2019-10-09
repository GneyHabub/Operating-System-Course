#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
    for (size_t i = 0; i < 10; i++){
        void* p = malloc(10*1024*1024);
        memset(p, 0, 10*1024*1024);
        sleep(1);
    }
    return 0;
}