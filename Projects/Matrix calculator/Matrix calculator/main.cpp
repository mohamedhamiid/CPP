#include <iostream>
#include<cmath>
using namespace std;
const int R=10,C=10;

/// fill arrays
int fillArray (int a[][C],int rows,int cols);
///print array
void printArray(int z[][C],int r1,int c1,int r2,int c2);
///for det
void submat(int temp[][C],int a[][C],int n,int i);
int det(int a[][C],int n);
///inverse
void inverse(int a[][C],int z[][C],int n);
///choosing operation
void operationArray (int a[][C],int b [][C],int z[][C],int r1,int c1,int r2,int c2,int op);



int main()
{
    int r1,c1,r2,c2,op,invalid=0;

    int a [R][C]; //array 1
    int b[R][C];  // array 2
    int z[R][C]; //res array
    //---------------------------------------------------

    ///dimension of first matrix

    do{
    cout<<"Please enter dimensions of Matrix A:"<<"\n";
    cin>>r1>>c1;
    invalid=0;
    if (cin.fail()||r1<0||c1<0){ // if the user enter an in valid input
        cin.clear();
        cin.ignore(1000,'\n');
        invalid=1;}
    }while(invalid);
    //---------------------------------------------------

    ///dimension of second matrix

    do{
    cout<<"Please enter dimensions of Matrix B:"<<"\n";
    cin>>r2>>c2;
    invalid=0;
    if (cin.fail()||r2<0||c2<0){ // if the user enter an invalid values
        cin.clear();
        cin.ignore(1000,'\n');
        invalid=1;}
    }while(invalid);
    //----------------------------------------------------

    ///filling arrays

    // array_a
    do{
    cout<<"Please enter values of Matrix A:"<<"\n";
    invalid = fillArray (a,r1,c1);
    }while(invalid);

    //array_b
    do{
    cout<<"Please enter values of Matrix B:"<<"\n";
    invalid=fillArray (b,r2,c2);
    }while(invalid);//to check that the user enter valid values

    //----------------------------------------------------

    ///choosing operation

    do{
        invalid=0;
    cout<<"Please choose operation type(1: A+B, 2: A-B, 3: AxB, 4: A*inverse(B), 5: |A|, 6: |B|, 7: quit):"<<"\n";
    cin>>op;
    if(cin.fail()){
        cin.clear();
        cin.ignore(1000,'\n');
        invalid=1;
        cout<<"The operation you chose is invalid for the given matrices."<<"\n";
        }
    else if (op==7)
        cout<<"Thank you!"<<"\n";
    else if(op>7)
        cout<<"The operation you chose is invalid for the given matrices."<<"\n";
    else{
            operationArray(a,b,z,r1,c1,r2,c2,op);}}while (op!=7||invalid);

return 0;
    }
//-------------------------------------------------------------------------------
// fill arrays
int fillArray (int a[][C],int rows,int cols){
for (int r=0;r<rows;r++){
    for(int c=0;c<cols;c++){
        int x=0;
        cin>>x;

        if (cin.fail()){ // if the user enter invalid value
            cin.clear();
            cin.ignore(1000,'\n');
            return 1;
            }
        else
            a[r][c]=x;
        }}
        return 0;
        }
//--------------------------------------------------------------------------------
//print array
void printArray(int z[][C],int r1,int c1,int r2,int c2){

    for (int r=0;r<r1;r++){
        for(int c=0;c<c2;c++){
            cout<<z[r][c]<<" ";
                if(c==c2-1)
                    cout<<"\n";
        }
    }
    }
//---------------------------------------------------------------------------------

///det
int det(int a[][C],int n){
    int s=1,res=0;
    //operation
    if (n==1)
            res= a[0][0];
    else if (n==2)
            res= a[0][0]*a[1][1]-a[0][1]*a[1][0];
    else{

        int temp[R][C];
        //counter of rows of original matrix
        for (int i=0 ;i<n;i++){
        int rt=0;
        // counter of rows of sub matrix
        for (int r=1;r<n;r++){
        int ct=0;
        // counter of cols of sub matrix
        for(int c=0;c<n;c++){
                     if(c==i)
                        continue;
                     temp[rt][ct++]=a[r][c];
                        }
            rt++;
            }
            res+= s*a[0][i]*det(temp,n-1);
            s=-s;
            }

            }
return res;
}
//-----------------------------------------------------------------------------------------
/// multiply
void multiply(int a[][C],int b[][C],int r1,int c1,int c2){
int z[R][C];
for(int rz=0;rz<r1;rz++){
                            for (int r=0;r<c2;r++){
                                    z[rz][r]=0;
                                    for(int c=0;c<c1;c++){
                                            z[rz][r]+= (a[rz][c]*b[c][r]);}}}
                                                    printArray(z,r1,c1,c1,c2);}
