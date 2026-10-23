
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            int daysneeded = 1;
            int currload = 0;

            for (int parcel : weights) {
                if (currload + parcel > mid) {
                    daysneeded++;
                    currload = parcel;
                } else {
                    currload += parcel;
                }
            }

            if (daysneeded > days) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
};
