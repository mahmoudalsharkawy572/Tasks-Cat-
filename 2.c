#include<stdio.h>
#pragma pack(1)

struct Class
{
    int prog_grade,data_grade,math_grade,algo_grade;
};

void print_grade(int id,struct Class grade[]);

void main()
{ printf("\n");
  struct Class grade[10]={{11,15,17,20},{16,19,13,17},{20,21,22,23},
                          {22,25,28,29},{30,31,32,33},{40,45,22,36},
                          {10,20,30,40},{41,45,48,49},{5,7,9,16},
                          {49,50,45,47}};
  int ID;
  printf("Enter your ID :");
  scanf("%d",&ID);
  printf("\n");
  switch(ID)
  {
    case 0:
    print_grade(ID,grade);
    break;
 
    case 1:
    print_grade(ID,grade);
    break;
    
    case 2:
    print_grade(ID,grade);
    break;
   
    case 3:
    print_grade(ID,grade);
    break;
   
    case 4:
    print_grade(ID,grade);
    break;
   
    case 5:
    print_grade(ID,grade);
    break;
   
    case 6:
    print_grade(ID,grade);
    break;
   
    case 7:
    print_grade(ID,grade);
    break;
   
    case 8:
    print_grade(ID,grade);
    break;
   
    case 9:
    print_grade(ID,grade);
    break;

    default:
    printf("Wrong ID");
    break;
  
  }
  }


void print_grade(int id,struct Class grade[])
{
    printf("Programming = %d\n",grade[id].prog_grade);
    printf("Data Structures = %d\n",grade[id].data_grade);
    printf("Discrete Math = %d\n",grade[id].math_grade);
    printf("Algorithms = %d\n",grade[id].algo_grade);
    }