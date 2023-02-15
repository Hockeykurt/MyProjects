#include <iostream>

// queue implementation using linked list

class taskQueue{
    public:
        task **tasks;
        int numOfTasksInQueue=0;
        bool isEmptyQueue(){
            return numOfTasksInQueue<=0;
        }
        task* pop(){
            task *output = tasks[0];
            numOfTasksInQueue--;
            task **newTasks = new task*[numOfTasksInQueue];
            for(int i=0;i<numOfTasksInQueue;i++){
                newTasks[i]=tasks[i+1];
            }
            tasks=newTasks;
            return output;
        }
        void push(task *t){
            numOfTasksInQueue++;
            task **newTasks = new task*[numOfTasksInQueue];
            newTasks[0]=t;
            for(int i=1;i<numOfTasksInQueue;i++){
                newTasks[i]=tasks[i-1];
            }
            tasks=newTasks;
        }
        void updateWaitTime(){
            for(int i=0;i<numOfTasksInQueue;i++){
                tasks[i]->incrementWaitingTime();
            }
        }
};



























