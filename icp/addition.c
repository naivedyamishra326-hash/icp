int main() {
    int a, b, sum, difference, product ,remainder;
    float quotient;
    

    // Read two integers
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Perform arithmetic operations
    // Addition
    sum = a+b; 
    // Subtraction
    difference = a -b;
    // Multiplication
    product = a*b;
    // Floating-point division
    quotient = (float)a/b;    
    // Modulus
    remainder = a%b;
    // Display results
    printf("\nResult\n:");
    printf("Addition = %d\n" ,sum);
    printf("Subtraction = %d\n" ,difference);
    printf("Multiplication = %d\n" ,product);
    printf("Division = %.2f\n " ,quotient); 
    printf("Modulus = %d\n" ,remainder);
    return 0;
}
