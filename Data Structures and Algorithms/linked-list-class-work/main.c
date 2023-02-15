#include <stdio.h>

struct node {
    int key;
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void print_list(){
    struct node *ptr = head;
    while(ptr != NULL){
        printf("key:%d data:%d \n", ptr->key, ptr->data);
        ptr = ptr->next;
    }
}

void list_length(){
    int length = 0;
    struct node *ptr = head;
    
    while(ptr != NULL){
        length++;
        ptr = ptr->next;
    }
    printf("Length is %d \n", length);
}

void insert_first(int key, int data) {
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->key = key;
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void insert_last(int key, int data){
    struct node *ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->key = key;
    new_node->data = data;
    ptr->next=new_node;

}

void insert_middle(int key, int data){ //needs fixing
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->key = key;
    new_node->data = data;
    
    int length = 0;
    struct node *ptr = head;
    
    while(ptr != NULL){
        length++;
        ptr = ptr->next;
    }
    int count;
    if (length %2 == 0){
        count = length / 2;
    }
    else{
        count = (length+1)/2; 
    }
    ptr = head;
    for(int i=0; i<=count; i++){
        ptr=ptr->next;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;
}

void delete_node(int key){ //needs fixing
    struct node *ptr = head;
    for(int i=0; ptr != NULL; i++){
        if(ptr->key == key){
            struct node *temp = head;
            for(int k=0; k<i; k++)
            {
                temp = temp->next;
            }
            temp->next = ptr->next;
            free(ptr);
        }
       else{
            ptr = ptr->next;
       }
    }
}

void search(int data){
    int length = 0;
    struct node *ptr = head;
    while(ptr !=NULL){
        length++;
        if(ptr->data == data){
            printf("Data Found at node %d \n", length);
            break;
        }
        ptr=ptr->next;
    }
    if(ptr->next == NULL){ //needs fixing
        printf("Data Not Found\n");
    }
}


int main()
{
    int ch = 0;
    
    while(ch !=6){
        int k, d;
        printf("1. Print list\n");
        printf("2. Print list length\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("\nYour Choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            print_list();
        } else if (ch == 2) {
            list_length();
        } else if (ch == 3) {
            int ch2 = 0;
            
            printf("1. Insert first\n");
            printf("2. Insert last\n");
            printf("3. Insert middle\n");
            printf("\nYour Choice: ");
            scanf("%d", &ch2);
            
            printf("\nEnter key:");
            scanf("%d", &k);
            
            printf("\nEnter data:");
            scanf("%d", &d);
            
            if(ch2 == 1) {
                insert_first(k, d);
            } else if(ch2 == 2) {
                insert_last(k, d);
            } else if(ch2 == 3) {
                insert_middle(k, d);
            }

        } else if (ch == 4) {
            printf("\nEnter key:");
            scanf("%d", &k);
            delete_node(k);
        } else if (ch == 5) {
            printf("\nEnter data:");
            scanf("%d", &d);
            search(d);
        }
    }
    return 0;
}

