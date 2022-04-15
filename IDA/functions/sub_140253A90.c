#include "../winhttp.h"

//----- (0000000140253A90) ----------------------------------------------------
__int64 __fastcall sub_140253A90(__int64 a1)
{
	int v2; // ecx
	__int64 result; // rax
	__int64 v4; // rax
	int v5; // edx
	int v6; // edi
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r10
	unsigned __int64 i; // r9
	float v12; // xmm0_4
	__int64 v13; // r9
	__int64 v14; // r10
	__int64* v15; // rcx
	__int64 v16; // rax
	__int64* v17; // rcx
	__int64 v18; // rax
	int v19; // [rsp+50h] [rbp-19h] BYREF
	__int64 v20; // [rsp+58h] [rbp-11h]
	__int64(__fastcall * v21)(_QWORD); // [rsp+60h] [rbp-9h]
	__int64 v22; // [rsp+68h] [rbp-1h]
	__int128 v23; // [rsp+70h] [rbp+7h] BYREF
	int v24; // [rsp+80h] [rbp+17h]
	int v25; // [rsp+84h] [rbp+1Bh]
	int v26; // [rsp+88h] [rbp+1Fh]
	__int64 v27; // [rsp+8Ch] [rbp+23h]
	__int128 v28; // [rsp+A0h] [rbp+37h]
	unsigned int v29; // [rsp+D0h] [rbp+67h] BYREF
	__int64 v30; // [rsp+D8h] [rbp+6Fh] BYREF

	*(_DWORD*)(a1 + 48) = 23;
	*(_QWORD*)(a1 + 36) = 0i64;
	*(_DWORD*)(a1 + 44) = 0;
	*(_QWORD*)(a1 + 1600) = qword_140C77760;
	*(_QWORD*)(a1 + 1608) = qword_140C77760;
	*(_QWORD*)(a1 + 1616) = qword_140C77760;
	v2 = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 720i64))(qword_140C65670);
	*(_DWORD*)(a1 + 1632) = 0;
	*(_DWORD*)(a1 + 1624) = v2;
	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
		qword_140C65670,
		L"Art\\Dev\\MaterialConstant.dds",
		0i64,
		1i64,
		0,
		256,
		0,
		0,
		a1 + 1776);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			L"Art\\Dev\\MaterialData.dds",
			0i64,
			1i64,
			1,
			256,
			0,
			0,
			a1 + 1784);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
				qword_140C65670,
				L"Art\\Dev\\MaterialData.dds",
				0i64,
				1i64,
				1,
				256,
				0,
				0,
				a1 + 1792);
			if ((int)result >= 0)
			{
				v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
				v5 = 1;
				if (*(_DWORD*)(v4 + 84))
					v5 = 4;
				result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
					qword_140C65670,
					12i64,
					2i64,
					1i64,
					0,
					v5,
					0,
					0,
					0,
					a1 + 1800);
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
						qword_140C65670,
						12i64,
						2i64,
						1i64,
						20,
						1,
						0,
						0,
						0,
						a1 + 1808);
					if ((int)result >= 0)
					{
						result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 112i64))(
							qword_140C65670,
							L"Art\\Dev\\SkyReflection.dds",
							0i64,
							1i64,
							1,
							21,
							0,
							a1 + 1816);
						if ((int)result >= 0)
						{
							v30 = 0i64;
							v6 = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, _QWORD, _DWORD, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
								qword_140C65670,
								L"Art\\Dev\\MaterialConstant.dds",
								0i64,
								0i64,
								0,
								256,
								0,
								0,
								&v30);
							if (v6 < 0)
							{
							LABEL_12:
								if (v30)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
								return (unsigned int)v6;
							}
							v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v30 + 24i64))(v30);
							sub_140052360((__int64*)(a1 + 1104), *(unsigned int*)(v7 + 8));
							v10 = (*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*, __int64))(*(_QWORD*)v30 + 72i64))(
								v30,
								0i64,
								&v29,
								1i64);
							if (!v10)
							{
								v6 = -2147467259;
								goto LABEL_12;
							}
							for (i = 0i64; i < *(_QWORD*)(a1 + 1112); v10 = v29 + v14)
							{
								v12 = sub_1401C9770((unsigned __int16*)(v10 + 8));
								i = v13 + 1;
								*(_DWORD*)(*(_QWORD*)(a1 + 1104) + 4 * i - 4) = (int)v12;
							}
							if (v30)
								(*(void(__fastcall**)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD*)v30 + 8i64))(
									v30,
									v8,
									v9,
									i);
							v24 = -8388609;
							v23 = 0i64;
							v27 = 1i64;
							v28 = xmmword_140B7B240;
							v25 = 2139095039;
							v26 = 0;
							result = (*(__int64(__fastcall**)(__int64, __int64, __int128*, unsigned __int64))(*(_QWORD*)qword_140C65670
								+ 200i64))(
									qword_140C65670,
									a1 + 2056,
									&v23,
									i);
							if ((int)result >= 0)
							{
								result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 64i64))(
									qword_140C65670,
									72i64,
									0i64);
								if ((int)result >= 0)
								{
									result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 64i64))(
										qword_140C65670,
										48i64,
										0i64);
									if ((int)result >= 0)
									{
										result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670
											+ 56i64))(
												qword_140C65670,
												128i64,
												1i64,
												a1 + 2080);
										if ((int)result >= 0)
										{
											result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65680
												+ 32i64))(
													qword_140C65680,
													L"Arial Unicode MS",
													7i64);
											if ((int)result >= 0)
											{
												result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 184i64))(
													qword_140C65670,
													a1 + 2096);
												if ((int)result >= 0)
												{
													result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
														+ 152i64))(
															qword_140C65670,
															L"Shaders\\SimplePS.sho",
															a1 + 2104);
													if ((int)result >= 0)
													{
														result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
															+ 144i64))(
																qword_140C65670,
																L"Shaders\\SimpleVS.sho",
																a1 + 2112);
														if ((int)result >= 0)
														{
															result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																qword_140C65670,
																L"Shaders\\fogSkyPS.sho",
																a1 + 2120);
															if ((int)result >= 0)
															{
																result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																	qword_140C65670,
																	L"Shaders\\FillPS.sho",
																	a1 + 2128);
																if ((int)result >= 0)
																{
																	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
																		qword_140C65670,
																		L"Shaders\\StencilVS.sho",
																		a1 + 2136);
																	if ((int)result >= 0)
																	{
																		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																			qword_140C65670,
																			L"Shaders\\StencilPS.sho",
																			a1 + 2144);
																		if ((int)result >= 0)
																		{
																			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																				qword_140C65670,
																				L"Shaders\\CompositePS.sho",
																				a1 + 2152);
																			if ((int)result >= 0)
																			{
																				result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																					qword_140C65670,
																					L"Shaders\\TelegraphPS.sho",
																					a1 + 2160);
																				if ((int)result >= 0)
																				{
																					result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																						qword_140C65670,
																						L"Shaders\\DecalPS.sho",
																						a1 + 2168);
																					if ((int)result >= 0)
																					{
																						result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																							qword_140C65670,
																							L"Shaders\\LightPS.sho",
																							a1 + 2176);
																						if ((int)result >= 0)
																						{
																							result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																								qword_140C65670,
																								L"Shaders\\LightSunSkyPS.sho",
																								a1 + 2184);
																							if ((int)result >= 0)
																							{
																								result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
																									qword_140C65670,
																									L"Shaders\\FogVS.sho",
																									a1 + 2192);
																								if ((int)result >= 0)
																								{
																									result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																										qword_140C65670,
																										L"Shaders\\FogPS.sho",
																										a1 + 2200);
																									if ((int)result >= 0)
																									{
																										result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																											qword_140C65670,
																											L"Shaders\\FogDepthPS.sho",
																											a1 + 2208);
																										if ((int)result >= 0)
																										{
																											result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																												qword_140C65670,
																												L"Shaders\\PortalPS.sho",
																												a1 + 2216);
																											if ((int)result >= 0)
																											{
																												result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																													qword_140C65670,
																													L"Shaders\\DebugPS.sho",
																													a1 + 2224);
																												if ((int)result >= 0)
																												{
																													result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																														qword_140C65670,
																														L"Shaders\\Downsample1_2PS.sho",
																														a1 + 2232);
																													if ((int)result >= 0)
																													{
																														result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																															qword_140C65670,
																															L"Shaders\\BrightPassPS.sho",
																															a1 + 2240);
																														if ((int)result >= 0)
																														{
																															result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																																qword_140C65670,
																																L"Shaders\\GaussianBlurPS.sho",
																																a1 + 2248);
																															if ((int)result >= 0)
																															{
																																result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																																	qword_140C65670,
																																	L"Shaders\\AccPS.sho",
																																	a1 + 2256);
																																if ((int)result >= 0)
																																{
																																	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																																		qword_140C65670,
																																		L"Shaders\\WorldPS.sho",
																																		a1 + 2264);
																																	if ((int)result >= 0)
																																	{
																																		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																																			qword_140C65670,
																																			L"Shaders\\scatterPS.sho",
																																			a1 + 2272);
																																		if ((int)result >= 0)
																																		{
																																			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																																				qword_140C65670,
																																				L"Shaders\\FxaaPS.sho",
																																				a1 + 2280);
																																			if ((int)result >= 0)
																																			{
																																				result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																																					qword_140C65670,
																																					L"Shaders\\LinearZPS.sho",
																																					a1 + 2288);
																																				if ((int)result >= 0)
																																				{
																																					result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 192i64))(
																																						qword_140C65670,
																																						a1 + 2296);
																																					if ((int)result >= 0)
																																					{
																																						v15 = *(__int64**)(a1 + 2296);
																																						v21 = (__int64(__fastcall*)(_QWORD))sub_140254390;
																																						v16 = *v15;
																																						v19 = 0;
																																						v20 = a1;
																																						v22 = 0i64;
																																						(*(void(__fastcall**)(__int64*, _QWORD, int*))(v16 + 24))(
																																							v15,
																																							0i64,
																																							&v19);
																																						v17 = *(__int64**)(a1 + 2296);
																																						v21 = nullsub_1;
																																						v18 = *v17;
																																						v19 = 0;
																																						v20 = a1;
																																						v22 = 0i64;
																																						(*(void(__fastcall**)(__int64*, __int64, int*))(v18 + 24))(
																																							v17,
																																							1i64,
																																							&v19);
																																						sub_140254390((_QWORD**)a1);
																																						*(_QWORD*)(a1 + 2328) = 0i64;
																																						*(_QWORD*)(a1 + 2336) = 0i64;
																																						*(_DWORD*)(a1 + 2344) = 0;
																																						*(_DWORD*)(a1 + 2348) = 1065353216;
																																						*(_QWORD*)(a1 + 2352) = 0i64;
																																						*(_QWORD*)(a1 + 2360) = 0i64;
																																						*(_QWORD*)(a1 + 2368) = 0i64;
																																						*(_QWORD*)(a1 + 2376) = 0i64;
																																						*(_QWORD*)(a1 + 2384) = 0i64;
																																						*(_QWORD*)(a1 + 2392) = 0i64;
																																						*(_QWORD*)(a1 + 2400) = 7i64;
																																						*(_QWORD*)(a1 + 2408) = 0i64;
																																						*(_QWORD*)(a1 + 2416) = 0i64;
																																						*(_QWORD*)(a1 + 2424) = 0i64;
																																						*(_DWORD*)(a1 + 2432) = 7;
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
	}
	return result;
}
// 140253D90: variable 'v13' is possibly undefined
// 140253D9F: variable 'v14' is possibly undefined
// 140253DB7: variable 'v8' is possibly undefined
// 140253DB7: variable 'v9' is possibly undefined
// 140253E0C: variable 'i' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140AE3978: using guessed type wchar_t aArtDevMaterial_1[25];
// 140AE3A48: using guessed type wchar_t aArtDevSkyrefle[26];
// 140AE3BA8: using guessed type wchar_t aArtDevMaterial_0[25];
// 140AE3CD0: using guessed type wchar_t aArtDevMaterial[29];
// 140AE3D68: using guessed type wchar_t aShadersStencil[22];
// 140AE3D98: using guessed type wchar_t aShadersStencil_0[22];
// 140AE3DC8: using guessed type wchar_t aShadersFogskyp[21];
// 140AE3DF8: using guessed type wchar_t aShadersFillpsS[19];
// 140AE3E20: using guessed type wchar_t aShadersSimplep_4[21];
// 140AE3E50: using guessed type wchar_t aShadersSimplev[21];
// 140AE3E80: using guessed type wchar_t aArtDevMaterial_2[29];
// 140AE3EC0: using guessed type wchar_t aArialUnicodeMs_2[17];
// 140AE3EE8: using guessed type wchar_t aShadersFogpsSh[18];
// 140AE3F10: using guessed type wchar_t aShadersFogdept[23];
// 140AE3F40: using guessed type wchar_t aShadersLightsu[26];
// 140AE3F78: using guessed type wchar_t aShadersFogvsSh[18];
// 140AE3FA0: using guessed type wchar_t aShadersDecalps[20];
// 140AE3FC8: using guessed type wchar_t aShadersLightps[20];
// 140AE3FF0: using guessed type wchar_t aShadersComposi[24];
// 140AE4020: using guessed type wchar_t aShadersTelegra[24];
// 140AE4050: using guessed type wchar_t aShadersWorldps[20];
// 140AE4078: using guessed type wchar_t aShadersScatter[22];
// 140AE40A8: using guessed type wchar_t aShadersGaussia[27];
// 140AE40E0: using guessed type wchar_t aShadersAccpsSh[18];
// 140AE4108: using guessed type wchar_t aShadersDownsam[28];
// 140AE4140: using guessed type wchar_t aShadersBrightp[25];
// 140AE4178: using guessed type wchar_t aShadersPortalp[21];
// 140AE41A8: using guessed type wchar_t aShadersDebugps[20];
// 140AE4238: using guessed type wchar_t aShadersFxaapsS[19];
// 140AE4328: using guessed type wchar_t aShadersLinearz[22];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;

