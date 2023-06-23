#include <bits/stdc++.h>
using namespace std;

class Mysubscription {
public:
    string name;
    vector<double> dailyPrices;
    double weeklyCost;

    Mysubscription(string name, vector<double> dailyPrices) : name(name), dailyPrices(dailyPrices) {
        weeklyCost = 0;
        for (double price : dailyPrices) {
            weeklyCost += price;
        }
    }

    bool isWithinBudget(double budget) {
        return weeklyCost <= budget;
    }
};

class SubscriptionManager {
public:
    vector<Mysubscription> newspapers;

    SubscriptionManager(vector<Mysubscription> newspapers) : newspapers(newspapers) {}

    void printSubscriptionsWithinBudget(double budget) {
        cout << "Combinations of two newspaper subscriptions in a budget: " << endl;
        bool first = true;
        for (int i = 0; i < newspapers.size(); i++) {
            for (int j = i + 1; j < newspapers.size(); j++) {
                if (newspapers[i].isWithinBudget(budget - newspapers[j].weeklyCost)) {
                    if (!first) cout << ", ";
                    cout << "{\"" << newspapers[i].name << "\", \"" << newspapers[j].name << "\"}";
                    first = false;
                }
            }
        }
        cout << endl;
    }
};

int main() {
    SubscriptionManager manager({
        Mysubscription("TOI", {3, 3, 3, 3, 3, 5, 6}),
        Mysubscription("Hindu", {2.5, 2.5, 2.5, 2.5, 2.5, 4, 4}),
        Mysubscription("ET", {4, 4, 4, 4, 4, 4, 10}),
        Mysubscription("BM", {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5}),
        Mysubscription("HT", {2, 2, 2, 2, 2, 4, 4})
    });

    double budget;
    cout << "Enter the weekly budget: ";
    cin >> budget;

    manager.printSubscriptionsWithinBudget(budget);

    return 0;
}
