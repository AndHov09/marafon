#include <iostream>

void matrix_0(int**,const int,const int);


int main()
{
	int const M = 4;
	int const N = 3;
	int** arr = new int*[M];
	int num = 1;
	for(int i = 0; i < M; ++i){
		arr[i] = new int[N];
		for(int j = 0; j < N; ++j){
			arr[i][j] = num;
			++num;
			std::cout << arr[i][j] << "  ";
		}
		std::cout << std::endl;
	}
	arr[1][1] = 0; // orinak
	matrix_0(arr,M,N);
	for(int i = 0; i < M; ++i){
		for(int j = 0; j < N; ++j){
			std::cout << arr[i][j] << "     ";
		}
		std::cout << std::endl;
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
	return 0;
}

void matrix_0(int** arr,const int M,const int N)
{
	for(int i = 0; i < M; ++i){
		for(int j = 0; j < N; ++j){
			if(arr[i][j] == 0){
				for(int x = 0; x < M; ++x){
					arr[x][j] = 0;
				}
				for(int x = 0; x < N; ++x){
					arr[i][x] = 0;
				}
				return;
			}
		}
	}
}
