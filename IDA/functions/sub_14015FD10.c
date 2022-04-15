//----- (000000014015FD10) ----------------------------------------------------
__int64 __fastcall sub_14015FD10(__int64 a1, void* a2, __m128i* a3, __int64 a4, unsigned int a5)
{
	int* v9; // rax
	__int64 v10; // rsi
	__int64* v11; // r14
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // r15
	int* v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	int v19; // ebx
	__int64 v20; // rdx
	__m128 v21; // xmm1
	int v22; // ecx
	int v23; // r14d
	int* v24; // rax
	__int64 v25; // r15
	__int64 v26; // rcx
	void(__fastcall * **v27)(_QWORD); // r13
	_QWORD* v28; // rsi
	int v29; // r14d
	__int64 v30; // rdx
	int v31; // eax
	unsigned int v32; // eax
	unsigned int v33; // edx
	int v34; // eax
	__int64 v35; // rt2
	int v36; // r8d
	__int64 v37; // rcx
	int v38; // edx
	__int64 v39; // rdx
	int v40; // ecx
	__int128 v42; // [rsp+40h] [rbp-51h] BYREF
	int v43; // [rsp+50h] [rbp-41h] BYREF
	int v44; // [rsp+54h] [rbp-3Dh]
	int v45; // [rsp+58h] [rbp-39h]
	int v46; // [rsp+5Ch] [rbp-35h]
	__int128 v47; // [rsp+60h] [rbp-31h] BYREF
	__int128 v48; // [rsp+70h] [rbp-21h]
	_QWORD* v49; // [rsp+80h] [rbp-11h]
	int v50; // [rsp+88h] [rbp-9h]
	int v51; // [rsp+8Ch] [rbp-5h]
	char v52[8]; // [rsp+90h] [rbp-1h] BYREF
	int* v53; // [rsp+98h] [rbp+7h]
	int* v54; // [rsp+A0h] [rbp+Fh]
	int* v55; // [rsp+A8h] [rbp+17h]
	__int64 v56; // [rsp+F0h] [rbp+5Fh]

	v9 = sub_14018B280(32i64, 0);
	v10 = 0i64;
	if (v9)
		v11 = (__int64*)sub_14015D1C0(
			(__int64)v9,
			a1,
			*(_DWORD*)(a1 + 1028),
			(unsigned int*)(a1 + 2208),
			*(_QWORD*)(a1 + 1144));
	else
		v11 = 0i64;
	sub_14015D4F0(v11, 0, a2, (unsigned int*)(a1 + 2208), a3, a4, a5);
	v12 = *(_QWORD*)(a1 + 1160);
	v13 = sub_14018DB00(*(_QWORD*)(a1 + 1152), v12 + 1, 8i64);
	v14 = v13;
	*(_QWORD*)&v13[2 * v12] = v11;
	v15 = *(int**)(a1 + 1152);
	if (v15 != v13)
	{
		sub_1407DB590(v13, v15, 8i64 * *(_QWORD*)(a1 + 1160));
		v16 = *(_QWORD*)(a1 + 1152);
		if (v16)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
		*(_QWORD*)(a1 + 1152) = v14;
	}
	*(_QWORD*)(a1 + 1160) = v12 + 1;
	v17 = *(_QWORD*)(a1 + 664);
	if ((v17 & 0x40) != 0 || (v17 & 0x80u) != 0i64)
	{
		sub_1400CB3D0(a1, &v43);
		sub_1400CA590(a1, (__int64)&v42);
		v18 = *(_QWORD*)(a1 + 664);
		v19 = v42;
		v56 = v42;
		if ((v18 & 0x40) == 0)
			LODWORD(v56) = v45 - v43;
		if ((v18 & 0x80u) == 0i64)
			HIDWORD(v56) = v46 - v44;
		v20 = *(_QWORD*)(a1 + 696);
		v47 = xmmword_140C784E0;
		v48 = xmmword_140C784F0;
		v42 = xmmword_140B7B240;
		(*(void(__fastcall**)(__int64, _QWORD, void*, __int64, __int128*, int, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(v20 + 96),
				a2,
				-1i64,
				&v47,
				1024,
				&v42,
				1);
		v21 = (__m128)(unsigned int)v48;
		v21.m128_f32[0] = *(float*)&v48 - *(float*)&v47;
		v22 = (int)(float)(*(float*)&v48 - *(float*)&v47);
		if (v22 != 0x80000000 && (float)v22 != v21.m128_f32[0])
			v21.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v21, v21)) & 1) + v22);
		v23 = (int)v21.m128_f32[0] + 2;
		if (*(_BYTE*)(a1 + 1100))
		{
			v23 += 2 * *(_DWORD*)(a1 + 1028);
		}
		else
		{
			v24 = sub_14018B280(16i64, 0);
			v25 = (__int64)v24;
			v53 = v24;
			v54 = v24;
			v55 = v24 + 4;
			if (v24)
				*(_WORD*)v24 = 0;
			v26 = *(_QWORD*)(a1 + 32);
			v49 = 0i64;
			v50 = dword_140C63664;
			v51 = 1065353216;
			if (v26)
			{
				if (a3)
				{
					if (a3->m128i_i16[0])
					{
						v27 = (void(__fastcall***)(_QWORD))sub_140108E80(v26 + 240, a3);
						if (v27)
						{
							if (a3->m128i_i16[0])
							{
								do
									++v10;
								while (a3->m128i_i16[v10]);
							}
							sub_14001C480((__int64)v52, a3->m128i_i32, (int*)((char*)a3->m128i_i32 + 2 * v10));
							v28 = v49;
							if (v27 != v49)
							{
								(**v27)(v27);
								if (v28)
									(*(void(__fastcall**)(_QWORD*))(*v28 + 8i64))(v28);
								v28 = v27;
							}
							if (v28)
							{
								v29 = *(_DWORD*)(a1 + 1084) + v23;
								sub_140101470(v28, (int*)&v42);
								v31 = *(_DWORD*)(a1 + 1028);
								if (SDWORD1(v42) > v31)
								{
									v33 = ((int)v42 * v31) >> 31;
									v32 = v42 * v31;
									v30 = v33;
									v35 = __SPAIR64__(v33, v32) % SDWORD1(v42);
									v34 = __SPAIR64__(v33, v32) / SDWORD1(v42);
									LODWORD(v30) = v35;
									v23 = v34 + v29;
								}
								else
								{
									v23 = v42 + v29;
								}
								(*(void(__fastcall**)(_QWORD*, __int64))(*v28 + 8i64))(v28, v30);
							}
							v25 = (__int64)v53;
						}
					}
				}
			}
			if (v25)
				sub_14018B900(v25, 0);
		}
		v36 = *(_DWORD*)(a1 + 1160);
		if (v36 == 1)
		{
			v37 = *(_QWORD*)(a1 + 664);
			if ((v37 & 0x40) != 0)
				LODWORD(v56) = v23 + v56;
			if ((v37 & 0x80u) != 0i64)
			{
				v38 = *(_DWORD*)(a1 + 1028) + HIDWORD(v56);
			LABEL_51:
				v45 = v43 + v56;
				v46 = v38 + v44;
				sub_1400CC7C0(a1, &v43);
				goto LABEL_52;
			}
		}
		else
		{
			v39 = *(_QWORD*)(a1 + 664);
			if ((v39 & 0x40) != 0)
			{
				v40 = v19 + v23;
				if (v19 + v23 < v45 - v43)
					v40 = v45 - v43;
				LODWORD(v56) = v40;
			}
			if ((v39 & 0x80u) != 0i64)
			{
				v38 = v36 * *(_DWORD*)(a1 + 1028) + HIDWORD(v56);
				goto LABEL_51;
			}
		}
		v38 = HIDWORD(v56);
		goto LABEL_51;
	}
LABEL_52:
	sub_14015F180(a1);
	return (unsigned int)(*(_DWORD*)(a1 + 1160) - 1);
}
// 140160039: variable 'v30' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;
// 14015FD10: using guessed type char var_50[8];

