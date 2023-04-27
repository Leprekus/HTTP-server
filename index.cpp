#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>

using namespace std; 

class Socket {
    public: 
    int server_fd = socket(int domain, int type, int protocol);
};

int main() {
    
    return 0;
}