#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Declare a max-heap (default behavior)
    priority_queue<int> maxHeap;

    // Add elements to the priority queue
    maxHeap.push(10);
    maxHeap.push(50);
    maxHeap.push(20);
    maxHeap.push(40);
    maxHeap.push(30);

    // Display elements in descending order cuz of max heap
    cout << "Priority queue elements in descending order: ";
    while (!maxHeap.empty())
        {
        cout << maxHeap.top() << " "; // Access the top element
        maxHeap.pop();                     // Remove the top element
        }
    cout << '\n';

    return 0;
}
