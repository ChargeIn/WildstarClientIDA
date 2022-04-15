#include "../winhttp.h"

//----- (00000001401A5170) ----------------------------------------------------
__int64 __fastcall sub_1401A5170(__int64 a1, _WORD* a2, _DWORD* a3)
{
	__int16 v3; // ax
	const __m128i* v5; // rcx
	__int16 v8; // di
	int v9; // ebx
	const __m128i* v10; // rax
	__int16 v11; // cx
	__int8* v12; // rdx
	__int64 i; // r8
	__int16 v14; // ax
	const __m128i* v16; // rax
	__int16 v17; // cx
	__int8* v18; // rdx
	__int16 v19; // ax
	__int16 v20; // ax

	v3 = *(_WORD*)(a1 + 4);
	v5 = (const __m128i*)(a1 + 4);
	if (!v3)
		return a1 + 2;
	v8 = 0;
	v9 = 1;
	if (v3 == 120)
	{
		if (*(_WORD*)(a1 + 6))
		{
			v10 = sub_1407DD988((const __m128i*)(a1 + 6), 0x3Bu);
			if (v10)
			{
				v11 = v10[-1].m128i_i16[7];
				v12 = &v10[-1].m128i_i8[14];
				for (i = ((__int64)v10->m128i_i64 - a1) >> 1; v11 != 120; v9 *= 16)
				{
					if ((unsigned __int16)(v11 - 48) > 9u)
					{
						if ((unsigned __int16)(v11 - 97) > 5u)
						{
							if ((unsigned __int16)(v11 - 65) > 5u)
								return 0i64;
							v14 = v11 - 55;
						}
						else
						{
							v14 = v11 - 87;
						}
					}
					else
					{
						v14 = v11 - 48;
					}
					v11 = *((_WORD*)v12 - 1);
					v12 -= 2;
					v8 += v9 * v14;
				}
				goto LABEL_13;
			}
		}
	}
	else if (v5->m128i_i16[0])
	{
		v16 = sub_1407DD988(v5, 0x3Bu);
		if (v16)
		{
			v17 = v16[-1].m128i_i16[7];
			v18 = &v16[-1].m128i_i8[14];
			i = ((__int64)v16->m128i_i64 - a1) >> 1;
			if (v17 == 35)
			{
			LABEL_13:
				*a2 = v8;
				*a3 = 1;
				return a1 + 2 + 2 * i;
			}
			while ((unsigned __int16)(v17 - 48) <= 9u)
			{
				v19 = v17;
				v17 = *((_WORD*)v18 - 1);
				v18 -= 2;
				v20 = v9 * (v19 - 48);
				v9 *= 10;
				v8 += v20;
				if (v17 == 35)
					goto LABEL_13;
			}
		}
	}
	return 0i64;
}

