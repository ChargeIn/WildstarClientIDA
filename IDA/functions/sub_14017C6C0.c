#include "../winhttp.h"

//----- (000000014017C6C0) ----------------------------------------------------
__int64 __fastcall sub_14017C6C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64* v3; // rcx
	__int64 v4; // rdi
	int v5; // eax
	double v6; // xmm0_8
	float v7; // xmm1_4
	__int64 result; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]
	__int64 v11; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_14017C470(a1);
	v3 = (__int64*)dword_140A12138;
	v4 = v2;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v5 = *((_DWORD*)v3 + 2);
	if (v5 == 3)
		goto LABEL_7;
	if (v5 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v11))
	{
		v10 = 3;
		v3 = &v9;
		v9 = v11;
	LABEL_7:
		v6 = *(double*)v3;
		goto LABEL_8;
	}
	v6 = 0.0;
LABEL_8:
	v7 = v6;
	result = 0i64;
	if (v7 >= 0.0)
		*(float*)(v4 + 1088) = v7;
	else
		*(_DWORD*)(v4 + 1088) = 0;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

