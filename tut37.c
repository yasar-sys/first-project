#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[56];

}kuddus,bolod,mokles;

void print()
{
    printf("%s\n",kuddus.name);
}

int main()
{
    
     strcpy(kuddus.name, "kuddus bhai");
     print();
    kuddus.id = 1;
    kuddus.marks = 69;
    kuddus.fav_char = 'x';

    // printf("name:%s\n",kuddus.name);
    printf("id no: %d\n",kuddus.id);
    printf("marks:%d\n",kuddus.marks);
    printf("favorite charecter:%c\n",kuddus.fav_char);
    
    strcpy(bolod.name, "bolod bhai");
    bolod.id = 2;
    bolod.marks = 96;
    bolod.fav_char = 'y';

    printf("name:%s\n",bolod.name);
    printf("id no: %d\n",bolod.id);
    printf("marks:%d\n",bolod.marks);
    printf("favorite charecter:%c\n",bolod.fav_char);

    strcpy(mokles.name, "kuddus bhai");
    mokles.id = 3;
    mokles.marks = 99;
    mokles.fav_char = 'z';

    printf("name:%s\n",mokles.name);
    printf("id no: %d\n",mokles.id);
    printf("marks:%d\n",mokles.marks);
    printf("favorite charecter:%c\n",mokles.fav_char);
    
    
    return 0;
}