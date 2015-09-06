public class Solution {
    public boolean VerifySquenceOfBST(int [] sequence, int length) {
        if (length == 0) {
            return false;
        } 
        
        int root = sequence[length - 1];
        int i = 0;       
        for (; i < length - 1; i++) {
            if (sequence[i] > root) {
                break;//找到第一个大于根结点root的值，也就是到达了右子树
            }
        }
        
        int j = i;
        for (; j < length - 1; ++j) {
            if (sequence[j] < root) {
                return false;//如果右子树有比根结点小的，说明不成立
            }
        }
        
        
        boolean IsBSTleft = true;
        if (i > 0) {
              IsBSTleft = VerifySquenceOfBST(sequence, i);//判断左子树为后续遍历
        }
        
        boolean IsBSTright = true;
        
        int k = 0;
        int[] b = new int[length -i - 1];
        for (; k < length -1 - i; ++k) {
            b[k] = sequence[i++];//把右子树用一个新的数组储存
        }
       if (i < length -1) {
        	IsBSTleft =  VerifySquenceOfBST(b, length - 1 -i);//判断右子树为后续遍历
       }
        
        
        return IsBSTleft && IsBSTright;
        
       
        
    }
}