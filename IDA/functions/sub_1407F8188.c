#include "../winhttp.h"

//----- (00000001407F8188) ----------------------------------------------------
__int64 __fastcall sub_1407F8188(unsigned __int8* a1, unsigned __int8* a2, unsigned __int64 a3, _OWORD* a4)
{
	unsigned __int64 v4; // rbp
	unsigned int v7; // ebx
	signed __int64 v8; // rsi
	int v9; // ebx
	int v10; // eax
	__int128 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+30h] [rbp-18h]
	char v14; // [rsp+38h] [rbp-10h]

	v4 = a3;
	if (!a3)
		return 0i64;
	sub_1407DE348((__int64)&v12, a4);
	v7 = 0x7FFFFFFF;
	if (a1 && a2 && v4 <= 0x7FFFFFFF)
	{
		if (*(_QWORD*)(v12 + 312))
		{
			v8 = a1 - a2;
			do
			{
				v9 = sub_1407F6858(a2[v8], &v12);
				v10 = sub_1407F6858(*a2++, &v12);
				--v4;
			} while (v4 && v9 && v9 == v10);
			v7 = v9 - v10;
		}
		else
		{
			v7 = sub_1407F80F0(a1, a2, v4);
		}
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	}
	if (v14)
		*(_DWORD*)(v13 + 200) &= ~2u;
	return v7;
}

