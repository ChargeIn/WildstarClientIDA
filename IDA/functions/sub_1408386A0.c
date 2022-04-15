#include "../winhttp.h"

//----- (00000001408386A0) ----------------------------------------------------
__int64 __fastcall sub_1408386A0(__int64 a1, __int64 a2, int a3, char a4)
{
	__int64* v7; // rcx
	__int64 result; // rax
	_QWORD* v9; // rax
	_QWORD* v10; // rcx
	__int64 v11; // rax
	bool v12; // cf
	__int64 v13; // rdx
	_QWORD* v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // [rsp+28h] [rbp-10h]

	if (!a4)
	{
		v7 = *(__int64**)(a1 + 4712);
		if (v7)
		{
			while (*((_DWORD*)v7 + 2) != a3)
			{
				v7 = (__int64*)*v7;
				if (!v7)
					goto LABEL_5;
			}
			v12 = sub_140835430((__int64)(v7 + 4), a2) != 0i64;
			return 2 - (unsigned int)v12;
		}
	}
LABEL_5:
	result = 31i64;
	if (!a2)
		return result;
	sub_140839150(a1, a2);
	LODWORD(v16) = a3;
	if (*(_QWORD*)(a1 + 4680))
		goto LABEL_10;
	if (*(_DWORD*)(a1 + 4696) < *(_DWORD*)(a1 + 4692))
	{
		v9 = (_QWORD*)sub_1408819F0(dword_140C10F20, 24i64);
		if (v9)
		{
			*v9 = *(_QWORD*)(a1 + 4680);
			*(_QWORD*)(a1 + 4680) = v9;
		LABEL_10:
			v10 = *(_QWORD**)(a1 + 4672);
			v11 = *(_QWORD*)(a1 + 4680);
			if (v10)
				*v10 = v11;
			else
				*(_QWORD*)(a1 + 4664) = v11;
			v14 = *(_QWORD**)(a1 + 4680);
			*(_QWORD*)(a1 + 4672) = v14;
			*(_QWORD*)(a1 + 4680) = *v14;
			*v14 = 0i64;
			v15 = *(_QWORD*)(a1 + 4672);
			++* (_DWORD*)(a1 + 4696);
			*(_QWORD*)(v15 + 8) = a2;
			v13 = v15 + 8;
			*(_QWORD*)(v13 + 8) = v16;
			goto LABEL_16;
		}
	}
	v13 = 0i64;
LABEL_16:
	v12 = v13 != 0;
	return 2 - (unsigned int)v12;
}
// 14083879E: variable 'v16' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

