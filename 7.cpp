#include <iostream>

void matrix_swap90(int**,const int);

int main()
{
	const int size = 3;
	int** arr = new int*[size];
	int count = 1;
	for(int i = 0; i < size; ++i){
		arr[i] = new int[size];
		for(int j = 0; j < size; ++j){
			arr[i][j] = count;
			++count;
			std::cout << arr[i][j] << "  ";
		}
		std::cout << std::endl;
	}
	matrix_swap90(arr,size);
	std::cout << std::endl;
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << "  ";
		}
		std::cout << std::endl;
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}

void matrix_swap90(int** arr,const int size)
{
	int** arr1 = new int*[size];
	for(int i = 0; i < size; ++i){
		arr1[i] = new int[size];
		for(int j = 0; j < size; ++j){
			arr1[i][j] = arr[j][i];
		}
	}
	for(int i = 0; i < size; ++i){
		delete[] arr[i];
		arr[i] = arr1[i];
	}
	delete[] arr1;
}
