//ring04w@gmail.com
//2015-07-18 
//给定一些元素的出栈和入栈顺序，是否可行


boolean isPossibleOfStack(vector<int> &in, vector<int> &out){

	for (int i = 0, j = 0; j <out.size(); ++j){
		while(s.empty() || s.top() != out[j]){
			if( i > in.size()){
				return false
			}
			s.push(in[i++]);
				
			}
			s.pop();
		}
		return true;
}
