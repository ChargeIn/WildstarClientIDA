#include "../winhttp.h"

//----- (000000014067D4E0) ----------------------------------------------------
__int64 __fastcall sub_14067D4E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	int v5; // eax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	unsigned __int64 v9; // rcx
	unsigned __int16* v10; // rdx
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (!v2 || (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) < 2)
	{
		v6 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F4D2C)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			goto LABEL_27;
		}
		goto LABEL_24;
	}
	v4 = **(_QWORD**)(v3 + 48);
	v5 = *(_DWORD*)(v4 + 12);
	if (v5 == 2 || v5 == 14)
	{
		v8 = sub_14021FC40(*(_DWORD*)(v4 + 20));
		if (v8)
		{
			v9 = *(_QWORD*)(v8 + 8);
			if (v9)
			{
				if (v9 <= qword_140C3FE70)
					v10 = (unsigned __int16*)(v9 + qword_140C3FE68);
				else
					v10 = 0i64;
			}
			else
			{
				v10 = 0i64;
			}
			v6 = (unsigned __int64*)sub_14018F0E0(&v12, v10)[1];
			if (v6)
			{
				v7 = -1i64;
				do
					++v7;
				while (*((_BYTE*)v6 + v7));
				goto LABEL_27;
			}
		}
		else
		{
			v6 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F4CF4)[1];
			if (v6)
			{
				v7 = -1i64;
				do
					++v7;
				while (*((_BYTE*)v6 + v7));
				goto LABEL_27;
			}
		}
	LABEL_24:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_28;
	}
	v6 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F4DB4)[1];
	if (!v6)
		goto LABEL_24;
	v7 = -1i64;
	do
		++v7;
	while (*((_BYTE*)v6 + v7));
LABEL_27:
	sub_140058710((__int64)a1, v6, v7);
LABEL_28:
	if (v13)
		sub_14018B900(v13, 0);
	return 1i64;
}
// 1409F4CF4: using guessed type unsigned __int16 word_1409F4CF4[18];
// 1409F4D2C: using guessed type unsigned __int16 word_1409F4D2C[2];
// 1409F4DB4: using guessed type unsigned __int16 word_1409F4DB4[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

