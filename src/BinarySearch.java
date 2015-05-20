import java.util.Arrays;

public class BinarySearch
{
	public static int rank(int key, int[] a)
	{
		int lo = 0;
		int li = a.length - 1;
		while (lo < li)
		 {
			int mid = (lo + li) / 2;
			if(key > a[mid])
				lo = mid + 1;
			else if(key < a[mid])
				li = mid - 1;
			else
				return mid;
			
		}
		return -1;
	}
	
	public static void main(String[] args) {
		int[] whitelist = In.readInts()
		
	}







}