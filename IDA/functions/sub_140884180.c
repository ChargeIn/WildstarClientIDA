#include "../winhttp.h"

//----- (0000000140884180) ----------------------------------------------------
__int64 __fastcall sub_140884180(__int64 a1)
{
	unsigned int* v1; // rdx
	unsigned int v3; // eax
	unsigned int* v4; // r9
	__int64 v5; // r8
	__int64 v6; // r10
	unsigned int v7; // eax
	unsigned int v8; // edi
	__int64 v9; // rcx
	__int64 v11; // [rsp+28h] [rbp-10h]
	char v12; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(unsigned int**)(a1 + 32);
	if (!v1 || (*(_BYTE*)(a1 + 117) & 8) != 0)
		return 1i64;
	v12 = 1;
	v3 = v1[11];
	if ((v3 & 2) != 0)
		v4 = v1 + 2;
	else
		v4 = 0i64;
	v5 = v1[10];
	v6 = *(_QWORD*)qword_140C62938;
	v11 = *(_QWORD*)(a1 + 40);
	if ((v3 & 1) != 0)
		v7 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, unsigned int*, char*, __int64))(v6 + 16))(
			qword_140C62938,
			*(_QWORD*)v1,
			v5,
			v4,
			&v12,
			v11);
	else
		v7 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, unsigned int*, char*, __int64))(v6 + 8))(
			qword_140C62938,
			*v1,
			v5,
			v4,
			&v12,
			v11);
	v8 = v7;
	if (v7 == 1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
	v9 = *(_QWORD*)(a1 + 32);
	if (v9)
	{
		sub_140883230(v9);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	return v8;
}
// 140C62938: using guessed type __int64 qword_140C62938;

