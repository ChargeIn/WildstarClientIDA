#include "../winhttp.h"

//----- (00000001400338F0) ----------------------------------------------------
__int64 __fastcall sub_1400338F0(__int64 a1, double a2)
{
	__int64 v3; // rdi
	__int64 v4; // r8
	unsigned int v5; // r14d
	int v6; // edx
	int v7; // ecx
	int v8; // eax
	__int64 v9; // rbx
	__int64 v10; // rbp
	int* v11; // rax
	int* v12; // rsi
	int* v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rcx

	sub_1400BC8B0(qword_140C63628 + 16, 1.0);
	v3 = qword_140C63628;
	v4 = *(_QWORD*)(qword_140C63628 + 296);
	if (v4)
		sub_1407E4830(*(int**)(qword_140C63628 + 288), 0i64, 8 * v4);
	v5 = sub_1400518A0(v3, 8, 6, 0);
	if (*(_DWORD*)(v3 + 304) != v5)
	{
		v6 = dword_140C3BF70;
		if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
			v6 = *(_DWORD*)qword_140C63750;
		sub_14001A770((__int64)&off_140C3BF60, v6, 0);
		*(_DWORD*)(v3 + 304) = v5;
	}
	v7 = dword_140C3BF70;
	v8 = dword_140C3BF70;
	if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
		v8 = *(_DWORD*)qword_140C63750;
	if (*((_DWORD*)&off_140C3BF60 + v8 + 8))
	{
		if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
			v7 = *(_DWORD*)qword_140C63750;
		v5 = *((_DWORD*)&off_140C3BF60 + v7 + 8);
	}
	if ((dword_140C8CD58 & 1) == 0)
	{
		dword_140C8CD58 |= 1u;
		sub_1401AD620((__int64)&unk_140C8CD60, L"ZoneKit 0 World");
	}
	sub_1401ADA40((__int64)&unk_140C8CD60, v5);
	if (*(__int64*)(v3 + 296) <= 0)
	{
		do
		{
			v9 = *(_QWORD*)(v3 + 296);
			v10 = v9 + 1;
			v11 = sub_14018DB00(*(_QWORD*)(v3 + 288), v9 + 1, 8i64);
			v12 = v11;
			*(_QWORD*)&v11[2 * v9] = 0i64;
			v13 = *(int**)(v3 + 288);
			if (v13 != v11)
			{
				sub_1407DB590(v11, v13, 8i64 * *(_QWORD*)(v3 + 296));
				v14 = *(_QWORD*)(v3 + 288);
				if (v14)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
				*(_QWORD*)(v3 + 288) = v12;
			}
			*(_QWORD*)(v3 + 296) = v10;
		} while (v10 <= 0);
	}
	if (v5 && (unsigned __int64)v5 < *(_QWORD*)(v3 + 192))
		v15 = *(_QWORD*)(*(_QWORD*)(v3 + 184) + 8i64 * v5);
	else
		v15 = 0i64;
	v16 = qword_140C63628;
	**(_QWORD**)(v3 + 288) = v15;
	*(_DWORD*)(v16 + 576) = 0;
	sub_140051CC0(v16, 0, 108);
	sub_1400E74A0(*(_QWORD*)(a1 + 88), a2);
	return 0i64;
}
// 140A14250: using guessed type wchar_t aZonekit0World[16];
// 140C3BF60: using guessed type __int64 (__fastcall **off_140C3BF60)();
// 140C3BF70: using guessed type int dword_140C3BF70;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C8CD58: using guessed type int dword_140C8CD58;

