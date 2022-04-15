//----- (00000001407C3B60) ----------------------------------------------------
__int64 __fastcall sub_1407C3B60(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	unsigned int v5; // ebx
	__int64 v6; // rbp
	int v7; // esi
	float v8; // xmm10_4
	float v9; // xmm7_4
	unsigned int v10; // xmm6_4
	double v11; // xmm6_8
	int v12; // eax
	float v13; // xmm9_4
	float v14; // xmm8_4
	float v15; // xmm7_4
	float v16; // xmm0_4
	double v17; // xmm0_8
	double v18; // xmm8_8
	__int64 v19; // rsi
	__int64 v20; // rbp
	float v21; // xmm10_4
	double v22; // xmm7_8
	float v23; // xmm6_4
	float v24; // xmm6_4
	float v25; // xmm0_4
	__int64 v26; // rcx
	__int64 v27; // rdx
	_DWORD* v28; // rax
	__int64 v29; // rcx
	__int64* v30; // rcx
	__int64 v31; // rax
	__int64 v32; // rsi
	__int64 v33; // rax
	__int64 v34; // [rsp+60h] [rbp-78h] BYREF
	_BYTE v35[24]; // [rsp+68h] [rbp-70h] BYREF

	result = sub_1402EC590(a1, (__int64*)(a1 + 2984));
	if ((int)result >= 0)
	{
		result = sub_1402EC590(v3, (__int64*)(a1 + 2992));
		if ((int)result >= 0)
		{
			result = sub_1402EC590(v4, (__int64*)(a1 + 3000));
			if ((int)result >= 0)
			{
				result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
					qword_140C65670,
					L"Shaders\\SimpleVS.sho",
					a1 + 5736);
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
						qword_140C65670,
						L"Shaders\\SimplePS.sho",
						a1 + 5744);
					if ((int)result >= 0)
					{
						result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
							qword_140C65670,
							L"Shaders\\SkyVS.sho",
							a1 + 5752);
						if ((int)result >= 0)
						{
							result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
								qword_140C65670,
								L"Shaders\\SkyPS.sho",
								a1 + 5760);
							if ((int)result >= 0)
							{
								result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
									+ 152i64))(
										qword_140C65670,
										L"Shaders\\CompositeEnvMapPS.sho",
										a1 + 5768);
								if ((int)result >= 0)
								{
									result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
										+ 152i64))(
											qword_140C65670,
											L"Shaders\\FilterEnvMapPS.sho",
											a1 + 5776);
									if ((int)result >= 0)
									{
										result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
											+ 152i64))(
												qword_140C65670,
												L"Shaders\\DownsampleEnvMapPS.sho",
												a1 + 5784);
										if ((int)result >= 0)
										{
											result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
												+ 152i64))(
													qword_140C65670,
													L"Shaders\\CompositeCUBEMapPS.sho",
													a1 + 5792);
											if ((int)result >= 0)
											{
												result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670
													+ 56i64))(
														qword_140C65670,
														7200i64,
														1i64,
														a1 + 6056);
												if ((int)result >= 0)
												{
													result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 64i64))(
														qword_140C65670,
														5376i64,
														0i64,
														1i64,
														a1 + 6064);
													if ((int)result >= 0)
													{
														v5 = 0;
														v6 = a1 + 5804;
														v7 = 0;
														v8 = *(float*)&dword_140C54CE8;
														v9 = *(float*)&dword_140C54CE8 * 2.0;
														do
														{
															*(float*)&v10 = (float)((float)v7 * v9) * 0.03125;
															*(float*)(v6 - 4) = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v10));
															++v7;
															v6 += 8i64;
															*(float*)(v6 - 8) = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v10));
														} while ((unsigned int)v7 < 0x20);
														*(_QWORD*)&v11 = (unsigned int)dword_140C3B438;
														v12 = dword_140C54D00;
														if (*(_DWORD*)qword_140C63750 < dword_140C54D00)
															v12 = *(_DWORD*)qword_140C63750;
														*(float*)&v11 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * flt_140C54D10[v12];
														v13 = sub_1408FE3D0(0.0);
														v14 = sub_1408FC950(0.0);
														v15 = sub_1408FE3D0(v11);
														v16 = sub_1408FC950(v11);
														*(float*)(a1 + 6200) = v13;
														*(_DWORD*)(a1 + 6188) = 0;
														*(_DWORD*)(a1 + 6204) = 0;
														*(_DWORD*)(a1 + 6220) = 0;
														*(float*)(a1 + 6176) = (float)(v14 * v16) - (float)((float)(v13 * v13) * v15);
														*(float*)(a1 + 6180) = (float)((float)(v14 * v13) * v15) + (float)(v13 * v16);
														*(float*)(a1 + 6192) = -(float)(v13 * v14);
														*(float*)(a1 + 6212) = (float)(v13 * v15) - (float)((float)(v14 * v13) * v16);
														*(float*)(a1 + 6196) = v14 * v14;
														*(float*)(a1 + 6216) = v16 * v14;
														*(float*)(a1 + 6184) = -(float)(v15 * v14);
														*(float*)(a1 + 6208) = (float)(v14 * v15) + (float)((float)(v13 * v13) * v16);
														*(_OWORD*)(a1 + 6224) = xmmword_140C78440;
														HIDWORD(v17) = 0;
														*(float*)&v17 = sub_140934E10(0.1);
														v18 = v17;
														*(float*)&v17 = sub_140934E10(-0.1);
														v19 = a1 + 6332;
														v20 = 6i64;
														v21 = (float)(sub_1408FDE98(*(float*)&v17 + v8, v8) - *(float*)&v18) * 0.16666667;
														HIDWORD(v22) = 0;
														*(float*)&v22 = v21 + *(float*)&v18;
														do
														{
															v23 = sub_1408FC950(v18) * 200.0;
															*(float*)(v19 + 4) = v23 / sub_1408FE3D0(v18);
															v24 = sub_1408FC950(v22);
															v25 = sub_1408FE3D0(v22);
															v19 += 8i64;
															v18 = v22;
															*(float*)&v22 = *(float*)&v22 + v21;
															*(float*)(v19 - 8) = (float)(v24 * 200.0) / v25;
															--v20;
														} while (v20);
														(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
														result = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670
															+ 88i64))(
																qword_140C65670,
																16i64,
																1i64);
														if ((int)result >= 0)
														{
															v26 = *(_QWORD*)(a1 + 16);
															if (v26)
																v27 = *(unsigned int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 72i64))(v26)
																	+ 40);
															else
																v27 = 64i64;
															result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
																qword_140C65670,
																v27,
																(unsigned int)v27,
																1i64,
																0,
																5,
																1,
																0,
																0,
																a1 + 6576);
															if ((int)result >= 0)
															{
																v28 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
																result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, _DWORD, unsigned int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 104i64))(
																	qword_140C65670,
																	16i64,
																	16i64,
																	16i64,
																	1,
																	0,
																	(unsigned int)(*v28 != 0) + 4,
																	1,
																	0,
																	0,
																	a1 + 6584);
																if ((int)result >= 0)
																{
																	result = (*(__int64(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(a1 + 2984) + 40i64))(
																		*(_QWORD*)(a1 + 2984),
																		L"Art\\Sky\\Glare\\Sky_Glare_StandardSunGlare_White.M3",
																		a1 + 6480,
																		0i64);
																	if ((int)result >= 0)
																	{
																		v29 = *(_QWORD*)(a1 + 6480);
																		v34 = 150i64;
																		memset(&v35[4], 0, 20);
																		*(_DWORD*)v35 = 1065353216;
																		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v29 + 584i64))(
																			v29,
																			0i64,
																			&v34);
																		(*(void(__fastcall**)(_QWORD, __m256*))(**(_QWORD**)(a1 + 6480) + 72i64))(
																			*(_QWORD*)(a1 + 6480),
																			&ymmword_140C78390);
																		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670
																			+ 192i64))(
																				qword_140C65670,
																				a1 + 2128);
																		if ((int)result >= 0)
																		{
																			v30 = *(__int64**)(a1 + 2128);
																			*(_QWORD*)&v35[8] = sub_1407C4250;
																			v31 = *v30;
																			LODWORD(v34) = 0;
																			*(_QWORD*)v35 = a1;
																			*(_QWORD*)&v35[16] = 0i64;
																			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v31 + 24))(v30, 0i64, &v34);
																			v32 = a1 + 6688;
																			do
																			{
																				v33 = sub_14024D360(v5++);
																				v32 += 4i64;
																				*(_DWORD*)(v32 - 4) = *(_DWORD*)(v33 + 36);
																			} while (v5 < 0xC);
																			*(_DWORD*)(a1 + 1320) = sub_14018CDF0();
																			return 0i64;
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
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 1407C3B8C: variable 'v3' is possibly undefined
// 1407C3BA0: variable 'v4' is possibly undefined
// 140B54A80: using guessed type wchar_t aShadersSimplev_4[21];
// 140B54AB0: using guessed type wchar_t aShadersSimplep_11[21];
// 140B54AE0: using guessed type wchar_t aShadersSkyvsSh[18];
// 140B54B08: using guessed type wchar_t aShadersSkypsSh[18];
// 140B54B30: using guessed type wchar_t aShadersComposi_0[30];
// 140B54B70: using guessed type wchar_t aShadersFiltere[27];
// 140B54BA8: using guessed type wchar_t aShadersDownsam_0[31];
// 140B54BE8: using guessed type wchar_t aShadersComposi_1[31];
// 140B54C60: using guessed type wchar_t aArtSkyGlareSky[50];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C54CE8: using guessed type int dword_140C54CE8;
// 140C54D00: using guessed type int dword_140C54D00;
// 140C54D10: using guessed type float flt_140C54D10[14];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C78440: using guessed type __int128 xmmword_140C78440;

