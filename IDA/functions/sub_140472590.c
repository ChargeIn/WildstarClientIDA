#include "../winhttp.h"

//----- (0000000140472590) ----------------------------------------------------
void __fastcall sub_140472590(__int64* a1, unsigned int a2, int a3, __m128* a4, int a5, int a6, __m128* a7)
{
	__int64 v9; // rbp
	__m128* v10; // r8

	v9 = a2;
	if (a7)
	{
		sub_140472700((__int64)a7, a1, a2, a3, a4);
		switch (a3)
		{
		case 1:
		case 29:
		case 30:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			v10 = a4 + 3;
			if (a7[374].m128_f32[0] < a7[381].m128_f32[0])
			{
				if (a7[306].m128_i32[0] == 4)
					sub_1405B8BD0(a7, dword_140C636A8, v10, 4u, 1.0);
				else
					sub_1405B8BD0(a7, dword_140C636A8, v10, 2u, 1.0);
			}
			break;
		case 64:
		case 65:
		case 66:
			sub_140472BF0((__int64)a7, a3);
			break;
		case 90:
			a7[30].m128_i32[v9 + 2] = 1;
			break;
		case 91:
			sub_14047F210((__int64)a7, a4 + 3, 0, 0);
			break;
		default:
			return;
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

