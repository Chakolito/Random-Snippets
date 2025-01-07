#include <iostream>
#include <queue>
#include <vector>
using namespace std;


struct Task
{
    int priority;//lower value=higher priority
    string description;

    //comparator function to assess which is higher in priority
    bool operator>(const Task& other) const
    {
        return priority > other.priority;
    }

};

int main()
{
    //min heap
    priority_queue<Task, vector<Task>,greater<Task>> eggcooking;

    eggcooking.push({3, "Add the egg"});
    eggcooking.push({1, "Heat the pan"});
    eggcooking.push({4, "Add water and cover the lid"});
    eggcooking.push({2, "Add oil to the pan"});
    eggcooking.push({5, "Remove and serve"});
    eggcooking.push({6, "Garnish"});

    cout << "How to cook an egg:\n";
    while (!eggcooking.empty())
    {
         Task task = eggcooking.top();
         cout <<task.priority<<"    "<< task.description << '\n';
         eggcooking.pop();
    }
    return 0;
}
