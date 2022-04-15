#include "../winhttp.h"

//----- (00000001407CC9A0) ----------------------------------------------------
__int64 __fastcall sub_1407CC9A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	unsigned int v8; // edi
	unsigned int v9; // ebx
	__int64 result; // rax
	__int128 v11; // [rsp+30h] [rbp-68h] BYREF
	int v12; // [rsp+40h] [rbp-58h] BYREF
	__int64 v13; // [rsp+48h] [rbp-50h]
	unsigned int v14; // [rsp+50h] [rbp-48h]
	int v15; // [rsp+54h] [rbp-44h]

	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 6152),
		22i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 5784),
		0i64);
	v8 = 0;
	v9 = 48 * (a4 - 1);
	do
	{
		v12 = 2;
		v13 = a3;
		v14 = v8;
		v15 = a4;
		(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v12,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		v11 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			&v11);
		(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			a2,
			0i64,
			0i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 648i64))(qword_140C65670, 4i64, v9);
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		++v8;
		v9 += 4;
	} while (v8 < 6);
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

