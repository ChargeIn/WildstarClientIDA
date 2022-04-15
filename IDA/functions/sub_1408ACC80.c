//----- (00000001408ACC80) ----------------------------------------------------
__int64 __fastcall sub_1408ACC80(__int64 a1, __int64 a2, int a3, __int64 a4, float a5, char a6, __m128* a7)
{
	__int64 v8; // r15
	int v9; // r11d
	__int64 v10; // r12
	unsigned int v11; // esi
	__m128* v12; // r14
	float v13; // xmm9_4
	unsigned int v14; // eax
	float v15; // xmm10_4
	unsigned int v16; // r9d
	__m128 v17; // xmm7
	char v18; // r8
	unsigned int v19; // ebp
	unsigned int v20; // r13d
	__int64 v21; // rdi
	unsigned __int64 v22; // r10
	int v23; // edx
	unsigned int v24; // eax
	__int64 v25; // rdx
	_DWORD* v26; // r15
	int v27; // eax
	char v28; // r12
	__int64 v29; // rax
	__int64 v30; // rax
	__int64 v31; // rax
	char v32; // cl
	__int64 v33; // rsi
	float v34; // xmm6_4
	int v35; // ecx
	bool v36; // si
	bool v37; // al
	bool v38; // zf
	__int64 result; // rax
	unsigned int v40; // [rsp+40h] [rbp-C8h]
	int v41; // [rsp+44h] [rbp-C4h]
	int v42; // [rsp+44h] [rbp-C4h]
	unsigned int v43; // [rsp+48h] [rbp-C0h]
	unsigned int v44; // [rsp+50h] [rbp-B8h]
	unsigned __int64 v45; // [rsp+58h] [rbp-B0h]
	unsigned __int64 v46; // [rsp+60h] [rbp-A8h]
	unsigned int v47; // [rsp+110h] [rbp+8h]
	char v51; // [rsp+130h] [rbp+28h]
	unsigned __int8 v52; // [rsp+138h] [rbp+30h]

	v8 = a4;
	v9 = a3;
	v10 = a2;
	if (a6)
	{
		*(_DWORD*)(a1 + 740) = 0;
		*(_BYTE*)(a1 + 748) = 1;
	}
	v11 = *(_DWORD*)(a1 + 736);
	v12 = a7;
	v43 = 0;
	v44 = v11;
	v13 = 100.0 / a5;
	v40 = v11 >> 2;
	v14 = 0;
	v15 = 1.0 / (float)((float)(*(float*)(a1 + 348) * 4.0) / (float)(int)v11);
	do
	{
		LOWORD(v16) = *(_WORD*)(v8 + 18);
		v17 = (__m128) * (unsigned int*)(a1 + 740);
		v18 = *(_BYTE*)(a1 + 749);
		v19 = *(unsigned __int16*)(v10 + 18);
		v20 = *(_DWORD*)(a1 + 744);
		v21 = v14;
		v52 = *(_BYTE*)(a1 + 748);
		v22 = *(_QWORD*)v10 + 4 * v14 * (unsigned __int64)*(unsigned __int16*)(v10 + 16);
		v47 = (unsigned __int16)v16;
		v23 = v9;
		v51 = v18;
		v45 = v22;
		v46 = *(_QWORD*)v8 + 4 * v14 * (unsigned __int64)*(unsigned __int16*)(v8 + 16);
		while (1)
		{
			v24 = v20;
			if (v19 < v20)
				v24 = v19;
			v25 = v24 + v23;
			v20 -= v24;
			v19 -= v24;
			v41 = v25;
			if (v18 && !v19 && *(_DWORD*)(v10 + 12) != 17)
			{
			LABEL_52:
				*(_DWORD*)(v8 + 12) = 43;
				goto LABEL_56;
			}
			v26 = (_DWORD*)(a1 + 24 * v21);
			v27 = sub_1408AF420((__int64)v26, (int*)(v22 + 4 * v25), v19);
			v18 = v51;
			if (*v26 == v26[3])
				v18 = 0;
			v42 = v27 + v41;
			v19 -= (unsigned __int16)v27;
			v51 = v18;
			if (!v18 || *v26 == v26[3] || v19)
			{
				if (*(_DWORD*)(v10 + 12) != 17 || v19)
				{
					v28 = 0;
					goto LABEL_21;
				}
			}
			else if (*(_DWORD*)(v10 + 12) != 17)
			{
				v8 = a4;
				LOWORD(v16) = v47;
				*(_DWORD*)(a4 + 12) = 43;
				goto LABEL_56;
			}
			v28 = 1;
		LABEL_21:
			if (!*(_BYTE*)(a1 + 16 * (v21 + 6i64 * (*(_BYTE*)(v21 + a1 + 688) & 1)) + 364)
				&& sub_1408AF440(a1 + 24 * v21, (int*)v12, v11, v28))
			{
				sub_1408AF3F0((_DWORD*)(a1 + 24 * v21), v40);
				sub_1408AFBE0((__int64*)(a1 + 336), (__int64)v12, v11, 1.0);
				sub_1408B0540(
					a1 + 16 * (v21 + 2 * (3i64 * (*(_BYTE*)(v21 + a1 + 688) & 1) + 11)),
					v12,
					v11,
					*(int***)(a1 + 696));
				v29 = *(_BYTE*)(v21 + a1 + 688) & 1;
				sub_1408B05F0((__int64**)(a1 + 16 * (v21 + 2 * (v29 + 2 * v29 + 11))));
			}
			if (!*(_BYTE*)(a1 + 16 * (v21 + 6i64 * ((*(_BYTE*)(v21 + a1 + 688) - 1) & 1)) + 364)
				&& sub_1408AF440(a1 + 24 * v21, (int*)v12, v11, v28))
			{
				sub_1408AF3F0((_DWORD*)(a1 + 24 * v21), v40);
				sub_1408AFBE0((__int64*)(a1 + 336), (__int64)v12, v11, 1.0);
				v30 = (*(_BYTE*)(v21 + a1 + 688) - 1) & 1;
				sub_1408B0540(a1 + 16 * (v21 + 2 * (v30 + 2 * v30 + 11)), v12, v11, *(int***)(a1 + 696));
				v31 = (*(_BYTE*)(v21 + a1 + 688) - 1) & 1;
				sub_1408B05F0((__int64**)(a1 + 16 * (v21 + 2 * (v31 + 2 * v31 + 11))));
			}
			v32 = *(_BYTE*)(v21 + a1 + 688);
			if (*(_BYTE*)(a1 + 16 * (v21 + 6i64 * ((v32 - 1) & 1)) + 364)
				&& *(_BYTE*)(a1 + 16 * (v21 + 6i64 * (v32 & 1)) + 364)
				&& !*(_BYTE*)(a1 + 16 * v21 + 556))
			{
				sub_1408B0610(
					(__int64*)(a1 + 16 * (v21 + 34)),
					*(_QWORD*)(a1 + 16 * (v21 + 6i64 * (v32 & 1) + 22)),
					*(_QWORD*)(a1 + 16 * (v21 + 6i64 * ((v32 - 1) & 1) + 22)),
					*(_QWORD*)(a1 + 8 * v21 + 640),
					v40,
					v17.m128_f32[0],
					v52);
				v52 = 0;
			}
			v33 = 16 * v21;
			if (*(_BYTE*)(16 * v21 + a1 + 556))
			{
				if (*(_DWORD*)(32 * v21 + a1 + 144) - *(_DWORD*)(32 * v21 + a1 + 156) >= v44)
				{
					sub_1408B0570(a1 + 16 * (v21 + 34), a7, v44, *(int***)(a1 + 704));
					sub_1408AFBE0((__int64*)(a1 + 336), (__int64)a7, v44, v15);
					sub_1408AF6E0(32 * v21 + a1 + 144, (unsigned __int64)a7, v40);
					*(_BYTE*)(v33 + a1 + 556) = 0;
					v17.m128_f32[0] = v17.m128_f32[0] + v13;
					if (v17.m128_f32[0] >= 1.0)
					{
						v34 = v17.m128_f32[0];
						*(_BYTE*)(a1 + 16 * (v21 + 6i64 * (*(_BYTE*)(v21 + a1 + 688) & 1)) + 364) = 0;
						v35 = (int)v17.m128_f32[0];
						if ((int)v17.m128_f32[0] != 0x80000000 && (float)v35 != v17.m128_f32[0])
							v34 = (float)(v35 - (_mm_movemask_ps(_mm_unpacklo_ps(v17, v17)) & 1));
						if ((unsigned int)(int)v34 < 2)
						{
							++* (_BYTE*)(v21 + a1 + 688);
						}
						else
						{
							*(_BYTE*)(a1 + 16 * (v21 + 6i64 * ((*(_BYTE*)(v21 + a1 + 688) - 1) & 1)) + 364) = 0;
							v20 = v40 * ((int)v34 - 2) - sub_1408AF3F0((_DWORD*)(a1 + 24 * v21), v40 * ((int)v34 - 2));
						}
						v17.m128_f32[0] = v17.m128_f32[0] - v34;
					}
				}
			}
			v36 = v28 && !v26[3] && !*(_BYTE*)(v33 + a1 + 556) && !*(_DWORD*)(32 * v21 + a1 + 156);
			v8 = a4;
			v16 = (unsigned __int16)sub_1408AF6F0(
				32 * v21 + a1 + 144,
				(int*)(v46 + 4i64 * v47),
				*(unsigned __int16*)(a4 + 16) - v47,
				v36)
				+ v47;
			v47 = v16;
			if (v36)
			{
				v37 = sub_1408AF690((_DWORD*)(32 * v21 + a1 + 144));
				v16 = v47;
				if (v37)
				{
					v11 = v44;
					v12 = a7;
					v18 = v51;
					*(_DWORD*)(a4 + 12) = 17;
					goto LABEL_55;
				}
			}
			v11 = v44;
			v12 = a7;
			v18 = v51;
			if (v16 == *(unsigned __int16*)(a4 + 16))
				break;
			v23 = v42;
			v22 = v45;
			v38 = v28 == 0;
			v10 = a2;
			if (v38 && !v19)
				goto LABEL_52;
		}
		*(_DWORD*)(a4 + 12) = 45;
	LABEL_55:
		v10 = a2;
	LABEL_56:
		v9 = a3;
		v14 = v43 + 1;
		v43 = v14;
	} while (v14 < *(_DWORD*)(a1 + 728));
	result = v52;
	*(_WORD*)(v10 + 18) = v19;
	*(_WORD*)(v8 + 18) = v16;
	*(_BYTE*)(a1 + 748) = v52;
	*(_DWORD*)(a1 + 744) = v20;
	*(_DWORD*)(a1 + 740) = v17.m128_i32[0];
	*(_BYTE*)(a1 + 749) = v18;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

