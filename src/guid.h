/**********************************************************\
|                                                          |
| guid.h                                                   |
| xiyoo0812                                                |
|                                                          |
\**********************************************************/

#ifndef GUID_INCLUDED
#define GUID_INCLUDED

#include <stdlib.h>
#include "lcrypt.h"

#ifdef __cplusplus
extern "C" {
#endif

//i  - group��10λ��(0~1023)
//g  - index��10λ(0~1023)
//s  - ��ţ�14λ(0~16384)
//ts - ʱ�����30λ

#define GROUP_BITS  10
#define INDEX_BITS  10
#define SNUM_BITS   14

#define MAX_GROUP   1 << GROUP_BITS - 1     //1024 - 1
#define MAX_INDEX   1 << INDEX_BITS - 1     //1024 - 1
#define MAX_SNUM    1 << SNUM_BITS - 1      //16384 - 1

LCRYPT_API size_t new_guid(size_t group, size_t index);

#ifdef __cplusplus
}
#endif

#endif
