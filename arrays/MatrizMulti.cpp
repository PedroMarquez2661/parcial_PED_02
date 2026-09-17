 #include <iostream>
 using namespace std;

 int main (){

    int a [2][2][2]=
    {
        {{1,2},{3,4}},
        {{5,6},{7,8}}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j= 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout <<"DATOS DE LA MATRIZ A: [" <<i<<"]["<<j
                << "]["<<k<<"]= "<<a[i][j][k]
                <<endl;
            }
            
        }
        
    }
    






    return 0;
 }