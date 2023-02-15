#include "task.h"
#include <string>

class server{
    public:
        task *currentTask;
        std::string status;
        int transactionTime;
        bool isFree(){
            return status=="Free";
        }
        void setBusy()
        {
            status = "Busy";
        }
        void setFree(){
            status="Free";
        }

        void setTransactionTime(int time){
            transactionTime=time;
            status="Busy";
        }
        void setTransactionTime(){
            transactionTime=currentTask->transaction_time;
        }
        const int getRemainingTransactionTime()
        {
            return transactionTime;
        }
        void decreaseTransactionTime(){
            transactionTime--;
            if(transactionTime<=0){
                status="Free";
            }
        }
        void setCurrentTask(task *task)
        {
            currentTask = task;
            status="Busy";
            setTransactionTime();
        } 
        int getCurrentTaskNumber(){
            return currentTask->task_number;
        }

        int getCurrentTaskArrivalTime()
        {
            return currentTask->arrival_time;
        }
        int getCurrentTaskWaitingTime(){
            return currentTask->waiting_time;
        }
        int getCurrentTaskTransactionTime()
        {
            return currentTask->transaction_time;
        }
        server() {
            currentTask=NULL;
            status="Free";
            transactionTime=0;
        }
};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
