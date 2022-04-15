#include "../winhttp.h"

//----- (0000000140879590) ----------------------------------------------------
__int64 __usercall sub_140879590@<xmm0>(__int64 a1@<rcx>)
{
__int64 v1; // rcx
__int64 result; // xmm0_8
float v3; // [rsp+30h] [rbp+8h]
float v4; // [rsp+40h] [rbp+18h]

v1 = *(_QWORD*)(a1 + 56);
if (!v1)
return 0i64;
v3 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v1 + 64i64))(v1) + COERCE_FLOAT(7136238);
LODWORD(v4) = (LODWORD(v3) & 0x7FFFFF) + 1065353216;
HIDWORD(result) = 0;
*(float*)&result = (float)((float)((float)((float)((float)((float)((float)((float)(v4 - 1.0) / (float)(v4 + 1.0))
                                                                   * (float)((float)(v4 - 1.0) / (float)(v4 + 1.0)))
                                                           * 0.33333334)
                                                   + 1.0)
                                           * (float)((float)((float)(v4 - 1.0) / (float)(v4 + 1.0)) * 2.0))
                                   + (float)((float)((float)(unsigned __int8)(LODWORD(v3) >> 23) - 127.0) * 0.69314718))
* 0.43429449)
* 20.0;
return result;
}