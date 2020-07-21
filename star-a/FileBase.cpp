#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "FileBase.h"

class FileBase{
	std::vector<node> bubble;

	void open_file (const std::string& file_name);
	void close_file (const std::string& file_name);
};

void FileBase::open_file (const std::string& file_name){
}

void FileBase::close_file (const std::string& file_name){
}

int main(){
	std::cout<<"A run without error!";
	return 0;
}
