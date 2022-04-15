//----- (00000001404D5C80) ----------------------------------------------------
__int64 __fastcall sub_1404D5C80(__int64 a1, double a2, float a3)
{
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v6; // rdi
	__int64 v7; // r8
	unsigned int v8; // r15d
	int v9; // edx
	int v10; // ecx
	int v11; // eax
	__int64 v12; // rbx
	__int64 v13; // r14
	int* v14; // rax
	int* v15; // rsi
	int* v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rcx
	unsigned int v21; // edx
	int v22[4]; // [rsp+20h] [rbp-48h] BYREF

	if (*(_DWORD*)(a1 + 84)
		|| !*(_DWORD*)(a1 + 20)
		|| (v4 = *(_QWORD*)(a1 + 96),
			v22[0] = 0,
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v4 + 40i64))(v4, v22),
			*(_DWORD*)(*(_QWORD*)&qword_140C63788 + 4840i64) = 0,
			result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 48i64))(*(_QWORD*)(a1 + 96)),
			*(_DWORD*)(*(_QWORD*)&qword_140C63788 + 4840i64) = 1,
			(int)result >= 0))
	{
		sub_140728000(*(_QWORD*)(a1 + 200), a2, a3);
		sub_1400BC8B0(qword_140C63628 + 16, 1.0);
		v6 = qword_140C63628;
		v7 = *(_QWORD*)(qword_140C63628 + 296);
		if (v7)
			sub_1407E4830(*(int**)(qword_140C63628 + 288), 0i64, 8 * v7);
		v8 = 1282;
		if (*(_DWORD*)(v6 + 304) != 1282)
		{
			v9 = dword_140C3BF70;
			if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
				v9 = *(_DWORD*)qword_140C63750;
			sub_14001A770((__int64)&off_140C3BF60, v9, 0);
			*(_DWORD*)(v6 + 304) = 1282;
		}
		v10 = dword_140C3BF70;
		v11 = dword_140C3BF70;
		if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
			v11 = *(_DWORD*)qword_140C63750;
		if (*((_DWORD*)&off_140C3BF60 + v11 + 8))
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
				v10 = *(_DWORD*)qword_140C63750;
			v8 = *((_DWORD*)&off_140C3BF60 + v10 + 8);
		}
		if ((dword_140C8CD58 & 1) == 0)
		{
			dword_140C8CD58 |= 1u;
			sub_1401AD620((__int64)&unk_140C8CD60, L"ZoneKit 0 World");
		}
		sub_1401ADA40((__int64)&unk_140C8CD60, v8);
		if (*(__int64*)(v6 + 296) <= 0)
		{
			do
			{
				v12 = *(_QWORD*)(v6 + 296);
				v13 = v12 + 1;
				v14 = sub_14018DB00(*(_QWORD*)(v6 + 288), v12 + 1, 8i64);
				v15 = v14;
				*(_QWORD*)&v14[2 * v12] = 0i64;
				v16 = *(int**)(v6 + 288);
				if (v16 != v14)
				{
					sub_1407DB590(v14, v16, 8i64 * *(_QWORD*)(v6 + 296));
					v17 = *(_QWORD*)(v6 + 288);
					if (v17)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
					*(_QWORD*)(v6 + 288) = v15;
				}
				*(_QWORD*)(v6 + 296) = v13;
			} while (v13 <= 0);
		}
		if (v8 && (unsigned __int64)v8 < *(_QWORD*)(v6 + 192))
			v18 = *(_QWORD*)(*(_QWORD*)(v6 + 184) + 8i64 * v8);
		else
			v18 = 0i64;
		v19 = qword_140C63628;
		**(_QWORD**)(v6 + 288) = v18;
		*(_DWORD*)(v19 + 576) = 0;
		sub_140051CC0(v19, 0, 108);
		if (*(_DWORD*)(a1 + 84) != 1 && ((*(_DWORD*)(*(_QWORD*)(a1 + 200) + 20i64) - 11) & 0xFFFFFFFD) == 0)
		{
			sub_140400B00((__int64*)(*(_QWORD*)(a1 + 96) + 72i64), *(_QWORD*)(qword_140C635F0 + 5792));
			sub_1404D5AE0(a1);
			v21 = *(_DWORD*)(a1 + 72);
			if (v21)
			{
				if (qword_140C65898)
				{
					sub_1403FA610(v20, v21);
					*(_DWORD*)(a1 + 72) = 0;
				}
			}
		}
		return 0i64;
	}
	return result;
}
// 1404D5F31: variable 'v20' is possibly undefined
// 140A14250: using guessed type wchar_t aZonekit0World[16];
// 140C3BF60: using guessed type __int64 (__fastcall **off_140C3BF60)();
// 140C3BF70: using guessed type int dword_140C3BF70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8CD58: using guessed type int dword_140C8CD58;
// 1404D5C80: using guessed type int var_48[4];

