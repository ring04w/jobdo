import java.util.ArrayList;

public class Solution {
    public String LeftRotateString(String str,int n) {
        ArrayList<Character> al = new ArrayList<Character>();
        
        String str1 = str + str;
        for (int i = n; i < n + str.length(); i++) { //截取新字符串中的一段就是要的结果
            al.add(str1.charAt(i));//保存在list中
        }
        
        char[] s = new char[al.size()];
        for (int i = 0; i < al.size(); i++) {
            s[i] = al.get(i);//将list转化为字符数组
        }
        
        String res = new String(s);//将字符数组转换为字符串
        
        return res;
    }
}