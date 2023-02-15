#include <iostream>
#include <cstdlib>

#include "serverList.h"
#include "taskQueue.h"

int main() {
	int nus, nut, tTimeL, tTimeU, aTimeRate, simTime;

	taskQueue tQueue;
	
	std::cout << "Welcome to the tasks' simulator\n\n";

	std::cout << "Enter number of servers:";
	std::cin >> nus;
	serverList sList(nus);

	std::cout << "Enter number of tasks:";
	std::cin >> nut;

	std::cout << "For transaction time, enter the range's lower value:";
	std::cin >> tTimeL;

	std::cout << "For transaction time, enter the range's upper value:";
	std::cin >> tTimeU;

	int oldRange = (RAND_MAX - 0);
	int newRange = (tTimeU - tTimeL);

	std::cout << "Enter task's arrival time rate:";
	std::cin >> aTimeRate;

	std::cout << "Enter total time of simulation:";
	std::cin >> simTime;
	std::cout << "\n";

	srand(10);
	int taskNu = 1;

	for (int tCo = 1; tCo <= simTime; tCo++) {
		std::cout << "Time: " << tCo << std::endl;
		// 1- Update all servers transaction time (decrement by 1)
		sList.updateServers();
		// 2- Update waiting time (increment by 1) of all tasks in the queue
		tQueue.updateWaitTime();
		// 3- Check if it is time for arrival of tasks
		if (tCo % aTimeRate == 0) {
			// Generate random transaction time
			int r = rand();
			r = (((r-0) * newRange) / oldRange) + tTimeL;
			// Create a new task
			task t(taskNu,tCo, 0, r);
			tQueue.push(&t);
			std::cout << "New task " << taskNu << " arrived at time " << tCo << " with transaction time of " << r << "\n";
			++taskNu;
		}
		// 4- Check if a server is free and tasks' queue is non empty to push a task
        if(sList.getFreeServerID()!=-1 && !tQueue.isEmptyQueue()){
            sList.setServerBusy(sList.getFreeServerID(),tQueue.pop());
            std::cout << "Task " << taskNu-1 << " is admitted to server\n";
        }
	}

	return 0;
}