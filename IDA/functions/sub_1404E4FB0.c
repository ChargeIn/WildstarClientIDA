#include "../winhttp.h"

//----- (00000001404E4FB0) ----------------------------------------------------
__int64 __fastcall sub_1404E4FB0(__int64 a1)
{
	__int64* v1; // rax
	__int64* v3; // rcx
	int v4; // eax
	unsigned int v5; // ecx
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rcx
	double v9; // xmm0_8
	__int64 result; // rax
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF

	v1 = *(__int64**)(a1 + 24);
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v1 < *(_QWORD*)(a1 + 16))
		v3 = v1;
	v4 = *((_DWORD*)v3 + 2);
	if (v4 != 3)
	{
		if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v13))
		{
			v5 = 0;
			goto LABEL_8;
		}
		v12 = 3;
		v3 = &v11;
		v11 = v13;
	}
	v5 = (int)*(double*)v3;
LABEL_8:
	v6 = sub_1401FE020(v5);
	if (!v6 || (v7 = *(_DWORD*)(v6 + 4)) == 0)
		v7 = -1;
	v8 = *(_QWORD*)(a1 + 16);
	v9 = (double)v7;
	result = 1i64;
	*(double*)v8 = v9;
	*(_DWORD*)(v8 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

