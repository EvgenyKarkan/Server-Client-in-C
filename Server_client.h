#ifndef SERVER_CLIENT_H_INCLUDED
#define SERVER_CLIENT_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <signal.h>


int read_in (int socket, char* buf, int len);
void error(char* msg);
int open_listener_socket();
void bind_to_port(int socket, int port);
int say(int socket, char* s);
void handle_shutdown(int sig);

#endif
