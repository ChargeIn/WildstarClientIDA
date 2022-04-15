#include "../winhttp.h"

//----- (00000001402640F0) ----------------------------------------------------
void __fastcall sub_1402640F0(unsigned __int64 a1, const __m128i* a2, unsigned int a3)
{
	unsigned __int64 v3; // r10
	unsigned __int64 v4; // r9
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // r8
	__m128i si128; // xmm1
	const __m128i* v8; // rax
	__m128i v9; // xmm0
	__int8* v10; // rdx
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // r9
	int v13; // ecx

	v3 = 0i64;
	v4 = a3;
	if (a3)
	{
		if (a3 >= 4ui64)
		{
			v5 = (unsigned __int64)&a2[-1].m128i_u64[1] + 4 * a3 + 4;
			v6 = a1 - 4 + 4i64 * a3;
			if (a1 > v5 || v6 < (unsigned __int64)a2)
			{
				si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B610);
				v8 = a2;
				do
				{
					v9 = _mm_loadu_si128(v8);
					v3 += 4i64;
					++v8;
					*(const __m128i*)((char*)&v8[-1] + a1 - (_QWORD)a2) = _mm_or_si128(v9, si128);
				} while (v3 < v4 - (v4 & 3));
			}
		}
		if (v3 < v4)
		{
			v10 = &a2->m128i_i8[-a1];
			v11 = a1 + 4 * v3;
			v12 = v4 - v3;
			do
			{
				v13 = *(_DWORD*)&v10[v11];
				v11 += 4i64;
				*(_DWORD*)(v11 - 4) = v13 | 0xFF000000;
				--v12;
			} while (v12);
		}
	}
}
// 140B7B610: using guessed type __int128 xmmword_140B7B610;

