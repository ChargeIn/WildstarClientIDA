#include "../winhttp.h"

//----- (000000014048DD20) ----------------------------------------------------
__int64 __usercall sub_14048DD20@<xmm0>(__int64 a1@<rcx>, unsigned int a2@<edx>, char a3@<r8b>)
{
__int64 v3; // r9
__int64 v4; // rcx
__int64 v5; // rax
_DWORD* v6; // rcx
__int64 result; // xmm0_8
int v8; // eax
__int64 v9; // [rsp+8h] [rbp+8h]

v3 = *(_QWORD*)(qword_140C65948 + 48);
v4 = v3;
v5 = *(_QWORD*)(v3 + 8);
while (v5)
{
if (*(_DWORD*)(v5 + 32) < a2)
{
v5 = *(_QWORD*)(v5 + 24);
}
else
{
v4 = v5;
v5 = *(_QWORD*)(v5 + 16);
}
}
if (v4 == v3 || (v9 = v4, a2 < *(_DWORD*)(v4 + 32)))
v9 = *(_QWORD*)(qword_140C65948 + 48);
if (v9 == v3)
return 0i64;
v6 = *(_DWORD**)(v9 + 40);
if (!v6)
return 0i64;
result = 0i64;
if (v6[12] && (a3 & 2) != 0)
{
v8 = v6[15];
LABEL_20:
HIDWORD(result) = 0;
*(float*)&result = (float)(v8 - dword_140C636A8) * 0.001;
return result;
}
if (v6[13] && (a3 & 4) != 0)
{
v8 = v6[17];
goto LABEL_20;
}
if (v6[14] && (a3 & 8) != 0)
{
v8 = v6[19];
goto LABEL_20;
}
return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65948: using guessed type __int64 qword_140C65948;