#include "../winhttp.h"

//----- (000000014082B190) ----------------------------------------------------
__int64 __fastcall sub_14082B190(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rcx
	_QWORD* v4; // rax
	_QWORD* v6; // rdx
	unsigned __int64 v7; // rdx
	_QWORD* v9; // [rsp+20h] [rbp-28h]
	_QWORD* v10; // [rsp+28h] [rbp-20h]

	v3 = *(_QWORD**)(a1 + 72);
	v4 = 0i64;
	while (v3)
	{
		if (v3[1] == a2)
		{
			v6 = (_QWORD*)*v3;
			v10 = v4;
			v9 = (_QWORD*)*v3;
			if (v3 == *(_QWORD**)(a1 + 72))
				*(_QWORD*)(a1 + 72) = v6;
			else
				*v4 = v6;
			if (v3 == *(_QWORD**)(a1 + 80))
				*(_QWORD*)(a1 + 80) = v4;
			v7 = *(_QWORD*)(a1 + 112);
			if ((unsigned __int64)v3 < v7 || (unsigned __int64)v3 >= v7 + 32i64 * *(unsigned int*)(a1 + 96))
			{
				sub_140881720(dword_140C10F20, (__int64)v3);
			}
			else
			{
				*v3 = *(_QWORD*)(a1 + 88);
				*(_QWORD*)(a1 + 88) = v3;
			}
			--* (_DWORD*)(a1 + 104);
			v4 = v10;
			v3 = v9;
		}
		else
		{
			v4 = v3;
			v3 = (_QWORD*)*v3;
		}
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

