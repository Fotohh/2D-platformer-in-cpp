
#include <iostream>

#include "window.cpp"

int main() {

	//add openGL to this damn project :(

	std::cout << "Hello World!" << std::endl;

	Contents contents;

	create_glad_window(500, 500, "App", contents);
	create_main_window(contents);

}

