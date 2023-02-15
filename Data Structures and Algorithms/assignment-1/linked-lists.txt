#include <stdio.h>
#include <iostream>

using namespace std;

struct node/*sensory_data*/ {
    int reading_date;
    int reading_time;
    int value;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;


void Add(int reading_date, int reading_time, int value){
    struct node *new_node = new node;
    new_node->reading_date = reading_date;
    new_node->reading_time = reading_time;
    new_node->value = value;
    new_node->next=head;
    head=new_node;
}

void Remove(int reading_time, int reading_date){
    struct node *ptr = head;
    for(int i=0; ptr != NULL; i++){
        if(ptr->reading_time == reading_time && ptr->reading_date == reading_date){
            struct node *temp = head;
            for(int k=0; k<i-1; k++)
            {
                temp = temp->next;
            }
            temp->next = ptr->next;
            delete ptr;
        }
       else{
            ptr = ptr->next;
       }
    }
}

void RemoveAllValue(int value){
    struct node *ptr = head;
    for(int i=0; ptr != NULL; i++){
        if(ptr->value == value){
            struct node *temp = head;
            for(int k=0; k<i-1; k++)
            {
                temp = temp->next;
            }
            temp->next = ptr->next;
            delete ptr;
        }
       else{
            ptr = ptr->next;
       }
    }
}

void SearchValue(int value){
    int length = 0;
    struct node *ptr = head;
    while(ptr !=NULL){
        length++;
        if(ptr->value == value){
            cout << "Value Found at node" << length << endl;
            break;
        }
        ptr=ptr->next;
    }
    if(ptr == NULL){
        cout << "Data Not Found" << endl;
    }
}

void PrintInfo(){
    struct node *ptr = head;
    while(ptr != NULL){
        printf("Date:%d Time:%d Value:%d \n", ptr->reading_date, ptr->reading_time, ptr->value);
        ptr = ptr->next;
    }
}

void PrintNum(){
    int length = 0;
    struct node *ptr = head;
    
    while(ptr != NULL){
        length++;
        ptr = ptr->next;
    }
    printf("Number of readings saved is %d \n", length);
}

void PrintAvg(){
    struct node *ptr;
    int sum = 0;
    int count = 0;

    for (ptr = head; ptr; ptr = ptr->next)
    {
        sum += ptr->value;
        count++;
    }
    int average = sum / count;
    cout << "The average is: "<< average << endl;
}

int main(){

    int choice = 0;
    while(choice!=8) {
        cout << "Welcome to sensory reading system" << endl;
        cout << "1- Add a sensory reading" << endl;
        cout << "2- Remove a sensory reading based on specific date and time" << endl;
        cout << "3- Remove all sensory readings with a specific value" << endl;
        cout << "4- Search for a specific sensory reading value" << endl;
        cout << "5- Print information of all sensory readings" << endl;
        cout << "6- Print the number of sensory readings saved in the system" << endl;
        cout << "7- Print the average of all sensory reading values" << endl;
        cout << "8- Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        
        if (choice == 1){
            int reading_time, reading_date, value;
            cout << "Enter as followed: 1230 or 1200" << endl;
            cout << "Enter Time: ";
            cin >> reading_time;
            cout << "Enter as followed: 0630" << endl;
            cout << "Enter Date: ";
            cin >> reading_date;
            cout << "Enter Value: ";
            cin >> value;
            Add(reading_date, reading_time, value);
        }
        else if (choice == 2){
            int reading_time, reading_date;
            cout << "Enter Time: ";
            cin >> reading_time;
            cout << "Enter Date: ";
            cin >> reading_date;
            Remove(reading_time, reading_date);
        }
        else if (choice == 3){
            int value;
            cout << "Enter Value: ";
            cin >> value;
            RemoveAllValue(value);
        }
        else if (choice == 4){
            int value;
            cout << "Enter Value: ";
            cin >> value;
            SearchValue(value);
        }
        else if (choice == 5){
            PrintInfo();
        }
        else if (choice == 6){
            PrintNum();
        }
        else if (choice == 7){
            PrintAvg();
        }
    }
}

