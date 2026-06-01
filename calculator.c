#include<stdio.h>
int division(int n , int a){
    int div=1;
    printf("the number of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the number");
        scanf("%d",&a);
        div =  a;
    }
    return div;
}
int factorial(int n){
    if(n==1 || n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
void mult(int n,int a){
    int mult =1;
    printf("enter the number of elements");
    scanf("%d",&n);
     for(int i =0;i<n;i++)
    {
        printf("enter the number");
        scanf("%d",&a);
        mult *= a;
    }
    printf("the multiplication is = %d",mult);
}
void sum(int n,int a ){
    int sum =0;
    printf("enter the number of elements");
    scanf("%d",&n);
     for(int i =0;i<n;i++)
    {
        printf("enter the number");
        scanf("%d",&a);
        sum += a;
    }
    printf("the sum is = %d",sum);
}
int main()
{
    int b; 
    printf("Enter your choice\n");
    printf("1. sum of n numbers\n");
    printf("2. multiplication of n numbers\n");
    printf("3. factorial of n numbers\n");
    printf("4. division of n numbers\n");
    printf("5. subtraction of n numbers\n");
    printf("6. exit\n");
    scanf("%d",&b);
    if(b==1)
    {
    int n,a;
    sum(n,a);
    }
    else if(b==2)
    {
    int n,a;
    mult(n,a);
    }
    else if(b==3){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("the factorial is = %d",factorial(n));
    }
    else if(b==4){
    int n,a;
    printf("the division is = %d", division(n,a));
    }
    return 0;

}