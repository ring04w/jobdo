// import java.util.ArrayList;
// import java.util.Map;
// public class Solution {
// 	public boolean duplication(int[] numbers, int length, int[] duplication) {
// 		if (length == 0) {
// 			return false;
// 		}

// 		Map<int, int> map = new HashMap<int, int>();
// 		for (int i = 0; i < length; i++) {
// 			if (map[numbers[i]] {
// 					duplication[0] = numbers[i];
// 					return true;
// 			}else {
// 				map[numbers[i]] = 1;
// 			}
// 		}
// 		return false;
// 	}
// }



 class Solution {
	public:
     bool duplicate(int numbers[], int length, int* duplication) {
		if (length == 0) {
			return false;
		}

		map<int, int> map;
		for (int i = 0; i < length; i++) {
			if (map[numbers[i]]){
					*duplication = numbers[i];
					return true;
			}else {
				map[numbers[i]] = 1;
			}
		}
		return false;
	}
};
