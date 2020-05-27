#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

void wypiszJSON(int max) 
{
	rand()%100+1;
}

int main(int argc, char** argv) {
	
	srand( time( NULL ) );
	
	wypiszJSON(2);
	{"losowa":2}
	wypiszJSON(5);
	{"liczba":5}
	wypiszJSON(7);
	{"liczba":7}
	
	
	return 0;
}
