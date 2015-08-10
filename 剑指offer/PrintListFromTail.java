class Solution{

	public printListNodeFromTail(ListNode *pHead){
		Stack<int> s = new Stack<int>();


		if(pHead == null){
			return ;
		}

		while(pHead.next != null){
			s.push(pHead.value);
			pHead = pHead.next;
		}

		while(!s.isEmpty()){
			ListNode *v = s.top();
			print(v.value);
			s.pop();
		}
	}
}