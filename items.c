#include<stdio.h>
int main()
{
    int n;
    printf("Enter the food item of your choice=");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\n Food item-Pizza");
        printf("\n Price-Rs 239");
    }
    else if(n==2)
    {
        printf("\n Food item-Burger");
        printf("\n Price-Rs 129");
    }
    else if(n==3)
    {
        printf("\n Food item-Pasta");
        printf("\n Price-Rs 179");
    }
    else if(n==4)
    {
        printf("\n Food item-French Fries");
        printf("\n Price-Rs 99");
    }
    else if(n==5)
    {
        printf("\n Food item-Sandwich");
        printf("\n Price-Rs 149");
    }
    else
    {
        printf("No food choosen");
    }
    return 0;
}
