class Solution(object):
    def merge(self, nums1, m, nums2, n):
        i=0
        j=0
        result=[]
        while i<m and j<n:
            if nums1[i]<nums2[j]:
                result.append(nums1[i])
                i+=1
            else:
                result.append(nums2[j])
                j+=1
        while i<m:
            result.append(nums1[i])
            i+=1
        while j<n:
            result.append(nums2[j])
            j+=1
        for k in range(m+n):
            nums1[k]=result[k]      


        