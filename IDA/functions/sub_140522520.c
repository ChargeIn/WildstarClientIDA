#include "../winhttp.h"

//----- (0000000140522520) ----------------------------------------------------
__int64 __fastcall sub_140522520(__int64 a1, _QWORD* a2)
{
	int v2; // edi
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned __int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rcx
	_DWORD* v10; // rdx
	int v11; // eax
	int v12; // eax

	v2 = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 24) = 0;
	v5 = sub_140056AB0(a2, 3u);
	if (!v5
		|| !qword_140C659F0
		|| ((v7 = *(_QWORD*)(v5 + 16)) == 0 ? (v8 = sub_1404C9B90(v6, *(_DWORD*)(v5 + 8))) : (v8 = sub_1404B6E50(v6, v7)),
			(v9 = v8) == 0))
	{
		sub_140056570(a2, 3u, "not a valid decor");
	}
	v10 = dword_140A12138;
	if ((unsigned __int64)(a2[3] + 48i64) < a2[2])
		v10 = (_DWORD*)(a2[3] + 48i64);
	v11 = v10[2];
	if (v11 && (v11 != 1 || *v10))
		v2 = 1;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(v9 + 88);
	v12 = *(_DWORD*)(v9 + 496);
	*(_DWORD*)(a1 + 28) = v2;
	*(_DWORD*)(a1 + 24) = v12;
	return 0i64;
}
// 140522567: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C659F0: using guessed type __int64 qword_140C659F0;

