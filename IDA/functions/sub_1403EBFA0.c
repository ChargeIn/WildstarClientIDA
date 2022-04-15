#include "../winhttp.h"

//----- (00000001403EBFA0) ----------------------------------------------------
__int64 __fastcall sub_1403EBFA0(__int64 a1)
{
	__int64 v2; // rax
	_BYTE* v3; // rcx
	int v4; // eax
	__int64 v5; // r11
	struct tagPOINT v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // r14
	__int64 v10; // rsi
	struct tagPOINT* v11; // rax
	int v12; // eax
	__int64 v13; // rcx
	int v14; // edi
	int v15; // eax
	unsigned int v16; // eax
	int v17; // ecx
	__int64 v18; // rbp
	int v19; // eax
	int v20; // eax
	__int64 v21; // rax
	__int64 v22; // rax
	int* v23; // rax
	__int64 v24; // r8
	__int64 v25; // rdx

	if (*(_DWORD*)(a1 + 40) == 4)
		return 0i64;
	v2 = *(_QWORD*)(a1 + 32);
	if (v2)
	{
		while (*(_DWORD*)(v2 + 40) == 4)
		{
			v2 = *(_QWORD*)(v2 + 32);
			if (!v2)
				goto LABEL_5;
		}
		return 0i64;
	}
LABEL_5:
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 184i64))(*(_QWORD*)(a1 + 30088))
		&& !(unsigned int)sub_14055A260((_DWORD*)(a1 + 29488))
		|| !*(_BYTE*)(*(_QWORD*)(a1 + 29504) + 2840i64)
		|| *(_DWORD*)(a1 + 29776))
	{
		goto LABEL_14;
	}
	v3 = byte_140C45D60;
	v4 = dword_140C45D50;
	if (*(_DWORD*)qword_140C63750 < dword_140C45D50)
		v4 = *(_DWORD*)qword_140C63750;
	if (!byte_140C45D60[v4])
		goto LABEL_14;
	if ((unsigned int)sub_14055A260((_DWORD*)(a1 + 29488)))
	{
		sub_1400E6E80(v5);
	LABEL_14:
		sub_140252260((struct tagPOINT)v3, 0);
		return 0i64;
	}
	if (sub_1400E6E80(v5) || (unsigned int)sub_1404B6860(v7))
		goto LABEL_59;
	if (sub_14039E1A0(a1))
	{
		v8 = *(_QWORD*)(a1 + 32456);
		if (v8)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 472i64))(
				qword_140C65670,
				v8,
				16i64);
			goto LABEL_59;
		}
	}
	if (!*(_QWORD*)(a1 + 120))
		return 0i64;
	v9 = sub_1403D90D0(a1, *(_DWORD*)(a1 + 25796));
	v10 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 29504) + 360i64), (int*)L"DefaultGame");
	v11 = *(struct tagPOINT**)(a1 + 27880);
	if (v11)
	{
		v7 = v11[14];
		if ((*(_DWORD*)(*(_QWORD*)&v7 + 268i64) & 0x4000000) != 0)
		{
			v7 = (struct tagPOINT) * (unsigned int*)(*(_QWORD*)&v7 + 124i64);
			if (v7.x <= 8u)
			{
				v12 = 298;
				if (_bittest(&v12, v7.x))
					v10 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 29504) + 360i64), (int*)L"PendingSpellInvalid");
			}
		}
	}
	if (!v9)
		goto LABEL_56;
	v13 = *(_QWORD*)(v9 + 24);
	v14 = 1;
	if (*(_DWORD*)(v9 + 592)
		|| !**(_DWORD**)(v9 + 6408)
		|| (*(_BYTE*)(v9 + 36) & 0x10) != 0
		|| (*(_DWORD*)(v9 + 40) & 0x4000) != 0
		|| (v15 = *(_DWORD*)(v9 + 128), v15 != 20)
		&& v15 != 23
		&& (!v13 || (v16 = *(_DWORD*)(v13 + 4), v16 > 0x13) || (v17 = 532621, !_bittest(&v17, v16))))
	{
		v14 = 0;
	}
	v18 = sub_1403EBCD0(a1, (__m128*)v9);
	v19 = sub_14045A950(*(_QWORD*)(a1 + 120), *(_DWORD*)(v9 + 8));
	if (!v19)
	{
		if (!v14)
		{
			if (v18)
				v10 = v18;
			goto LABEL_56;
		}
		goto LABEL_52;
	}
	v20 = v19 - 1;
	if (v20)
	{
		if (v20 == 1)
		{
			v21 = *(_QWORD*)(a1 + 27880);
			if (v21
				&& (v22 = *(_QWORD*)(v21 + 112),
					v7 = (struct tagPOINT)(unsigned int)((32 * *(_DWORD*)(v22 + 268)) >> 31),
					(*(_DWORD*)(v22 + 268) & 0x4000000) != 0))
			{
				v10 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 29504) + 360i64), (int*)L"PendingSpell");
			}
			else if (v18)
			{
				v10 = v18;
			}
		}
		goto LABEL_56;
	}
	if (v18)
	{
		v10 = v18;
		goto LABEL_56;
	}
	if (!v14)
	{
	LABEL_56:
		if (v10)
		{
			v25 = *(_QWORD*)(v10 + 88);
			if (v25)
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
					qword_140C65670,
					v25,
					*(unsigned int*)(v10 + 96),
					*(unsigned int*)(v10 + 100));
		}
		goto LABEL_59;
	}
LABEL_52:
	v23 = (int*)sub_1403EBC80(a1);
	if (v23)
	{
		v10 = sub_1401545C0(v24, v23);
		goto LABEL_56;
	}
LABEL_59:
	sub_140252260(v7, 1);
	return 0i64;
}
// 1403EC047: variable 'v5' is possibly undefined
// 1403EC04E: variable 'v3' is possibly undefined
// 1403EC064: variable 'v7' is possibly undefined
// 1403EC254: variable 'v24' is possibly undefined
// 140AF81B0: using guessed type wchar_t aPendingspellin[20];
// 140AF81D8: using guessed type wchar_t aPendingspell[13];
// 140AF8228: using guessed type wchar_t aDefaultgame[12];
// 140C45D50: using guessed type int dword_140C45D50;
// 140C45D60: using guessed type _BYTE byte_140C45D60[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;

