# Assignment_5

This array-based list that will automatically insert values in ascending order.
This function performs a linear search to find the correct position to insert the value into the 
array arr while maintaining the sorted order:
        public:
    void insert(int value) {
        // Find the correct position to insert the value
        int index = 0;
        while (index < arr.size() && arr[index] < value) {
            // Move to the next element
            index++; 
This code creates a sorted list, inserts some values into it, and then prints the sorted list:
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
