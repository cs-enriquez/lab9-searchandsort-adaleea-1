#include <iostream>
#include <string>

using namespace std;

// write a function to print the contents of your array
//   bonus! try to implement your function so that it can accept
//     many types of data (int, char, string, etc.)
template <typename fype> // ???
void printArray(fype arr[], int size) {
    cout << arr[i] << " ";
}
cout << endl;
}

// Implement a sequential search algorithm
// your function should search for a target value (target)
//    within the indices of "start" to "end"
// return true if target exists in the array within this range,
//    return false otherwise
bool seqSearch(string target, string arr[], int start, int end) {
    for(int i = start; i <= endl; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

// Implement an iterative binary search 
// Return true if target exists in the array with size n,
//    return false otherwise 
bool binSearch(float target, float arr[], int n) {
    int low = 0, high = n-1;
    while (low <= high){
        int mid = low+(high - low)/2;
        if (arr[mid] == target){
            return true;
        }
        else if (arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return false;	
}

// Implement a recursive binary search 
// Return true if target exists in the array with size n
//   return false otherwise
bool binSearchR(char target, char charray[], int low, int high) {
    // base case
    if(low>high) return false;
    int mid = low + (high - low) /2;
    //general case
    if(charray[mid] == target){
        return true;
    }
    else if(charray[mid] < target){
    return binSearchR(target, charray, mid+1, high);
    }
    else{
        return binSearchR(target, charray, low, mid-1);
    }
}

// Implement a brand new sorting algorithm
//    Don't use a reference for this!
//    Be sure to do your best to implement the algorithm's logical steps
// Step 1: implement a function swap() that will swap any two elements in an array,
//          given their indices
// Step 2: implement a function minFind() that will find and return 
//          the **index** of the smallest element in an array
/*
Step 3: Finally, use your two functions above to complete the following in newSort():
        1 - search through the array to find the location of the smallest value
        2 - swap this value with the value at the start of the array
        3 - the first element is now sorted! 
            Redo your sort on the remaining elements (from index 1 to end)
            On the next iteration, you should be swapping the smallest remaining value 
                with the second index value in the array
            ...then swapping the smallest remaining value with the third indexed value... etc.
            
        4 - continue iterating until you reach the end of the list
        *** You can make this recursive, if you wish!
*/
int minFind(double darray[], int start, int n) {
    int minIndex = start; 
    for (int i = start + 1; i < n; i++) {
        if (darray[i] < darray[minIndex]) {
            minIndex = i; 
        }
    }
    return minIndex;
}

void swap(double darray[], int i, int j) {
    double temp = darray[i];
    darray[i] = darray[j];
    darray[j] = temp;
}

int minFind(double darray[], int start, int n) {
    int minIndex = start;
    for(int i = start +1; i<n; i++){
        if (darray[i] < darray[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}

void newSort(double darray[], int n) {
    for(int i = 0; i<n-1; i++){
        int minIndex = minFind(darray, i, n);
        swap(darray, i, minIndex);
    }
}
