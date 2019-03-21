#include <fstream>
#include <iostream>

using namespace std;

int main(){
	char buff[50];
	ifstream fin("input.txt");
	while (!fin.eof()){
		fin >> buff; 
		cout << buff << endl;
	} 
	fin.close();
	return 0;
}