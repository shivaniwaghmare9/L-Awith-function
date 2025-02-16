


//====================================QUESTION [1]=======================================================

// Online C++ compiler to run C++ program online
//=================================fibonaachi with function==============================
#include <iostream>
using namespace std;
int fibo(int number){
    int ft=0;
    int st=1;
    int next=0;
    for(int i=1; i<=number; i++)
    {
        if(i==1)
        {
            cout<<ft;
            continue;
        }
        if(i==2)
        {
            cout<<st;
            continue;
        }
        next=ft+st;
        ft=st;
        st=next;
     if(i!=number)
       {
         cout<<next;
       }
    }
    return next;
    
}
int main() {
   int n;
   cout<<"enter n:";
   cin>>n;
   cout<<fibo(n);
    
}

//====================================QUESTION [2]=======================================================

// Online C++ compiler to run C++ program online
//=================================sum with function==============================
#include <iostream>
using namespace std;
int sum(int number){
    int sum=0;
    for(int i=1; i<=number; i++)
    {
        sum=sum+i;
    }
    return sum;
    
}
int main() {
   int n;
   cout<<"enter n:";
   cin>>n;
   cout<<sum(n);
    
}

//====================================QUESTION [3]=======================================================

// Online C++ compiler to run C++ program online
//=================================factorial with function==============================
#include <iostream>
using namespace std;
int sum(int number){
    int sum=1;
    for(int i=1; i<=number; i++)
    {
        sum=sum*i;
    }
    return sum;
    
}
int main() {
   int n;
   cout<<"enter n:";
   cin>>n;
   cout<<sum(n);
    
}

//====================================QUESTION [4]=======================================================
// Table

#include <iostream>
using namespace std;

void Table(int n) {
    for (int i = 1; i <= 10; i++) {
        cout <<"The table of " << n << " is: " << endl;
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    Table(4);
    return 0;
}

//====================================QUESTION [5]=======================================================
// Reverse the given number 
#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    cout <<"Reverse of 46378 is: ";
    cout << reverseNumber(46378);
    return 0;
}

//====================================QUESTION [6]=======================================================
// Print the numbers from 1 to 10.
#include <iostream>
using namespace std;

void printNumbers(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
}

int main() {
    printNumbers(10);
    return 0;
}

//====================================QUESTION [7]=======================================================

//  Check if the number is Prime

#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << (Prime(13) ? "Prime" : "Not Prime");
    return 0;
}

//====================================QUESTION [8]=======================================================
//  Find the sum of tne natural numbers from 1 to N.

#include <iostream>
using namespace std;

int sum_of_N(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << sum_of_N(10);
    return 0;
}

//====================================QUESTION [9]=======================================================

// Print the even numbers 

#include <iostream>
using namespace std;

void Even(int n) {
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
}

int main() {
    Even(10);
    return 0;
}

//====================================QUESTION [10]=======================================================
//  Count the digits in a given number

#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    cout << "The number of digits in the number is: ";
    cout << countDigits(98745);
    return 0;
}


