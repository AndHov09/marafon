#include <iostream>
#include <string>

std::string sexmel(std::string);

int main()
{
	std::string str("aaabbcaaaakkkk");
	std::cout << str << std::endl;
	std::cout << sexmel(str) << std::endl;
	return 0;
}

std::string sexmel(std::string str)
{
	std::string str1;
	int count = 1;
	str1.push_back(str[0]);
	for(int i = 1; i < str.size(); ++i){
		if(str[i - 1] == str[i]){
			++count;
		}else{
			str1.push_back(count + '0');
			count = 1;
			str1.push_back(str[i]);
		}
	}
	str1.push_back(count + '0');
	return str1.size() > str.size() ? str : str1;
}
