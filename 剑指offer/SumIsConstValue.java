//本题类似杨氏矩阵的查找，首尾两个指针

import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> FindNumbersWithSum(int [] array,int sum) {
        ArrayList<Integer> al = new ArrayList<Integer> ();
        int i = 0;
        int j = array.length - 1;
        for (i = 0, j = array.length - 1; (i < array.length - 1) && (j > 0);) {
                if (array[i] + array[j] > sum) {
                    j--;
                }else if (array[i] + array[j] < sum) {
                    i++;
                }else {
                    al.add(array[i]);//相距最远的两个数的乘积最小，此处知识干扰
                    al.add(array[j]);
                    break;
                }
        }
        
        return al;
        
         
    }
}