#include <iostream>
using namespace std;

//��������� ������
double* createArray(int size) {
	return new double[size];
}
//���������� �������
void fillArray(double* arr, int size) {
	cout << size << " ��������� �������: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
//����� ������
void printArray(double* arr, int size) {
	cout � "array elements: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
//������������ ������
void deleteArray(double* arr) {
	delete[] arr;
}

int main() {
	int c;
	do {
		int size;
		cout << "size of array: ";
		cin >> size;
		double* arr = createArray(size);
		fillArray(arr, size);
		printArray(arr, size);
		deleteArray(arr);
		cout << "Continue? Press 1 if yes 0 if not: ";
		cin >> c;
	} while (c == 1);

	return 0;
}