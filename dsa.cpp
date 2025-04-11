#include<iostream>
using namespace std;

main()
{
    int i,n;
    cout<<"enter the table:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<"2 *"<<i<<"="<<2*i<<endl;
    }
}

//prime numbers for a given specific range and whether the given number is prime or not in one code using switch case.
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b;
    //printing the prime number for a given range
    cout<<"give the range starting value";
    cin>>a;
    cout<<"give the ending value";
    cin>>b;
    int count=0;

    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count+=1;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
            count=0;
        }
    }
    return 0;
}
//reverse of a number and the given number is pallendrome number or not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the number:"<<end;
    cin>>n;
    m=n;
    while(n>0)
    {
        remainder  = remainder%n;
        result=(result*10)+remainder;
        n=n/10;
    }
    if(m==n)
    {
        cout<<m<<" is a pallindrome number."
    }
    else
    {
        cout<<m<<" is not a pallindrome number."
    }
    return 0;
}
//factorial 
//functions
  note: the advantage of using the void return type is the compiler does note wait for any return type so the compilation time willl be minimized or saved.
//wap to print fibonaccci series using functions and also using recursion
#include<bits/stdc++.h>
using namespace std;

void fibonaccci(int n)
{
 int a=0 , b=1,sum; 
 cout<<a<<" "<<b;
 do
 {
    sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
    sum=0;
 }while(sum<=n);
}

/*
by using for loop
for(int i=2;i<=n;i++)
{
    sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
    sum=0;
}

*/
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"the series is:"<<endl;
    fibonaccci(n);
    return 0;
}

//wap to swap two numbers
#include<bit/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a=b;
    b=temp;
    cout<<"a ="<<a<<" b="<<b;
}
int main()
{
    int a,b;
    cin<<a;
    cin<<b;
    swap(a,b);
    return 0;
}

//call by value and call by reference and write programs on swapping 
swapping call by reference
#include<bits/stdc++.h>
using namespace std;

void swap(int &a , int &b)
{
    int temp = a;
    a=b;
    b=temp;
    cout<<"the value of x: "<<a<<endl<<"the value of y :"<<b;
}

int main()
{

    int a=100 , b=200;
        cout<<"the value of x: "<<x<<endl<<"the value of y :"<<y;

    swap(a,b);//in "c" language there is a different way of pass by reference type
    return 0;
}

//factorial using recurion
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0 | n==1 | n<0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int a=10;
    cout<<"the factorial of"<<a<<" is : "<<fact(a);
    return 0;
}


//find the sum of individual digits of a given number using while loop
#include<bits/stdc++>
using namespace std;
int main()
{ int n;
    cout<<"enter the number";
    cin<<n;
 while(n>0)
 {
    remainder=n%remainder;
    sum=sum+result;
    n=n/10;
    
 }

return 0;
}

//sum of individual digits of a given no using recursion
#include<bits/stdc++.h>
using namespace std;
int indi(int n)
{
    if(n<10)
    return n;
    return n%10+sum(n/10);
}
int main()
{
    int n;
    cin<<n;
    int sum(n);
    return 0;
}
//write a code for fibonacci series using recursion
#include<bits/stdc++.h>
using namespace std;

int fibo(int n)//n=7
{   int a=0,b=1,c=1;
    if(n==1)
    {
        return c;
    }
    else 
    {   
        b=c;
        a=b;
         return a+b; // 0 1 1 2 3 5 8
    }
        
    
}

// sir prog for printing fibonacci with recursion
#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fib(n-2);
    }
}

int main()
{
    int i,n;
    cin<<n;
    cout<<"the fibonacci series is:";
    for(i=0;i<n;i++)
    {
        cout<<fibo(i)<<" ";
    }
    return 0;
}

//wap to read and print the sum of the numbers in the array using dynamic memory allocation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"write the size :"<<endl;
    cin>>n;
    int *a,sum=0;
    a=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<sum+=a[i]<<" ";

    }
    return 0;
}

//wap to insert an element in a particular position,begining,end and delete an element in a particular position , begining , end

//linear and binary element
#include<bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}
//wap to find minand max element in the array
#include<bits/stdc++.h>
using namespace std;
int array[];
void read(int array[] , int n)
{
    int i;
}
int main()
{
    int n;
    cout<<"enter the size that you want to use in an array:"<<endl;
    cin>>n;
   
    read(array , n);
    return 0;
}

//sample code
#include <iostream>
using namespace std;

int array[100], n; // n is the size of the array

// Reading the array
void reading() {
    int i;
    for(i = 0; i < n; i++) {
        cin >> array[i];
    }
}

// Printing the array
void printing() {
    int i;
    for(i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl; // For better readability, add a newline after printing
}

// Insert at the beginning
void insert_at_begining() {   
    int num;
    cout << "Enter the number to insert at the beginning:" << endl;
    cin >> num;
    
    // Shift all elements to the right
    for(int i = n; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = num; // Insert at the first position
    n++; // Increase the size of the array
}

int main() {
    int c;
    cout << "Enter the size of the array that you want to use:" << endl;
    cin >> n;
    do{
    cout << "Enter your choice:" << endl;
    cout << "1. Reading\n2. Printing\n3. Insert at beginning\n4. Insert at end\n5. Insert at particular\n6. Delete at beginning\n7. Delete at end\n8. Delete at particular\n";
    
    cin >> c;
 
    
    switch(c) {
        case 1:
            reading();
            break;
        case 2:
            printing();
            break;
        case 3:
            insert_at_begining();
            break;
        default:
            break;
    }
 }while(c>0);
    return 0;
}



