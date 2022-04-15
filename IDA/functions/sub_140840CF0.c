#include "../winhttp.h"

//----- (0000000140840CF0) ----------------------------------------------------
__int64 __fastcall sub_140840CF0(__int64 a1, int* a2)
{
	unsigned int v4; // eax
	__int64 v5; // r9
	unsigned int v6; // ebx
	unsigned int v7; // edx
	unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
	int v10; // [rsp+38h] [rbp+10h] BYREF
	int v11; // [rsp+3Ch] [rbp+14h]

	if ((unsigned int)sub_14083C5D0(a1, &v10, 8u) != 1 || v10 != 1145588546)
	{
		v7 = 7;
		goto LABEL_11;
	}
	v4 = sub_14083C5D0(a1, a2, 0x14u);
	v6 = v11 - 20;
	v7 = v4;
	if (v4 == 1)
	{
		if (v11 != 20)
		{
			v9 = 0;
			v7 = sub_14083CB00(a1, v6, &v9, v5);
			if (v7 != 1)
				goto LABEL_11;
			if (v9 != v6)
			{
				v7 = 56;
				goto LABEL_11;
			}
		}
		if (*a2 != 88)
			v7 = 64;
	}
LABEL_11:
	*(_BYTE*)(a1 + 2296) = a2[3] != 0;
	return v7;
}
// 140840D57: variable 'v5' is possibly undefined

