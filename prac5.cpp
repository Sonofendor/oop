#include <iostream>

using namespace std;

void sort_bubble(int *arr, int size){
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void sort_bubble(double *arr, int size){
	double temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(){
	int size;
	cout<<"Input size of arrays: ";
	cin>>size;
	cout<<"Fill integer array!\n";
	int *array_int = new int[size];
	int i;
	for (i = 0; i < size; i++){
		cout<<"Input value of element number "<<i+1<<": ";
		cin>>array_int[i];
	}
	sort_bubble(array_int,size);
	cout<<"Sorted integer array: \n";
	for (i = 0; i < size; i++) cout<<"Element number "<<i+1<<" = "<<array_int[i]<<"\n";
	double *array_double = new double[size];
	cout<<"Fill double array!\n";
	for (i = 0; i < size; i++){
		cout<<"Input value of element number "<<i+1<<": ";
		cin>>array_double[i];
	}
	sort_bubble(array_double,size);
	cout<<"Sorted float array: \n";
	for (i = 0; i < size; i++) cout<<"Element number "<<i+1<<" = "<<array_double[i]<<"\n";
	delete [] array_int;
	delete [] array_double;
	cout<<"Programm finished!";
	return 0;
}