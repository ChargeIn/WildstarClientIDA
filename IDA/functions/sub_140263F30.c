#include "../winhttp.h"

//----- (0000000140263F30) ----------------------------------------------------
const __m128i* __fastcall sub_140263F30(const __m128i* a1, __int64 a2)
{
	__m128i* v4; // rax
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // r9
	char* v8; // r8
	__int16 v9; // cx

	v4 = (__m128i*)sub_1407DD8D8(a1, 0x2Eu);
	if (v4)
	{
		v5 = ((char*)v4 - (char*)a1) >> 1;
		v6 = 260 - v5;
		if ((unsigned __int64)(260 - v5 - 1) > 0x7FFFFFFE)
		{
			if (!v6)
				return a1;
		}
		else
		{
			v7 = v5 + 2147483386;
			v8 = (char*)((char*)L".tex" - (char*)v4);
			while (v7 + v6)
			{
				v9 = *(__int16*)((char*)v4->m128i_i16 + (_QWORD)v8);
				if (!v9)
					break;
				v4->m128i_i16[0] = v9;
				v4 = (__m128i*)((char*)v4 + 2);
				if (!--v6)
				{
					v4[-1].m128i_i16[7] = 0;
					return a1;
				}
			}
			if (!v6)
			{
				v4[-1].m128i_i16[7] = 0;
				return a1;
			}
		}
		v4->m128i_i16[0] = 0;
		return a1;
	}
	return (const __m128i*)a2;
}
// 140AE5968: using guessed type wchar_t aTex_2[5];

