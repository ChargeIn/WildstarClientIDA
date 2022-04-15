//----- (0000000140764640) ----------------------------------------------------
__int64 __fastcall sub_140764640(__int64 a1, int a2)
{
	unsigned int v2; // esi
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rcx
	int v8; // ebx
	__int64 v9; // rcx
	int v10; // ebx
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned int v13; // r14d
	__int64 v14; // rbp
	_QWORD* v15; // rax
	_QWORD* v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rdx
	unsigned int v21; // eax
	__int64 v22; // rax
	unsigned int* v23; // rax
	__m128 v24; // xmm3
	__m128 v25; // xmm1
	__m128 v26; // xmm2
	float v27; // xmm2_4
	__int64 v28; // rcx
	BOOL v29; // eax
	__int64 v30; // rcx
	BOOL v31; // eax

	v2 = 0;
	if ((dword_140DC4D80 & 1) == 0)
	{
		dword_140DC4D80 |= 1u;
		v5 = sub_140200220(0x4CCu);
		if (v5)
			v6 = *(_DWORD*)(v5 + 4);
		else
			v6 = 2;
		dword_140DC4D84 = v6;
	}
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	if (v7)
		v8 = *(_DWORD*)(v7 + 56);
	else
		v8 = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 24i64))(*(_QWORD*)(a1 + 32)) < v8 - dword_140DC4D84)
		return 0i64;
	v9 = *(_QWORD*)(qword_140C65898 + 120);
	v10 = v9 ? *(_DWORD*)(v9 + 56) : 0;
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 24i64))(*(_QWORD*)(a1 + 32)) > v10 + dword_140DC4D84)
		return 0i64;
	v11 = qword_140C65898;
	*(_DWORD*)(a1 + 20) = 2139095039;
	v12 = *(_QWORD*)(v11 + 7152);
	if (v12)
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 24i64))(v12);
	else
		v13 = 0;
	v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 144i64))(*(_QWORD*)(a1 + 32));
	v15 = *(_QWORD**)(v14 + 8);
	v16 = (_QWORD*)*v15;
	if ((_QWORD*)*v15 != v15)
	{
		do
		{
			if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 192i64))(*(_QWORD*)(a1 + 32)) != 2
				|| (v17 = v16[2]) == 0
				|| (*(_DWORD*)(v17 + 16) & 1) == 0)
			{
				v18 = v16[3];
				if (a2 == (*(_DWORD*)(*(_QWORD*)(v18 + 8) + 440i64) == 0)
					&& ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v18 + 8)) == 5
						|| !(unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v16[3] + 8i64))
						|| (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v16[3] + 8i64)) == 1))
				{
					v19 = v16[3];
					v20 = *(_QWORD*)(qword_140C65898 + 120);
					if (v20)
					{
						if ((unsigned int)(*(_DWORD*)(v20 + 56) + dword_140DC4D84) >= *(_DWORD*)(*(_QWORD*)(v19 + 8) + 24i64)
							&& !(unsigned int)sub_140552550(v19, -8708))
						{
							v21 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 128i64))(
								*(_QWORD*)(a1 + 32),
								v13);
							v22 = sub_14022BFC0(v21);
							if (v22)
							{
								v23 = (unsigned int*)sub_14024B980(*(_DWORD*)(v22 + 4));
								if (v23)
								{
									v24 = _mm_unpacklo_ps(
										_mm_unpacklo_ps((__m128)v23[3], (__m128)v23[5]),
										_mm_unpacklo_ps((__m128)v23[4], (__m128)0i64));
									v25 = _mm_sub_ps(*(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64), v24);
									v26 = _mm_mul_ps(v25, v25);
									v27 = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
										+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
									if (v27 < *(float*)(a1 + 20))
									{
										*(_DWORD*)(a1 + 16) = v23[10];
										*(__m128*)a1 = v24;
										*(float*)(a1 + 20) = v27;
										*(_DWORD*)(a1 + 24) = **(_DWORD**)(v16[3] + 8i64);
										*(_DWORD*)(a1 + 44) = *(_DWORD*)(*(_QWORD*)(v16[3] + 8i64) + 444i64);
										v28 = v16[3];
										v29 = (*(_BYTE*)(*(_QWORD*)(v28 + 8) + 12i64) & 4) != 0 && sub_140552FD0(v28);
										v30 = *(_QWORD*)(a1 + 32);
										*(_DWORD*)(a1 + 48) = v29;
										v31 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v30 + 192i64))(v30) == 2
											|| (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 192i64))(*(_QWORD*)(a1 + 32)) == 1;
										*(_DWORD*)(a1 + 40) = v31;
										v2 = 1;
									}
								}
							}
						}
					}
				}
			}
			v16 = (_QWORD*)*v16;
		} while (v16 != *(_QWORD**)(v14 + 8));
	}
	return v2;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140DC4D80: using guessed type int dword_140DC4D80;
// 140DC4D84: using guessed type int dword_140DC4D84;

