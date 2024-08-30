#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int val;
    struct Node *next;
}Node;

Node* insertIntoSortedList(Node *head,int val){
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->val = val;
        new_node->next = NULL;

        if(head==NULL || val<head->val){
            new_node->next = head;
            head = new_node;
        }
        else{
            Node *prev = head;
            Node *temp = head->next;
            while (temp!=NULL && val>temp->val){
                prev = temp;
                temp=temp->next;
            }
            new_node->next = temp;
            prev->next = new_node;
        }
        return head;
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}
int getMax(int arr[],int n){
    int max = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}
void bucketSort(int arr[],int n){
    int size = getMax(arr,n);
    Node *bucket[size+1];
    for(int i=0;i<size+1;i++){
        bucket[i] = NULL;
    }

    for(int i=0;i<n;i++){
        bucket[arr[i]] = insertIntoSortedList(bucket[arr[i]],arr[i]);
    }

    int k = 0;
    for(int i=0;i<size+1;i++){
        Node *b1 = bucket[i];
        for(Node *temp = b1; temp!=NULL;temp=temp->next){
            arr[k++] = temp->val;
        }
    }
}

int main(){
    int arr[] = {1,5,3,6,4,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array Before Sorting :");
    printArr(arr,n);
    bucketSort(arr,n);
    printf("Array After Sorting :");
    printArr(arr,n);
}