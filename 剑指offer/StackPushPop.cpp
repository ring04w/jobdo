class Solution {
public:
    bool IsPopOrder(vector<int> pushA,vector<int> popA) {
		if (pushA.size() == 0 || popA.size() == 0) {
				return false;
		}


		stack<int> s ;
		int i = 0;
		int j = 0;

		for (; i < pushA.size(); ++i) {
			s.push(pushA[i]);//将第一个序列的元素依次压入辅助栈

			while (j < popA.size() && s.top() == popA[j]) {//当辅助栈的栈顶元素等于第二个序列的当前元素，则弹出
					s.pop();
					++j;
			}
		}

		return s.size() == 0;


	

    }
};