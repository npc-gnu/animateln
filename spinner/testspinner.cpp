#include "spinner.hpp"
#include <thread>
#include <atomic>
#include <chrono>
#include <iostream>
using namespace std;
int main() {
	cout << "Testing spinner:\n";
	atomic<bool> running(true);
	thread spinning_thread(spinner, ref(running), 100);
	this_thread::sleep_for(std::chrono::seconds(5));
	running = false;
	spinning_thread.join();
	cout << endl;
	return 0;
}
