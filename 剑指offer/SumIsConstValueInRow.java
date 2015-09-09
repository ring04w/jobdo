public class Solution {
	public ArrayList<ArrayList<Integer> > FindContinusSequence(int sum) {
		ArrayList<ArrayList<Integer> > result = new ArrayList<ArrayList<Integer> >();
		if (sum < 3) {
			return result;
		}

		int small = 1;
		int big = 2;
		int mid = (sum + 1) / 2;
		curSum = big + small;

		while (small < mid) {
			if (sum == curSum) {
				ArrayList<Integer> al = new ArrayList<Integer>();
				for (int i = small; i <= big; i++) {
						al.add(i);
				}
				result.add(al);
				big++;
				curSum += big;
			}
			else if (sum < curSum) {
				curSum -= small;
				small++;
			}
			else if (sum > curSum) {
				big++;
				curSum += big;
			}
		}
		return result;
	}
}