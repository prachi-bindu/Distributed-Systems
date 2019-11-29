#include<iostream.h>
#include<sys/type.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netdb.h>
#include<string.h>
#include<arpa/inet.h>
#include<string>

using namespace std;

int main()
{
	//create a socket
	int listening_socket = socket(AF_INET,SOCK_STREAM,0);
	if(listening_socket == -1)
	{
		cerr<<"Error! Socket cannot be created!"
	}
	//bind socket ot IP and Port
	//listen for incoming connection request
	//close the listener
	//close the socket

	cout<<"hello";
	
	return 0;
}
