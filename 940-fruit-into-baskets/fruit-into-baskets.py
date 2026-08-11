class Solution(object):
    def totalFruit(self, fruits):
        low=0
        high=0
        result=0
        arr={}
        for high in range(len(fruits)):
            if fruits[high] not in arr:
                arr[fruits[high]]=0
            arr[fruits[high]]+=1
            while len(arr)>2:
                arr[fruits[low]]-=1
                if arr[fruits[low]]==0:
                    del arr[fruits[low]]
                low+=1
            result =max(result,high-low+1)
        return result            


            
