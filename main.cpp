#include <iostream>
#include <vector>
#include <string.h> 
#include <map>
using namespace std;
/*
ike Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

Always pick first element as pivot.
Always pick last element as pivot (implemented below)
Pick a random element as pivot.
Pick median as pivot.


Below is picking the last element for pivot.
*/

void swap( int & x , int &y){ //3  //2 
  int temp = y; // temp = 3
  y = x; // y= 2
  x = temp; // x = 3

}
// Partition the vector
// Point of the function is to take the alst element as pivot, places the pivot element correctly.
//Small on the left, big on the right of the pivot.
//                      p
// vect { 2,6,5,0,8,7,1,3}
//          i                
//        j      
// i =,j   start,end is pointer , pivot is value.
void partition(vector<int>vect , int start, int end){
  int pivot = vect[end];
  int pIndex = start;

  for(int i = 0 ; i < vect.size()-1; i++){

    if(vect[i] <= pivot){
      cout << "swapping\n";
      swap(vect[i],vect[pIndex]);
      pIndex = pIndex+1;
    }
  }
    for(int x : vect){
    cout << x;
  }
}


int main() {
  map<int, int> mp;
  int count = 0;
  vector<int> vect{ 2,6,5,0,8,7,1,3}; 
  
  partition(vect, 0,vect.size());

  //Create a recursive function that divide and conquer.

  

  
}