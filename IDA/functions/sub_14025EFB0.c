//----- (000000014025EFB0) ----------------------------------------------------
__int64 __fastcall sub_14025EFB0(__int64 a1, int a2)
{
	int v4; // ebx
	int v5; // eax
	int v6; // esi
	int v7; // edx
	int v9; // [rsp+48h] [rbp+10h]

	v4 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1704),
		0i64,
		0i64);
	v5 = *(_DWORD*)(a1 + 48);
	v6 = 1;
	if (v5 == 9 || v5 == 13)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			1i64,
			*(_QWORD*)(a1 + 1720),
			0i64,
			*(_QWORD*)(a1 + 2056));
		v7 = 1;
	}
	else if (v5 == 18)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			1i64,
			*(_QWORD*)(a1 + 1704),
			0i64,
			0i64);
		v7 = 0;
	}
	else
	{
		v7 = v9;
	}
	if (a2)
	{
		if (*(_DWORD*)(a1 + 608))
		{
			v6 = 0;
			goto LABEL_13;
		}
		v6 = 2;
	LABEL_11:
		LOBYTE(v4) = *(_DWORD*)(a1 + 48) == 13;
		return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 2208),
			(unsigned int)(v4 + 2 * (v6 + 4 * v7) + v6 + 4 * v7));
	}
	if (*(_DWORD*)(a1 + 608))
		goto LABEL_11;
LABEL_13:
	if (*(_DWORD*)(a1 + 48) == 13)
		v4 = 2;
	return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2208),
		(unsigned int)(v4 + 2 * (v6 + 4 * v7) + v6 + 4 * v7));
}
// 140C65670: using guessed type __int64 qword_140C65670;

