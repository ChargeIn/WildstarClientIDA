#include "../winhttp.h"

//----- (0000000140017F60) ----------------------------------------------------
__int64 __fastcall sub_140017F60(__int64 a1)
{
	__int64* v1; // rbx
	__int64 v2; // rcx
	__int64 v3; // rdi
	__int64* v4; // rax
	__int64 v5; // r9
	__int64 v6; // rcx
	int v7; // ecx
	int v8; // eax
	unsigned int v9; // edx
	unsigned int v10; // eax
	__int64 result; // rax
	int v12; // [rsp+30h] [rbp-58h] BYREF
	__int64 v13; // [rsp+38h] [rbp-50h]
	__int64 v14; // [rsp+40h] [rbp-48h]
	__int64 v15; // [rsp+48h] [rbp-40h]
	__int64 v16; // [rsp+50h] [rbp-38h]
	__int64 v17; // [rsp+58h] [rbp-30h] BYREF
	__int64 v18; // [rsp+60h] [rbp-28h]
	__int64 v19; // [rsp+68h] [rbp-20h]
	__int64 v20; // [rsp+70h] [rbp-18h]
	__int64 v21; // [rsp+78h] [rbp-10h]

	v1 = (__int64*)(a1 + 5856);
	v2 = *(_QWORD*)(a1 + 5856);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*v1 = 0i64;
	}
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
	v4 = (__int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 16i64))(qword_140C65670);
	v5 = *v4;
	v13 = v4[1];
	v14 = v4[2];
	v6 = v4[3];
	v16 = v4[4];
	v17 = 0i64;
	v18 = 0i64;
	v19 = 0i64;
	v20 = 0i64;
	v21 = 0i64;
	v15 = v6;
	v7 = *(_DWORD*)qword_140C63750;
	v8 = dword_140C3B030;
	if ((unsigned int)v5 <= HIDWORD(v5))
	{
		if (v7 < dword_140C3B030)
			v8 = *(_DWORD*)qword_140C63750;
		v10 = *((_DWORD*)&off_140C3B020 + v8 + 8);
		if (*(_DWORD*)(v3 + 56) < v10)
			v10 = *(_DWORD*)(v3 + 56);
		HIDWORD(v17) = v10;
		LODWORD(v17) = (unsigned int)v5 * v10 / HIDWORD(v5);
	}
	else
	{
		if (v7 < dword_140C3B030)
			v8 = *(_DWORD*)qword_140C63750;
		v9 = *((_DWORD*)&off_140C3B020 + v8 + 8);
		if (*(_DWORD*)(v3 + 56) < v9)
			v9 = *(_DWORD*)(v3 + 56);
		LODWORD(v17) = v9;
		HIDWORD(v17) = v9 * HIDWORD(v5) / (unsigned int)v5;
	}
	v18 = 0x1700000000i64;
	result = (*(__int64(__fastcall**)(__int64, __int64*, __int64*))(*(_QWORD*)qword_140C65670 + 48i64))(
		qword_140C65670,
		&v17,
		v1);
	if ((int)result >= 0)
	{
		v13 = *v1;
		v12 = 0;
		(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v12,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		v13 = *v1;
		v12 = 0;
		(*(void(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(qword_140C65670, &v12, 1i64);
		return 0i64;
	}
	return result;
}
// 140C3B020: using guessed type __int64 (__fastcall **off_140C3B020)();
// 140C3B030: using guessed type int dword_140C3B030;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;

