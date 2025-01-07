#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Declare a min-heap by using vector<type> & greater<type>
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Add elements to the priority queue
    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);
    minHeap.push(40);
    minHeap.push(30);

    // Display elements in ascending order cuz of min heap
    cout << "Priority queue elements in ascending order: ";
    while (!minHeap.empty())
        {
        cout << minHeap.top() << " "; // Access the smallest element
        minHeap.pop();                     // Remove the top element
        }
    cout << '\n';
    return 0;
}
