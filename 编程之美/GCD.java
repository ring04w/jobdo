
class Solution{
	public static int gcd(int m, int n){
		if(m < n){
			swap(m, n);
		}
		else
			while((r = (m % n)) != 0){
				m = n;
				n = r;
			}
			return n;
	}

	public static void swap(int a, int b){
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

	public static void main(String[] args){
		gcd(number1, number2);
	}
}

//如果x，y有最大公约数，gcd(x, y) == gcd(x-y, y)
//该方法能解决大数问题，可以避免除法开销昂贵的瓶颈
//如果两个数相差太大，会相当郁闷
//a>>1 == a /2; a<<1 == a *2; a << 3 == a * 2^3;
class Solution{
	public static void int gcd(int x, int y){
		if(x < y)
			return gcd(y, x);
		if(y == 0)
			return x;
		else
			return gcd(x-y, y);
	}
}