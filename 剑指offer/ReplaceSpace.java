class Solution{
	public void replaceSpace(char[] str, int length){
		if(str == null || length == 0)
		return ;

		int bankSpace = 0;
		for(int i = 0; i < length; ++i){
			if(str[i] == ''){
				bankSpace++;
			}
		} 

		int newLength = length + 2 * bankSpace;
		
		for(int j = length - 1, i = newLength - 1; j >= 0, i >=0;j--, i--){
			if(str[j] == ''){
					str[i] = '0';
					str[i-1] = '2';
					str[i-2] = '%';
					j = j - 1;
					i = i - 3;
				}else{
					str[i] = str[j];
				}
				if(i == j)
					return ;
			}


			for(int i = 0; i < newLength; ++i){
				str[i];
			}
		}
}