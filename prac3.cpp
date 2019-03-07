#include <iostream>
#include <string>

using namespace std;

class Book {
	public:
		string author = "Unknown";
		string name = "Unknown";
		int pages = 0;
		int year = 0;
	
		void init(){
			cout<<"Input name of author: ";
			getline(cin, author);
			cout<<"Input name of the book: ";
			getline(cin, name);
			cout<<"Input number of pages: ";
			cin>>pages;
			cin.ignore();
			cout<<"Input year of publishing: ";
			cin>>year;
			cin.ignore();
			cout<<endl;
		}
		void display(){
			cout<<"Name - "<<name<<"\nAuthor - "<<author<<"\nNumber of pages - "<<pages<<"\nYear of publishing - "<<year<<"\n";
		}
};

int main(){
	Book Library[3];
	int i;
	cout<<"Fill the library:\n";
	for (i = 0;i < 3;i++){
		Library[i].init();
	}
	int j;
	cout<<"Input the number of book in library which you want to know information about: ";
	cin>>j;
	Library[j-1].display();
	return 0;
}