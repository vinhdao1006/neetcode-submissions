
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool isFound = false;
        
        for (auto& x : matrix)
        {
            if (target == x.back() || target == x.front()) 
            {
                isFound = true;
                break;
            }

            if (target > x.back() || target < x.front()) continue;

            if (x.size() < 3)
                return false;

            if (x.size() == 3)
            {
                isFound = x[1] == target ? true : false;
                break;
            }
            
            isFound = isFoundTarget(x, target, 1, x.size() - 2);

            if (isFound)
                break;
        }

        return isFound;
    }

    bool isFoundTarget(vector<int>& x, int target, int index1, int index2)
    {
        if (index2 - index1 == 0) 
        {
            if (target - x[index1] == 0)
                return true;
            return false;
        }

        int indexMid = (index2 + index1) / 2;
        int gap = target - x[indexMid];
        
        if (gap == 0) return true;

        if (gap > 0)
        {
            return isFoundTarget(x, target, indexMid + 1, index2);
        }
        else
        {
            return isFoundTarget(x, target, index1, indexMid);
        }
    }
};
