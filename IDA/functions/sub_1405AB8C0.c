//----- (00000001405AB8C0) ----------------------------------------------------
void __fastcall sub_1405AB8C0(__int64 a1, __int64 a2, int a3)
{
	unsigned __int64 v4; // r8
	__m128 v7; // xmm2
	__m128 v8; // xmm4
	__m128 v9; // xmm4
	int v10; // xmm0_4
	int v11; // edx
	int v12; // ebp
	int v13; // ebx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax
	_QWORD* v17; // rbx
	int* v18; // rax
	int* v19; // rdx
	__int64 v20; // r15
	unsigned __int64 v21; // rax
	__int64 v22; // r13
	unsigned __int64 v23; // r12
	int* v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rax
	__m128 v29; // [rsp+70h] [rbp-F8h] BYREF
	int v30; // [rsp+80h] [rbp-E8h]
	unsigned __int32 v31; // [rsp+84h] [rbp-E4h]
	unsigned __int32 v32; // [rsp+88h] [rbp-E0h]
	int v33; // [rsp+8Ch] [rbp-DCh]
	char v34[176]; // [rsp+90h] [rbp-D8h] BYREF
	__int64 v35; // [rsp+178h] [rbp+10h] BYREF

	if (a2)
	{
		v4 = *(_QWORD*)(a2 + 16);
		v7 = (__m128) * (unsigned int*)(a2 + 52);
		v8 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 48), (__m128) * (unsigned int*)(a2 + 56));
		v29 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 60), (__m128) * (unsigned int*)(a2 + 68)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 64), (__m128) * (unsigned int*)(a2 + 72)));
		v9 = _mm_unpacklo_ps(v8, _mm_unpacklo_ps(v7, (__m128)0i64));
		v30 = v9.m128_i32[0];
		v31 = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
		v10 = *(_DWORD*)(a2 + 44);
		v11 = *(_DWORD*)(a1 + 188);
		v32 = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
		v33 = v10;
		sub_1404C9E20(a1, v11, v4);
		sub_1404BCB00(
			(__int64)v34,
			a1 + 8,
			*(_QWORD*)(a2 + 16),
			*(_DWORD*)(a2 + 76),
			*(_DWORD*)(a2 + 28),
			*(_DWORD*)(a2 + 32),
			*(_DWORD*)(a2 + 36),
			*(_DWORD*)(a2 + 40),
			a3,
			*(_DWORD*)(a2 + 80),
			&v29,
			*(_QWORD*)(a2 + 88),
			*(_DWORD*)(a2 + 96));
		v12 = 0;
		v13 = 0;
		v14 = sub_140205FA0(*(_DWORD*)(a1 + 184));
		if (v14)
			v13 = *(_DWORD*)(v14 + 4);
		if ((unsigned int)sub_1404C8E20(v15, *(_DWORD*)(a1 + 188), v13, (__int64)v34, 0))
		{
			v16 = sub_140203DA0(*(_DWORD*)(a2 + 76));
			if (v16 && *(_DWORD*)(v16 + 32))
			{
				v17 = (_QWORD*)(a1 + 368);
				if (!(unsigned int)sub_1402DD480(a1 + 368, a2 + 16, &v35))
				{
					v18 = sub_14018B280(24i64, 0);
					*(_QWORD*)v18 = *(_QWORD*)(a2 + 16);
					v18[3] = 1;
					v19 = *(int**)(a1 + 424);
					v20 = (__int64)v18;
					v35 = (__int64)v18;
					if (v19 == *(int**)(a1 + 432))
					{
						sub_14010A1C0((_QWORD*)(a1 + 408), v19, &v35);
						v20 = v35;
					}
					else
					{
						if (v19)
							*(_QWORD*)v19 = v18;
						*(_QWORD*)(a1 + 424) += 8i64;
					}
					if (*v17 == *(_QWORD*)(a1 + 376))
						sub_1400290D0(a1 + 368);
					v21 = (*(__int64(__fastcall**)(__int64))(a1 + 392))(a2 + 16);
					v22 = *(_QWORD*)(a1 + 384);
					v35 = v21;
					v23 = v21 % *(_QWORD*)(a1 + 376);
					v24 = sub_14018B280(32i64, 0);
					if (v24)
					{
						v25 = *(_QWORD*)(v22 + 8 * v23);
						*(_QWORD*)v24 = v35;
						*((_QWORD*)v24 + 1) = v25;
						*((_QWORD*)v24 + 2) = *(_QWORD*)(a2 + 16);
						*((_QWORD*)v24 + 3) = v20;
					}
					else
					{
						v24 = 0i64;
					}
					*(_QWORD*)(v22 + 8 * v23) = v24;
					++* v17;
					if (!*(_DWORD*)(a2 + 80))
						goto LABEL_24;
					LOBYTE(v12) = *(_DWORD*)qword_140C659F0 == 0;
					*(_DWORD*)(v20 + 16) = v12;
					goto LABEL_23;
				}
				v26 = v35;
				*(_DWORD*)(v35 + 12) = 0;
				if (!*(_DWORD*)(v26 + 16) && *(_DWORD*)(a2 + 80))
				{
					LOBYTE(v12) = *(_DWORD*)qword_140C659F0 == 0;
					*(_DWORD*)(v26 + 16) = v12;
				LABEL_23:
					sub_1405AE900(a1, *(_QWORD*)(a2 + 16), *(_DWORD*)(a2 + 80));
				}
			}
		LABEL_24:
			if (a1 == sub_1405B1510(&qword_140C7DFB0))
			{
				sub_14077DC00(a1 + 440, *(_QWORD*)(a2 + 16));
				v28 = sub_1404C9E20(v27, *(_DWORD*)(a1 + 188), *(_QWORD*)(a2 + 16));
				if (v28)
					sub_1400EA3E0(
						*(_QWORD*)(qword_140C65898 + 29504),
						"HousingMyResidenceDecorChanged",
						byte_1409EBF4C,
						*(unsigned int*)(v28 + 496));
			}
		}
	}
}
// 1405AB9E9: variable 'v15' is possibly undefined
// 1405ABB9C: variable 'v27' is possibly undefined
// 1409EBF4C: using guessed type _BYTE byte_1409EBF4C[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

