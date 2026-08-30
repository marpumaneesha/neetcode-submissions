class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& a=nums1;
        vector<int>& b=nums2;
        int total=nums1.size()+nums2.size();
        int half=(total+1)/2;
        if(b.size()<a.size()){
            swap(a,b);
        }
        int l=0,r=a.size();
        while(l<=r){
            int i=(l+r)/2;
            int j=half-i;
            int aleft,aright,bleft,bright;
            if(i>0) aleft=a[i-1];
            else aleft=INT_MIN;
            if(i<a.size()) aright=a[i];
            else aright=INT_MAX;
            if(j>0) bleft=b[j-1];
            else bleft=INT_MIN;
            if(j<b.size()) bright=b[j];
            else bright=INT_MAX;
            if(aleft<=bright && bleft<=aright){
                if(total%2 !=0){
                    return max(aleft,bleft);
                }
                return (max(aleft,bleft)+min(aright,bright))/2.0;
            }
            else if(aleft>bright) r=i-1;
            else l=i+1;
        }
        return -1;
    }
};
