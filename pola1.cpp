#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if (n%2 != 0) {

        for (int i = 1; i<=(n/2) + 1; i++) {
            for (int j = 1; j<=(n/2) + 1; j++) {
                cout << "  ";
            }
            cout << "*";

            cout << endl;
        }

        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cout << "  ";
            } else if (i == n) {
                cout << "  ";
            } else {
                cout << "* ";
            }

            if (i == 1) {
                for (int j = 1; j<=n; j++) {
                    cout << "* ";
                }
            } else if (i == n) {
                for (int j = 1; j<=n; j++) {
                    cout << "* ";
                }
            } else {
                for (int j = 1; j<=n+1; j++) {
                    if (j == (n/2) - (n/2 -1) && i == n/2 + 1) {
                        cout << "o ";

                        for (int j = 1; j<=n-2; j++) {
                            cout << "  ";
                        }

                        cout << "o ";

                    } else if (j != (n/2) - (n/2 -1) && i != n/2 + 1) {
                        cout << "  ";
                    }

                }
                cout << "*";
            }
            

            cout << endl;
        }

    } else if (n%2 == 0) {

        for (int i = 1; i<=n/2; i++) {
            for (int j = 1; j<=n/2+1; j++) {
                cout << " ";
            }

            for (int j = 1; j<=i; j++) {
                if (j == i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }

            for (int j = 1; j <= (n/2 - i) * 2 ; j++) {
                cout << " ";
            }

            cout << " *";

            cout << endl;
        }

        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cout << "  ";
            } else if (i == n) {
                cout << "  ";
            } else {
                cout << "* ";
            }

            if (i == 1) {
                for (int j = 1; j<=n; j++) {
                    cout << "* ";
                }
            } else if (i == n) {
                for (int j = 1; j<=n; j++) {
                    cout << "* ";
                }
            } else {
                for (int j = 1; j<=n+1; j++) {
                    if (j == (n/2) - (n/2 -1) && i == n/2) {
                        cout << "o ";

                        for (int j = 1; j<=n-2; j++) {
                            cout << "  ";
                        }

                        cout << "o ";

                    } else if (j != (n/2) - (n/2 -1) && i != n/2) {
                        cout << "  ";
                    }

                }
                cout << "*";
            }
            

            cout << endl;
        }

    }
    return 0;
}