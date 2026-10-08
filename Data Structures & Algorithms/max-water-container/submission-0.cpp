class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int mini;
        int area=0;
        int maxi=0;
        while(i<j){
         mini=min(heights[i],heights[j]);
         int index=j-i;
        area= mini*index;
        maxi=max(area,maxi);
        if(heights[i]<heights[j])
        i++;
        else if(heights[i]>heights[j])
        j--;
        else{
            i++;
            j--;
        }
        }
        
        return maxi;
    }
};
