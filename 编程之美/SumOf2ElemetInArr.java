

//i = 0, j = n -1,  看arr[i] + arr[j] == sum? (return (i, j)):(array[i] + array[j] < sum? i++:j-- );
public class Solution{
	(p, k)Search(int[] *array, int s){
		for(int i =0, j = array.length() - 1; i < j){
			if(array[i] + array[j] == s){
				return (i, j);
			}else{
				if(array[i] + array[j] < s)
					i++;
				else
					j--;
			}
		}
		return (－1, -1);
	}
}