#include "../winhttp.h"

//----- (00000001406B0C10) ----------------------------------------------------
__int64 __fastcall sub_1406B0C10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	_DWORD* v6; // rcx
	_BOOL8 v7; // rdi
	_DWORD* v8; // rax
	__int64 v10; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			v5))
	{
		v10 = 0i64;
		(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v5 + 208i64))(v5, &v10);
		v6 = (_DWORD*)a1[2];
		v7 = v10 != 0;
		v6[2] = 1;
		*v6 = v7;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406B0C46: variable 'v3' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

