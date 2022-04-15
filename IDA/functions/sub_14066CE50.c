#include "../winhttp.h"

//----- (000000014066CE50) ----------------------------------------------------
__int64 __fastcall sub_14066CE50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rsi
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	int* v10; // rax
	unsigned __int16* v11; // rdi
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	unsigned __int16* v14; // rcx
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v17; // [rsp+28h] [rbp-20h]
	int* v18; // [rsp+30h] [rbp-18h]
	int* v19; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(qword_140C65898 + 120) && (v2 = sub_140056AB0(a1, 1u)) != 0 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v3 + 8) + 8i64));
	else
		v4 = 0i64;
	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v5 = sub_140056AB0(a1, 1u)) == 0
		|| (v6 = *(_QWORD*)(v5 + 8)) == 0
		|| (v7 = *(_QWORD*)(v6 + 8)) == 0
		|| !v4
		|| !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 88i64))(v4, **(unsigned int**)(v7 + 8)))
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v16, word_1409F4A1C)[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_41;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
	LABEL_40:
		sub_140058710((__int64)a1, v8, v9);
	LABEL_41:
		v14 = v17;
		if (v17)
			goto LABEL_42;
		return 1i64;
	}
	if (!qword_140C65970 || *(_DWORD*)(qword_140C65970 + 8) != 2)
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v16, word_1409F4A44)[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_41;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_40;
	}
	if ((*(_BYTE*)(*(_QWORD*)(v7 + 8) + 84i64) & 1) != 0)
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v16, word_1409F49FC)[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_41;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_40;
	}
	v10 = sub_14018B280(16i64, 0);
	v17 = (unsigned __int16*)v10;
	v18 = v10;
	v19 = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	sub_14066A9B0(&v16, *(_QWORD*)(v7 + 8) + 32i64);
	v11 = v17;
	v12 = (unsigned __int64*)sub_14018F0E0(&v16, v17)[1];
	if (v12)
	{
		v13 = -1i64;
		do
			++v13;
		while (*((_BYTE*)v12 + v13));
		sub_140058710((__int64)a1, v12, v13);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v17)
		sub_14018B900((__int64)v17, 0);
	if (v11)
	{
		v14 = v11;
	LABEL_42:
		sub_14018B900((__int64)v14, 0);
	}
	return 1i64;
}
// 1409F49FC: using guessed type unsigned __int16 word_1409F49FC[16];
// 1409F4A1C: using guessed type unsigned __int16 word_1409F4A1C[20];
// 1409F4A44: using guessed type unsigned __int16 word_1409F4A44[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

