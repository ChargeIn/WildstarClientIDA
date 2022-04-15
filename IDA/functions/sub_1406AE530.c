#include "../winhttp.h"

//----- (00000001406AE530) ----------------------------------------------------
__int64 __fastcall sub_1406AE530(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rax
	int v7; // edx
	__int64 v8; // rcx
	__int64 result; // rax
	__int64 v10; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			v5))
	{
		v6 = sub_140203DA0(*(_DWORD*)(v5 + 96));
		if (v6)
			v7 = *(_DWORD*)(v6 + 4);
		else
			v7 = 0;
		v8 = a1[2];
		result = 1i64;
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = (double)v7;
		a1[2] += 16i64;
	}
	else
	{
		v10 = a1[2];
		*(_QWORD*)v10 = 0i64;
		*(_DWORD*)(v10 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406AE562: variable 'v3' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

