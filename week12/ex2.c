#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {
    int *files;
    int num_files = argc - 1;
    if (argc > 1) {
        short append = 0;

        if (strcmp("-a", argv[1]) == 0) {
            num_files--;
            append = 1;
        }

        files = malloc(sizeof(int) * (argc - 1));
        int j = 0;
        for (int i = argc - num_files; i < argc; i++) {
            if (append){
                files[j] = fopen(argv[i], 'a');
            }else{
                files[j] = fopen(argv[i], 'w');
            }
            j++;
        }
    }

    char buff[1024];
    size_t len = 0;
    while (fgets(buff, 1024, stdin)) {
        len = strlen(buff);
        for (int i = 0; i < num_files; i++)
            write(files[i], buff, len);
    }

    for (int i = 0; i < num_files; i++)
        close(files[i]);

    return 0;
}