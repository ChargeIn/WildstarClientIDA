#include "../winhttp.h"

//----- (000000014034C240) ----------------------------------------------------
__int64 __fastcall sub_14034C240(LPCWSTR lpValue, __int64 lpNumberStr, unsigned __int64 a3, __int64 a4)
{
	unsigned int v4; // r14d
	WCHAR* v7; // rax
	__int64 v8; // rdi
	__int64 v10; // rbx
	WCHAR v11; // dx
	WCHAR* v12; // r8
	int v13; // ecx
	int v14; // eax
	bool v15; // zf
	int v16; // eax
	__int64 i; // rsi
	int* v18; // rax
	unsigned __int64 v19; // rsi
	__int64 j; // rsi
	int* v21; // rax
	unsigned __int64 v22; // rsi
	int v23; // eax
	const NUMBERFMTW* v24; // r9
	signed int LastError; // eax
	__int64 v27; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v28; // [rsp+40h] [rbp-C8h]
	__int64 v29; // [rsp+48h] [rbp-C0h]
	__int64 v30; // [rsp+50h] [rbp-B8h]
	__int64 v31; // [rsp+58h] [rbp-B0h]
	WCHAR* v32; // [rsp+60h] [rbp-A8h]
	WCHAR LCData[64]; // [rsp+68h] [rbp-A0h] BYREF

	v4 = 0;
	v7 = (WCHAR*)lpNumberStr;
	v32 = (WCHAR*)lpNumberStr;
	v8 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	v29 = 0i64;
	v30 = 0i64;
	v31 = 0i64;
	v10 = 0i64;
	if (a4)
	{
		if ((*(_BYTE*)a4 & 1) == 0 || *(_DWORD*)(a4 + 4))
		{
			if (!GetLocaleInfoW(*(_DWORD*)(qword_140C7AAC0 + 12), 0x10u, LCData, 64))
				goto LABEL_51;
			v11 = LCData[0];
			v12 = LCData;
			if (LCData[0])
			{
				v13 = v28;
				do
				{
					if ((unsigned __int16)(v11 - 49) <= 8u)
					{
						v13 = v11 + 2 * (5 * v13 - 24);
						LODWORD(v28) = v13;
					}
					if (v11 == 48 && v12[1])
					{
						v13 *= 10;
						LODWORD(v28) = v13;
					}
					v11 = v12[1];
					++v12;
				} while (v11);
			}
		}
		else
		{
			LODWORD(v28) = 0;
		}
		if ((*(_BYTE*)a4 & 2) != 0)
		{
			v14 = *(unsigned __int8*)(a4 + 8);
		}
		else
		{
			if (!GetLocaleInfoW(*(_DWORD*)(qword_140C7AAC0 + 12), 0x11u, LCData, 64))
				goto LABEL_51;
			v14 = sub_14018E820(LCData);
		}
		v15 = (*(_BYTE*)a4 & 4) == 0;
		LODWORD(v27) = v14;
		if (v15)
		{
			if (!GetLocaleInfoW(*(_DWORD*)(qword_140C7AAC0 + 12), 0x12u, LCData, 64))
				goto LABEL_51;
			v16 = sub_14018E820(LCData);
		}
		else
		{
			v16 = *(_DWORD*)(a4 + 12) != 0;
		}
		v15 = (*(_BYTE*)a4 & 8) == 0;
		HIDWORD(v27) = v16;
		if (v15)
		{
			if (!GetLocaleInfoW(*(_DWORD*)(qword_140C7AAC0 + 12), 0xEu, LCData, 64))
				goto LABEL_51;
			for (i = 0i64; LCData[i]; ++i)
				;
			v18 = sub_14018B280(2 * i + 18, 0);
			if (v18)
			{
				*((_QWORD*)v18 + 1) = i;
				*(_QWORD*)v18 = off_140B55060;
			}
			else
			{
				v18 = 0i64;
			}
			v8 = (__int64)(v18 + 4);
			v19 = 2 * i;
			sub_1407DB590(v18 + 4, (int*)LCData, v19);
			*(_WORD*)(v19 + v8) = 0;
			v29 = v8;
		}
		else
		{
			v29 = *(_QWORD*)(a4 + 16);
		}
		if ((*(_BYTE*)a4 & 0x10) != 0)
		{
			v30 = *(_QWORD*)(a4 + 24);
		}
		else
		{
			if (!GetLocaleInfoW(*(_DWORD*)(qword_140C7AAC0 + 12), 0xFu, LCData, 64))
				goto LABEL_51;
			for (j = 0i64; LCData[j]; ++j)
				;
			v21 = sub_14018B280(2 * j + 18, 0);
			if (v21)
			{
				*((_QWORD*)v21 + 1) = j;
				*(_QWORD*)v21 = off_140B55060;
			}
			else
			{
				v21 = 0i64;
			}
			v10 = (__int64)(v21 + 4);
			v22 = 2 * j;
			sub_1407DB590(v21 + 4, (int*)LCData, v22);
			*(_WORD*)(v22 + v10) = 0;
			v30 = v10;
		}
		if ((*(_BYTE*)a4 & 0x20) != 0)
		{
			v23 = *(_DWORD*)(a4 + 32);
		LABEL_44:
			LODWORD(v31) = v23;
			v7 = v32;
			goto LABEL_45;
		}
		if (GetLocaleInfoW(*(_DWORD*)(qword_140C7AAC0 + 12), 0x1010u, LCData, 64))
		{
			v23 = sub_14018E820(LCData);
			goto LABEL_44;
		}
	LABEL_51:
		LastError = GetLastError();
		v4 = LastError;
		if (LastError > 0)
			v4 = (unsigned __int16)LastError | 0x80070000;
		goto LABEL_53;
	}
LABEL_45:
	if (a3 > 0x7FFFFFFF)
		LODWORD(a3) = 0x7FFFFFFF;
	if (!a4 || (v24 = (const NUMBERFMTW*)&v27, !*(_DWORD*)a4))
		v24 = 0i64;
	if (!GetNumberFormatW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, lpValue, v24, v7, a3))
		goto LABEL_51;
LABEL_53:
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	return v4;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

