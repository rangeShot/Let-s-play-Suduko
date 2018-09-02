//check function


bool check(std::vector<std::vector<char>> grid) {
    bool flag=true;
    for(int i=0;i<9 && flag;i++){
        int a[10]={0};
        int b[10]={0};
        for(int j=0;j<9 ;j++){
            int c=grid[i][j]-48;
            if(c<0) c=0;
            if(a[c]==0 || c==0)
                a[c]++;
            else{
                flag=false;
                break;
            }
            int d=grid[j][i]-48;
            if(d<0) d=0;
            if(b[d]==0 || d==0)
                b[d]++;
            else{
                flag=false;
                break;
            }
        }
    }
    int j=0,k=0;
    for(int i=0;i<9 && flag;i++){
        int a[10]={0};
        for(int l=j;l<(j+3);l++){
            for(int m=k;m<(k+3);m++){
                int c = grid[l][m]-48;
                if(c<0) c=0;
                if(a[c]==0||c==0)
                    a[c]++;
                else{
                    flag=false;
                    break;
                }
            }
        }
        j+=3;
        if(j>=8){
            j=0;k+=3;
        }
    }
    return flag;
}

//check function calculated
