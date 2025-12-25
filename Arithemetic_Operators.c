#include<stdio.h>
int main(){
    int A, B;
    int Addition, Subtraction, Multiplication, Division, Modulus;
    printf("Enter value of A\n");
    scanf("%d", &A);
    printf("Enter value of B\n");
    scanf("%d",&B);
    Addition = A + B;
    Subtraction = A - B;
    Multiplication = A * B;
    Division = A / B;
    Modulus = A % B;

    printf("Addition: %d\n", Addition);
    scanf("%d", &Addition);
    printf("Subtraction: %d\n", Subtraction);
    scanf("%d", &Subtraction);
    printf("Multiplication: %d\n", Multiplication);
    scanf("%d", &Multiplication);
    printf("Division: %d\n", Division);
    scanf("%d", &Division);
    printf("Modulus: %d\n", Modulus);
    scanf("%d", &Modulus);
    return 0;



}