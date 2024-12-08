//i dont understand legal magic so please dont copy my work unless you are going to improve it and send
//a pull request on my github project.
#include <iostream>
#include "types.hpp"
#include "functions.hpp"
int main(int argc, char**argv) {
	cgl::vec3 v = cgl::vec3(5, 3,1);
	double aspr = 4 / 3;
	double fov = 90;
	double WindowHeight = 720;
	double WindowWidth = WindowHeight * aspr;
	std::cout << cgl::perspectiveproject(v,fov,aspr,100,0.01).x;
	
	std::cin.get();
}
