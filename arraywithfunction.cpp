
//====================================QUESTION [1]=======================================================

// swip last and first second number

#include <iostream>
using namespace std;

void add(int arr[]){
    int temp = arr[1];
    arr[1] = arr[3]; 
    arr[3] = temp;

}

int main(){
    int arr[] = {4,5,6,7,8};
    add(arr);

    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//====================================QUESTION [2]=======================================================

// Adding  index 0 and index 4 and replace it index feome 2 .

#include <iostream>
using namespace std;

void add(int arr[]){
 arr[2] = arr[0]+arr[4];
}

int main(){
    int arr [] = {3,8,2,6,4};
    add(arr);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}


//====================================QUESTION [3]=======================================================

// Arange the all 0 at last of array;

#include <iostream>
using namespace std;

void nonzero(int arr [] , int size){
    int j = 0;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] != 0){
            int temp  = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int i = 0; i <size ; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {6, 0, 8, 0, 0, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    nonzero(arr , size);

}


//====================================QUESTION [4]=======================================================

// Array in ascending order;

#include<iostream>
using namespace std;

void sortarray(int arr [] , int size){
 
    for(int i = 0; i < size; i++){
         for(int j = i+1; j < size; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
         }
    }
}

int main(){
    int arr [] = {0,1,5,7,3};
    int size = 5;
   sortarray(arr, size);

    cout<<"Sorted array in ascending order is: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//====================================QUESTION [5]=======================================================

// reverce the arry using function
#include <iostream>
using namespace std;

void rev_array(int arr[] , int size ){

    int i = 0;
    int j = size - 1;

    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for( int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

}

int main(){

    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int size = 10; 

    rev_array(arr,size);
    return 0;
}
// Output: 10 9 8 7 6 5 4 3 2 1

//====================================QUESTION [6]=======================================================

//  the meximum number of an arrray

#include <stdio.h>
#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {1, 9, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    cout<<"Maximum number in the array is: " << max ;
    return 0;
}

//====================================QUESTION [7]=======================================================


// find the minimum number of the arrray.

#include <iostream>
using namespace std;

int min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[] = {7, 4, 3, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = min(arr, size);
    cout<<"minimum number in the array is: " << min ;
    return 0;
}


//====================================QUESTION [8]=======================================================

//  the array in descending order ;


#include<iostream>
using namespace std;

void sortarray(int arr [] , int size){
 
    for(int i = 0; i < size; i++){
         for(int j = i+1; j < size; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
         }
    }
}

int main(){
    int arr [] = {0,1,5,7,3};
    int size = 5;
   sortarray(arr, size);

    cout<<"Sorted array in descending order is: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//====================================QUESTION [9]=======================================================


// sum of an array

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {7, 3, 1, 8, 5};
    int size = 5;
    sumArray(arr , size);
    cout<< "Sum of array elements: " << sumArray(arr, size) <<endl; 
}

//====================================QUESTION [10]=======================================================


// sum of an array

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {7, 3, 1, 8, 5};
    int size = 5;
    sumArray(arr , size);
    cout<< "Sum of array elements: " << sumArray(arr, size) <<endl; 
}
