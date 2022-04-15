#include "../winhttp.h"

//----- (000000014033F710) ----------------------------------------------------
__int64 __fastcall sub_14033F710(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rbx
	__int64 v8; // rax
	int* v9; // rax
	int* v10; // rsi
	int* v11; // rax
	int* v12; // rsi
	int v13; // esi
	__int64 v14; // r8
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // r8
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rcx

	v4 = qword_140C65850;
	if (!a4)
		return 2147942487i64;
	sub_140198D60(a1, (int*)L"sound", (__int64)sub_14033F1D0, 0i64);
	*(_BYTE*)(v4 + 73) = *(_DWORD*)(a4 + 32) == 1;
	*(_QWORD*)(v4 + 8) = *(_QWORD*)a4;
	*(_QWORD*)(v4 + 16) = *(_QWORD*)(a4 + 8);
	*(_QWORD*)(v4 + 24) = *(_QWORD*)(a4 + 16);
	*(_QWORD*)(v4 + 32) = *(_QWORD*)(a4 + 24);
	*(_QWORD*)(v4 + 40) = *(_QWORD*)(a4 + 32);
	*(_QWORD*)(v4 + 48) = *(_QWORD*)(a4 + 40);
	*(_QWORD*)(v4 + 56) = *(_QWORD*)(a4 + 48);
	v8 = *(_QWORD*)(a4 + 56);
	*(_BYTE*)(v4 + 72) = 0;
	*(_QWORD*)(v4 + 64) = v8;
	v9 = sub_14018B280(2552i64, 0);
	v10 = v9;
	if (v9)
	{
		sub_14033FBE0((__int64)v9);
		*(_QWORD*)v10 = off_140B65030;
		sub_140344CF0((__int64)(v10 + 8));
		*((_QWORD*)v10 + 316) = 0i64;
		*((_QWORD*)v10 + 315) = 0i64;
		*((_QWORD*)v10 + 318) = 0i64;
		*((_QWORD*)v10 + 317) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	*(_QWORD*)(v4 + 96) = v10;
	v11 = sub_14018B280(32i64, 0);
	v12 = v11;
	if (v11)
	{
		sub_14033FBE0((__int64)v11);
		*(_QWORD*)v12 = off_140B64AD0;
	}
	else
	{
		v12 = 0i64;
	}
	*(_QWORD*)(v4 + 104) = v12;
	if (a2 == 1
		&& (v13 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v4 + 96) + 400i64))(
			*(_QWORD*)(v4 + 96),
			v4 + 8),
			v13 >= 0))
	{
		v15 = *(_QWORD*)(v4 + 96);
		*(_BYTE*)(v4 + 72) = 1;
		*(_QWORD*)(v4 + 88) = &qword_140C65848;
		sub_14033F0A0(v4, v15, v14);
	}
	else
	{
		v13 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v4 + 104) + 400i64))(*(_QWORD*)(v4 + 104), v4 + 8);
		if (v13 < 0)
		{
			sub_140198F50(v16, (int*)L"sound");
			v19 = *(_QWORD*)(v4 + 96);
			if (v19)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v19 + 168i64))(v19, 1i64);
			v20 = *(_QWORD*)(v4 + 104);
			if (v20)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v20 + 168i64))(v20, 1i64);
			*(_QWORD*)(v4 + 96) = 0i64;
			*(_QWORD*)(v4 + 104) = 0i64;
			*(_QWORD*)(v4 + 80) = 0i64;
			*(_QWORD*)(v4 + 88) = 0i64;
		}
		else
		{
			v18 = *(_QWORD*)(v4 + 104);
			*(_BYTE*)(v4 + 72) = 0;
			*(_QWORD*)(v4 + 88) = &qword_140C65848;
			sub_14033F0A0(v4, v18, v17);
		}
	}
	return (unsigned int)v13;
}
// 14033F868: variable 'v14' is possibly undefined
// 14033F89C: variable 'v17' is possibly undefined
// 14033F8AA: variable 'v16' is possibly undefined
// 140AF4400: using guessed type wchar_t aSound_1[6];
// 140AF4410: using guessed type wchar_t aSound_0[6];
// 140B64AD0: using guessed type __int64 (__fastcall *off_140B64AD0[14])();
// 140B65030: using guessed type __int64 (__fastcall *off_140B65030[8])();
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65850: using guessed type __int64 qword_140C65850;

