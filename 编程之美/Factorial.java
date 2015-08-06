//阶乘后面0的个数
//就看把阶乘结果分解，有多少个5，就是末尾0的个数


class Solution{

	public static int factorial(int n){
		int s = 1;
		for(int i = 2; i <= n; i++){
			s = s * i;
		}
		return s;
	}


	public static int ZeroInN(int s){
		int result;
		while(s / 5 == 0){
				result++;
				s = s /5;	
			}
		return result;
	}

	public static void main(String[] args){
		ZeroInN(factorial(n));
	}
}