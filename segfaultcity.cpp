#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	if( argc < 2 ){
		cout << "Usage: ./segfaultcity.exe inputfile\n";
		exit(0);
	}

	string filename = argv[1];
	cout << filename << '\n';

	ifstream fin(filename);

	string str;

	while( fin >> str ){
		cout << "line: " << str << '\n';
		// crash on "krash"
		if( "krash" == str ) exit(1);
	}

	cout << "eof\n";
}
