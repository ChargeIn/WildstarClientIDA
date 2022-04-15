//----- (00000001408AD540) ----------------------------------------------------
__int64 __fastcall sub_1408AD540(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	char a4,
	unsigned int a5,
	__int64 a6,
	float a7,
	__m128* a8)
{
	unsigned int v8; // r12d
	__m128 v9; // xmm7
	unsigned int v10; // ebp
	unsigned int v11; // r13d
	__m128* v12; // r14
	unsigned int v13; // r15d
	__int64 v14; // r10
	unsigned int v15; // edx
	int v17; // edi
	unsigned int v19; // esi
	float v20; // xmm10_4
	float v21; // xmm11_4
	unsigned int v22; // eax
	unsigned int v23; // eax
	int v24; // ecx
	unsigned int v25; // esi
	__int64 v26; // rdi
	int v27; // eax
	__int64 v28; // rdi
	__int64 v29; // rbp
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // rax
	char v33; // cl
	__int64 v34; // rbp
	__int64 v35; // r14
	float v36; // xmm6_4
	int v37; // ecx
	bool v38; // bp
	__int64 v39; // rdi
	unsigned __int16 v40; // ax
	int v41; // edx
	bool v42; // zf
	bool v43; // al
	unsigned int v45; // [rsp+40h] [rbp-B8h]
	int v46; // [rsp+44h] [rbp-B4h]
	int v47; // [rsp+48h] [rbp-B0h]
	unsigned int v48; // [rsp+4Ch] [rbp-ACh]
	unsigned int v49; // [rsp+100h] [rbp+8h]
	unsigned int v51; // [rsp+110h] [rbp+18h]
	char v52; // [rsp+118h] [rbp+20h]
	char v53; // [rsp+130h] [rbp+38h]

	v52 = a4;
	v51 = a3;
	v8 = *(_DWORD*)(a1 + 744);
	v9 = (__m128) * (unsigned int*)(a1 + 740);
	v10 = a5;
	v11 = *(_DWORD*)(a1 + 736);
	v12 = a8;
	v13 = 0;
	v14 = a2;
	v15 = 45;
	v17 = 0;
	v49 = v11 >> 2;
	v46 = 45;
	v19 = a3;
	v45 = 0;
	v20 = 1.0 / (float)((float)(*(float*)(a1 + 348) * 4.0) / (float)(int)v11);
	v21 = 1.0 / a7;
	v53 = *(_BYTE*)(a1 + 748);
	v22 = 0;
	while ((v19 || v13 < a3) && v22 < 0x64)
	{
		v48 = v22 + 1;
		v23 = v8;
		if (v19 < v8)
			v23 = v19;
		v24 = 0;
		v8 -= v23;
		v25 = v19 - v23;
		v26 = v23 + v17;
		if (v14 && v25)
		{
			v27 = sub_1408B1450(32i64 * v10 + a1 + 752, (float*)(v14 + 4 * v26), v25, a7);
			a4 = v52;
			v24 = v27;
		}
		v19 = v25 - (unsigned __int16)v24;
		v47 = v24 + v26;
		v28 = v10;
		if (!*(_BYTE*)(a1 + 16 * (v10 + 6i64 * (*(_BYTE*)(v10 + a1 + 688) & 1)) + 364))
		{
			v29 = 32i64 * v10;
			if (sub_1408AF440(v29 + a1 + 752, (int*)v12, v11, a4))
			{
				sub_1408AF3F0((_DWORD*)(v29 + a1 + 752), v49);
				sub_1408AFBE0((__int64*)(a1 + 336), (__int64)v12, v11, 1.0);
				sub_1408B0540(
					a1 + 16 * (v28 + 2 * (3i64 * (*(_BYTE*)(v28 + a1 + 688) & 1) + 11)),
					v12,
					v11,
					*(int***)(a1 + 696));
				v30 = *(_BYTE*)(v28 + a1 + 688) & 1;
				sub_1408B05F0((__int64**)(a1 + 16 * (v28 + 2 * (v30 + 2 * v30 + 11))));
			}
		}
		if (!*(_BYTE*)(a1 + 16 * (v28 + 6i64 * ((*(_BYTE*)(v28 + a1 + 688) - 1) & 1)) + 364)
			&& sub_1408AF440(32 * v28 + a1 + 752, (int*)v12, v11, v52))
		{
			sub_1408AF3F0((_DWORD*)(32 * v28 + a1 + 752), v49);
			sub_1408AFBE0((__int64*)(a1 + 336), (__int64)v12, v11, 1.0);
			v31 = (*(_BYTE*)(v28 + a1 + 688) - 1) & 1;
			sub_1408B0540(a1 + 16 * (v28 + 2 * (v31 + 2 * v31 + 11)), v12, v11, *(int***)(a1 + 696));
			v32 = (*(_BYTE*)(v28 + a1 + 688) - 1) & 1;
			sub_1408B05F0((__int64**)(a1 + 16 * (v28 + 2 * (v32 + 2 * v32 + 11))));
		}
		v33 = *(_BYTE*)(v28 + a1 + 688);
		if (*(_BYTE*)(a1 + 16 * (v28 + 6i64 * ((v33 - 1) & 1)) + 364)
			&& *(_BYTE*)(a1 + 16 * (v28 + 6i64 * (v33 & 1)) + 364)
			&& !*(_BYTE*)(a1 + 16 * v28 + 556))
		{
			sub_1408B0610(
				(__int64*)(a1 + 16 * (v28 + 34)),
				*(_QWORD*)(a1 + 16 * (v28 + 6i64 * (v33 & 1) + 22)),
				*(_QWORD*)(a1 + 16 * (v28 + 6i64 * ((v33 - 1) & 1) + 22)),
				*(_QWORD*)(a1 + 8 * v28 + 640),
				v49,
				v9.m128_f32[0],
				v53);
			v53 = 0;
		}
		v34 = 16 * v28;
		if (*(_BYTE*)(a1 + 16 * v28 + 556))
		{
			v35 = 32 * v28 + a1;
			if (*(_DWORD*)(v35 + 144) - *(_DWORD*)(v35 + 156) >= v11)
			{
				sub_1408B0570(a1 + 16 * (v28 + 34), a8, v11, *(int***)(a1 + 704));
				sub_1408AFBE0((__int64*)(a1 + 336), (__int64)a8, v11, v20);
				sub_1408AF6E0(v35 + 144, (unsigned __int64)a8, v49);
				*(_BYTE*)(a1 + v34 + 556) = 0;
				v9.m128_f32[0] = v9.m128_f32[0] + v21;
				if (v9.m128_f32[0] >= 1.0)
				{
					v36 = v9.m128_f32[0];
					*(_BYTE*)(a1 + 16 * (v28 + 6i64 * (*(_BYTE*)(v28 + a1 + 688) & 1)) + 364) = 0;
					v37 = (int)v9.m128_f32[0];
					if ((int)v9.m128_f32[0] != 0x80000000 && (float)v37 != v9.m128_f32[0])
						v36 = (float)(v37 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
					if ((unsigned int)(int)v36 < 2)
					{
						++* (_BYTE*)(v28 + a1 + 688);
					}
					else
					{
						*(_BYTE*)(a1 + 16 * (v28 + 6i64 * ((*(_BYTE*)(v28 + a1 + 688) - 1) & 1)) + 364) = 0;
						v8 = v49 * ((int)v36 - 2) - sub_1408AF3F0((_DWORD*)(32 * v28 + a1 + 752), v49 * ((int)v36 - 2));
					}
					v9.m128_f32[0] = v9.m128_f32[0] - v36;
				}
			}
			v12 = a8;
			v13 = v45;
		}
		v38 = v52 && !*(_DWORD*)(32 * v28 + a1 + 764) && !*(_BYTE*)(a1 + v34 + 556) && !*(_DWORD*)(32 * v28 + a1 + 156);
		v39 = 32 * v28;
		v40 = sub_1408AF6F0(v39 + a1 + 144, (int*)(a6 + 4i64 * v13), v51 - v13, v38);
		a4 = v52;
		a3 = v51;
		v14 = a2;
		v41 = v40;
		v22 = v48;
		v13 += v41;
		v15 = v46;
		v42 = !v38;
		v10 = a5;
		v45 = v13;
		if (v42)
		{
			v17 = v47;
		}
		else
		{
			v43 = sub_1408AF690((_DWORD*)(v39 + a1 + 144));
			v17 = v47;
			a4 = v52;
			a3 = v51;
			v15 = v46;
			v14 = a2;
			v42 = !v43;
			v22 = v48;
			if (!v42)
			{
				v15 = 17;
				v46 = 17;
			}
		}
	}
	if (v10 == *(_DWORD*)(a1 + 728) - 1)
	{
		*(_DWORD*)(a1 + 740) = v9.m128_i32[0];
		*(_DWORD*)(a1 + 744) = v8;
		*(_BYTE*)(a1 + 748) = v53;
	}
	return v15;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

