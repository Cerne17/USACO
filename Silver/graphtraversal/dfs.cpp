#include <bits/stdc++.h>
using namespace std;

int n = 5;
vector<vector<int>> adj_matrix(n);
vector<bool> visited(n);

void dfs(int current_node)
{
    if (visited[current_node])
    {
        return;
    }
    cout << "Current Node being visited: " << current_node + 1 << endl;
    visited[current_node] = true;

    for (auto neighbor : adj_matrix[current_node])
    {
        dfs(neighbor);
    }
}

int main()
{
    freopen("dfs.out", "w", stdout);

    adj_matrix[0] = {1, 3};
    adj_matrix[1] = {0, 2, 4};
    adj_matrix[2] = {1, 4};
    adj_matrix[3] = {0};
    adj_matrix[4] = {1, 2};

    dfs(0);
}