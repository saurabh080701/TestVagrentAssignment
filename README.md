# TestVagrentAssignment
## Code Explanation

This C++ code uses object-oriented programming (OOP) concepts to calculate and print out all possible combinations of two newspaper subscriptions that are within a given weekly budget.

The code defines two classes-> Mysubscription and SubscriptionManager.

The Mysubscription class represents a newspaper subscription. It has three data members: name, dailyPrices, and weeklyCost. The name member stores the name of the newspaper, the dailyPrices member stores the daily prices of the newspaper in a vector, and the weeklyCost member stores the total weekly cost of the newspaper.

The Mysubscription class also has a constructor that takes in the name and daily prices of the newspaper and initializes the object’s data members accordingly. The constructor also calculates the total weekly cost of the newspaper by summing up its daily prices.

The Mysubscription class also has an isWithinBudget() method that takes in a budget value and returns true if the weekly cost of the newspaper is within the given budget and false otherwise.

The SubscriptionManager class manages a collection of Mysubscription objects representing different newspaper subscriptions. It has a constructor that takes in a vector of Mysubscription objects and initializes the object’s newspapers data member accordingly.

The SubscriptionManager class also has a printSubscriptionsWithinBudget() method that takes in a budget value and prints out all possible combinations of two newspaper subscriptions that are within the given budget. This method uses the isWithinBudget() method of the Mysubscription class to check if each pair of newspapers is within the user’s budget.

In the main() function of the program:

I create a SubscriptionManager object and pass in a list of Mysubscription objects representing different newspaper subscriptions.
The program then prompts the user to enter their weekly budget.
Finally, I call the printSubscriptionsWithinBudget() method of the SubscriptionManager object to print out all possible combinations of two newspaper subscriptions that are within the user’s budget.
