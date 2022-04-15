#include "../winhttp.h"

//----- (0000000140840E90) ----------------------------------------------------
__int64 __fastcall sub_140840E90(__int64 a1, int a2)
{
	int v4; // r15d
	__int64 v5; // r12
	int v6; // edi
	__int64 v7; // rbp
	unsigned int v8; // ebx
	int* v9; // rax
	int* v10; // rsi
	int v11[4]; // [rsp+30h] [rbp-38h] BYREF
	int v12; // [rsp+80h] [rbp+18h] BYREF
	int v13; // [rsp+88h] [rbp+20h] BYREF

	if (!qword_140C61B78)
		return 2i64;
	if (a2)
	{
		v4 = 0;
		v5 = 0i64;
	LABEL_5:
		v6 = 0;
		v7 = 0i64;
		while (1)
		{
			v8 = sub_14083C5D0(a1, &v12, 1u);
			if (v8 != 1)
				break;
			*(_BYTE*)(v5 + v7 + qword_140C61B90) = (_BYTE)v12 != 0;
			v8 = sub_14083C5D0(a1, &v13, 1u);
			if (v8 != 1)
				break;
			v8 = sub_14083C5D0(a1, v11, 2u);
			if (v8 != 1)
				break;
			v9 = (int*)sub_1408819F0(dword_140C10F20, 12i64 * LOWORD(v11[0]));
			v10 = v9;
			if (!v9)
				return 52;
			v8 = sub_14083C5D0(a1, v9, 12 * (unsigned int)LOWORD(v11[0]));
			if (v8 == 1)
				sub_140845180(qword_140C61B90, v4, v6, LOWORD(v11[0]), v10, (unsigned __int8)v13);
			sub_140881720(dword_140C10F20, (__int64)v10);
			if (v8 != 1)
				return v8;
			++v6;
			++v7;
			if (v6 >= 2)
			{
				++v4;
				v5 += 2i64;
				if (v4 < 2)
					goto LABEL_5;
				return v8;
			}
		}
	}
	else
	{
		return 2;
	}
	return v8;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B78: using guessed type __int64 qword_140C61B78;
// 140C61B90: using guessed type __int64 qword_140C61B90;
// 140840E90: using guessed type int var_38[4];

