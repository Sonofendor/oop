#include <iostream>

using namespace std;

/*void create(double *arr, int size_1){
	arr = new double[size_1];
	cout<<"Memory successfully created!\n\n";
}*/

void init(double *arr, int size_1){
	int i;
	for (i = 0; i < size_1; i++){
		cout<<"Input value of element number "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"\n";
}

void display(double *arr, int size_1){
	int i;
	for (i = 0; i < size_1; i++) cout<<"Element number "<<i+1<<" - "<<arr[i]<<"\n";
	cout<<"\n";
}

/*void free_memory(double *arr, int size_1){
	delete [] arr; //по необъяснимым причинам не работает
	cout<<"Array successfully deleted!\n\n";
}
*/
int main(){
	double *a;
	int size;
	cout<<"Input size of array: ";
	cin>>size;
	int command = 6;
	cout<<"Input 1 if you want to create new memory for array\nInput 2 if you want to initialize array\nInput 3 if you want to print elements of array\nInput 4 if you want to free memory and delete array\nInput 0 if you want to quit programm\n";
	while (command != 0){
	cout<<"Your command: ";
	cin>>command;
	switch (command){
		case 1:
		{
			a = new double[size]; //create(a,size); //по каким-то причинам при вызове функций падает free_memory
			cout<<"Memory successfully created!\n\n";
			break;
		}
		case 2:
		{
			init(a,size);
			break;
		}
		case 3:
		{
			display(a,size);
			break;
		}
		case 4:
		{	
			delete [] a; //free_memory(a,size); //не работает
			cout<<"Array successfully deleted!\n\n";
			break;
		}
	}
	if (command == 0) break;
	else if (command > 4) cout<<"Wrong number of command!";
	}
	return 0;
}