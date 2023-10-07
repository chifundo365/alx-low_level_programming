#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main (void)
{
        mode_t permission = 0662;
        int fd = open("try", O_RDWR | O_CREAT | O_TRUNC, permission);
        char *buffer = "Hello simple shell";
        char bf[100];

        if (fd != -1)
        {
                printf("opened for reading and writing");

                int written_bytes = write(fd, buffer, strlen(buffer));
                if (written_bytes > 0)
                {

                        lseek(fd, 0, SEEK_SET);

                        int read_bytes = read(fd, bf, strlen(buffer));

                        bf[read_bytes] = '\0';

                        if (read_bytes)
                        {

                                printf("%s", bf);

                        }
                }


                close(fd);

        }
        else
        {       close(fd);
                printf("Error");                                                                }

}
