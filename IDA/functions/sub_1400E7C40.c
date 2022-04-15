//----- (00000001400E7C40) ----------------------------------------------------
__int64 __fastcall sub_1400E7C40(__int64 a1)
{
	__int64 v2; // rbp
	__int64 v3; // rsi
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rdx
	char v8; // bl
	__int64 v9; // rcx
	int v10; // eax

	if (!*(_BYTE*)(a1 + 52))
	{
		++dword_140C8A094;
		*(_BYTE*)(a1 + 52) = 1;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 255i64);
	if (!*(_BYTE*)(a1 + 53))
		sub_1400E7B00(a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1);
	v2 = *(_QWORD*)(a1 + 3208);
	while ((unsigned __int64)--v2 < *(_QWORD*)(a1 + 3208))
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 3200) + 8 * v2);
		v4 = *(_QWORD**)(v3 + 56);
		v5 = (_QWORD*)*v4;
		if ((_QWORD*)*v4 != v4)
		{
			do
			{
				v6 = v5[2];
				if ((*(_BYTE*)(v6 + 28) & 0x10) == 0)
					sub_1400D0A00(v6, 0);
				v5 = (_QWORD*)*v5;
			} while (v5 != *(_QWORD**)(v3 + 56));
		}
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	v7 = *(_QWORD*)(a1 + 2912);
	v8 = *(_BYTE*)(a1 + 2908);
	*(_BYTE*)(a1 + 2908) = 0;
	if (v7 && *(_BYTE*)(a1 + 2841))
	{
		if ((*(_BYTE*)(v7 + 28) & 1) != 0
			&& *(float*)(v7 + 648) > 0.0
			&& ((v9 = *(_QWORD*)(v7 + 16)) == 0 || sub_1400D1A60(v9)))
		{
			if (sub_1400C3420((_QWORD*)v7))
			{
				if (v8 || (*(_DWORD*)(*(_QWORD*)(a1 + 2912) + 656i64) & 0x10000000) != 0)
					goto LABEL_24;
				v10 = dword_140C3C3D0;
				if (*(_DWORD*)qword_140C63750 < dword_140C3C3D0)
					v10 = *(_DWORD*)qword_140C63750;
				if (*((float*)&xmmword_140C3C3E0 + v10) < *(float*)(a1 + 2904))
				{
				LABEL_24:
					*(_BYTE*)(a1 + 2908) = 1;
					sub_1400E8390(a1);
				}
			}
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(a1 + 2912) = 0i64;
		}
		*(_BYTE*)(a1 + 2841) = 0;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
	*(_WORD*)(a1 + 52) = 0;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
}
// 1400E7D3B: variable 'v7' is possibly undefined
// 140C3C3D0: using guessed type int dword_140C3C3D0;
// 140C3C3E0: using guessed type __int128 xmmword_140C3C3E0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C8A094: using guessed type int dword_140C8A094;

