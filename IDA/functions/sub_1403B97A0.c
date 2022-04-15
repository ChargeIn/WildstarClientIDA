#include "../winhttp.h"

//----- (00000001403B97A0) ----------------------------------------------------
__int64 __fastcall sub_1403B97A0(__int64 a1, unsigned __int8* a2)
{
	unsigned __int64 v5; // rbp
	__int64 v6; // r14
	__int64 v7; // rsi
	__int64 v8; // rdx
	__int64 v9; // rcx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx

	if (*a2 >= 4u)
		return 2147500037i64;
	v5 = 0i64;
	if (*((_DWORD*)a2 + 2))
	{
		v6 = 0i64;
		while (1)
		{
			v7 = v6 + *((_QWORD*)a2 + 2);
			v8 = *(unsigned int*)(v7 + 8);
			if ((unsigned int)v8 >= 0x30)
				return 2147500037i64;
			v9 = *(_QWORD*)(a1 + 8 * (v8 + 48i64 * *a2) + 2752);
			if (v9)
			{
				if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9))
				{
					v10 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 8 * (*(unsigned int*)(v7 + 8) + 48i64 * *a2) + 2752);
					if (v10)
						(**v10)(v10, 1i64);
				}
			}
			++v5;
			v6 += 16i64;
			*(_QWORD*)(a1 + 8 * (*(unsigned int*)(v7 + 8) + 48i64 * *a2) + 2752) = sub_1403C1BF0(
				a1,
				9,
				*(_DWORD*)v7,
				*(_DWORD*)(v7 + 12),
				v7 + 4,
				0);
			if (v5 >= *((unsigned int*)a2 + 2))
				goto LABEL_11;
		}
	}
	else
	{
	LABEL_11:
		if (*a2 < 4u)
			*(_DWORD*)(a1 + 4i64 * *a2 + 5192) = a2[1];
		if (*((_DWORD*)a2 + 1) != 1)
			sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ActionSetError", byte_1409ECE7C);
		sub_140008410(a1 + 5208);
		*(_DWORD*)(a1 + 28124) = -1;
		return 0i64;
	}
}
// 1409ECE7C: using guessed type _BYTE byte_1409ECE7C[4];

