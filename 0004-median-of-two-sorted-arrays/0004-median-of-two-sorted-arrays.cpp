class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n = arr2.size();
        int k = m+n;
        int i=0,j=0;
        vector<int> mergeArray;
        while(i<m &&  j<n){
            if(arr1[i]<arr2[j]){
                mergeArray.push_back(arr1[i++]);
            }else{
                mergeArray.push_back(arr2[j++]);
            }
        }
        while(i<m){
            mergeArray.push_back(arr1[i++]);
        }while(j<n){
            mergeArray.push_back(arr2[j++]);
        }
        // odd
        if((k)%2 !=0){
            return mergeArray[(k)/2];
        }else{
            double firstMiddleElement = mergeArray[k/2 -1];
            double SecondMiddleElement =mergeArray[(k/2)];
            double median = (firstMiddleElement +SecondMiddleElement)/2;
            return median;

        }
        // else return 0;
        
    }
};