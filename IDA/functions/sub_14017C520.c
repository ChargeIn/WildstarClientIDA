#include "../winhttp.h"

//----- (000000014017C520) ----------------------------------------------------
__int64 __fastcall sub_14017C520(_QWORD* a1)
{
	__int64 v2; // rbp
	__int64 v3; // r14
	float v4; // xmm6_4
	_DWORD* v5; // rdi
	int v6; // r15d
	_DWORD* v7; // rdx
	int v8; // ecx
	__int64* v9; // rcx
	int v10; // eax
	double v11; // xmm0_8
	int v12; // esi
	int v13; // eax
	__int64 v15; // [rsp+30h] [rbp-38h] BYREF
	int v16; // [rsp+38h] [rbp-30h]
	__int64 v17; // [rsp+78h] [rbp+10h] BYREF

	v2 = sub_14017C470(a1);
	if (!v2)
		return 0i64;
	v3 = sub_1400D66A0(a1, 2u);
	if (!v3)
		return 0i64;
	v4 = 100000.0;
	v5 = dword_140A12138;
	v6 = sub_140121AC0(a1, 3u, (__int64)off_140A3B910, 4ui64);
	v7 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 48i64) < a1[2])
		v7 = (_DWORD*)(a1[3] + 48i64);
	v8 = v7[2];
	if (v8 == 3 || v8 == 4 && sub_14005AC80((char*)(*(_QWORD*)v7 + 32i64), (unsigned __int64*)&v17))
	{
		v9 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 48i64) < a1[2])
			v9 = (__int64*)(a1[3] + 48i64);
		v10 = *((_DWORD*)v9 + 2);
		if (v10 != 3)
		{
			if (v10 != 4 || !sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v17))
			{
				v11 = 0.0;
				goto LABEL_15;
			}
			v16 = 3;
			v9 = &v15;
			v15 = v17;
		}
		v11 = *(double*)v9;
	LABEL_15:
		v4 = v11;
	}
	v12 = 1000;
	if ((unsigned __int64)(a1[3] + 64i64) < a1[2])
		v5 = (_DWORD*)(a1[3] + 64i64);
	v13 = v5[2];
	if (v13 == 3 || v13 == 4 && sub_14005AC80((char*)(*(_QWORD*)v5 + 32i64), (unsigned __int64*)&v17))
		v12 = sub_1400584E0((__int64)a1, 5);
	sub_14017B960(v2, v3, v6, v4, v12);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A3B910: using guessed type wchar_t *off_140A3B910[6];

