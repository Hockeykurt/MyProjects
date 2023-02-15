#include <iostream>

class task {
  public:    
    int task_number;  
    int arrival_time;
    int waiting_time;
    int transaction_time;
    void setCustomerInfo(int tn = 0, int aTime = 0, int wTime = 0, int tTime= 0) {
         task_number = tn;
         waiting_time = wTime;
         arrival_time = aTime;
         transaction_time = tTime;
    }
    int getWaitingTime()
    {
        return waiting_time;
    }
    void setWaitingTime(int wTime){
        waiting_time = wTime;
    }
    void incrementWaitingTime()
    {
        waiting_time++;
    }
    const int getArrivalTime(){
        return arrival_time;
    }
    const int getTransactionTime()
    {
        return transaction_time;
    }
    int getTaskNumber(){
        return task_number;
    }
    task(int tn = 0, int aTime = 0, int wTime = 0, int tTime= 0) {
      task_number = tn;
      waiting_time = wTime;
      arrival_time = aTime;
      transaction_time = tTime;
    }
};













































