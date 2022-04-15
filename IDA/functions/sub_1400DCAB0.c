#include "../winhttp.h"

//----- (00000001400DCAB0) ----------------------------------------------------
__int64 __fastcall sub_1400DCAB0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rcx
	int v5; // eax
	unsigned int v6; // eax
	unsigned __int64 v7; // r8
	unsigned __int64 v8; // rdx
	unsigned __int64 v9; // rcx
	unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_1400D66A0(a1, 1u);
	v3 = v2;
	if (v2 && *(_QWORD*)(v2 + 344))
	{
		v4 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = v4[2];
		if (v5 == 3 || v5 == 4 && sub_14005AC80((char*)(*(_QWORD*)v4 + 32i64), &v11))
		{
			v6 = sub_1400584E0((__int64)a1, 2);
			v7 = *(_QWORD*)(*(_QWORD*)(v3 + 344) + 8i64);
			v8 = v7;
			v9 = *(_QWORD*)(v7 + 8);
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < v6)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v8 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v8 == v7 || (v11 = v8, v6 < *(_DWORD*)(v8 + 32)))
				v11 = v7;
			if (v11 != v7)
				*(_DWORD*)(*(_QWORD*)(v11 + 40) + 144i64) = dword_140C63664;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63664: using guessed type int dword_140C63664;

