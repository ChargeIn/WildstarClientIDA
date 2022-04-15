#include "../winhttp.h"

//----- (00000001408F3D80) ----------------------------------------------------
__int64 __fastcall sub_1408F3D80(__int64 a1, __int64* a2)
{
	__int64* v4; // rbx
	__int64 v5; // rdi
	__int16 v6; // si
	__int64 v7; // rbx
	int v8; // r14d
	unsigned __int16 v9; // bp
	int v10; // edx
	unsigned int v11; // eax

	v4 = (__int64*)(a1 + 8);
	v5 = 7i64;
	v6 = 0;
	do
	{
		if (*v4)
		{
			sub_140881720(dword_140C10F20, *v4);
			*v4 = 0i64;
		}
		v4[1] = 0i64;
		v4 += 2;
		--v5;
	} while (v5);
	v7 = *a2 + 2;
	v8 = *(unsigned __int16*)*a2;
	if (!*(_WORD*)*a2)
	{
	LABEL_10:
		*a2 = v7;
		return 1i64;
	}
	while (1)
	{
		v9 = *(_WORD*)(v7 + 4);
		v10 = *(_DWORD*)v7;
		v7 += 6i64;
		if (v9)
			break;
	LABEL_9:
		if ((unsigned __int16)++v6 >= v8)
			goto LABEL_10;
	}
	v11 = sub_1408F3F40(a1, v10);
	if ((unsigned int)sub_140837E30(16i64 * v11 + a1 + 8, (int*)v7, v9, 0) != 52)
	{
		v7 += 12i64 * v9;
		goto LABEL_9;
	}
	return 52i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

