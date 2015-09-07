import java.util.ArrayList;
import java.util.Collections;


public class Solution {
    public int MoreThanHalfNum_Solution(int[] array) {
        
        if (array.length == 0) {
            return 0;
        }
        ArrayList<Integer> al = new ArrayList<Integer>();
        for (int i = 0; i < array.length; ++i) {//将数组放在list中
            al.add(array[i]);
        }
            
        Collections.sort(al);//对list排序
        
        int timesNum = al.get(al.size()/2);//存放list中间的数
        int count = 0; 
        for (int i = 0; i < array.length; ++i) {
            if (array[i] == timesNum) {
                count++;
            }
        }
        
        
        if (count > array.length / 2) {//如果有个数字出现次数大于数组长度一半，那么list中间数一定和这个数相等
            return al.get(al.size()/2);//返回这个数
        }else {
            return 0;//表示没有数字出现次数大于数组长度一半
        }
        
        
            
        }
    
}