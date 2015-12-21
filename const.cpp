#include <iostream>
using namespace std;

struct A {
    const double* ptr() const
    {
        return m_ptr;
    }

    A():
        m_ptr( new double[ 10 ] )
        {
        m_ptr[ 0 ] = 10.0;
        }

private:
    double* m_ptr;
};

void func( const A* a ) {
#if 0
    a->ptr()[ 0 ] = 1.0;
#endif
}

int main() {
    A* a = new A;
    func( a );
    cout << a->ptr()[ 0 ] << endl;
    return 0;
}
