#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int array[5] = {10,20,30,40,50};
int binarySearch(int target);

int main() {
    binarySearch(10);
    binarySearch(20);
    binarySearch(30);
    binarySearch(40);
    binarySearch(50);
    binarySearch(60);
    return 0;
}
// log2n = x
// 2^x = n
// n = length of array, x + 1 = max number of passthroughs to find target
// useful for sorted arrays

int binarySearch(int target) {
    //cout -- for visual seperation of function calls
    cout << "---------------------------------------------------------------\n";
    // min = where the array index starts
    int min = 0;
    // max = which index the last element of the array is in (array.length - 1)
    int max = 4; 
    // declare guess variable 
    int guess;
    //  declare variable to track the amount of passthroughs it takes to find or determine it does not exist
    int passthroughs = 0;
    cout << endl << "Searching array for the number: " << target << endl <<endl;  
    // while the array start is less than the array end
    while(min <= max) {
        //track passthroughs
        passthroughs++;
        //average max and min together. round down to closest int
        guess = floor((max+min)/2);
        cout << "The average of max index(" << max << ") and min index(" << min 
             << ") is " << guess << endl;
        // if the value of the array at index "guess" is equal to the target
        if (array[guess] == target) {
            //target was found
            cout << "Found result at index: " << guess << endl;
            //return the index of the location target was found
            cout << "Total number of passthroughs: " << passthroughs << endl << endl;
            return guess;
        // if the value of the array at index "guess" is less than the target
        } else if (array[guess] < target) {
            //cout comparison | the value of the array at the index is lower than the target
            cout << "Comparison: " << array[guess] << " < " << target << endl
                 <<  "Setting minimum index to guess + 1" << endl << endl;
            min = guess + 1;
            // if the value of the array at index "guess" is more than the target
        } else {
            //cout comparison | the value of the array at the index is higher than the target
            cout << "Comparison: " << array[guess] << " > " << target << endl
                 <<  "Setting maximum index to guess - 1" << endl << endl;
            max = guess - 1; 
        }
    };
    //if min becomes greater than max, while loop is broken. # does not exist in array
    cout << "The target number does not exist in this array" << endl;
    return -1;
}