//-----------------------------------------------------------------------------------------
/// inverse
void inverse(int a[][C],int b[][C],int n,int r1,int c1){ // the
double z[R][C]; // array of inverse has floats
double A=det(b,n); // determination

if (A==0) /// condition of division
    cout<<"The operation you chose is invalid for the given matrices."<<"\n";

else{

    if (n==1){ /// 1x1 matrix
            z[0][0]=b[0][0]/A;
    }

    else if(n==2){ /// 2x2 matrix
        z[0][0]=(b[1][1]/A);
        z[0][1]=(-b[0][1]/A);
        z[1][0]=(-b[1][0]/A);
        z[1][1]=(b[0][0]/A);}

    else{ /// > 2x2 matrix
        int temp[R][C]; //submatrix
        float s=-1;
        double t[10][10];

    /// filling submatrix
    for (int i=0;i<n;i++){
    s=1;
    for(int j=0;j<n;j++){
        t[i][j]=0; // array of inverse but need to swap colums with rows
        int rt=0; // rows of submatrix
        for (int r=0;r<n;r++){
                int ct=0; //cols of submatrix
                int flag=0; // to move to next row in submatrix
        for(int c=0;c<n;c++){
                     if(r!=i&&c!=j){
                        temp[rt][ct++]=b[r][c];
                        flag=1;}}
                if (flag)
                     rt++;
            }
        t[i][j]=pow(-1,i+j)*det(temp,n-1)/A;
    }
}

/// swap colums with rows
for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        z[i][j]=t[j][i];
    }
  }
}

/// multiplication
double z1[R][C]; // array of multiplication has floats
for(int rz=0;rz<r1;rz++){
                            for (int r=0;r<n;r++){
                                    z1[rz][r]=0;
                                    for(int c=0;c<c1;c++){
                                            double x=(a[rz][c]*z[c][r]);
                                            z1[rz][r]+=x ;}}}

///aprroxmation
int z2[R][C]; // approx array of multiplication
for(int i=0;i<r1;i++){
    for(int j=0;j<n;j++){
            double x=z1[i][j];
            int y=(x>0)?x+0.5:x-0.5;
            z2[i][j]=y;
    }
}
printArray(z2,r1,c1,n,n);}}

//-----------------------------------------------------------------------------------------

///choosing operation

void operationArray (int a[][C],int b [][C],int z[][C],int r1,int c1,int r2,int c2,int op){

switch(op){
//-------------------------------------------------------------
    ///addsub

    case 1:
    case 2:
    // condition
        if(r1!=r2 || c1!=c2){
                    cout<<"The operation you chose is invalid for the given matrices."<<"\n";}

    // operation
        else{
                    for (int r=0;r<r1;r++){

                        for(int c=0;c<c1;c++){
                            int x=a[r][c]+b[r][c];
                            int y=a[r][c]-b[r][c];

                            z[r][c]= (op==1)? x:y ;}}

                                    printArray(z,r1,c1,r2,c2);}
    break;
//-----------------------------------------------------------------
    ///multiply

    case 3:
    //condition
        if(c1!=r2){
                    cout<<"The operation you chose is invalid for the given matrices."<<"\n";}

    // operation
        else{
                    multiply(a,b,r1,c1,c2);}
    break;
//-------------------------------------------------------------------
    ///division

    case 4:
        // condition
        if(r2!=c2)
                    cout<<"The operation you chose is invalid for the given matrices."<<"\n";
        // operation
        else{
            int z[R][C];
            inverse(a,b,r2,r1,c1);
        }
        break;
//-------------------------------------------------------------------
    /// det A

    case 5:
    //condition
        if(r1!=c1)
                    cout<<"The operation you chose is invalid for the given matrices."<<"\n";
    //operation
        else{
                    int res=det(a,r1);
                    cout<<res<<"\n";}
    break;
//--------------------------------------------------------------------
    /// det B

    case 6:
        //condition
        if(r2!=c2)
                    cout<<"The operation you chose is invalid for the given matrices."<<"\n";
        //operation
        else{
                    int res=det(b,r2);
                    cout<<res<<"\n";
        }
}
}


