#include "../winhttp.h"

//----- (000000014025ED60) ----------------------------------------------------
__int64 __fastcall sub_14025ED60(__int64 a1, __int64 a2, int a3, int a4)
{
	int v8; // ebx
	int v9; // esi
	int v10; // eax
	int v11; // ebp
	__int64 v12; // rax
	__int64 v13; // r13
	int v14; // edx
	int v15; // r8d
	int v16; // r8d
	int v18; // [rsp+70h] [rbp+18h]

	v8 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a2 + 768),
		0i64,
		0i64);
	v9 = 1;
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(a1 + 1704),
		0i64,
		0i64);
	v10 = *(_DWORD*)(a1 + 48);
	if (v10 == 9 || v10 == 13)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			2i64,
			*(_QWORD*)(a1 + 1720));
		v11 = 1;
	}
	else if (v10 == 18)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			2i64,
			*(_QWORD*)(a1 + 1704),
			0i64,
			0i64);
		v11 = 0;
	}
	else
	{
		v11 = v18;
	}
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		3i64,
		*(_QWORD*)(a1 + 1712));
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		4i64,
		*(_QWORD*)(a1 + 1800));
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		5i64,
		*(_QWORD*)(a1 + 1808));
	v12 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		64i64,
		1i64);
	v13 = v12;
	if (v12)
	{
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)a1 + 256i64))(a1, *(_QWORD*)(a2 + 768), v12);
		sub_140262750(a2, v13 + 16, (_DWORD*)(a1 + 160));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	if (*(float*)(a1 + 332) != 0.0)
		v9 = 0;
	v14 = *(_DWORD*)(a1 + 608);
	v15 = 0;
	if (*(_DWORD*)(a1 + 48) == 13)
	{
		if (a4)
		{
			LOBYTE(v8) = v14 != 0;
			++v8;
		}
		else
		{
			v8 = 2 - (v14 != 0);
		}
	}
	LOBYTE(v15) = a3 != 0;
	v16 = ((v14 == 0) != (a4 == 0)) + 2 * ((v14 != 0) + 2 * (v15 + 2 * (v9 + 2 * v11)));
	return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2200),
		(unsigned int)(v8 + 2 * v16 + v16));
}
// 140C65670: using guessed type __int64 qword_140C65670;

