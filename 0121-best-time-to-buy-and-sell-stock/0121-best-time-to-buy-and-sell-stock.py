class Solution(object):
    def maxProfit(self, prices):
        mini = float('inf')   # minimum buying price so far
        profit = 0

        for price in prices:
            mini = min(mini, price)          # best buying price
            profit = max(profit, price-mini) # best selling profit

        return profit
