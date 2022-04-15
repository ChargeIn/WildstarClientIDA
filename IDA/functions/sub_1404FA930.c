#include "../winhttp.h"

//----- (00000001404FA930) ----------------------------------------------------
__int64 __fastcall sub_1404FA930(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rsi
	_DWORD* v6; // rax
	int v7; // ebp
	_DWORD* v8; // rax
	double v9; // xmm0_8
	float v10; // xmm3_4

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
			v6 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
				v7 = -1;
			else
				v7 = sub_140056D60(a1, 2u);
			v8 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
				v9 = 0.0;
			else
				v9 = sub_140056C40(a1, 3u);
			v10 = v9;
			if ((unsigned int)sub_14002FA90(v3 + 2336, v5, v7, v10))
				sub_140030080(v3 + 2336, v5);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

