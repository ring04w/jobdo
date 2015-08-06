class Solution{

	public static void int OneOfInArray(int m){
		int num = 0;
		while(m != 0){
			num += ((m%10 == 1) ? 1 : 0);
			 m = m / 10;
		}
		return num;
	}

	public static int OneNum(int n){
		int result = 0;
		for (int i = 0; i <= n; ++i){
			result += OneOfInArray(n);
		}
		return result;
	}

	public static void main(String[] args){
		OneNum(k);
	}

}