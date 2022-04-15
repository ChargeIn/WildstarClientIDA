#include "../winhttp.h"

//----- (00000001403A0980) ----------------------------------------------------
__int64 __fastcall sub_1403A0980(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	unsigned int v4; // edx
	__int64 result; // rax
	BOOL v6; // r9d
	__int64 v7; // rcx
	__int64 v8; // rdi
	int* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	_WORD* v13; // rax
	__int64 v14; // rcx
	int v15; // esi
	__int16* v16; // rax

	v2 = *(_QWORD*)(a1 + 26664);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 26664) = 0i64;
	}
	if ((dword_140DC21C8 & 1) != 0)
	{
		v4 = dword_140DC21CC;
	}
	else
	{
		dword_140DC21C8 |= 1u;
		v3 = sub_140200220(0x43Cu);
		if (v3)
		{
			v4 = *(_DWORD*)(v3 + 4);
			dword_140DC21CC = v4;
		}
		else
		{
			v4 = 6648;
			dword_140DC21CC = 6648;
		}
	}
	result = *(_QWORD*)(a1 + 120);
	if (v4)
	{
		if (!result)
			goto LABEL_17;
		v6 = *(_QWORD*)(qword_140C65898 + 120) == result || *(_QWORD*)(qword_140C65898 + 25744) == result;
		v7 = 0i64;
		if (v6)
			v7 = qword_140C65898;
		if (!v7 || (result = sub_1405A5B90(v7, v4), (v8 = result) == 0))
		{
		LABEL_17:
			result = sub_1407A0FD0(qword_140C65B70, v4);
			v8 = result;
		}
		if (v8 && *(_QWORD*)(v8 + 8))
		{
			v9 = sub_14018B280(96i64, 0);
			if (v9)
				v11 = sub_140453D90((__int64)v9);
			else
				v11 = 0i64;
			*(_QWORD*)(a1 + 26664) = v11;
			*(_QWORD*)(*(_QWORD*)(a1 + 26664) + 56i64) = sub_1405645B0(v10, **(_DWORD**)(v8 + 112), 0);
			v12 = *(_QWORD*)(a1 + 26664);
			v13 = *(_WORD**)(v12 + 56);
			if (!v13 || !*v13)
				*(_QWORD*)(v12 + 56) = L"UI_Temp_Quest";
			*(_DWORD*)(*(_QWORD*)(a1 + 26664) + 28i64) = 1;
			v14 = *(_QWORD*)(a1 + 26664);
			*(_DWORD*)(v14 + 80) = dword_140DC21CC;
			*(_DWORD*)(*(_QWORD*)(a1 + 26664) + 84i64) = 0;
			*(_DWORD*)(*(_QWORD*)(a1 + 26664) + 20i64) = 9;
			*(_DWORD*)(*(_QWORD*)(a1 + 26664) + 32i64) = 0;
			*(_DWORD*)(*(_QWORD*)(a1 + 26664) + 36i64) = -1;
			v15 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + 36i64);
			v16 = sub_14034BDD0(v14, v15);
			if (!v16 || !*v16)
				v15 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + 32i64);
			result = *(_QWORD*)(a1 + 26664);
			*(_DWORD*)(result + 24) = v15;
			*(_DWORD*)(a1 + 26672) = 0;
		}
		else
		{
			*(_DWORD*)(a1 + 26672) = 0;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 26672) = 0;
	}
	return result;
}
// 1403A0A44: variable 'v4' is possibly undefined
// 1403A0A90: variable 'v10' is possibly undefined
// 140AF5380: using guessed type wchar_t aUiTempQuest[14];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC21C8: using guessed type int dword_140DC21C8;
// 140DC21CC: using guessed type int dword_140DC21CC;

