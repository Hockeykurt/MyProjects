#include "server.h"

class serverList{
    public:
        server **servers;
        int numOfServers;
        const int getFreeServerID(){
            for(int i=0;i<numOfServers;i++){
                if(servers[i]->isFree()){
                    return i;
                }
            }
            return -1;
        }
        const int getNumberOfBusyServers()
        {
            int count = 0;
            for(int i=0;i<numOfServers;i++){
                if(!servers[i]->isFree()){
                    count++;
                }
            }
            return count;
        }
        void setServerBusy(int serverID, task *task){
            servers[serverID]->setCurrentTask(task);
        }
        void updateServers(){
            for(int i=0;i<numOfServers;i++){
                servers[i]->decreaseTransactionTime();
            }
        }
        serverList(int serverCount) {
            numOfServers=serverCount;
            servers=new server*[serverCount];
            for(int i=0;i<serverCount;i++){
                servers[i]=new server();
            }
        }
};






























