#include "../winhttp.h"

//----- (0000000140907A14) ----------------------------------------------------
__int8* __fastcall sub_140907A14(__int8* a1, int a2, _OWORD* a3)
{
	unsigned __int16 v5; // cx
	char v7[8]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	__int64 v9; // [rsp+30h] [rbp-18h]
	char v10; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)v7, a3);
	if (!a1)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	LABEL_13:
		a1 = 0i64;
		goto LABEL_14;
	}
	if (!*(_DWORD*)(v8 + 8))
	{
		a1 = sub_1407DE0B4((__int64)a1, a2);
		goto LABEL_14;
	}
	while (1)
	{
		v5 = (unsigned __int8)*a1;
		if (!*a1)
			break;
		if ((*(_BYTE*)((unsigned __int8)v5 + v8 + 25) & 4) != 0)
		{
			if (!*++a1)
				goto LABEL_13;
			if (a2 == ((unsigned __int8)*a1 | (v5 << 8)))
			{
				--a1;
				goto LABEL_14;
			}
		}
		else if (a2 == (unsigned __int8)*a1)
		{
			break;
		}
		++a1;
	}
	if (a2 != (unsigned __int8)*a1)
		goto LABEL_13;
LABEL_14:
	if (v10)
		*(_DWORD*)(v9 + 200) &= ~2u;
	return a1;
}
// 140907A14: using guessed type char var_28[8];

