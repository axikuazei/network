# include <stdio.h>
# include <sys/socket.h>
# include <arpa/inet.h>
# include <unistd.h>

int main(int argc, char *argv[])
{

    int serv_sock;
    int clnt_sock;

    struct sockaddr_in serv_addr;
    struct sockaddr_in clnt_addr;
    socklen_t clnt_addr_size;

    char message[] = "Hello World";

    if (argc != 2)
    {
        printf("Usage : %s <port> \n", argv[0]);
    }
    
    
}