class Solution{

	void addInTailOfList(ListNode * pHead, int value){
		
		ListNode *pNew = new ListNode();

		pNew.value = value;
		pNew.next = null;

		if(pHead == null){
			pHead = pNew;
		}else{
			while(pHead.next != null){
				pHead = pHead.next;

			}
			pHead.next = pNew;
		}
			


	}
}