//ring04w@gmail.com
//2015-07-18 
//删除节点


class Node{

	Node next = null;
	int data;

	public Node(int data){
		this.data = data;
	}

	public void delNode(int data){

		Node this = n;
		if(this.next != null){
			if (this.next.data.equals(data){
				this.next = this.next.next;
			}else{
				this.next.delNode(data)
			}
			
		}
	}




}