//《编程之美》2.1求二进制中1的个数

//O(log2v)
public class Solution{
	public int Count(int v){
		int num = 0;
		while(v ! = 0){
			if (v%2 != 0){
				num++;
				
			}
			v = v/2;//除以2
		}
		return num;

	}
}

//位操作

// public class Solution{
// 	public int Count(int v){
// 		int num = 0;
// 		while(v != 0){
// 			num += v&0x01;
// 			v>>1;
// 		}
// 		return num;
// 	}
// }