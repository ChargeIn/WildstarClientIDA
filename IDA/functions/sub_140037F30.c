#include "../winhttp.h"

//----- (0000000140037F30) ----------------------------------------------------
__int64 __fastcall sub_140037F30(__int64 a1, __int64 a2)
{
	char v2; // bp
	__int64 v5; // rsi
	int v6; // r8d
	int* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdx
	int* v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 result; // rax
	int* v16; // [rsp+20h] [rbp-B8h] BYREF
	char v17[32]; // [rsp+30h] [rbp-A8h] BYREF
	__int64 v18; // [rsp+50h] [rbp-88h]

	v2 = 0;
	LODWORD(v16) = 0;
	if (*(_DWORD*)(a1 + 168) != 9)
		return 0i64;
	v5 = qword_140C635F0;
	*(_DWORD*)(qword_140C635F0 + 5688) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(v5 + 5692) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(v5 + 5696) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(v5 + 5700) = *(_DWORD*)(a2 + 20);
	v6 = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(v5 + 5736) = v6;
	if (*(_QWORD*)(v5 + 5576) && v6)
	{
		sub_14018D540(&v16, (__int64)L"%d");
		v7 = v16;
		sub_140054350(*(_QWORD**)(v5 + 5576), v16);
		if (v7)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
		v5 = qword_140C635F0;
	}
	sub_140011800(v5, *(int**)(a2 + 32));
	v8 = qword_140C635F0;
	*(_DWORD*)(qword_140C635F0 + 5764) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(v8 + 5768) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(v8 + 5772) = *(_DWORD*)(a2 + 48);
	v9 = *(_QWORD*)(a1 + 240);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 240) = 0i64;
	}
	v11 = sub_14018B280(160i64, 0);
	if (v11)
	{
		v2 = 1;
		v12 = sub_140334BB0((__int64)v17, *(_DWORD*)a2, *(_WORD*)(a2 + 4));
		v13 = sub_140029F00((__int64)v11, 1, v12);
	}
	else
	{
		v13 = 0i64;
	}
	v14 = *(_QWORD*)(a1 + 240);
	if (v14 != v13)
	{
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		*(_QWORD*)(a1 + 240) = v13;
	}
	if ((v2 & 1) != 0)
	{
		if (v18)
			sub_14018B900(v18, 0);
	}
	result = sub_14002A050(*(_QWORD*)(a1 + 240), v10, *(_QWORD*)(qword_140C635F0 + 5680));
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 168) = 10;
		sub_14003E470(a1, 516357, *(int**)(a2 + 32));
		return 0i64;
	}
	return result;
}
// 1400380D5: variable 'v10' is possibly undefined
// 1409D1B04: using guessed type wchar_t aD[3];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140037F30: using guessed type char var_A8[32];

