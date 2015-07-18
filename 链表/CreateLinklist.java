//ring04w@gmail.com
//2015-07-18 
//在链表后添加节点

class Node{
	Node next = null;
	int data;
	public Node(d){
		data = d;
	}

	public void append2tail(int d){
		Node end = new Node(d);
		Node n = this;
		while(n.next != null){
			n = n.next;
		}

		n.next = end;
	}
}