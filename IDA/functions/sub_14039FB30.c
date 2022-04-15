//----- (000000014039FB30) ----------------------------------------------------
void __fastcall sub_14039FB30(__int64 a1, __int64 a2, float* a3, double a4)
{
	__int64 v4; // rax
	__int64 v8; // rbx
	_QWORD* v9; // rdi
	__int64 v10; // rax
	__int128 v11; // xmm0
	__int64 v12; // rax
	_DWORD* v13; // r15
	__m128* v14; // rax
	int* v15; // rbx
	int v16; // edx
	float v17; // xmm9_4
	__m128* v18; // rdi
	int v19; // eax
	float v20; // xmm8_4
	int v21; // ecx
	float v22; // xmm0_4
	__int64 v23; // rcx
	bool v24; // zf
	int v25; // eax
	int* v26; // rax
	__int64 v27; // rsi
	unsigned int v28; // edi
	int* v29; // rbx
	unsigned int v30; // eax
	__int64 v31; // rcx
	unsigned int v32; // esi
	unsigned int v33; // edi
	unsigned int v34; // eax
	__int64 v35; // rcx
	unsigned int v36; // esi
	__int64 v37; // rax
	_DWORD* v38; // rax
	__int64 v39; // r14
	unsigned int v40; // r15d
	int v41; // edi
	__int64 i; // rbx
	__m128i v43; // [rsp+38h] [rbp-59h] BYREF
	unsigned int v44; // [rsp+48h] [rbp-49h] BYREF
	__int64 v45; // [rsp+4Ch] [rbp-45h]
	int* v46; // [rsp+58h] [rbp-39h]
	int v47; // [rsp+F8h] [rbp+67h] BYREF
	__int16 v48; // [rsp+FCh] [rbp+6Bh]

	v4 = *(_QWORD*)(a1 + 25744);
	if (*(_DWORD*)(v4 + 3408) && *(_QWORD*)(v4 + 5864))
	{
		v8 = (*(__int64 (**)(void))(**(_QWORD**)(a1 + 28608) + 24i64))();
		if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 25744) + 32i64))(*(_QWORD*)(a1 + 25744))
			|| (v9 = *(_QWORD**)(a1 + 25744), (*(unsigned int(__fastcall**)(_QWORD*))(*v9 + 32i64))(v9))
			&& v9[23]
			&& *(_DWORD*)(v9[23] + 4i64) == 4)
		{
			v12 = qword_140C65898;
			*(_OWORD*)v8 = *(_OWORD*)(qword_140C65898 + 28656);
			v11 = *(_OWORD*)(v12 + 28672);
		}
		else
		{
			v10 = qword_140C65898;
			*(_OWORD*)v8 = *(_OWORD*)(qword_140C65898 + 28688);
			v11 = *(_OWORD*)(v10 + 28704);
		}
		*(_OWORD*)(v8 + 16) = v11;
		v13 = (_DWORD*)(v8 + 32);
		*(_OWORD*)(v8 + 32) = *(_OWORD*)(*(_QWORD*)(a1 + 25744) + 4576i64);
		*(_OWORD*)(v8 + 64) = 0i64;
		*(_OWORD*)(v8 + 80) = 0i64;
		*(_OWORD*)(v8 + 96) = 0i64;
		*(_OWORD*)(v8 + 112) = 0i64;
		*(_DWORD*)(v8 + 160) = 0;
		*(_DWORD*)(v8 + 176) = 0;
		v14 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 28608) + 32i64))(*(_QWORD*)(a1 + 28608));
		v15 = (int*)qword_140C63750;
		v16 = dword_140C44AC0;
		v17 = *(float*)&dword_140C3B438 * 0.0055555557;
		v18 = v14;
		if (*(_DWORD*)qword_140C63750 < dword_140C44AC0)
			v16 = *(_DWORD*)qword_140C63750;
		v14[1] = _mm_unpacklo_ps(
			(__m128)0i64,
			_mm_unpacklo_ps(
				_mm_xor_ps((__m128)(unsigned int)dword_140C44AD0[v16], (__m128)xmmword_140B7B530),
				(__m128)0i64));
		v19 = dword_140C44750;
		if (*v15 < dword_140C44750)
			v19 = *v15;
		v20 = sub_1408FD8A4(v17 * dword_140C44760[v19]);
		v18[3].m128_f32[0] = v20;
		v21 = dword_140C447B0;
		if (*v15 < dword_140C447B0)
			v21 = *v15;
		v22 = sub_1408FD8A4(v17 * dword_140C447C0[v21]);
		v18[3].m128_u64[1] = 0i64;
		v18[4].m128_u64[0] = 0i64;
		v18[3].m128_f32[1] = fminf(v22, v20);
		v23 = *(_QWORD*)(a1 + 120);
		if (!v23 || (v24 = !sub_14047BF60(v23), v25 = 1, v24))
			v25 = 0;
		v18[5].m128_i32[0] = v25;
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 28608) + 56i64))(
			*(_QWORD*)(a1 + 28608),
			a2))
		{
			v45 = 8i64;
			v26 = sub_14018C320(0i64, 0x240ui64, 8u);
			*v26 = 1;
			v44 = 1;
			v26[2] = 0;
			v46 = v26;
			sub_14079A5D0(&v44, v13, 0);
			v43 = 0i64;
			sub_1401C9800(&v47, &v43);
			v27 = v44;
			v28 = v45;
			if (v44 == (_DWORD)v45)
			{
				if ((_DWORD)v45)
					v28 = 2 * v45;
				else
					v28 = 8;
				LODWORD(v45) = v28;
				v29 = sub_14018C320((__int64)v46, 72i64 * v28, 8u);
				v46 = v29;
			}
			else
			{
				v29 = v46;
			}
			v30 = v47;
			v31 = 9 * v27;
			v43 = 0i64;
			v29[2 * v31] = 8;
			v29[2 * v31 + 2] = v30;
			LOWORD(v29[2 * v31 + 3]) = v48;
			v29[2 * v31 + 4] = 0;
			v32 = v27 + 1;
			sub_1401C9800(&v47, &v43);
			if (v32 == v28)
			{
				if (v28)
					v33 = 2 * v28;
				else
					v33 = 8;
				LODWORD(v45) = v33;
				v29 = sub_14018C320((__int64)v29, 72i64 * v33, 8u);
				v46 = v29;
			}
			v34 = v47;
			v35 = 9i64 * v32;
			v36 = v32 + 1;
			v29[2 * v35] = 11;
			v29[2 * v35 + 2] = v34;
			LOWORD(v29[2 * v35 + 3]) = v48;
			v29[2 * v35 + 4] = 0;
			v37 = *(_QWORD*)(a1 + 25744);
			v44 = v36;
			if (!*(_DWORD*)(v37 + 5664))
			{
				v38 = (_DWORD*)sub_1401B3170((__int64)&v43, a3);
				sub_14079A780(&v44, v38, 0);
				v29 = v46;
				v36 = v44;
			}
			v39 = *(_QWORD*)(a1 + 25744);
			v40 = dword_140C636A8;
			v47 = dword_140C636A8;
			if (*(_DWORD*)(v39 + 3408) || *(_DWORD*)(v39 + 128) == 18)
			{
				v41 = 0;
				if (v36)
				{
					while ((int)sub_1405B4AB0(v39, (unsigned int*)&v47, (unsigned int*)&v29[18 * v41], 0i64, 0i64) >= 0)
					{
						if (++v41 >= v36)
						{
							v40 = v47;
							goto LABEL_38;
						}
					}
				}
				else
				{
				LABEL_38:
					sub_1405B4F50(v39, v40);
					sub_1405B5070(v39, v40);
					sub_1405B82A0(v39, v40, a4);
					for (i = *(_QWORD*)(v39 + 3848); i; i = *(_QWORD*)(i + 3864))
						sub_1405B4EF0(i, v40, a4);
				}
			}
			sub_14057A190(a1, &v44);
			sub_14079A4F0((__int64)&v44);
			sub_14018B900((__int64)v46, 0);
		}
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C44750: using guessed type int dword_140C44750;
// 140C44760: using guessed type float dword_140C44760[14];
// 140C447B0: using guessed type int dword_140C447B0;
// 140C447C0: using guessed type float dword_140C447C0[14];
// 140C44AC0: using guessed type int dword_140C44AC0;
// 140C44AD0: using guessed type int dword_140C44AD0[16];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

