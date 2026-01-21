#include <iostream>
#include <string>
#include <thread>
#include <cstdlib>
#include "animateln.hpp"
using namespace std;
int main() {
	cout << "\033[36mTesting animateln.\033[0m\n";
	animating = true;
	thread animThread(animateln, '.', 5);
	system("find / -executable -name thisfiledoesnotexists ");
	animating = false;
	animThread.join();
	cerr << "\033[31;40mTesting animateln ended.\033[0m" << endl;
	return 0;
}
