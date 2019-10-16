/* data_types.c

Assignment 1 - Mason G.- CS133c
*/

#include <stdio.h>
/* Here we include stdio and we define printf as print to make things easier as we transition from Python*/


int main()
{
    //Here we give our variables a name
    char highest_grade;
    float gpa;
    int age;

    //Here we give our variables a value
    //char name[20] = 'Mason';  // This line prints out the ASCII code for the text. Not the actual text??
    int student_id = 00464132;
    age = 21;
    highest_grade = "D";
    gpa = 2.90;

    /*This print statement shows the user each of the variables and their values.*/

    printf("--Intro to Data Types--\n");
    printf("\nBelow is a single students details -->\n");
    printf("\nStudent ID: %d\n", student_id);
    printf("Age: %d\n", age);
    printf("Highest Grade: %c\n", highest_grade);
    printf("Cummaltive GPA: %f", gpa);
    return 0;
}