//----- (0000000140577D20) ----------------------------------------------------
__int64 __fastcall sub_140577D20(__int64 a1, __int64 a2)
{
	unsigned int v2; // ecx
	__int64 v4; // r12
	__int64 v5; // r15
	unsigned int v6; // r14d
	__int64 v7; // r13
	unsigned int* v8; // r12
	__int64 v9; // rax
	unsigned int* v10; // rbx
	int* v11; // rsi
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v14; // rcx
	bool v15; // zf
	__int64 v16; // r8
	int* v17; // rax
	int* v18; // rcx
	int v19; // xmm0_4
	int v20; // xmm1_4
	unsigned int v21; // eax
	int v22; // xmm0_4
	int** v23; // r8
	__int64 v24; // rax
	int v25; // eax
	__m128 v26; // xmm2
	__m128 v27; // xmm3
	int v28; // eax
	__m128 v29; // xmm0
	__int64 v31; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v32; // [rsp+68h] [rbp-98h]
	unsigned __int64 v33; // [rsp+70h] [rbp-90h]
	__int64 v34; // [rsp+78h] [rbp-88h]
	int v35; // [rsp+80h] [rbp-80h]
	unsigned int v36; // [rsp+88h] [rbp-78h]
	unsigned int v37; // [rsp+8Ch] [rbp-74h]
	__int64 v38; // [rsp+90h] [rbp-70h]
	__int64 v39; // [rsp+98h] [rbp-68h]
	__m128 v40; // [rsp+A0h] [rbp-60h] BYREF
	__m256 v41; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v42; // [rsp+D0h] [rbp-30h]
	__int128 v43; // [rsp+E0h] [rbp-20h]
	char v44[24]; // [rsp+F0h] [rbp-10h] BYREF
	unsigned int v45; // [rsp+150h] [rbp+50h]
	int v46; // [rsp+158h] [rbp+58h]
	int v47; // [rsp+160h] [rbp+60h]
	int v48; // [rsp+168h] [rbp+68h]

	v2 = *(_DWORD*)(a2 + 4);
	v38 = qword_140C65B78;
	v4 = sub_14023D840(v2);
	if (v4)
	{
		v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)a2);
		if (v5)
		{
			v6 = 0;
			v7 = 0i64;
			v8 = (unsigned int*)(v4 + 4);
			do
			{
				if ((unsigned int)v7 >= *(_DWORD*)(a2 + 12))
					break;
				v9 = sub_14023D400(*v8);
				v10 = (unsigned int*)v9;
				if (v9)
				{
					v11 = (int*)sub_140248F00(*(_DWORD*)(v9 + 16));
					if (v11)
					{
						v12 = sub_140248F00(v10[5]);
						v14 = *(_QWORD*)(a2 + 16);
						v39 = v12;
						v31 = 0i64;
						v32 = 0i64;
						v33 = 0i64;
						v34 = 0i64;
						v35 = 0;
						v46 = *(_DWORD*)(v14 + 4 * v7);
						LODWORD(v31) = v46;
						v45 = *(_DWORD*)a2;
						HIDWORD(v31) = *(_DWORD*)a2;
						v36 = *(_DWORD*)(a2 + 8);
						v47 = *v11;
						LODWORD(v32) = *v11;
						v48 = v10[5];
						HIDWORD(v32) = v48;
						v7 = (unsigned int)(v7 + 1);
						v15 = *(_QWORD*)(v5 + 5864) == 0i64;
						v37 = *v10;
						v33 = __PAIR64__(v36, v37);
						if (v15)
						{
							sub_140579AC0((__int64*)(v5 + 1432), (int*)&v31);
							sub_1400293C0(v38 + 16, (__int64)v44, (int*)a2);
						}
						else
						{
							v16 = (unsigned int)v11[37];
							if (!(_DWORD)v16
								|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
									qword_140C659A0,
									v5,
									v16,
									0i64,
									0i64,
									0))
							{
								v25 = *(_DWORD*)(v5 + 4576);
								v26 = (__m128)v10[28];
								v27 = (__m128)v10[27];
								v41 = ymmword_140C78390;
								v43 = xmmword_140C783C0;
								LODWORD(v43) = v25;
								DWORD1(v43) = *(_DWORD*)(v5 + 4580);
								v28 = *(_DWORD*)(v5 + 4584);
								v42 = xmmword_140C783B0;
								v29 = (__m128)v10[29];
								DWORD2(v43) = v28;
								v40 = _mm_unpacklo_ps(_mm_unpacklo_ps(v27, v29), _mm_unpacklo_ps(v26, (__m128)0i64));
								sub_1405787D0(
									(__int64)&v40,
									v46,
									v45,
									v13,
									(__int64)v11,
									v39,
									(__int128*)&v41,
									0,
									(_QWORD*)(v5 + 1416),
									(__int128*)&v40,
									0);
							}
							else
							{
								v17 = sub_14018B280(88i64, 0);
								v18 = v17;
								if (v17)
								{
									v19 = v34;
									v20 = HIDWORD(v34);
									*(_QWORD*)v17 = off_140B6CC98;
									*((_QWORD*)v17 + 1) = 0i64;
									*((_QWORD*)v17 + 2) = 0i64;
									*((_QWORD*)v17 + 3) = 0i64;
									*((_QWORD*)v17 + 4) = 0i64;
									v17[12] = v47;
									v17[10] = v46;
									v17[13] = v48;
									v21 = v37;
									v18[11] = v45;
									v18[14] = v21;
									v18[15] = v36;
									v18[16] = v19;
									v22 = v35;
									v18[17] = v20;
									v18[18] = v22;
									v18[19] = 0;
									*((_QWORD*)v18 + 10) = 0i64;
								}
								else
								{
									v18 = 0i64;
								}
								v23 = (int**)(v38 + 8);
								if (!*((_QWORD*)v18 + 3))
								{
									*((_QWORD*)v18 + 3) = v23;
									*((_QWORD*)v18 + 4) = *v23;
									*v23 = v18;
									v24 = *((_QWORD*)v18 + 4);
									if (v24)
										*(_QWORD*)(v24 + 24) = v18 + 8;
								}
							}
						}
					}
				}
				++v6;
				++v8;
			} while (v6 < 0x24);
		}
	}
	return 0i64;
}
// 140578004: variable 'v13' is possibly undefined
// 140B6CC98: using guessed type __int64 (__fastcall *off_140B6CC98[4])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140577D20: using guessed type char var_50[24];

