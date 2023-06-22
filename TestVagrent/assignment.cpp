#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Newspaper {
public:
    string name;
    vector<double> dailyPrices;
    double weeklyCost;

    Newspaper(string name, vector<double> dailyPrices) : name(name), dailyPrices(dailyPrices) {
        weeklyCost = 0;
        for (double price : dailyPrices) {
            weeklyCost += price;
        }
    }
};

int main() {
    vector<Newspaper> newspapers = {
        Newspaper("TOI", {3, 3, 3, 3, 3, 5, 6}),
        Newspaper("Hindu", {2.5, 2.5, 2.5, 2.5, 2.5, 4, 4}),
        Newspaper("ET", {4, 4, 4, 4, 4, 4, 10}),
        Newspaper("BM", {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5}),
        Newspaper("HT", {2, 2, 2, 2, 2, 4, 4})
    };

    double budget;
    cout << "Enter your weekly budget: ";
    cin >> budget;

    cout << "Possible combinations of two newspaper subscriptions for your budget: " << endl;
    bool first = true;
    for (int i = 0; i < newspapers.size(); i++) {
        for (int j = i + 1; j < newspapers.size(); j++) {
            if (newspapers[i].weeklyCost + newspapers[j].weeklyCost <= budget) {
                if (!first) cout << ", ";
                cout << "{\"" << newspapers[i].name << "\", \"" << newspapers[j].name << "\"}";
                first = false;
            }
        }
    }
    cout << endl;

    return 0;
}