#include "../winhttp.h"

//----- (00000001408FBF08) ----------------------------------------------------
__int64 __fastcall sub_1408FBF08(unsigned __int8* a1, unsigned __int8* a2, _OWORD* a3)
{
	unsigned int v5; // ebx
	signed __int64 v6; // rsi
	int v7; // ebx
	int v8; // eax
	__int128 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+30h] [rbp-18h]
	char v12; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)&v10, a3);
	if (a1 && a2)
	{
		if (*(_QWORD*)(v10 + 312))
		{
			v6 = a1 - a2;
			do
			{
				v7 = sub_1407F6858(a2[v6], &v10);
				v8 = sub_1407F6858(*a2++, &v10);
			} while (v7 && v7 == v8);
			v5 = v7 - v8;
		}
		else
		{
			v5 = sub_1408FBE84(a1, a2);
		}
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		v5 = 0x7FFFFFFF;
	}
	if (v12)
		*(_DWORD*)(v11 + 200) &= ~2u;
	return v5;
}

