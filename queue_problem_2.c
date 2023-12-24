#include<stdio.h>
#include<stdlib.h>
#define max 50
int f = 0;
int r = 0;
void is_empty();
void is_fill();
void enqueue();
void dequeue();
void display();

int queue[max];
void main(){
    while(1){
    int c;
    printf("\nEnter the choice:");
    scanf("%d",&c);
    switch(c)
    
    {
        case 1:
        is_empty();
        break;
        case 2:
        is_full();
        break;
        case 3:
         enqueue();
         break;
         case 4:
         dequeue();
         break;
         case 5:
         display();
         break;
         case 6:
         exit(0);
         break;
         default:
         printf("\n invalid input");
    }
    }
}
void is_empty()
{
    if (f==r)
    {
        printf("empty");
        
    }
    else
    {
        printf("not empty");
    }
}
void is_full()
{
    if (max== r)
    {
        printf("full");
        
    }
    else
    {
        printf("not fill");
    }
}
void enqueue()
{
    if (max == r)
    {
        printf("full");
    }
    else
    {
        int element;
        printf("\nEnter the element:");
        scanf("%d",&element);
        queue[r] = element;
        r++;
    }
}
void dequeue()
{
    if(f == r)
    {
        printf("empty");
    }
    else
    {
        for(int i=0;i<r-1;i++)
        {
        queue[f]=queue[i+1];
        r--;
        }
    }
}
void display()
{
    if(f == r)
    {
        printf("empty");
        
    }
    else
    {
        for (int i=f;i<r;i++)
        {
            printf("%d \t",queue[i]);
        }
    }
}
