#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct node {
    int number;
    int weight;
    int profit;
    float density;
};

template <class T, class T2>
T greedySort(vector<node> &nodes, int capacity, T2 node::*memPtr,
             bool greater) {
    sort(nodes.begin(), nodes.end(), [=](const node &a, const node &b) {
        return greater ? a.*memPtr > b.*memPtr : a.*memPtr < b.*memPtr;
    });
    T v;
    for (auto i : nodes) {
        if (i.weight <= capacity) {
            capacity -= i.weight;
            v.push_back(i.number);
        }
        if (capacity == 0) {
            return v;
        }
    }
    return v;
}


int main() {
    // Deklarasi properti Knapsack
    int weight[] = {200, 100, 90, 40, 20, 10};
    int profit[] = {80, 70, 36, 8, 20, 4};
    float density[] = {0.4, 0.7, 0.4, 0.2, 1.0, 0.4};

    int size = (sizeof(weight) / sizeof(weight[0]));
    vector<node> nodes(size);
    for (int i = 0; i < size; i++) {
        nodes[i].number = i + 1;
        nodes[i].weight = weight[i];
        nodes[i].profit = profit[i];
        nodes[i].density = density[i];
    }
    int capacity = 100;


    // Greedy by Weight
    vector<int> weightResult =
        greedySort<vector<int>>(nodes, capacity, &node::weight, false);

    cout << "Weight\t:";
    for (const auto i : weightResult) {
        cout << i << ' ';
    }
    cout << '\n';

    // Greedy by Profit
    auto profitResult =
        greedySort<vector<int>>(nodes, capacity, &node::profit, true);
    cout << "Profit\t:";
    for (const auto i : profitResult) {
        cout << i << ' ';
    }
    cout << '\n';

    // Greedy by Density
    auto densityResult =
        greedySort<vector<float>>(nodes, capacity, &node::density, true);
    cout << "Density\t:";
    for (const auto i : densityResult) {
        cout << i << ' ';
    }
    cout << '\n';
}