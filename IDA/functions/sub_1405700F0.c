#include "../winhttp.h"

//----- (00000001405700F0) ----------------------------------------------------
__int64 __fastcall sub_1405700F0(__int64 a1)
{
	__m128* v2; // rdx
	__int64 v4; // rax
	__m128 v5; // xmm7
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	int v8; // ebp
	_QWORD** v9; // rdi
	unsigned int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rax
	float v13; // xmm4_4
	__m128 v14; // xmm3
	__m128 v15; // xmm2
	float v16; // xmm2_4
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v20; // rcx
	__int64 v21; // rbx
	int v22; // [rsp+68h] [rbp+10h] BYREF
	__int64 v23; // [rsp+70h] [rbp+18h] BYREF

	v2 = *(__m128**)(qword_140C65898 + 25744);
	if (!v2)
		return 2147500037i64;
	v4 = *(_QWORD*)(a1 + 88);
	v5 = v2[286];
	if (!v4)
		return 2147500037i64;
	v6 = *(_QWORD**)(v4 + 16);
	v7 = (_QWORD*)v6[2];
	if (v7 == v6)
		return 2147500037i64;
	v8 = 134250504;
	while (1)
	{
		v9 = (_QWORD**)v7[5];
		if (!((unsigned int(__fastcall*)(_QWORD**))(*v9)[7])(v9))
		{
			v10 = *(_DWORD*)(*v9[6] + 12i64);
			if (v10 <= 0x1B)
			{
				if (_bittest(&v8, v10))
				{
					if (!((unsigned int(__fastcall*)(_QWORD**))(*v9)[7])(v9))
					{
						v11 = sub_14077CCE0(v9, &v22);
						if (v11)
						{
							v12 = sub_14024B980(*(_DWORD*)(*(_QWORD*)v11 + 8i64));
							if (v12)
							{
								v13 = *(float*)(v12 + 4);
								v14 = _mm_sub_ps(
									_mm_unpacklo_ps(
										_mm_unpacklo_ps((__m128) * (unsigned int*)(v12 + 12), (__m128) * (unsigned int*)(v12 + 20)),
										_mm_unpacklo_ps((__m128) * (unsigned int*)(v12 + 16), (__m128)0i64)),
									v5);
								v15 = _mm_mul_ps(v14, v14);
								v16 = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
									+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
								if (v16 < (float)((float)(v13 * v13) * (float)(v13 * v13))
									&& (v16 < 0.0000099999997 || (float)(1.0 - (float)(fsqrt(v16) / v13)) >= *(float*)&dword_140C4B1E8))
								{
									break;
								}
							}
						}
					}
				}
			}
		}
		v17 = v7[3];
		if (v17)
		{
			v7 = (_QWORD*)v7[3];
			for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
				v7 = i;
		}
		else
		{
			for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v7 = (_QWORD*)j;
			if (v7[3] != j)
				v7 = (_QWORD*)j;
		}
		if (v7 == *(_QWORD**)(*(_QWORD*)(a1 + 88) + 16i64))
			return 2147500037i64;
	}
	v20 = *(_QWORD*)(qword_140C65920 + 8);
	if (v20)
	{
		do
		{
			v21 = *(_QWORD*)(v20 + 32);
			if (!*(_DWORD*)(v20 + 56))
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
			v20 = v21;
		} while (v21);
	}
	v23 = 0i64;
	LODWORD(v23) = ((__int64(__fastcall*)(_QWORD**))(*v9)[1])(v9);
	HIDWORD(v23) = v22;
	sub_1403F4900(qword_140C65898, 0xF3u, (__int64)&v23);
	return 0i64;
}
// 140C4B1E8: using guessed type int dword_140C4B1E8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

