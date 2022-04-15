#include "../winhttp.h"

//----- (000000014066CC50) ----------------------------------------------------
__int64 __fastcall sub_14066CC50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rdi
	int v8; // esi
	int* v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rdx
	unsigned __int16* v12; // rdi
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	unsigned __int16* v15; // rcx
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v19; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v20; // [rsp+28h] [rbp-20h]
	int* v21; // [rsp+30h] [rbp-18h]
	int* v22; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(qword_140C65898 + 120) && (v2 = sub_140056AB0(a1, 1u)) != 0 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v3 + 8) + 8i64));
	else
		v4 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v5 = sub_140056AB0(a1, 1u)) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& v4
		&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 88i64))(v4, **(unsigned int**)(v7 + 8)))
	{
		v8 = 0;
		if (qword_140C65970 && *(_DWORD*)(qword_140C65970 + 8) == 2 && (*(_BYTE*)(*(_QWORD*)(v7 + 8) + 84i64) & 1) != 0)
			v8 = 1;
		v9 = sub_14018B280(16i64, 0);
		v20 = (unsigned __int16*)v9;
		v21 = v9;
		v22 = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		v10 = *(_QWORD*)(v7 + 8);
		if (v8)
			v11 = v10 + 32;
		else
			v11 = v10 + 8;
		sub_14066A9B0(&v19, v11);
		v12 = v20;
		v13 = (unsigned __int64*)sub_14018F0E0(&v19, v20)[1];
		if (v13)
		{
			v14 = -1i64;
			do
				++v14;
			while (*((_BYTE*)v13 + v14));
			sub_140058710((__int64)a1, v13, v14);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v20)
			sub_14018B900((__int64)v20, 0);
		if (v12)
		{
			v15 = v12;
		LABEL_36:
			sub_14018B900((__int64)v15, 0);
		}
	}
	else
	{
		v16 = (unsigned __int64*)sub_14018F0E0(&v19, word_1409F4ACC)[1];
		if (v16)
		{
			v17 = -1i64;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			sub_140058710((__int64)a1, v16, v17);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		v15 = v20;
		if (v20)
			goto LABEL_36;
	}
	return 1i64;
}
// 1409F4ACC: using guessed type unsigned __int16 word_1409F4ACC[16];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

