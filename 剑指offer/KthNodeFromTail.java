
class Solution{
	static void printKthNodeFromTail(ListNode *pHead, int k){
		if(pHead == null || k == 0)//空指针访问，崩溃
			return ;
		else if(pHead != null && pHead.next == null && k == 1)
			return pHead;

		ListNode *pNode = pHead;
		int length = 0;
		while(pHead.next != 0){
			length ++;
		}
		if(length < k)//链表长度小于k，遇到空指针，崩溃
			return ;


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