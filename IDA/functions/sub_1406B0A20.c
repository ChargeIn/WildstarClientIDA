#include "../winhttp.h"

//----- (00000001406B0A20) ----------------------------------------------------
__int64 __fastcall sub_1406B0A20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	int v6; // edx
	bool v7; // zf
	int v8; // eax
	_DWORD* v9; // rcx
	__int64 result; // rax
	_DWORD* v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			v5))
	{
		v6 = 0;
		if (!*(_DWORD*)(v5 + 644) || (v7 = *(_DWORD*)(v5 + 648) == 0, v8 = 1, v7))
			v8 = 0;
		v9 = (_DWORD*)a1[2];
		v7 = v8 == 0;
		result = 1i64;
		LOBYTE(v6) = !v7;
		v9[2] = 1;
		*v9 = v6;
		a1[2] += 16i64;
	}
	else
	{
		v11 = (_DWORD*)a1[2];
		*v11 = 0;
		v11[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406B0A52: variable 'v3' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

