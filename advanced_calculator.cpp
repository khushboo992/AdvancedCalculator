#include <iostream>
using namespace std;
int main () {
    int temp=1;
    while(temp) {

    cout<<"1. Addition of 2 number"<<endl;
    cout<<"2. Subtraction of 2 number"<<endl;
    cout<<"3. Multipication of 2 number"<<endl;
    cout<<"4. Division of 2 number"<<endl;
    cout<<"5. Mod of 2 number"<<endl;
    cout<<"6. Matrix Addition"<<endl;
    cout<<"7. Matrix Multiplication"<<endl;
    cout<<"8. Sum of digits of a number"<<endl;
    cout<<"9. Multiplication of digits of a number"<<endl;
    cout<<"10. Percentage calculator of 1st sem"<<endl;
    cout<<"-1. Exit"<<endl;

    cout<<"Enter the damn operation number u wanna perform"<<endl;

int num;
cin>>num;

switch(num) {
case 1: 
    cout<<"You have selected addition of 2 number"<<endl;
    int a,b;
    cout<<"Enter value of 1st number "<<endl;
    cin>>a;
    cout<<"Enter value of 2nd number "<<endl;
    cin>>b;
    cout<<"Value of number addition is: "<<a+b<<endl;
    break;

case 2: 
    cout<<"You have selected subtraction of 2 number"<<endl;
    int c,d;
    cout<<"Enter value of 1st number"<<endl;
    cin>>c;
    cout<<"Enter value of 2nd number"<<endl;
    cin>>d;
    cout<<"Value of number subtraction is: "<<c-d<<endl;
    break;

case 3: 
    cout<<"You have selected Multiplication of 2 number"<<endl;
    int e,f;
    cout<<"Enter value of 1st number"<<endl;
    cin>>e;
    cout<<"Enter value of 2nd number"<<endl;
    cin>>f;
    cout<<"Value of number Multiplication is: "<<e*f<<endl;
    break;

case 4: 
    cout<<"You have selected Division of 2 number"<<endl;
    int g,h;
    cout<<"Enter value of 1st number"<<endl;
    cin>>g;
    cout<<"Enter value of 2nd number"<<endl;
    cin>>h;
    cout<<"Value of number Division is: "<<g/h<<endl;
    break;

case 5: 
    cout<<"You have selected mod operation "<<endl;
    int i,j;
    cout<<"Enter value of 1st number"<<endl;
    cin>>i;
    cout<<"Enter value of 2nd number"<<endl;
    cin>>j;
    cout<<"Value of Mod is: "<<i%j<<endl;
    break;

case 6: {
    cout<<"You have selected addition of 2 matrix"<<endl;    
// matrix 1

    int C;
    cout<<"Enter number of rows for 1st matrix"<<endl;
    cin>>C;

    int D;
    cout<<"Enter number of column for 1st matrix"<<endl;
    cin>>D;

    cout<<"Enter elements for 1st matrix"<<endl;

        
    int arr1[C][D];

    for(int i = 0; i<C; i++) {
            for(int j = 0; j<D; j++) {
    cin >> arr1[i][j];
    }
    }

    cout<<"1st Matrix is"<<endl;


    for(int i = 0; i<C; i++) {
        for(int j = 0; j<D; j++) {
            cout << arr1[i][j] <<" ";
        }
    cout<<endl;
    }


// matrix 2

    int E;
    cout<<"Enter number of rows for 2nd matrix"<<endl;
    cin>>E;

    int F;
    cout<<"Enter number of column for 2nd matrix"<<endl;
    cin>>F;

    cout<<"Enter elements for 2nd matrix"<<endl;

    

    int arr2[E][F];

    for(int i = 0; i<E; i++) {
        for(int j = 0; j<F; j++) {
            cin >> arr2[i][j];
        }
    }

    cout<<"2nd Matrix is"<<endl;

    for(int i = 0; i<E; i++) {
        for(int j = 0; j<F; j++) {
        cout << arr2[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<"The addition of the given two matrix is"<<endl;

    
    

    if (C==E && D==F) {
    int array1[C][D];
    

    for(int i=0; i<C; i++) {
        for (int j = 0; j<D; j++) {
        
            array1[i][j] = arr1[i][j] + arr2[i][j];
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }   
    }

    else {
        cout<<"Matrix Addition not possible"<<endl;
    }  
    break;
}



case 7: {
    cout<<"You have selected Multiplication of two matrices"<<endl;    
    int U;
    cout<<"Enter number of rows for 1st matrix"<<endl;
    cin>>U;

    int V;
    cout<<"Enter number of column for 1st matrix"<<endl;
    cin>>V;

    cout<<"Enter elements of 1st matrix"<<endl;

    
    int ar3[U][V];

    for(int i = 0; i<U; i++) {
        for(int j = 0; j<V; j++) {
            cin >> ar3[i][j];
        }
    }

    cout<<"1st Matrix is"<<endl;


    for(int i = 0; i<U; i++) {
        for(int j = 0; j<V; j++) {
            cout << ar3[i][j] <<" ";
        }
        cout<<endl;
    }


// matrix 2

    int W;
    cout<<"Enter number of rows for 2nd matrix"<<endl;
    cin>>W;

    int X;
    cout<<"Enter number of column for 2nd matrix"<<endl;
    cin>>X;

    cout<<"Enter elements of 2nd matrix"<<endl;

    

    int ar4[W][X];

    for(int i = 0; i<W; i++) {
        for(int j = 0; j<X; j++) {
            cin >> ar4[i][j];
        }
    }

    cout<<"2nd Matrix is"<<endl;

    for(int i = 0; i<W; i++) {
        for(int j = 0; j<X; j++) {
            cout << ar4[i][j] <<" ";
        }
        cout<<endl;
    }

//multiplication of matrix

    cout<<"Multiplication of given matrices is :"<<endl;
    if(V==W) {
    
    for(int i=0; i<U; i++) {
        for(int j=0; j<X; j++) {
            int ans =0;
            for(int k=0; k<V; k++) {
                ans = ans + ar3[i][k]*ar4[k][j];
            }
            
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    }
    
    else { 
        cout<<"Matrix Multiplication not possible"<<endl;
    }

    break;
}

case 8 : {
    cout<<"You have selected sum of digits of a number"<<endl;
    int N;
    cout<<"Enter a number "<<endl;
    cin>>N;
    int sum = 0;
    while (N!=0)  {
        int digit = N%10;
        sum = sum + digit;
        N = N/10;
    }
    cout<<"Sum of digit is "<<sum<<endl; 
    break;
}
case 9 : {
    cout<<"You have selected prod of digits of a number"<<endl;
    int M;
    cout<<"Enter a number "<<endl;
    cin>>M;
    int prod = 1;
    while (M!=0)  {
        int digit = M%10;
        prod = prod*digit;
        M = M/10;
    }
    cout<<"Prod of digit is "<<prod<<endl; 
    break;
}

case 10: {
    cout<<"You have selected operation to calculate sem %age"<<endl;
    cout<<"A. Physics Sem"<<endl;
    cout<<"B. Chemistry Sem"<<endl;
    cout<<"Enter the char of your sem"<<endl;

    char n;
    cin>>n;

    if(n=='A') {
        cout<<"You have selected Physics sem"<<endl;

        cout<<"Enter your marks"<<endl;
        int maths;
        cout<<"Maths"<<endl;
        cin>>maths;

        int phy;
        cout<<"Physics"<<endl;
        cin>>phy;

        int bee;
        cout<<"BEE"<<endl;
        cin>>bee;

        int bme;
        cout<<"BME"<<endl;
        cin>>bme;

        int csk;
        cout<<"CSK"<<endl;
        cin>>csk;

        float percentage1 = (((maths+phy+bme+bee+csk)/500.0)*100);


        cout<<"Your sem %age is : " <<percentage1<<endl;
    }
    else if(n=='B') { 
        cout<<"You have selected chem sem"<<endl;

        int math;
        cout<<"Maths"<<endl;
        cin>>math;

        int chem;
        cout<<"Chemsitry"<<endl;
        cin>>chem;

        int bce;
        cout<<"BCE"<<endl;
        cin>>bce;

        int hv;
        cout<<"HV"<<endl;
        cin>>hv;

        int pps;
        cout<<"PPS"<<endl;
        cin>>pps;

        float percentage2 = (((math+chem+bce+hv+pps)/500.0)*100);

        cout<<"Your sem %age is : "<<percentage2<<endl; 
    } 
break;    
} 
case -1 : temp=0;
break; 
}
}
return 0;
}