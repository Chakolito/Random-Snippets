#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    //queue <type> name of queue
    queue<string> queue;

    // Enqueue/add elements
    queue.push("warr");
    queue.push("mage");
    queue.push("priest");

    // Display the front element
    cout << "Front element: " << queue.front() << '\n';

    // Dequeue/remove an element
    queue.pop();

    //show front element in the queue
    cout << "Front element after dequeue: " << queue.front() << '\n';

    queue.push("warr");

    //show last element in the queue
    cout << "Last element after dequeue: " << queue.back() << '\n';

    // Display the size of the queue
    cout << "Queue size: " << queue.size() << '\n';

    // Check if the queue is empty
    cout << "Is queue empty? " << (queue.empty() ? "Yes" : "No") << '\n';

    return 0;
}
