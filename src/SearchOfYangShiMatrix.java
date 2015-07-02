// Source : Algorithms Learning
// Author : ring04w
// Date   : 2015-07-02





public class SearchOfYangShiMatrix{
	public bool searchMatrix(vector<vector<int> >&matrix, int target){
		int m = matrix.size();
		int n = matrix[0].size();

		for (int r = 0, c = n-1; r < m && c >0){
			if (matrix[r][c] > target){
				--c;
			}else if (matrix[r][c] < target){
				++r;
			}else{
				return true;
			}
		}
		return false;
	}
}