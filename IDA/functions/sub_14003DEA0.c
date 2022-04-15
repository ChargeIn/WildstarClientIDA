//----- (000000014003DEA0) ----------------------------------------------------
__int64 __fastcall sub_14003DEA0(__int64 a1, __int64 a2, float a3)
{
	double v3; // xmm1_8
	__int64 v5; // rdi
	__int64 v6; // r8
	unsigned int v7; // r14d
	int v8; // ecx
	int v9; // ecx
	int v10; // eax
	__int64 v11; // rbx
	__int64 v12; // rbp
	int* v13; // rax
	int* v14; // rsi
	int* v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // rcx

	if (dword_140C1BD5C != 176)
	{
		sub_1400BC8B0(qword_140C63628 + 16, 1.0);
		v5 = qword_140C63628;
		v6 = *(_QWORD*)(qword_140C63628 + 296);
		if (v6)
			sub_1407E4830(*(int**)(qword_140C63628 + 288), 0i64, 8 * v6);
		v7 = sub_1400518A0(v5, dword_140C1BD5C, 6, 0);
		if (*(_DWORD*)(v5 + 304) != v7)
		{
			v8 = dword_140C3BF70;
			if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
				v8 = *(_DWORD*)qword_140C63750;
			sub_14001A770((__int64)&off_140C3BF60, v8, 0);
			*(_DWORD*)(v5 + 304) = v7;
		}
		v9 = dword_140C3BF70;
		v10 = dword_140C3BF70;
		if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
			v10 = *(_DWORD*)qword_140C63750;
		if (*((_DWORD*)&off_140C3BF60 + v10 + 8))
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
				v9 = *(_DWORD*)qword_140C63750;
			v7 = *((_DWORD*)&off_140C3BF60 + v9 + 8);
		}
		if ((dword_140C8CD58 & 1) == 0)
		{
			dword_140C8CD58 |= 1u;
			sub_1401AD620((__int64)&unk_140C8CD60, L"ZoneKit 0 World");
		}
		sub_1401ADA40((__int64)&unk_140C8CD60, v7);
		if (*(__int64*)(v5 + 296) <= 0)
		{
			do
			{
				v11 = *(_QWORD*)(v5 + 296);
				v12 = v11 + 1;
				v13 = sub_14018DB00(*(_QWORD*)(v5 + 288), v11 + 1, 8i64);
				v14 = v13;
				*(_QWORD*)&v13[2 * v11] = 0i64;
				v15 = *(int**)(v5 + 288);
				if (v15 != v13)
				{
					sub_1407DB590(v13, v15, 8i64 * *(_QWORD*)(v5 + 296));
					v16 = *(_QWORD*)(v5 + 288);
					if (v16)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
					*(_QWORD*)(v5 + 288) = v14;
				}
				*(_QWORD*)(v5 + 296) = v12;
			} while (v12 <= 0);
		}
		if (v7 && (unsigned __int64)v7 < *(_QWORD*)(v5 + 192))
			v17 = *(_QWORD*)(*(_QWORD*)(v5 + 184) + 8i64 * v7);
		else
			v17 = 0i64;
		v18 = qword_140C63628;
		**(_QWORD**)(v5 + 288) = v17;
		*(_DWORD*)(v18 + 576) = 0;
		sub_140051CC0(v18, 0, 108);
		sub_140051CC0(qword_140C63628, 6, 161);
	}
	sub_14004D360(*(_QWORD*)(a1 + 96), a2, a3, *(_QWORD*)(a1 + 72));
	sub_1400E74A0(*(_QWORD*)(a1 + 72), v3);
	return 0i64;
}
// 14003E0E4: variable 'a2' is possibly undefined
// 14003E0F0: variable 'v3' is possibly undefined
// 140A14250: using guessed type wchar_t aZonekit0World[16];
// 140C1BD5C: using guessed type int dword_140C1BD5C;
// 140C3BF60: using guessed type __int64 (__fastcall **off_140C3BF60)();
// 140C3BF70: using guessed type int dword_140C3BF70;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C8CD58: using guessed type int dword_140C8CD58;

