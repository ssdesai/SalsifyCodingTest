#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cassert>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Wrong number of inputs.\n";
		return 0;
	}
	else {
		std::ifstream file(argv[1]);
		if (!file.is_open()) {
			std::cout << "Could not open file.\n";
			return 0;
		}
		else {
			///////////////////Beginning of File Preprocessing/////////////////////////////
			std::vector<std::string> line_vec;
			std::string line;
			
			//find length of file and resize vector for optimization of large files
			int num_lines = 0;
			while (std::getline(file, line)) {
				num_lines++;
			}
			line_vec.resize(num_lines);

			//rewind to beginning of file to take in lines
			file.clear();
			file.seekg(0, file.beg);

			//take in lines from file and store in vector
			for (int i = 0; i < num_lines; i++) {
				std::getline(file, line);
				line_vec[i] = line;
			}
			/////////////////End of File Preprocessing////////////////////////
			
			//take input and output line wanted
			std::string input;
			int line_num = -1;
			while (std::cin >> input >> input) {
				//get rid of all input other than line number
				input.erase(input.begin(), input.begin() + 7);
				line_num = std::stoi(input);
				if (line_num > num_lines) {
					std::cout << "Line number beyond end of file.\n";
				}
				else {
					assert(line_num != -1);
					std::cout << line_vec[line_num - 1] << "\n";
				}
			}//while 
		}//else
	}//else
	return 0;
}//main