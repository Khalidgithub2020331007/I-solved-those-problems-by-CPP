
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        cout<<endl;
        priority_queue<std::string> maxPriorityQueue;

    // Insert elements into the priority queue
    maxPriorityQueue.push("apple");
    maxPriorityQueue.push("banana");
    maxPriorityQueue.push("orange");
    maxPriorityQueue.push("grape");

    // Print elements in descending order of priority
    std::cout << "Max Priority Queue (Descending Order):\n";
    while (!maxPriorityQueue.empty()) {
        std::cout << maxPriorityQueue.top() << " ";
        maxPriorityQueue.pop();
    }
    }
}
