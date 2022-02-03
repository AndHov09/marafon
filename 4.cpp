#include <iostream>
#include <string>

bool polidrom(std::string);
void poqrmec(std::string&);

int main()
{
	std::string str1("aaaabb");
	std::cout << std::boolalpha << polidrom(str1) << std::endl;
	std::string str2("Tact Cao");
	std::cout << polidrom(str2) << std::endl;
	std::string str3("aaghhkll");
	std::cout << polidrom(str3) << std::endl;
	return 0;
}

bool polidrom(std::string str)
{
	const int size = str.size();
	if(size <= 1){return true;}
	poqrmec(str);
	int mid = size % 2 ? size / 2 : size / 2 + 1;
	int count = 0;
	for(int i = 0; i < size; ++i){
		if(str[i] == ' '){
			std::swap(str[i],str[size - 1 - count]);
			++count;
		}
	}
	for(int i = 0; i <= mid; ++i){
		if(str[i] != str[size - 1 - count - i]){
			for(int j = i + 1; j < size; ++j){
				if(str[i] == str[j]){
					std::swap(str[j],str[size - 1 - count - i]);
					break;
				}
			}
		}
	}
	for(int i = 0; i <= mid; ++i){
		if(str[i] != str[size - 1 - count - i]){
			return false;
		}
	}
	return true;
	
}

void poqrmec(std::string& str){
	for(int i = 0; i < str.size(); ++i){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += ' ';
		}
	}
}
