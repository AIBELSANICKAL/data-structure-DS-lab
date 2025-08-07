#include<stdio.h>
int main(){
int a[10];
int i,m;
int front=-1,rear=-1;
int item,choice;
printf("Enter the number of elements (max value=10):");
scanf("%d",&m);
if(m<=0||m>10){
printf("invalid size\n");
return 1;
}
printf("Enter the elements:\n");
 for(i=0;i<m;i++){
 scanf("%d",&a[i]);
 }
 if(m>0){
 front=0;
 rear=m-1;
 }
 while(1){
 printf("\nmenu");
 printf("\n1. Enqueque\n");
 printf("\n2.dequque\n");
 printf("\n3.Display\n");
 printf("\n4.Exit\n");
 printf("Enter your choice:");
 scanf("%d",&choice);
 if(choice==1){
  if((rear+1)%10==front){
  printf("quequeque is full cannot enqueue.\n");
  }
  if(!((rear+1)%10==front)){
  printf("Enter the item to the enque:");
  scanf("%d",&item);
  rear=(rear+1)%10;
  a[rear]=item;
 if (front==-1){
 front=0;
 }
 printf("item deququed:%d",item);
 }
 }
 if(choice==2){
 if (front==-1){
 printf(" empty queque cannotdequeue");
 }
 if (!(front==-1)){
 item=a[front];
 printf("item deququed:%d\n",item);
 if(front==rear){
 front=rear=-1;
 }
 else{
 front=(front+1)%10;
 }
 }
 }
 if(choice==3){
 if(front==-1){
 printf("queue is empty");
 }
 if (!(front==-1)){
 printf("queue elements:\n");
 i=front;
 while(1){
 printf("%d",a[i]);
 if(i==rear)
 break;
 i=(i+1)%10;
 }
 printf("\n");
 }
 }
 if(choice==4){
 printf("exiting program");
 break;
 }
 if(choice<1||choice>4){
 printf("invalid choice.try again.\n");
 }
 }
 return 0;
 }
 
 
