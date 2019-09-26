#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int sig) {
    if (sig == SIGUSR1) {
        printf("SIGUSR1 caught\n");
    } else if (sig == SIGKILL) {
        printf("SIGKILL caught\n");
    } else if (sig == SIGSTOP) {
        printf("SIGSTOP caught\n");
    }
}

int main() {
    if (signal(SIGUSR1, handler) == SIG_ERR) {
        printf("\nCannot catch SIGUSR1\n");
    }

    if (signal(SIGKILL, handler) == SIG_ERR) {
        printf("\nCannot catch SIGKILL\n");
    }

    if (signal(SIGSTOP, handler) == SIG_ERR) {
        printf("\nCannot catch SIGSTOP\n");
    }

    while(1) {
        printf("SSS\n");
        sleep(1);
    }

    return 0;
}