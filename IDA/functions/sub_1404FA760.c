#include "../winhttp.h"

//----- (00000001404FA760) ----------------------------------------------------
__int64 __fastcall sub_1404FA760(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rsi
	int v6; // ebx
	_DWORD* v7; // rax
	int v8; // ebp
	_DWORD* v9; // rax

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v5 = *(_QWORD*)(v3 + 2168);
		if (v5)
		{
			v6 = -1;
			v7 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
				v8 = -1;
			else
				v8 = sub_140056D60(a1, 2u);
			v9 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v9 < a1[2] && v9 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
				v6 = sub_140056D60(a1, 3u);
			if (v8 >= 0 && v6 >= 0)
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v5 + 80i64))(
					v5,
					(unsigned int)v8,
					(unsigned int)v6,
					0i64);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

