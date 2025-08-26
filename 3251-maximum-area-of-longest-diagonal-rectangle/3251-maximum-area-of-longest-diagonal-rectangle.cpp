class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int diagonalLength = 0;
        int area = dimensions[0][0] * dimensions[0][1];
        for(int i = 0; i < dimensions.size(); i++){
            int length = dimensions[i][0];
            int width = dimensions[i][1];
            int currDiagonal = ( length * length)+ (width * width);
            if(currDiagonal > diagonalLength or (currDiagonal == diagonalLength &&
            area < length * width)){
                diagonalLength = currDiagonal;
                area = length * width;
            }
        }
        return area;
    }
};