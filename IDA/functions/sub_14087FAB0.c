#include "../winhttp.h"

//----- (000000014087FAB0) ----------------------------------------------------
__int64 __fastcall sub_14087FAB0(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // rbx
	__int64 result; // rax
	__int64 v6; // r9
	unsigned int v7; // edi
	int v8; // [rsp+20h] [rbp-48h]
	char v9; // [rsp+28h] [rbp-40h]
	int v10; // [rsp+40h] [rbp-28h] BYREF
	__int64 v11; // [rsp+44h] [rbp-24h]
	__int64 v12; // [rsp+50h] [rbp-18h]
	__int16 v13; // [rsp+58h] [rbp-10h]
	int v14; // [rsp+5Ch] [rbp-Ch]
	char v15; // [rsp+70h] [rbp+8h] BYREF

	v3 = (_QWORD*)(a1 + 528);
	if (*(_QWORD*)(a1 + 528))
		return 1i64;
	v14 = -1;
	v11 = 1i64;
	v10 = 0;
	v13 = 0;
	v12 = 0i64;
	v9 = 1;
	result = (*(__int64(__fastcall**)(__int64, __int64, int*, __int64, _QWORD*, char))(*(_QWORD*)qword_140C62930
		+ 32i64))(
			qword_140C62930,
			a2,
			&v10,
			2i64,
			v3,
			v9);
	if ((_DWORD)result == 1)
	{
		LOBYTE(v6) = 1;
		LOBYTE(v8) = 100;
		v7 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64, int, _DWORD, char*))(*(_QWORD*)*v3 + 56i64))(
			*v3,
			a3,
			46i64,
			v6,
			v8,
			0,
			&v15);
		if (v7 != 1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
			*v3 = 0i64;
		}
		return v7;
	}
	return result;
}
// 14087FB50: variable 'v6' is possibly undefined
// 14087FB50: variable 'v8' is possibly undefined
// 140C62930: using guessed type __int64 qword_140C62930;

