#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	string filename = argv[1];
	cout << filename << '\n';

	ifstream fin(filename);

	string str;

	while( fin >> str ){
		cout << "line: " << str << '\n';
	}
}
