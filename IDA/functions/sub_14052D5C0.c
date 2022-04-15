#include "../winhttp.h"

//----- (000000014052D5C0) ----------------------------------------------------
void** __fastcall sub_14052D5C0(__int64 a1)
{
	void** result; // rax
	__int64 v3; // rbp
	int* v4; // rdi
	__int64 v5; // rax
	__int64 v6; // r14
	_DWORD* v7; // rbx
	char v8; // r8
	unsigned int v9; // edx
	unsigned int v10; // ecx
	__m128 v11; // xmm2
	__m128i v12; // xmm2
	__int128 v13; // [rsp+30h] [rbp-38h] BYREF
	int v14; // [rsp+44h] [rbp-24h]
	void* retaddr; // [rsp+68h] [rbp+0h] BYREF
	int j; // [rsp+70h] [rbp+8h] BYREF
	int i; // [rsp+74h] [rbp+Ch]

	result = &retaddr;
	if (*(_QWORD*)(a1 + 1424) && *(_QWORD*)(a1 + 1456))
	{
		(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 504i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
		*((_QWORD*)&v13 + 1) = *(_QWORD*)(a1 + 1424);
		LODWORD(v13) = 1;
		LODWORD(v3) = 0;
		v14 = 0;
		(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v13,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C3FE88,
			1i64);
		v13 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			&v13);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 1456),
			0i64);
		v4 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
		v5 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			(unsigned int)(28 * (v4[2] - *v4) * (v4[3] - v4[1])),
			0i64,
			0i64);
		v6 = v5;
		if (v5)
		{
			v7 = (_DWORD*)v5;
			for (i = v4[1]; i < v4[3]; ++i)
			{
				for (j = *v4; j < v4[2]; ++j)
				{
					v8 = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 1152) + 104i64))(
						*(_QWORD*)(a1 + 1152),
						&j);
					if ((v8 & 1) == 0)
					{
						v9 = j - *v4;
						v10 = i - v4[1];
						v7[3] = 1065353216;
						v11 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(0))));
						v12 = (__m128i)_mm_unpacklo_ps(
							_mm_unpacklo_ps(v11, (__m128)0i64),
							_mm_unpacklo_ps(_mm_shuffle_ps(v11, v11, 85), (__m128)0i64));
						*v7 = _mm_cvtsi128_si32(v12);
						v7[1] = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
						v7[2] = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
						if ((v8 & 2) != 0
							|| (*(unsigned int(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 1152) + 136i64))(
								*(_QWORD*)(a1 + 1152),
								&j))
						{
							v7[4] = -16645630;
						}
						else
						{
							v7[4] = -16711423;
						}
						v7 += 7;
					}
				}
			}
			v3 = ((__int64)v7 - v6) / 28;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 648i64))(
			qword_140C65670,
			0i64,
			0i64,
			(unsigned int)v3,
			1);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
		return (void**)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

