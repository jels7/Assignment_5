#include <iostream>
#include <vector>

class SortedArrayList {
    // The array to store the sorted list
private:
    std::vector<int> arr;

public:
    void insert(int value) {
        // Find the correct position to insert the value
        int index = 0;
        while (index < arr.size() && arr[index] < value) {
            // Move to the next element
            index++; 
        }

        // Insert the value at the correct position
        arr.insert(arr.begin() + index, value);
    }

    void print() {
        //prints all the elements of the array
        for (int value : arr) { 
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create a sorted list
    SortedArrayList list;

    // Insert values into the list
    list.insert(10);
    list.insert(1);
    list.insert(20);
    list.insert(9);
    list.insert(4);

    // Print the sorted list
    list.print();

    return 0;
}