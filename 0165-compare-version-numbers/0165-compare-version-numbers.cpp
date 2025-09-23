
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        int n1 = version1.size();
        int n2 = version2.size();
        int nums1 = 0, nums2 = 0;
        while(i<n1 || j<n2){
            while(i<n1 && version1[i] != '.'){
                nums1 = nums1*10 + (version1[i] - '0');
                i++;
            }
            while(j<n2 && version2[j] != '.'){
                nums2 = nums2 * 10 +(version2[j] - '0');
                j++;
            }
            if(nums1>nums2){
                return 1;
            }
            if(nums1<nums2)     return -1;
            i++;
            j++;
            nums1 = 0;
            nums2 = 0;
        }
        return 0;
    }
};