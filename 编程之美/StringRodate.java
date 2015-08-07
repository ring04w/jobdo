
//判断一个字符串A是否另外一个字符串B旋转的结果
//就看BB中是否包含字符串A就可以

publlic Solution{

	public static boolean isSubString(String s, String r){
		if (s.find(r) != string::npos)//字符串s中存在r
			return true;
		else
			return false;
	}

	public static boolean isRotation(String str1, String str2){
		if(str1.length() != str2 || str1.length() <= 0){
			return false;
		}
		else{
			return isSubString(str1 + str1, str1);
		}
		
	}
}