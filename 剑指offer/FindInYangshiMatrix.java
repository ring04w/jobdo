
class Solution{
	public boolean findInYangshiMatrix(int[][] array, int target){
		int m = array.length;
		int n = array[0].length;

		for (int r = 0, s = n - 1; r < m && s > 0;) {
			if(array[r][s] > target){
				s--;
			}else if(array[r][s] < target){
				r++;
			}else {
				return true;
			}
		}
		return false;
	}
}