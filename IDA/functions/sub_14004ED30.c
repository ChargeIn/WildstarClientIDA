#include "../winhttp.h"

//----- (000000014004ED30) ----------------------------------------------------
__int64 __fastcall sub_14004ED30(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64* v3; // rax
	__int64 v4; // rdi
	unsigned int v5; // eax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v3 = (__int64*)sub_140056AB0(a1, 1u);
		if (v3)
		{
			v4 = *v3;
			if (*v3)
			{
				if (*(_QWORD*)(v4 + 392))
				{
					v5 = sub_140056D60(a1, 2u);
					(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v4 + 392) + 112i64))(*(_QWORD*)(v4 + 392), v5);
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

