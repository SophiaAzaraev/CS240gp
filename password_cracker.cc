#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <ostream>

#define PASSWORD_LEN 6

// Generate random data to feed to simple brute force and dictionary brute force password crackers
std::vector<std::string> generate_data(int len){
	std::string str = "abcdefghijklmnopqrstuvwxyz";
	std::vector<std::string> data;
	for(int i = 0; i <= len; ++i){
		std::string entry;
		int pos;
		while(entry.size() != PASSWORD_LEN){
			pos = ((rand() % (str.size() - 1)));
			entry += str.substr(pos,1);
			}
		data.push_back(entry);
		}
	return data;
	 
}

int main(int argc, char *argv[]){
	std::vector<std::string> data = generate_data(10);
	for(std::vector<std::string>::iterator it = data.begin(); it != data.end(); it++){
		// call simple brute force
	}
}

	