#include "../winhttp.h"

//----- (00000001403B4710) ----------------------------------------------------
__int64 __fastcall sub_1403B4710(__int64 a1, _DWORD* a2, _DWORD* a3)
{
	_DWORD* v3; // rbp
	__int64 v7; // rdx
	int v8; // ecx
	int v9; // r9d
	__int64 v10; // r8
	int v11; // ecx
	int v12; // eax
	__int64 v13; // rcx
	unsigned int v14; // edi
	int v15; // edx
	int v16; // ecx
	__int64 v17; // r8
	__int64 v18; // r8
	__int64 v19; // rax

	v3 = a3;
	if (!a2)
		return 6i64;
	if (!a3)
		v3 = a2 + 2;
	v7 = *(_QWORD*)(a1 + 120);
	if (v7)
		v8 = *(_DWORD*)(v7 + 216);
	else
		LOBYTE(v8) = 17;
	v9 = a2[100];
	v10 = 1i64;
	if (v9 && (v9 & (1 << (v8 - 1))) == 0)
		return 39i64;
	if (v7)
		v11 = *(_DWORD*)(v7 + 220);
	else
		LOBYTE(v11) = 23;
	v12 = a2[99];
	if (v12)
	{
		v10 = v12 & (unsigned int)(1 << (v11 - 1));
		if (!(_DWORD)v10)
			return 40i64;
	}
	v13 = *(_QWORD*)(a1 + 7152);
	v14 = 0;
	if (v13)
		v15 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v13 + 24i64))(v13, v7, v10);
	else
		v15 = 0;
	v16 = a2[101];
	if (v16 && v16 != v15)
		return 132i64;
	v17 = (unsigned int)a2[102];
	if ((_DWORD)v17
		&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(a1 + 120),
				v17,
				0i64,
				0i64,
				0))
	{
		return 144i64;
	}
	v18 = (unsigned int)v3[68];
	if ((_DWORD)v18)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(a1 + 120),
				v18,
				0i64,
				0i64,
				0))
			return 144i64;
	}
	if (!(unsigned int)sub_1403CA2B0(a1, a2[103]))
		return 41i64;
	v19 = *(_QWORD*)(a1 + 120);
	if (v19)
		v14 = *(_DWORD*)(v19 + 56);
	return v14 < v3[2] ? 0x2A : 0;
}
// 140C659A0: using guessed type __int64 qword_140C659A0;

