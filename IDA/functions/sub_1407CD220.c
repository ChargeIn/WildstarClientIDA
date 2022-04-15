#include "../winhttp.h"

//----- (00000001407CD220) ----------------------------------------------------
__int64 __fastcall sub_1407CD220(_QWORD* a1, __int64 a2, __int64 a3, int a4)
{
	int v8; // esi
	unsigned int v9; // edi
	int v10; // ebx
	__int64 result; // rax
	__int128 v12; // [rsp+40h] [rbp-78h] BYREF
	int v13; // [rsp+50h] [rbp-68h] BYREF
	__int64 v14; // [rsp+58h] [rbp-60h]
	int v15; // [rsp+60h] [rbp-58h]
	int v16; // [rsp+64h] [rbp-54h]

	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		a1[723],
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(qword_140C65670, a1[771]);
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		a1[770],
		22i64);
	v8 = 0;
	v9 = 756 * (a4 - 1);
	v10 = 504 * (a4 - 1);
	do
	{
		v13 = 2;
		v14 = a3;
		v15 = v8;
		v16 = a4;
		(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v13,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		v12 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			&v12);
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			1i64,
			1i64,
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			a2,
			0i64,
			0i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 656i64))(qword_140C65670, 3i64, v9);
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		++v8;
		v10 += 84;
		v9 += 126;
	} while (v8 < 6);
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

