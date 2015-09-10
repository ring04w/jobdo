public class Solution {
    public String ReverseSentence(String str) {
       StringBuffer sb = new StringBuffer("");
        if (str.length() <= 0 || str.trim().equals("")) {//为空或者有多个空格
            return str;
        }
        String[] strSet = str.split(" ");
        for (int i = strSet.length - 1; i > 0; i--) {
            sb.append(strSet[i] + " ");
        }
        
        sb.append(strSet[0]);
        return sb.toString();
        
    }
}