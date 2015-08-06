//把数组二分为左边和右边，分别求出左边、右边的最大数和最小数
//然后分别比较左边和右边的最大值和最小值


class Solution{

	public static (max, min)Search(int[] *array, int b, int e){
		if(b-e <= 1)
			return (array[b], array[e]);
		else
			return (array[e], array[b]);
		
		(maxL, minL) = Search(array, b,  b + (e - b)/2);
		(maxR, minR) = Search(array, b + (e-b)/2 + 1, e);

		if(maxL > maxR){
			maxA = maxL;
		} else{
			maxA = maxR;
		}
			
		if(minL < minR){
			minA = minL;
		}else{
			minA = minR;
		}

		return (maxA, minA);

	}
}