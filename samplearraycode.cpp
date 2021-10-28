#include<iostream>
using namespace std;

int sum(int [], int); // function prototype

int main(){
   int arr[100]; // create an array to store 100 values
   int asum; // value to store the sum of the array's values
   for(int x = 0; x < 100; x++){ // fill the array with values
     arr[x] = x*2 -7; // x goes 0 to 99
   }

   // print the array
   for(int x = 0; x < 100; x++){
     cout << arr[x] << endl; // x goes 0 to 99
   }

   // print the location of the array in main
   cout << "In main the array is at: " << arr << endl;

   asum = sum(arr,100); // use the function to calculate the sum
   cout << "the sum is: " << asum << endl;

}

// Sum function, notice that it needs the array and the length
int sum(int a[], int len){
   int answer = 0;
   // print the location of the array in function
   cout << "In the function the array is at: " << a << endl;
   // notice in the output that 'both' arrays are at the same location in memory.
   // really there is only one array in memory, sometimes called arr and sometimes called a.

   for(int i = 0; i < len; i++){
     answer += a[i];
   }
   return answer;
}