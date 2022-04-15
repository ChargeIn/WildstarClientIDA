#include "../winhttp.h"

//----- (00000001400CA470) ----------------------------------------------------
_DWORD* __fastcall sub_1400CA470(__int64 a1, _DWORD* a2, int a3)
{
	int v7; // r8d
	int v8; // edx
	int v9; // r9d
	int v10; // r10d
	char v11; // al
	__int64 v12; // rcx
	int* v13; // rax
	int v14; // [rsp+20h] [rbp-38h] BYREF
	int v15; // [rsp+24h] [rbp-34h]
	int v16; // [rsp+28h] [rbp-30h]
	int v17; // [rsp+2Ch] [rbp-2Ch]
	__int64 v18; // [rsp+30h] [rbp-28h] BYREF
	int v19; // [rsp+38h] [rbp-20h]
	int v20; // [rsp+3Ch] [rbp-1Ch]
	int v21[6]; // [rsp+40h] [rbp-18h] BYREF

	if (a3 < 8)
	{
		sub_1400CB3D0(a1, &v14);
		v7 = v16 - v14;
		v8 = v17 - v15;
		v9 = qword_140C77760;
		v10 = HIDWORD(qword_140C77760);
		v11 = *(_BYTE*)(a1 + 656) >> 3;
		v19 = v16 - v14;
		v20 = v17 - v15;
		v18 = qword_140C77760;
		if ((v11 & 1) != 0 && (v12 = *(_QWORD*)(a1 + 48)) != 0)
		{
			v13 = sub_14010D430(v12, v21, &v18, a3);
			v9 = *v13;
			v10 = v13[1];
			v7 = v13[2];
			v8 = v13[3];
		}
		else
		{
			if ((unsigned int)a3 <= 2)
				v8 = HIDWORD(qword_140C77760);
			if ((unsigned int)(a3 - 6) <= 1 || !a3)
				v7 = qword_140C77760;
			if ((unsigned int)(a3 - 2) <= 2)
				v9 = v7;
			if ((unsigned int)(a3 - 4) <= 2)
				v10 = v8;
		}
		*a2 = v9;
		a2[1] = v10;
		a2[2] = v7;
		a2[3] = v8;
		return a2;
	}
	else
	{
		*(_OWORD*)a2 = xmmword_140C784D0;
		return a2;
	}
}
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C784D0: using guessed type __int128 xmmword_140C784D0;
// 1400CA470: using guessed type int var_18[6];

