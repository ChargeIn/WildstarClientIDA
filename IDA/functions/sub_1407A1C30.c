#include "../winhttp.h"

//----- (00000001407A1C30) ----------------------------------------------------
__int64 __usercall sub_1407A1C30@<xmm0>(int a1@<ecx>, _DWORD* a2@<rdx>)
{
__int64 v2; // r10
__int64 result; // xmm0_8
unsigned int v5; // edx
__int64 v6; // rax
__int64 v7; // rcx
int v8; // r8d
int v9; // r8d
int v10; // r8d
int v11; // ebx
__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
__int128 v13; // [rsp+28h] [rbp-40h]
__int64(__fastcall * *v14)(); // [rsp+40h] [rbp-28h] BYREF
__int128 v15; // [rsp+48h] [rbp-20h]
__int64 v16; // [rsp+80h] [rbp+18h] BYREF

v2 = a1;
switch (a1)
{
case 0:
HIDWORD(result) = 0;
*(float*)&result = (float)(int)a2[3];
return result;
case 1:
return COERCE_UNSIGNED_INT((float)(int)a2[5]);
case 2:
HIDWORD(result) = 0;
*(float*)&result = (float)(int)a2[8];
return result;
case 3:
HIDWORD(result) = 0;
*(float*)&result = (float)(int)a2[9];
return result;
case 4:
HIDWORD(result) = 0;
*(float*)&result = (float)(int)a2[14];
return result;
case 5:
HIDWORD(result) = 0;
*(float*)&result = (float)(int)a2[15];
return result;
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
v5 = a2[4];
v6 = *(_QWORD*)(qword_140C7F7B8 + 8);
v7 = qword_140C7F7B8;
if (!v6)
goto LABEL_15;
do
{
if (*(_DWORD*)(v6 + 32) < v5)
{
v6 = *(_QWORD*)(v6 + 24);
}
else
{
v7 = v6;
v6 = *(_QWORD*)(v6 + 16);
}
} while (v6);
if (v7 == qword_140C7F7B8 || (v16 = v7, v5 < *(_DWORD*)(v7 + 32)))
LABEL_15:
v16 = qword_140C7F7B8;
v8 = *(_DWORD*)(v16 + 4 * v2 + 16);
if (!v8)
return (unsigned int)a2[(int)v2 + 10];
v9 = v8 - 1;
if (!v9)
return COERCE_UNSIGNED_INT((float)(int)a2[(int)v2 + 10]);
v10 = v9 - 1;
if (v10)
{
if (v10 != 1)
return 0i64;
return (unsigned int)a2[(int)v2 + 10];
}
else
{
HIDWORD(result) = 0;
*(float*)&result = (float)(int)a2[(int)v2 + 10];
}
return result;
case 16:
return COERCE_UNSIGNED_INT((float)(int)a2[12]);
case 17:
return COERCE_UNSIGNED_INT((float)(int)a2[13]);
case 18:
return (unsigned int)a2[28];
default:
*(_QWORD*)&v13 = 0i64;
TlsValue = &off_140B5E648;
*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
TlsSetValue(dwTlsIndex, &TlsValue);
v14 = TlsValue;
v16 = 0x141E4C3F0i64;
v15 = v13;
v11 = sub_1401971E0(&dword_140C8B168, 24, &v16, &v14);
TlsValue = &off_140B5E648;
TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
if (v11)
DebugBreak();
return 0i64;
}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C7F7B8: using guessed type __int64 qword_140C7F7B8;
// 140C8B168: using guessed type _DWORD dword_140C8B168;