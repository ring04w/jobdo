
class Solution{
	static void printKthNodeFromTail(ListNode *pHead, int k){
		if(pHead == null)
			return ;
		else if(pHead != null && pHead.next == null && k == 1)
			return pHead;

		ListNode *pNode = pHead;
		for(int i = 0; i < k; i++){
			pNode = pNode.next;
		}

		ListNode *kNode = pHead;
		while(pNode.next != null){
			pNode = pNode.next;
			kNode = kNode.next;
		}

		return kNode;
		
	}
}