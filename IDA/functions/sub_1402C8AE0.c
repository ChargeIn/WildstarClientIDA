//----- (00000001402C8AE0) ----------------------------------------------------
__int64 __fastcall sub_1402C8AE0(__int64 a1, __int64 a2)
{
	int v4; // eax
	const void*** v5; // rdx
	__int64 v6; // rax
	unsigned int v7; // ebx
	__int64 v8; // r8
	int v10; // [rsp+40h] [rbp-D8h] BYREF
	__int64 v11; // [rsp+48h] [rbp-D0h]
	int v12; // [rsp+54h] [rbp-C4h]
	_QWORD v13[11]; // [rsp+60h] [rbp-B8h] BYREF
	__int64 v14; // [rsp+B8h] [rbp-60h]
	__int64 v15; // [rsp+C8h] [rbp-50h]

	sub_1407C1FE0(v13);
	v4 = sub_1402C89C0(a1, (__int64)v13, 0);
	if (v4 < 0)
		goto LABEL_20;
	v6 = *(_QWORD*)(a2 + 768);
	v7 = 0;
	if (v6)
	{
		v10 = 1;
		v11 = v6;
		v12 = 0;
		(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v10,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 15i64);
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			a2 + 192);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	}
	v4 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, _DWORD, _QWORD))(*(_QWORD*)qword_140C65688
		+ 40i64))(
			qword_140C65688,
			a1 + 176,
			a1 + 240,
			a1 + 400,
			1065353216,
			0,
			0i64);
	if (v4 < 0)
	{
	LABEL_20:
		v7 = v4;
	}
	else
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 0i64);
		if (v13[8])
			sub_1407C2170(v13, 0, 0xFFFFFFFF);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 3i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 16),
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
			qword_140C65670,
			0i64,
			v8,
			0i64,
			0i64,
			0i64);
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 8i64))
		{
			if (v14)
				sub_1407C2170(v13, 3, 0xFFFFFFFF);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65688 + 128i64))(
				qword_140C65688,
				a2,
				0i64,
				0i64);
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 10i64);
		if (v13[9])
			sub_1407C2170(v13, 1, 0xFFFFFFFF);
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 12i64))
		{
			if (v14)
				sub_1407C2170(v13, 3, 0xFFFFFFFF);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65688 + 128i64))(
				qword_140C65688,
				a2,
				0i64,
				0i64);
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 19i64);
		if (v15)
			sub_1407C2170(v13, 5, 0xFFFFFFFF);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 64i64))(qword_140C65688);
	}
	sub_1407C20B0((__int64)v13, v5);
	return v7;
}
// 1402C8C6A: variable 'v8' is possibly undefined
// 1402C8D7C: variable 'v5' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

