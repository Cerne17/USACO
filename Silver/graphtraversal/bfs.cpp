#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n = 6;
queue<int> q;
vector<vector<int>> adj(n);
vector<bool> visited(n);
vector<int> dis(n);
/*
    queue.push()  : adds an element
    queue.pop()   : deletes the front element
    queue.front() : retrieves the front element
    queue.empty() : retrieves whether the queue is empty or not

    deque.push_front : adds an element to the front
    deque.push_back  : adds an element to the back
    deque.pop_front  : deletes the front element
    deque.pop_back   : deletes the back element
*/

void bfs(int current_node)
{
    visited[current_node] = true;
    dis[current_node] = 0;
    q.push(current_node);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        cout << "Current Visited Node: " << s + 1 << endl;
        for (auto u : adj[s])
        {
            if (visited[u])
            {
                continue;
            }
            visited[u] = true;
            dis[u] = dis[s] + 1;
            q.push(u);
        }
    }
}

int main()
{
    freopen("bfs.out", "w", stdout);

    adj[0] = {1, 3};
    adj[1] = {0, 2, 4};
    adj[2] = {1, 5};
    adj[3] = {0};
    adj[4] = {1, 5};
    adj[5] = {2, 4};

    int starting_node = 0;

    bfs(starting_node);

    for (int i = 0; i < n; i++)
    {
        cout << "Distance from node " << starting_node + 1 << ": " << dis[i] << " (Current Node: " << i + 1 << ")" << endl;
    }
}