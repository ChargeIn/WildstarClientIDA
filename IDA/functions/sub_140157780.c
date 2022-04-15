//----- (0000000140157780) ----------------------------------------------------
_QWORD* __fastcall sub_140157780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	_QWORD* result; // rax
	_QWORD** v10; // rdi
	__int64 v11; // rbx
	char v12; // al
	__int64 v13; // rcx
	_DWORD* v14; // rax
	signed int v15; // edx
	int v16; // ecx
	__m128 v17; // xmm6
	__m128* v18; // rax
	__m128 v19; // [rsp+30h] [rbp-A8h] BYREF
	int v20[4]; // [rsp+40h] [rbp-98h] BYREF
	__m128 v21[4]; // [rsp+50h] [rbp-88h] BYREF

	result = *(_QWORD**)(a1 + 56);
	if (result != (_QWORD*)*result)
	{
		do
		{
			v10 = (_QWORD**)(result + 1);
			v11 = *(_QWORD*)(result[1] + 16i64);
			v12 = *(_BYTE*)(v11 + 28);
			if ((v12 & 0x10) == 0
				&& (v12 < 0 || *(float*)(v11 + 648) > 0.0 && ((v13 = *(_QWORD*)(v11 + 16)) == 0 || sub_1400D1A60(v13))))
			{
				if ((v14 = sub_1400CB1C0(v11, v20), v15 = *(_DWORD*)a2, *(_DWORD*)a2 >= *v14)
					&& v15 < v14[2]
					&& (v16 = *(_DWORD*)(a2 + 4), v16 >= v14[1])
					&& v16 < v14[3]
					|| *(char*)(v11 + 28) < 0)
				{
					v17 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a2 + 4)), _mm_cvtsi32_si128(0))));
					v18 = sub_1400C98B0(v11, v21);
					v19 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v18[1]),
							_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), *v18)),
						v18[3]);
					sub_1400D0F30((_QWORD*)v11, 1, a3, a4, a5, &v19);
				}
			}
			result = *v10;
		} while (*v10 != **(_QWORD***)(a1 + 56));
	}
	return result;
}
// 140157780: using guessed type int var_98[4];
// 140157780: using guessed type __m128 var_88[4];

