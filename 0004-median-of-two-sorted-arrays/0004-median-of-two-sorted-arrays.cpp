class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int *merged;
        int size=nums1.size()+nums2.size();
        merged=new int[size];
        int i=0,j=0,k=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j])
            merged[k++]=nums1[i++];
        
        else if(nums1[i]==nums2[j]){
            merged[k++]=nums1[i++];
            j++;
        }
        else
        merged[k++]=nums2[j++];
        
    }
    for(;i<nums1.size();i++)
    merged[k++]=nums1[i];
    for(;j<nums2.size();j++)
    merged[k++]=nums2[j];
    int mid=size/2;
    
    if(size%2!=0)
    return merged[mid];

    else 
    return (merged[mid]+merged[mid-1])/2.0;
}};