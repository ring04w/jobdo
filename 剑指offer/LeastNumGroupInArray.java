import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
public class Solution {
    public String PrintMinNumber(int [] numbers) {

        if (numbers == null || numbers.length == 0) {
            return "";
        }
        
        ArrayList<String> al = new ArrayList<String>();
        for (int i = 0; i < numbers.length; i++) {
            al.add(String.valueOf(numbers[i]));
        }
        
        Collections.sort(al, new Comparator<String>(){
            public int compare(String str1, String str2) {
                return(str1 + str2).compareTo(str2 + str1);
            }
        });
        
        StringBuffer sb = new StringBuffer();
        for (String s : al) {
            sb.append(s);
        }
        
        return sb.toString();
    }
}

