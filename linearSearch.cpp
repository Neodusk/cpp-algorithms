#include <iostream>
#include <cmath>
using std::cout;
using std::endl;


int array[5] = {10,20,30,40,50};
const int array_length = 5;
int linearSearch(int target);

int main() {
    linearSearch(10);
    linearSearch(20);
    linearSearch(30);
    linearSearch(40);
    linearSearch(50);
    linearSearch(60);
    return 0;
}
//start at index 0 and move through the array 1 at a time until it reaches the last index in the array
int linearSearch(int target) {
    // declare variable to track the amount of passthroughs it takes to find or determine it does not exist
    int passthroughs = 0;
    // cout -- for visual seperation of function calls
    cout << "---------------------------------------------------------------\n";
    cout << endl << "Searching array for the number: " << target << endl <<endl;
    // loop through array until value is found, else return -1
    for(int i=0; i<=array_length; i++) {
        // track passthroughs
        passthroughs++;
        //if the value at array[i] == target, target found
        if (array[i] == target) {
            //target was found
            cout << "Found result at index: " << i << endl;
            //return the index of the location target was found
            cout << "Total number of passthroughs: " << passthroughs << endl << endl;
            return i; 
        // if the value at array[i] != target, continue to move through array    
        } else {
            // if i < array_length, compare
            if (i < array_length) {     
            cout << "Comparison: " << array[i] << " != " << target << endl;
            cout << "Moving to index(" << i << ")" << endl << endl;
            // else if i>= array_length, reached end of array    
            } else {
                cout << "Reached end of array" << endl;
            }
        }
    }
    cout << "The target number does not exist in this array" << endl;
    cout << "Total number of passthroughs: " << passthroughs << endl << endl;
    return -1;
}