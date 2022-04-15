//----- (00000001405CA390) ----------------------------------------------------
void __fastcall sub_1405CA390(__int64 a1, int a2)
{
	__int64* v2; // r12
	__int64 v4; // rax
	unsigned __int64 v5; // rdx
	__int64* i; // rcx
	__int64 v7; // rax
	__int64 v8; // r15
	__int64 v9; // rax
	unsigned int v10; // r14d
	int v11; // r13d
	__int64 v12; // rcx
	BOOL v13; // edx
	__int64 v14; // rbp
	_QWORD* v15; // rbx
	_DWORD* v16; // rdi
	__int64 v17; // rsi
	__int64 v18; // rax
	__int64 v19; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__int64 v22; // rax
	int v23; // edx
	__int64 v24; // r14
	bool v25; // zf
	__int64 v26; // rcx
	__int64 v27; // rbp
	_QWORD* v28; // rbx
	_DWORD* v29; // rdi
	__int64 v30; // rsi
	__int64 v31; // rdi
	__int64 v32; // rcx
	unsigned int v33; // edx
	__int64 v34; // rax
	_QWORD* m; // rax
	__int64 n; // rax
	unsigned __int64 ii; // rbx
	__int64 v38; // rdx
	__int64 v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rdx
	int v42; // r11d
	_DWORD* v43; // r10
	__int64 v44; // r9
	__int64* v45; // r8
	int* v46; // rax
	__int64 v47; // rcx
	__int64 v48; // [rsp+70h] [rbp-98h]
	__m128i v49; // [rsp+80h] [rbp-88h] BYREF
	__m128i v50; // [rsp+90h] [rbp-78h] BYREF
	int v51; // [rsp+A0h] [rbp-68h]
	int v52[2]; // [rsp+B0h] [rbp-58h] BYREF
	__int64 v53; // [rsp+B8h] [rbp-50h]
	int v54; // [rsp+C0h] [rbp-48h]
	int v56; // [rsp+120h] [rbp+18h]
	__int64* v57; // [rsp+128h] [rbp+20h]

	v2 = (__int64*)(a1 + 408);
	v57 = (__int64*)(a1 + 408);
	if (!*(_QWORD*)(a1 + 408))
	{
		if (a2)
		{
			v4 = 0i64;
			v5 = *(_QWORD*)(qword_140C65898 + 2712);
			if (v5)
			{
				for (i = *(__int64**)(qword_140C65898 + 2704); !*i || *(_DWORD*)(*i + 64) != a2; ++i)
				{
					if (++v4 >= v5)
						return;
				}
				v7 = sub_1405A4B80(*i, 1);
				v8 = v7;
				if (v7)
				{
					if (*(_QWORD*)(v7 + 8))
					{
						v9 = *(_QWORD*)(qword_140C65898 + 120);
						v48 = v9;
						if (v9)
						{
							if (!*(_DWORD*)(v9 + 592))
							{
								v10 = sub_1405CA250(qword_140C65898, a2);
								v56 = v10;
								if (v10)
								{
									v11 = 0;
									v12 = *(_QWORD*)(v8 + 8);
									v13 = *(_DWORD*)(*(_QWORD*)(v8 + 112) + 24i64) == 8;
									v50.m128i_i64[1] = 0i64;
									v50.m128i_i32[0] = v13;
									v50.m128i_i32[1] = *(_DWORD*)(v12 + 28);
									v51 = 0;
									sub_1405663F0(qword_140C65B70 + 1616, &v49, &v50);
									if (v49.m128i_i64[0] != _mm_srli_si128(v49, 8).m128i_u64[0])
									{
										v14 = v49.m128i_i64[1];
										v15 = (_QWORD*)v49.m128i_i64[0];
										do
										{
											v16 = (_DWORD*)v15[7];
											if (v16)
											{
												if ((v16[4] & 0x100) != 0)
												{
													v17 = sub_140248F00(v16[6]);
													if (v17)
													{
														v18 = sub_140248F00(v16[7]);
														sub_140578770(
															qword_140C65898 + 25432,
															v10,
															v17,
															v18,
															0i64,
															(_QWORD*)(qword_140C65898 + 25432));
														v11 = 1;
													}
												}
											}
											v19 = v15[3];
											if (v19)
											{
												v15 = (_QWORD*)v15[3];
												for (j = *(_QWORD**)(v19 + 16); j; j = (_QWORD*)j[2])
													v15 = j;
											}
											else
											{
												for (k = v15[1]; v15 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
													v15 = (_QWORD*)k;
												if (v15[3] != k)
													v15 = (_QWORD*)k;
											}
										} while (v15 != (_QWORD*)v14);
									}
									v22 = *(_QWORD*)(qword_140C65898 + 25744);
									if (v22)
										v23 = *(_DWORD*)(v22 + 264);
									else
										v23 = 0;
									v24 = sub_1403D90D0(qword_140C65898, v23);
									if (v24)
									{
										v25 = *(_DWORD*)(*(_QWORD*)(v8 + 112) + 24i64) == 8;
										v26 = *(_QWORD*)(v8 + 8);
										v53 = 1i64;
										v54 = 0;
										v52[0] = v25;
										v52[1] = *(_DWORD*)(v26 + 28);
										sub_1405663F0(qword_140C65B70 + 1616, &v50, v52);
										v49 = v50;
										if (v50.m128i_i64[0] != _mm_srli_si128(v50, 8).m128i_u64[0])
										{
											v27 = v49.m128i_i64[1];
											v28 = (_QWORD*)v49.m128i_i64[0];
											do
											{
												v29 = (_DWORD*)v28[7];
												if (v29)
												{
													if ((v29[4] & 0x100) != 0)
													{
														v30 = sub_140248F00(v29[6]);
														if (v30)
														{
															v31 = sub_140248F00(v29[7]);
															if (sub_1403B4EC0(v8))
															{
																v33 = v56;
																v32 = qword_140C65898 + 25432;
															}
															else
															{
																v33 = *(_DWORD*)(v24 + 8);
															}
															sub_140578770(v32, v33, v30, v31, 0i64, (_QWORD*)(qword_140C65898 + 25432));
															v11 = 1;
														}
													}
												}
												v34 = v28[3];
												if (v34)
												{
													v28 = (_QWORD*)v28[3];
													for (m = *(_QWORD**)(v34 + 16); m; m = (_QWORD*)m[2])
														v28 = m;
												}
												else
												{
													for (n = v28[1]; v28 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
														v28 = (_QWORD*)n;
													if (v28[3] != n)
														v28 = (_QWORD*)n;
												}
											} while (v28 != (_QWORD*)v27);
											v2 = v57;
										}
									}
									for (ii = 0i64; ii < *(_QWORD*)(v8 + 104); ++ii)
									{
										v38 = *(_QWORD*)(v8 + 96) + 8 * ii;
										v39 = *(_QWORD*)v38;
										if ((*(_BYTE*)(*(_QWORD*)v38 + 68i64) & 0x40) == 0
											&& (*(_BYTE*)(v39 + 88) & 2) != 0
											&& (!*(_DWORD*)(v39 + 80)
												|| (*(unsigned int(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
													qword_140C659A0,
													v48,
													*(unsigned int*)(v39 + 80),
													0i64,
													0i64,
													0)))
										{
											if (!sub_1403B5290(v8)
												|| (v40 = *(_QWORD*)(*(_QWORD*)(v8 + 96) + 8 * ii),
													(unsigned int)sub_1403BFB60(v40, *(_DWORD*)(a1 + 276), *(_DWORD*)(v40 + 84))))
											{
												v41 = *(_QWORD*)(a1 + 416);
												v11 = 1;
												v42 = 0;
												if (!v41)
													goto LABEL_72;
												do
												{
													v43 = *(_DWORD**)(v41 + 48);
													v44 = *(_QWORD*)(v41 + 8);
													v45 = (__int64*)(v41 + 8);
													if (v43
														&& *(_DWORD*)(v41 + 32) == **(_DWORD**)(v8 + 112)
														&& *v43 == **(_DWORD**)(*(_QWORD*)(v8 + 96) + 8 * ii))
													{
														if (*(_QWORD*)v41)
															**(_QWORD**)v41 = v44;
														if (*v45)
															*(_QWORD*)*v45 = *(_QWORD*)v41;
														*v45 = 0i64;
														*(_QWORD*)v41 = v2;
														*v45 = *v2;
														*v2 = v41;
														if (*v45)
															*(_QWORD*)*v45 = v45;
														v42 = 1;
													}
													v41 = v44;
												} while (v44);
												if (!v42)
												{
												LABEL_72:
													v46 = sub_14018B280(320i64, 0);
													if (v46)
														sub_140549B90(
															(__int64)v46,
															**(_DWORD**)(v8 + 112),
															*(_QWORD*)(*(_QWORD*)(v8 + 96) + 8 * ii),
															v56,
															v56,
															0,
															v2,
															1,
															0,
															*(_DWORD*)(*(_QWORD*)(v8 + 8) + 108i64),
															0i64,
															a1);
												}
											}
										}
									}
									if (v11)
									{
										v47 = qword_140C65898;
										*(_DWORD*)(qword_140C65898 + 25440) = 1;
										sub_14039DD70(v47, v8, -1, 1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
// 1405CA726: variable 'v32' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

