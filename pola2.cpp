#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int w = 1;
    int q = n/2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j<=1; j++) {
            if (i == n) {
                cout << "E";
            } else {
                cout << " ";
            }
        }

        for (int j = 1; j<=n-i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i ; j++) {
            if (n == 4) {
                if (i == n && j == n-1) {
                    cout << "o ";
                } else {
                    cout << "* ";
                }
            } else
            if (i == n-1 && j==n-2) {
                cout << "o ";
            } else {
                cout << "* ";
            }
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        for (int j = 1; j <= (n-i) * 2; j++) {
            cout << " ";
        }

        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i ; j++) {
            cout << "*";
        }

        cout << "  ";

        if (i > n/2) {

            

            for (int j = 1; j <= w; j++) {
                if ((i == n) && i%2 != 0) {
                
                } else if(i == n) {
                    cout << "";
                } else {
                    cout << " "; 
                    
                }
            }
            w++;

        } else {
            for (int j = 1; j<= n/2-i; j++) {
                cout << " ";
            }
        }
        


        if (i > n/2) {

            
            
            for (int j = 1; j<=q-1; j++) {
                if (i == n) {

                } else {
                    cout << "*";
                }
            }
            q--;

            

        } else {
            for (int j = 1; j <= i; j++) {
                if (i > n/2) {
                    cout << "";
                } else {
                    cout << "*";
                }
            }
        }

        if (i > n/2) {
            
            
            for (int j = 1; j<=q; j++) {
                cout << "*";
            }

        } else {

            for (int j = 1; j <= i; j++) {
                if (i > n/2) {
                    cout << "";
                } else {
                    cout << "*";
                }
            }
        }

        if (i > n/2) {

            
            for (int j = 1; j<=w*2 - 2; j++) {
                cout << " ";
            }
        
        } else {
            for (int j = 1; j<=(n/2 - i) * 2; j++) {
                cout << " ";
            }
        }

        if (i > n/2) {

            for (int j = 1; j<=q; j++) {
                cout << "*";
            }

        } else {
            for (int j = 1; j <= i; j++) {
                if (i > n/2) {
                    cout << "";
                } else {
                    cout << "*";
                }
            }
        }

        cout << endl;
        
    }


    w = n/2;
    q = 1;

    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j<=1; j++) {
            cout << " ";
        }

        for (int j = 1; j<=n-i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i ; j++) {
            cout << "* ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        for (int j = 1; j <= (n-i) * 2; j++) {
            cout << " ";
        }

        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i ; j++) {
            cout << "*";
        }

        cout << "  ";

        if (i > n/2) {

            if (n%2 == 0) {
                for (int j = 1; j<=w-1; j++) {
                    cout << " ";
                }
                w--;
            
            } else {
                for (int j = 1; j<=w; j++) {
                    cout << " ";
                }
                w--;
            }
            
        } else {
            for (int j = 1; j<= n/2-i; j++) {
                cout << " ";
            }
        }


        if (i > n/2) {

            if (n % 2 == 0){
                // GENAP
                for (int j = 1; j <= q; j++) {
                    cout << "*";
                }
                q++;

            } else {
                for (int j = 1; j <= q-1; j++) {
                    cout << "*";
                }
                q++;
            }
            
            
        } else {
            for (int j = 1; j <= i; j++) {
                if (i > n/2) {
                    cout << "";
                } else {
                    cout << "*";
                }
            }
        }

        if (i > n/2) {

            if (n % 2 == 0){

                //GENAP
                for (int j = 1; j<=q-1; j++) {
                    cout << "*";
                }
            
            } else {
                for (int j = 1; j<=q-2; j++) {
                    cout << "*";
                }
            }

        } else {

            for (int j = 1; j <= i; j++) {
                if (i > n/2) {
                    cout << "";
                } else {
                    cout << "*";
                }
            }
        }

        if (i > n/2) {

            if (n%2 == 0) {
                for (int j = 1; j<=w*2; j++) {
                    cout << " ";
                }
            } else {
                for (int j = 1; j<=w*2 + 2; j++) {
                    cout << " ";
                }
            }
        
        } else {
            for (int j = 1; j<=(n/2 - i) * 2; j++) {
                cout << " ";
            }
        }


        if (i > n/2) {

            if (n%2 == 0) {
                for (int j = 1; j<=q-1; j++) {
                    cout << "*";
                }
            } else {
                for (int j = 1; j<=q-2; j++) {
                    cout << "*";
                }
            }

        } else {
            for (int j = 1; j <= i; j++) {
                if (i > n/2) {
                    cout << "";
                } else {
                    cout << "*";
                }
            }
        }

        
        cout << endl;
    }
    return 0;
}