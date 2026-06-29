class Solution {
public:
    int findmaxElement(vector<int>& piles) {
        int maximum = INT_MIN;
        for(int i = 0; i < piles.size(); i++) {
            maximum = max(maximum, piles[i]);
        }
        return maximum;
    }
    long long totalHours(vector<int>& piles, int speed) {
        long long hours = 0;
        for(int i = 0; i < piles.size(); i++) {
            hours += (piles[i] + speed - 1) / speed;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmaxElement(piles);
        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long hours = totalHours(piles, mid);
            if(hours <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};