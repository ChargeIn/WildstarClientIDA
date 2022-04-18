#include "../winhttp.h"

//----- (00000001403B8630) ----------------------------------------------------
__int64 __fastcall sub_1403B8630(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebx
	__int64 v5; // r10
	__int64 v6; // rcx
	__int64 v7; // r8
	int v8; // r9d
	int v9; // edx
	__int64 result; // rax
	unsigned int v11; // [rsp+78h] [rbp-1h]
	__int64 v12[6]; // [rsp+88h] [rbp+Fh] BYREF

	sub_1403D2FC0((__int64*)(a1 + 25392));
	v4 = 0;
	if (*(_DWORD*)a2)
	{
		while (1)
		{
			v5 = *(_QWORD*)(a2 + 8) + 136i64 * v4;
			v6 = *(_QWORD*)(v5 + 104);
			v7 = *(_QWORD*)(v5 + 112);
			v8 = *(_DWORD*)(v5 + 8);
			v11 = *(_DWORD*)(v5 + 124);
			v9 = *(_DWORD*)v5;
			v12[1] = *(unsigned int*)(v5 + 120);
			v12[2] = 0i64;
			v12[0] = v6;
			v12[4] = v11;
			v12[3] = v7;
			v12[5] = 0i64;
			result = sub_1403B8A60(
				a1,
				v9,
				*(_DWORD*)(v5 + 4),
				v8,
				*(_QWORD*)(v5 + 16),
				*(_DWORD*)(v5 + 24),
				*(_QWORD*)(v5 + 32),
				*(_DWORD*)(v5 + 48),
				(int*)(v5 + 52),
				(int*)(v5 + 72),
				*(_QWORD*)(v5 + 40),
				v12,
				*(_DWORD*)(v5 + 128));
			if ((int)result < 0)
				break;
			if (++v4 >= *(_DWORD*)a2)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "BuybackItemsUpdated", byte_1409D0D87);
		return 0i64;
	}
	return result;
}
// 1409D0D87: using guessed type _BYTE byte_1409D0D87[28];

