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
//s  - ��ţ�13λ(0~8912)
//ts - ʱ�����30λ
//��63λ����ֹ���ָ���

#define GROUP_BITS  10
#define INDEX_BITS  10
#define SNUM_BITS   13

//��׼ʱ�ӣ�2021-01-01 08:00:00
#define BASE_TIME   1625097600

#define MAX_GROUP   ((1 << GROUP_BITS) - 1) //1024 - 1
#define MAX_INDEX   ((1 << INDEX_BITS) - 1) //1024 - 1
#define MAX_SNUM    ((1 << SNUM_BITS) - 1)  //8912 - 1
#define MAX_TIME    ((1 << TIME_BITS) - 1)

LCRYPT_API size_t new_guid(size_t group, size_t index);

#ifdef __cplusplus
}
#endif

#endif
