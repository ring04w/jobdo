//Algorithm learning
//Divide and conquer algorithm
//Author : ring04w
//Date: 2015-07-02 



public class SearchElementInMatrix{
public:
	public bool find(vector<vector<int> > &a, int x1, int y1, int x2, int y2, int targer){
		int midX = (x1 + x2)>>1;
		int midY = (y1 + y2)>>1;
		if(a[[midX][midY] == target){
			return true;
		}else if(a[midX][midY] > target){
			return find(a, x1, y1, midX - 1, y2) || find(a, midX + 1, y1, x2, midY - 1);
		}else if(a[midX][midY] < target){
			return find(a, x1, midY + 1, midX - 1, y2) || find(a, midX + 1, y1, x2, y2);
			
		}
	}

	bool searchInMatrix(vector<vector<int> > & matrix, int target){
		int m = matrix.size();
		int n = matrix[0].size();
		return find(a, )
	}



}