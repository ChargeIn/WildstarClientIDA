#include "../winhttp.h"

//----- (00000001407831B0) ----------------------------------------------------
void __fastcall sub_1407831B0(__int64 a1, __m128* a2, int a3, _DWORD* a4)
{
	float v4; // xmm3_4
	__m128 v8; // xmm1
	__m128 v9; // xmm1
	__int32 v10; // ecx
	__int32 v11; // ecx
	__int32 v12; // ecx
	unsigned __int64 v13; // rdi

	v4 = *(float*)&dword_140C4B928;
	*a4 = 0;
	v8 = _mm_mul_ps(a2[255], a2[255]);
	if ((float)((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0]) <= v4)
		*a4 = 1;
	v9 = _mm_mul_ps(a2[259], a2[259]);
	if ((float)((float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) + _mm_shuffle_ps(v9, v9, 170).m128_f32[0]) > v4)
		*a4 |= 2u;
	v10 = a2[264].m128_i32[2];
	if (v10)
	{
		v11 = v10 - 1;
		if (v11)
		{
			v12 = v11 - 1;
			if (v12)
			{
				if (v12 == 1)
					*a4 |= 0x80u;
			}
			else
			{
				*a4 |= 0x480u;
			}
		}
		else
		{
			*a4 |= 0x280u;
		}
	}
	else
	{
		*a4 |= 0x100u;
	}
	v13 = a2[254].m128_u64[0];
	if (v13
		&& (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v13 + 8i64))(a2[254].m128_u64[0]) == 6
		&& *(float*)(v13 + 96) > 0.0
		&& a3 - *(_DWORD*)(v13 + 104) < 0)
	{
		*a4 &= ~0x100u;
		*a4 |= 0x40u;
	}
	if (!*(_DWORD*)(a1 + 56))
		*a4 |= 0x40000u;
}
// 140C4B928: using guessed type int dword_140C4B928;

