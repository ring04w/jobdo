import java.util.*;

public class Solution {
    public int FirstNotRepeatingChar(String str) {
        
      
		if (str.length() == 0) {
				return -1;
		}

		Map<Character, Integer> map = new HashMap<Character, Integer>();

		for (int i = 0; i < str.length(); i++) {
				Integer freTimes = map.get(str.charAt(i));
				map.put(str.charAt(i), (freTimes == null) ? 1 : freTimes + 1);
		}

		for (int i = 0; i < str.length(); i++) {
			if (map.get(str.charAt(i)) == 1) {
				return i;
			}
		}

        return -1;
}
}
