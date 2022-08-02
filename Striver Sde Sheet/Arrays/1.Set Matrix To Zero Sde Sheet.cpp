class Solution {
    public:

	void setZeroes(vector<vector<int>>& matrix) {


		bool isCol = false;
		int rows = matrix.size();
		int colums = matrix[0].size();

		for (int i = 0; i < rows; i++)
		{

			if (matrix[i][0] == 0)
			{
				isCol = true;
			}

			for (int j = 1; j < colums; j++)
			{
				if (matrix[i][j] == 0)
				{
					matrix[0][j] = 0;
					matrix[i][0] = 0;

				}
			}
		}

		for (int i = 1; i < rows; i++)
		{
			for (int j = 1; j < colums; j++)
			{
				if (matrix[i][0] == 0 || matrix[0][j] == 0)
				{
					matrix[i][j] = 0;
				}
			}
		}

		// See if the first row needs to be set to zero as well
		if (matrix[0][0] == 0)
		{
			for (int j = 0; j < colums; j++)
			{
				matrix[0][j] = 0;
			}
		}

		// See if the first column needs to be set to zero as well
		if (isCol) {
			for (int i = 0; i < rows; i++)
			{
				matrix[i][0] = 0;
			}
		}
	}
};