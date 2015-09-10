import java.util.*;
 
public class Solution {
    public boolean duplicate(int array[],int length,int [] duplication) {
     
        if (length == 0 || array == null) {
            return false;
        }
         
        boolean flag = false;
       	int[] res = new int[length];
        for ( int i = 0; i < length; i++) {
            
				res[array[i]]++;//有重复，自动自增
            }
           
                
        for (int i = 0; i < length; i++) {
            if (res[i] > 1) {
                duplication[0] = i;
                flag = true;
                break;
            }
        }
        return flag;
    }
}
