#ifndef ANIMATELN_HPP
#define ANIMATELN_HPP
#include <iostream>
#include <chrono>
#include <thread>
#include <atomic>
std::atomic<bool> animating;
void animateln(char letter, int time_milisecond){
	while(animating){
		std::cout << letter;
		std::cout.flush();
		std::this_thread::sleep_for(std::chrono::milliseconds(time_milisecond));
	}
}
#endif
