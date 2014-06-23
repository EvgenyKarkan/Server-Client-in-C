#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc, char* argcv[])
{
	char* advice[] = {"Test 1\r\n", "Test 2\r\n", "Test 3\r\n"};
	int listener_d = socket(PF_INET, SOCK_STREAM, 0);

	struct sockaddr_in name;
	name.sin_family = PF_INET;
	name.sin_port = (in_port_t)htons(2048);
	name.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(listener_d, (struct sockaddr*) &name, sizeof(name));
	listen (listener_d, 10);
	puts("Waiting for connection...");

	while (1) {

	struct sockaddr_storage client_addr;
	unsigned int address_size = sizeof(client_addr);
	int connect_d = 0;
	connect_d = accept(listener_d, (struct sockaddr*) &client_addr, &address_size);
	char* msg = advice[rand() % 3];

	send(connect_d, msg, strlen(msg), 0);
	close(connect_d);

	}

	return 0;
}
