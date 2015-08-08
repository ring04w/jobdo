

//计算两个字符串的转换最小次数
//也就是Levenshtein距离
class Solution{

	public static void main(String[] args){
		str1 = "Cracking the code interview";
		str2 = "Hacking the whiteboard code interview";
		DistanceOfDiffStrings(str1, str2);

	}



	public static double DistanceOfDiffStrings(String str1, String 2){

		len1 = str1.length();
		len2 = str2.length();
		int[][] diff = new int[len1][len2];

		for(int i = 0; i < len1; ++i){
			diff[i][0] = i + 1;
		}

		for(int j = 0; j < len2; ++j){
			diff[0][j] = j + 1;
		}

		int temp = 0;

		for(int i = 0; i < len1; ++i){
			for(int j = 0; j < len2; ++j){
				if(str1.charAt(i) == str2.charAt(j)){
						temp = 0;
				}else{
					temp = 1;
				}

				diff[i][j] = Math.min(diff[i][j-1] + 1, diff[i-1][j] + 1, diff[i][j] + temp);
			}

		}

		double similarStringsRate = 1.0 - (double)diff[len1 - 1][len2 - 1]/Math.max(len1, len2);
	}





}