queue<int> bfs;
bool explored[n]; memset(explored, false, n * sizeof(bool));
bfs.emplace(0);
explored[0] = true;

while (!bfs.empty())
{
    int node = bfs.front();
    bfs.pop();

    for (auto neighbour : adjList[node])
        if (!explored[neighbour])
        {
            bfs.emplace(neighbour);
            explored[neighbour] = true;
        }
}
