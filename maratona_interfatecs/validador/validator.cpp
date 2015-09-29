#include <iostream>
#include <fstream> /*std::fstream*/
#include <string> 

int main (int argc, char **argv) {

	if ( argc == 3) {
		
		std::fstream file1, file2;
		std::string line_file1, line_file2;
		int line = 1;
		bool bFile = true;

		file1.open(argv[1], std::fstream::in);
		file2.open(argv[2], std::fstream::in);
		
		
		if ( !file1.is_open() || !file2.is_open() ) {
			return 1;
		}

		while(!file1.eof() && !file2.eof() && bFile){
			std::getline(file1, line_file1); 
			std::getline(file2, line_file2); 
			if(line_file1.compare(line_file2)) { bFile = false; continue; }
			line++;
		}
		
		if ( !bFile || !file1.eof() || !file2.eof() ) 
			std::cout << "Error line " << line << ": " << line_file1 << " " << line_file2 << std::endl;  	
		else 
			std::cout << "Accepted" << std::endl; 

	} else {
		std::cout << "This validator needs 2 arguments" << std::endl; 
	}

	return 0;

}
