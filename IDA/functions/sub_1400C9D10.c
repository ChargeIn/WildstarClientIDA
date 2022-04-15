#include "../winhttp.h"

//----- (00000001400C9D10) ----------------------------------------------------
__m128 __fastcall sub_1400C9D10(_QWORD* a1)
{
	__int128 v1; // xmm0
	__int64 v3; // rcx
	__int128 v4; // xmm6
	__int64 v5; // rdi
	__int64 v6; // rcx
	int v7; // eax
	__int128* v8; // rcx
	__m128d v9; // xmm0
	__m128 result; // xmm0
	double(__fastcall * **v11)(_QWORD); // rcx
	__m128* v12; // rax
	bool v13; // zf
	__int128 v14; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

	v3 = a1[36];
	v4 = 0x3F800000u;
	if (v3)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3))
		{
			v5 = a1[36];
			if ((int)sub_1400FB720(v5, L"fBGOpacity", 3) >= 0)
			{
				v6 = *(_QWORD*)(*(_QWORD*)(v5 + 16) + 16i64);
				v7 = *(_DWORD*)(v6 - 8);
				v8 = (__int128*)(v6 - 16);
				if (v7 != 3)
				{
					if (v7 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v8 + 32i64), &v15))
					{
						v9 = 0i64;
						goto LABEL_9;
					}
					DWORD2(v14) = 3;
					v8 = &v14;
					*(_QWORD*)&v14 = v15;
				}
				v9 = (__m128d) * (unsigned __int64*)v8;
			LABEL_9:
				result = _mm_cvtpd_ps(v9);
				*(_QWORD*)(*(_QWORD*)(v5 + 16) + 16i64) -= 32i64;
				return result;
			}
		}
	}
	v11 = (double(__fastcall***)(_QWORD))a1[76];
	if (v11)
	{
		*(double*)&v1 = (**v11)(v11);
		v4 = v1;
	}
	v12 = (__m128*)a1[56];
	if (!v12)
		return (__m128)v4;
	v13 = (v12[4].m128_i8[8] & 4) == 0;
	v14 = xmmword_140B7B240;
	if (v13)
	{
		return (__m128)v4;
	}
	else
	{
		result = _mm_shuffle_ps(v12[7], v12[7], 255);
		result.m128_f32[0] = result.m128_f32[0] * *(float*)&v4;
	}
	return result;
}
// 1400C9DE6: variable 'v1' is possibly undefined
// 140A151E8: using guessed type wchar_t aFbgopacity[11];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

