#Summary

C project for the simple server-client communication using sockets.   
Program was tested on:
- i686 arch with GCC 4.7.2 compiler 
- i386 arch with LLVM 5.1 compiler

#How to compile & use

- Open Terminal & go sources directory by running `cd PATH_TO_SOURCES_ON_YOUR_MACHINE`
- Type `gcc Server_client.c -o Server_client && ./Server_client` in Terminal to compile sources & run program.
- You will see: `Waiting for connection...` text, meaning that your simple server is ready for connection.
- Open another yet Terminal window.
- Type `telnet 127.0.0.1 2048` in new Terminal window. 2048 - is a just test port number used in program.
- You will see:
```
Trying 127.0.0.1...
Connected to 127.0.0.1.
Escape character is '^]'.
Knock Protocol Server
Version 1.0
Knock!
> 
```   
- Type something to check communication result.   
