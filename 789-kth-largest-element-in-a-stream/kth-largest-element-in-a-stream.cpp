
class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int rank;

public:
    KthLargest(int k, vector<int>& nums) {
        rank = k;

        for (int value : nums) {
            minHeap.push(value);

            if (minHeap.size() > rank) {
                minHeap.pop();
            }
        }
    }

    int add(int val) {
        minHeap.push(val);

        if (minHeap.size() > rank) {
            minHeap.pop();
        }

        return minHeap.top();
    }
};
