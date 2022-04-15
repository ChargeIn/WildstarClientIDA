#include "../winhttp.h"

//----- (0000000140757B90) ----------------------------------------------------
__int64 __fastcall sub_140757B90(__int64 a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v2; // r8
	_DWORD* v3; // rdx
	__int64 v4; // rdi
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax

	v1 = *(_DWORD**)(a1 + 24);
	v2 = *(_QWORD*)(a1 + 16);
	if ((unsigned __int64)v1 < v2)
	{
		v3 = dword_140A12138;
		if (v1 != dword_140A12138 && v1[2] == 5)
		{
			if ((unsigned __int64)v1 < v2)
				v3 = *(_DWORD**)(a1 + 24);
			*(_QWORD*)v2 = *(_QWORD*)v3;
			*(_DWORD*)(v2 + 8) = v3[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v4 = (int)sub_1400578C0(a1);
			v5 = sub_14018B280(56i64, 0);
			v6 = 0i64;
			v7 = (__int64)v5;
			if (v5)
			{
				*(_QWORD*)v5 = 0i64;
				*((_QWORD*)v5 + 2) = 0i64;
				v5[6] = 0;
				v5[10] = 0;
				*((_QWORD*)v5 + 4) = sub_140757AC0;
				*((_QWORD*)v5 + 6) = v4;
				v8 = sub_140225140(4u);
				if (v8)
					*(_QWORD*)(v7 + 16) = v8;
			}
			else
			{
				v7 = 0i64;
			}
			sub_1404CFA80(v6, v7);
		}
	}
	return 0i64;
}
// 140757C35: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

