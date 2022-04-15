#include "../winhttp.h"

//----- (000000014067C950) ----------------------------------------------------
__int64 __fastcall sub_14067C950(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	int v4; // edx
	int v5; // edx
	const wchar_t* v6; // rax
	int* v7; // rsi
	__int64 v8; // rax
	int* v9; // r14
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]

	v2 = sub_14067B760(a1);
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v3 = *(_DWORD*)(qword_140C65970 + 8);
		if (v3)
		{
			v4 = v3 - 1;
			if (v4)
			{
				v5 = v4 - 1;
				if (v5)
				{
					if (v5 == 1)
						v6 = L"sprMM_SmallIconExplorer";
					else
						v6 = L"WhiteCircle";
				}
				else
				{
					v6 = L"sprMM_SmallIconScientist";
				}
			}
			else
			{
				v6 = L"sprMM_SmallIconSettler";
			}
		}
		else
		{
			v6 = L"sprMM_SmallIconSoldier";
		}
		v7 = (int*)&unk_1409F4EC4;
		if (v6)
			v7 = (int*)v6;
		v8 = 0i64;
		v9 = 0i64;
		if (*(_WORD*)v7)
		{
			do
				++v8;
			while (*((_WORD*)v7 + v8));
		}
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v9 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v9, v7, v11);
		if ((int*)((char*)v9 + v11))
			*(_WORD*)((char*)v9 + v11) = 0;
		v12 = (unsigned __int64*)sub_14018F0E0(&v17, (unsigned __int16*)v9)[1];
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
		if (v18)
			sub_14018B900(v18, 0);
		if (v9)
			sub_14018B900((__int64)v9, 0);
		return 1i64;
	}
	else
	{
		v15 = (unsigned __int64*)sub_14018F0E0(&v17, word_1409F5024)[1];
		if (v15)
		{
			v16 = -1i64;
			do
				++v16;
			while (*((_BYTE*)v15 + v16));
			sub_140058710((__int64)a1, v15, v16);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v18)
			sub_14018B900(v18, 0);
		return 1i64;
	}
}
// 1409F5024: using guessed type unsigned __int16 word_1409F5024[2];
// 140B1EB80: using guessed type wchar_t aSprmmSmallicon_2[23];
// 140B1EBD8: using guessed type wchar_t aSprmmSmallicon_1[23];
// 140B1EEA0: using guessed type wchar_t aSprmmSmallicon_0[25];
// 140B1EED8: using guessed type wchar_t aWhitecircle_0[12];
// 140B1EEF0: using guessed type wchar_t aSprmmSmallicon[24];
// 140C65970: using guessed type __int64 qword_140C65970;

