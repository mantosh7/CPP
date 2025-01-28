vector<int>row(m,0);  //initialise additional row elements with 0
    vector<int>col(n,0);  //initialise additional col elements with 0

    // for storing row and col index of every 0 element 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;  
                col[j]=1;
            }
        }
    }
    // for replacing every element of additional row=1 or col=1 with 0
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i]||col[j])
            {
                matrix[i][j]=0;
            }
        }
    }
