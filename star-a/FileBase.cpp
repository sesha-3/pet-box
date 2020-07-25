#include <vector>
#include "FileBase.h"

#include <iostream>
class FileBase{
	std::vector<node> bubble;

	//void open_file (const std::string& file_name);
	//void close_file (const std::string& file_name);
	void create_bubble();
};

void FileBase::create_bubble(){
	std::string name,id,key;
	std::cout<<"Enter the name:\n";
	std::cin>>name;
}

int main(){
//	std::cout<<"A run without error!"<<std::endl;
	FileBase f = new FileBase();
	f.create_bubble();
	return 0;
}

//g++ -std=c++17 -o result -I FileBase.h FileBase.cpp
