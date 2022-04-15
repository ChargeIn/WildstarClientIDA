#include "../winhttp.h"

//----- (00000001404E4EA0) ----------------------------------------------------
__int64 __fastcall sub_1404E4EA0(__int64 a1)
{
	__int64* v1; // rdx
	int v3; // edi
	int v4; // eax
	unsigned int v5; // edx
	double v6; // xmm0_8
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // r8
	__int64 v11; // r9
	_DWORD* v12; // rcx
	__int64 v13; // rcx
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	__int64 v17; // [rsp+48h] [rbp+10h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v3 = 0;
	v4 = *((_DWORD*)v1 + 2);
	if (v4 == 3)
		goto LABEL_7;
	if (v4 == 4 && sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v17))
	{
		v16 = 3;
		v1 = &v15;
		v15 = v17;
	LABEL_7:
		v5 = (int)*(double*)v1;
		goto LABEL_8;
	}
	v5 = 0;
LABEL_8:
	if (qword_140C65898)
	{
		v6 = (double)(int)sub_1403D2140(qword_140C65898, v5);
		v7 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = v6;
	}
	else
	{
		v8 = *(_QWORD*)(qword_140C635F0 + 5584);
		v9 = 0i64;
		v10 = *(_QWORD*)(v8 + 160);
		if (v10)
		{
			v11 = *(_QWORD*)(v8 + 152);
			v12 = (_DWORD*)(v11 + 8);
			while (*v12 != v5)
			{
				++v9;
				v12 += 4;
				if (v9 >= v10)
					goto LABEL_17;
			}
			v3 = *(_DWORD*)(v11 + 16 * v9 + 12);
		}
	LABEL_17:
		v13 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v13 + 8) = 3;
		*(double*)v13 = (double)v3;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

