#include "../winhttp.h"

//----- (00000001408F8EE0) ----------------------------------------------------
__int64 __fastcall sub_1408F8EE0(__int64 a1, __int64* a2)
{
	__int64* v4; // rbx
	__int64 v5; // rdi
	__int16 v6; // si
	__int64 v7; // rbx
	int v8; // ebp
	int v9; // ecx
	__int64 v10; // rax
	unsigned __int16 v11; // di

	v4 = (__int64*)(a1 + 8);
	v5 = 4i64;
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
	v6 = 0;
	v7 = *a2 + 2;
	v8 = *(unsigned __int16*)*a2;
	if (!*(_WORD*)*a2)
	{
	LABEL_18:
		*a2 = v7;
		return 1i64;
	}
	while (1)
	{
		v9 = *(_DWORD*)v7;
		v10 = 0i64;
		if (*(_DWORD*)v7)
		{
			switch (v9)
			{
			case 20:
				v10 = 1i64;
				break;
			case 23:
				v10 = 2i64;
				break;
			case 26:
				v10 = 3i64;
				break;
			}
		}
		else
		{
			v10 = 0i64;
		}
		v11 = *(_WORD*)(v7 + 4);
		v7 += 6i64;
		if (!v11)
			goto LABEL_17;
		if ((unsigned int)sub_140837E30(16 * v10 + a1 + 8, (int*)v7, v11, 0) == 52)
			return 52i64;
		v7 += 12i64 * v11;
	LABEL_17:
		if ((unsigned __int16)++v6 >= v8)
			goto LABEL_18;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

