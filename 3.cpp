#include <iostream>
#include <string>

void probel(std::string&);

int main()
{
	std::string str("hello mello");
	std::cout << str << std::endl;
	probel(str);
	std::cout << str << std::endl;
	return 0;
}

void probel(std::string& str)
{
	const int size = str.size();
	if(size == 0){return;}
	for(int i = 0; i < str.size(); ++i){
		if(str[i] == ' '){
			str.erase(i,1);
			str.insert(i,"%20");
		}
	}
	return;
}
