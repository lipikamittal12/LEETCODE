/*You are given two integer arrays prices and discounts.

The value prices[i] represents the price of the ith item, and discounts[j] represents a discount percentage.

You may apply discounts subject to the following rules:

Each discount can be applied to at most one item.
Each item can receive at most one discount.
An item may also receive no discount.
If a discount of d percent is applied to an item with price p, its final price becomes (p * (100 - d)) / 100. The final price is not rounded.

Return the minimum possible sum of final prices after assigning discounts optimally. Answers within 10-5 of the actual answer will be accepted.*/
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());

        double total = 0;
        int m = min(prices.size(), discounts.size());

        for (int i = 0; i < m; i++) {
            total += prices[i] * (100 - discounts[i]) / 100.0;
        }

        for (int i = m; i < prices.size(); i++) {
            total += prices[i];
        }

        return total;
    }
};