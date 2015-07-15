//ring04w@gmail.com
//2015-07-15 am

//利用levenshtein()算法计算两个字符串之间的Levenshtein（要把两个字符串变成一样的最少修改次数）距离
//建立一个分别以两个字符串长度为行数和列数的二位数组（或矩阵）,第一列第一行的值分别为两个字符串的字符
//每一个位置的的值就为此处两个字符串之间需要修改的距离，该距离取决于它左边的值，上面的值，和左上角的值
//如果此位置对应的横纵字符相同，那么左上角的值不加，其余各个值加1，比较三个值，填写最小值到此处
//如果此位置对应的横纵字符不相同，那么左上角，上 ，下三个值全部都加1，比较三个值，填写最小值到此处
//最后右下角的值就为两个完整字符串的levenshtein距离


class TxtSimilarDetection{
	public static void main(String[] args){
		
		String str1 = "Hefei University of Technology";
		String str2 = "Hefei University of Science";
		levenshtein(str1,str2);
		 }
	
	
	public static void levenshtein(String str1, String str2){
		
		int[][] diff = new int[str1.length()][str2.length()];
		
		for (int i = 0; i < str1.length(); i++) {
			diff[i][0] = i + 1;
		}
		
		for (int i = 0; i < str2.length(); i++) {
			diff[0][i] = i + 1;
			
		}
		
		int temp = 0;
		
		for (int i = 0; i < str1.length(); i++) {
			for (int j = 0; j < str2.length(); j++) {
				if (str1.charAt(i) == str2.charAt(j)){
					temp = 0;
					
				}else {
					temp = 1;
				}
				diff[i][j] = min(diff[i-1][j-1] + temp, diff[i][j-1], diff[i-1][j]);	
			}		
			
		}
		
		
				
		double similarity = 1.0 -  
				(float)diff[str1.length()][str2.length()]/Math.max(str1.length(), str2.length());
		
			System.out.println("相似度为" + similarity);
	
	
	}
		
	
	public static int min(int a, int b, int c){
		int minValue;
		if (a <= b && a <= c) {
			minValue = a;
		}else if (b <= a && b <= c) {
			minValue = b;
			
		}else{
			minValue = c;
		}
		
		return minValue;
	}
	
	
	
}