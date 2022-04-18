#include "../winhttp.h"

//----- (00000001403B88D0) ----------------------------------------------------
__int64 __fastcall sub_1403B88D0(_QWORD* a1, int* a2)
{
	unsigned __int64 v3; // rcx
	unsigned int v4; // r8d
	__int64 v5; // r9
	int v6; // edx
	__int64 v7; // rax
	unsigned __int64 v9; // rsi
	int* v10; // rbx
	unsigned __int64 v11; // r14
	__int64 v12; // rbp
	int* v13; // rax
	int* v14; // rdx
	__int64 v15; // rcx

	v3 = a1[3175];
	v4 = 0;
	if (!v3)
		return 2147500037i64;
	v5 = a1[3174];
	v6 = *a2;
	v7 = 0i64;
	while (*(_DWORD*)((v7 << 8) + v5) != v6)
	{
		v7 = ++v4;
		if (v4 >= v3)
			return 2147500037i64;
	}
	v9 = v3 - 1;
	sub_1407DB590(
		(int*)(v5 + ((unsigned __int64)v4 << 8)),
		(int*)(v5 + ((unsigned __int64)v4 << 8) + 256),
		(v3 - 1 - v4) << 8);
	v10 = (int*)a1[3174];
	if (v9)
	{
		if (!v10)
		{
			v11 = v9;
			v12 = (v9 << 8) + 16;
			goto LABEL_12;
		}
		if (v9 > *((_QWORD*)v10 - 1))
		{
			v11 = (unsigned __int64)(sub_14018A3E0((v9 << 8) + 16) - 16) >> 8;
			v12 = (v11 << 8) + 16;
			if ((**((unsigned int(__fastcall***)(__int64, __int64))v10 - 2))((__int64)(v10 - 4), v12))
			{
				*((_QWORD*)v10 - 1) = v11;
				goto LABEL_15;
			}
		LABEL_12:
			v13 = sub_14018B280(v12, 0);
			if (v13)
			{
				*((_QWORD*)v13 + 1) = v11;
				*(_QWORD*)v13 = off_140B55060;
			}
			v10 = v13 + 4;
		}
	}
LABEL_15:
	v14 = (int*)a1[3174];
	if (v14 != v10)
	{
		sub_1407DB590(v10, v14, v9 << 8);
		v15 = a1[3174];
		if (v15)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
		a1[3174] = v10;
	}
	a1[3175] = v9;
	Apollo_LUAEvent(a1[3688], "BuybackItemsUpdated", byte_1409D0D87);
	return 0i64;
}
// 1409D0D87: using guessed type _BYTE byte_1409D0D87[28];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

