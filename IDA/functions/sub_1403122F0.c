#include "../winhttp.h"

//----- (00000001403122F0) ----------------------------------------------------
__int64 __fastcall sub_1403122F0(
	_QWORD* a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	int a5,
	int a6,
	unsigned int a7,
	__int64 a8,
	__int64 a9,
	int a10,
	int a11)
{
	unsigned int v15; // ebx
	const void*** v16; // rdx
	int v17; // edi
	__int64 v19; // rax
	int v20; // ecx
	__int64 v21; // r8
	int* v22; // r9
	__int64 v23; // r8
	__int64 v24; // [rsp+20h] [rbp-E0h]
	int v25[2]; // [rsp+40h] [rbp-C0h] BYREF
	int v26; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v27; // [rsp+50h] [rbp-B0h]
	int v28; // [rsp+5Ch] [rbp-A4h]
	_QWORD v29[10]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v30; // [rsp+B0h] [rbp-50h]
	__int64 v31; // [rsp+B8h] [rbp-48h]
	__int64 v32; // [rsp+C0h] [rbp-40h]
	__int64 v33; // [rsp+C8h] [rbp-38h]

	sub_1407C1FE0(v29);
	v15 = 0;
	if (*(_QWORD*)(a4 + 768))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
		v27 = *(_QWORD*)(a4 + 768);
		v26 = 1;
		v28 = 0;
		(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v26,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 15i64);
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			a4 + 192);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	}
	v17 = (*(__int64(__fastcall**)(__int64, _QWORD*, __int64, __int64, int, int, _QWORD))(*(_QWORD*)qword_140C65688
		+ 40i64))(
			qword_140C65688,
			a1 + 30,
			a2,
			a3,
			a10,
			a11,
			0i64);
	if (v17 < 0)
		goto LABEL_6;
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 0i64);
	v17 = (*(__int64(__fastcall**)(_QWORD*, _QWORD*, __int64, __int64, int, int, _QWORD, _QWORD))(*a1 + 120i64))(
		a1,
		v29,
		a2,
		a4,
		a5,
		a6,
		0i64,
		0i64);
	if (v17 < 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 64i64))(qword_140C65688);
	LABEL_6:
		v15 = v17;
		goto LABEL_7;
	}
	if (v29[8])
		sub_1407C2170(v29, 0, 0xFFFFFFFF);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 3i64);
	if (a8)
	{
		if (a9)
		{
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a8 + 24i64))(a8);
			v20 = *(_DWORD*)(v19 + 8);
			LODWORD(v19) = *(_DWORD*)(v19 + 4);
			v25[1] = v20;
			v25[0] = v19;
			(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				0i64,
				a8,
				0i64,
				0i64);
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(a1[2] + 2080i64),
				1i64);
			v24 = a9;
			v22 = v25;
			goto LABEL_16;
		}
		(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			a8,
			0i64,
			0i64);
		v23 = 1i64;
	}
	else
	{
		v23 = 0i64;
	}
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1[2] + 2080i64),
		v23);
	v24 = 0i64;
	v22 = 0i64;
LABEL_16:
	(*(void(__fastcall**)(__int64, _QWORD, __int64, int*, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		a7,
		v21,
		v22,
		v24,
		0i64);
	if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 5i64)
		&& v30)
	{
		sub_1407C2170(v29, 2, 0xFFFFFFFF);
	}
	if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 8i64))
	{
		if (v31)
			sub_1407C2170(v29, 3, 0xFFFFFFFF);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65688 + 128i64))(
			qword_140C65688,
			a4,
			0i64,
			0i64);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 10i64);
	if (v29[9])
		sub_1407C2170(v29, 1, 0xFFFFFFFF);
	if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 11i64)
		&& v30)
	{
		sub_1407C2170(v29, 2, 0xFFFFFFFF);
	}
	if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 12i64))
	{
		if (v31)
			sub_1407C2170(v29, 3, 0xFFFFFFFF);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65688 + 128i64))(
			qword_140C65688,
			a4,
			0i64,
			0i64);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 19i64);
	if (v33)
		sub_1407C2170(v29, 5, 0xFFFFFFFF);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 20i64);
	if (v32)
		sub_1407C2170(v29, 4, 0xFFFFFFFF);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 64i64))(qword_140C65688);
LABEL_7:
	sub_1407C20B0((__int64)v29, v16);
	return v15;
}
// 140312494: variable 'v16' is possibly undefined
// 1403125C2: variable 'v21' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

