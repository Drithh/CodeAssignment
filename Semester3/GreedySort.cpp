#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef struct node {
    int number;
    int weight;
    int profit;
    float density;
} node;

vector<int> greedyByWeight(vector<node> &nodes, int capacity) {
    sort(nodes.begin(), nodes.end(),
         [](const node &a, const node &b) { return a.weight < b.weight; });
    vector<int> v;
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

vector<int> greedyByProfit(vector<node> &nodes, int capacity) {
    sort(nodes.begin(), nodes.end(),
         [](const node &a, const node &b) { return a.profit > b.profit; });
    vector<int> v;
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

vector<float> greedyByDensity(vector<node> &nodes, int capacity) {
    sort(nodes.begin(), nodes.end(),
         [](const node &a, const node &b) { return a.density > b.density; });
    vector<float> v;
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
        nodes[i] = {i + 1, weight[i], profit[i], density[i]};
    }
    int capacity = 100;

    // Greedy by Weight
    vector<int> weightResult = greedyByWeight(nodes, capacity);
    cout << "Weight\t:";
    for (const auto i : weightResult) {
        cout << i << ' ';
    }
    cout << '\n';

    // Greedy by Profit
    vector<int> profitResult = greedyByProfit(nodes, capacity);
    cout << "Profit\t:";
    for (const auto i : profitResult) {
        cout << i << ' ';
    }
    cout << '\n';

    // Greedy by Density
    vector<float> densityResult = greedyByDensity(nodes, capacity);
    cout << "Density\t:";
    for (const auto i : densityResult) {
        cout << i << ' ';
    }
    cout << '\n';
}