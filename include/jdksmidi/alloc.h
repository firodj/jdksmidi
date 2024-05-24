#ifndef JDKSMIDI_ALLOC_H
#define JDKSMIDI_ALLOC_H

namespace jdksmidi
{

template <class I>
inline void jdks_safe_delete_object( I *&obj )
{
    delete obj;
    obj = 0;
}

template <class I>
inline void jdks_safe_delete_array( I *&arr )
{
    delete[] arr;
    arr = 0;
}

template <class D>
inline int jdks_float2int( D d )
{
    return int( d >= D( 0. ) ? ( d + D( 0.5 ) ) : ( d - D( 0.5 ) ) );
}

}

#endif // JDKSMIDI_ALLOC_H