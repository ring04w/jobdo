class ValueOfBinaryTreePath
{
public:
	void findPathRecurion(TreeNode* root, int expectNumber, int sum) {
		first_result.push_back(root->val);
		sum += root->val;

		if (sum == expectNumber && root->left == NULL && root->right == NULL) {
			result.push_back(first_result);
		}

		if (root->left != NULL) {
			findPathRecurion(root->left, expectNumber, sum);
		}

		if (root->right != NULL) {
			findPathRecurion(root->right, expectNumber, sum);
		}

		first_result.pop_back();
	}


	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		if (root == NULL) {
			return result;
		}
		findPathRecurion(root, expectNumber, 0);

		return result;
	}

private:
	vector<vector<int> > result;
	vector<int> first_result;
	
};