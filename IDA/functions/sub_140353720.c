#include "../winhttp.h"

//----- (0000000140353720) ----------------------------------------------------
__int64 __fastcall sub_140353720(
	__int64 a1,
	void(__fastcall*** a2)(_QWORD),
	void(__fastcall*** a3)(_QWORD),
	__int64 a4,
	__int64 a5)
{
	float* v5; // rsi
	__int64 v10; // rax
	__int64 v11; // r10
	_DWORD* v12; // rbx
	_DWORD* v13; // r8
	int v14; // eax
	_DWORD* v15; // rcx
	__int64 v16; // rax
	_DWORD* v17; // r8
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 result; // rax
	__int64 v21; // rcx
	unsigned __int64 v22; // rbx
	__int64 v23; // r15
	__m128** v24; // rsi
	__int64 v25; // rax
	int v26; // r14d
	__m128 v27; // xmm1
	int v28; // ecx
	__int64 v29; // rax
	int v30; // ebx
	__int64 v31; // rdx
	__m128 v32; // xmm1
	int v33; // ecx
	float v34; // xmm0_4
	float v35; // xmm6_4
	DWORD dwNumberOfProcessors; // eax
	_QWORD* v37; // rbx
	_QWORD* v38; // rsi
	__int64 v39; // r14
	int* v40; // rax
	_QWORD* v41; // rcx
	__int64 v42; // rax
	__int64 v43; // rax
	double v44; // xmm6_8
	__int64 v45; // rbx
	struct _SYSTEM_INFO SystemInfo; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v47[12]; // [rsp+68h] [rbp-A0h] BYREF
	int v48[4]; // [rsp+C8h] [rbp-40h] BYREF
	void(__fastcall * v49)(__int64, __int64); // [rsp+D8h] [rbp-30h]
	_QWORD* (__fastcall * v50)(__int64, int, __int64); // [rsp+E0h] [rbp-28h]

	v5 = (float*)(a1 + 180);
	*(_DWORD*)(a1 + 180) = dword_140C43EC8;
	*(_DWORD*)(a1 + 184) = dword_140C43ECC;
	*(_DWORD*)(a1 + 188) = dword_140C43ED0;
	*(_DWORD*)(a1 + 192) = dword_140C43ED4;
	*(_DWORD*)(a1 + 196) = dword_140C43ED8;
	*(_DWORD*)(a1 + 200) = dword_140C43EDC;
	*(_DWORD*)(a1 + 204) = dword_140C43EE0;
	*(_DWORD*)(a1 + 208) = dword_140C43EE4;
	*(_DWORD*)(a1 + 212) = dword_140C43EE8;
	*(_DWORD*)(a1 + 216) = dword_140C43EEC;
	*(_DWORD*)(a1 + 220) = dword_140C43EF0;
	*(_DWORD*)(a1 + 224) = dword_140C43EF4;
	*(_DWORD*)(a1 + 228) = dword_140C43EF8;
	if (a5)
	{
		v10 = sub_14034CA50((__int64)&SystemInfo, v5, a5);
		v12 = (_DWORD*)(a1 + 232);
		v13 = (_DWORD*)sub_14034C930((__int64)v48, v10, v11 + 16);
		*(_DWORD*)(a1 + 232) = *v13;
		*(_DWORD*)(a1 + 236) = v13[1];
		*(_DWORD*)(a1 + 240) = v13[2];
		*(_DWORD*)(a1 + 244) = v13[3];
		*(_DWORD*)(a1 + 248) = v13[4];
		*(_DWORD*)(a1 + 252) = v13[5];
		*(_DWORD*)(a1 + 256) = v13[6];
		*(_DWORD*)(a1 + 260) = v13[7];
		*(_DWORD*)(a1 + 264) = v13[8];
		*(_DWORD*)(a1 + 268) = v13[9];
		*(_DWORD*)(a1 + 272) = v13[10];
		*(_DWORD*)(a1 + 276) = v13[11];
		v14 = v13[12];
	}
	else
	{
		v15 = *(_DWORD**)(a1 + 16);
		v12 = (_DWORD*)(a1 + 232);
		*(_DWORD*)(a1 + 232) = v15[4];
		*(_DWORD*)(a1 + 236) = v15[5];
		*(_DWORD*)(a1 + 240) = v15[6];
		*(_DWORD*)(a1 + 244) = v15[7];
		*(_DWORD*)(a1 + 248) = v15[8];
		*(_DWORD*)(a1 + 252) = v15[9];
		*(_DWORD*)(a1 + 256) = v15[10];
		*(_DWORD*)(a1 + 260) = v15[11];
		*(_DWORD*)(a1 + 264) = v15[12];
		*(_DWORD*)(a1 + 268) = v15[13];
		*(_DWORD*)(a1 + 272) = v15[14];
		*(_DWORD*)(a1 + 276) = v15[15];
		v14 = v15[16];
	}
	v12[12] = v14;
	if (a4)
	{
		v16 = sub_14034CA50((__int64)v48, v5, a4);
		v17 = (_DWORD*)sub_14034C930((__int64)&SystemInfo, v16, (__int64)v12);
		*(_DWORD*)(a1 + 128) = *v17;
		*(_DWORD*)(a1 + 132) = v17[1];
		*(_DWORD*)(a1 + 136) = v17[2];
		*(_DWORD*)(a1 + 140) = v17[3];
		*(_DWORD*)(a1 + 144) = v17[4];
		*(_DWORD*)(a1 + 148) = v17[5];
		*(_DWORD*)(a1 + 152) = v17[6];
		*(_DWORD*)(a1 + 156) = v17[7];
		*(_DWORD*)(a1 + 160) = v17[8];
		*(_DWORD*)(a1 + 164) = v17[9];
		*(_DWORD*)(a1 + 168) = v17[10];
		*(_DWORD*)(a1 + 172) = v17[11];
		*(_DWORD*)(a1 + 176) = v17[12];
	}
	else
	{
		*(_DWORD*)(a1 + 128) = *v12;
		*(_DWORD*)(a1 + 132) = v12[1];
		*(_DWORD*)(a1 + 136) = v12[2];
		*(_DWORD*)(a1 + 140) = v12[3];
		*(_DWORD*)(a1 + 144) = v12[4];
		*(_DWORD*)(a1 + 148) = v12[5];
		*(_DWORD*)(a1 + 152) = v12[6];
		*(_DWORD*)(a1 + 156) = v12[7];
		*(_DWORD*)(a1 + 160) = v12[8];
		*(_DWORD*)(a1 + 164) = v12[9];
		*(_DWORD*)(a1 + 168) = v12[10];
		*(_DWORD*)(a1 + 172) = v12[11];
		*(_DWORD*)(a1 + 176) = v12[12];
		*(_DWORD*)(a1 + 132) = 0;
	}
	*(_QWORD*)(a1 + 24) = a2;
	(**a2)(a2);
	sub_1407E4830((int*)v47, 0i64, 0x60ui64);
	v18 = *(_QWORD*)(a1 + 24);
	v47[0] = (__int64)nullsub_1;
	v47[1] = (__int64)sub_140366DD0;
	v47[2] = (__int64)sub_140367070;
	v47[3] = (__int64)sub_1403670B0;
	v47[4] = (__int64)sub_1403670F0;
	v47[5] = (__int64)sub_140367130;
	v47[6] = (__int64)sub_140367170;
	v47[8] = (__int64)sub_1403671B0;
	v47[9] = (__int64)sub_1403671F0;
	v47[10] = (__int64)nullsub_1;
	(*(void(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)v18 + 240i64))(v18, v47, a1);
	if (a3 && (*v12 & 0x2008) == 8200)
	{
		*(_QWORD*)(a1 + 32) = a3;
		(**a3)(a3);
		sub_1407E4830(v48, 0i64, 0x60ui64);
		v19 = *(_QWORD*)(a1 + 32);
		v49 = sub_140367290;
		v50 = sub_1403672D0;
		(*(void(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v19 + 240i64))(v19, v48, a1);
	}
	result = sub_1407C2CA0((__int64*)(a1 + 2560));
	if ((int)result >= 0)
	{
		result = sub_1407C2CA0((__int64*)(a1 + 2568));
		if ((int)result >= 0)
		{
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2560) + 16i64))(*(_QWORD*)(a1 + 2560), a1);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2568) + 16i64))(*(_QWORD*)(a1 + 2568), a1);
			if ((*(_BYTE*)v12 & 1) == 0
				|| (result = sub_1403543E0(a1, 1, *(_QWORD*)(a1 + 2560), (int**)(a1 + 2576)), (int)result >= 0)
				&& (result = sub_1403543E0(a1, 35, *(_QWORD*)(a1 + 2568), (int**)(a1 + 2584)), (int)result >= 0)
				&& ((*(_BYTE*)v12 & 1) == 0
					|| (*(_DWORD*)(a1 + 4304) = 0,
						result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 176i64))(
							qword_140C65670,
							a1 + 4296),
						(int)result >= 0)))
			{
				result = sub_140354E10((_DWORD*)a1);
				if ((int)result >= 0)
				{
					result = sub_1402EC590(v21, (__int64*)(a1 + 40));
					if ((int)result >= 0)
					{
						(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 16i64))(*(_QWORD*)(a1 + 40), a1);
						v22 = 0i64;
						v23 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24));
						v24 = (__m128**)(a1 + 4736);
						do
						{
							if (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24))
								+ v22
								+ 4))
							{
								v25 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24));
								v26 = sub_140354AA0(a1, *(_DWORD*)(v25 + v22 + 4), v24);
								if (v26 < 0)
								{
									(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24));
									return (unsigned int)v26;
								}
								v27 = (__m128)(*v24)[2].m128_u32[1];
								v28 = (int)v27.m128_f32[0];
								if ((int)v27.m128_f32[0] != 0x80000000 && (float)v28 != v27.m128_f32[0])
									v27.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v27, v27)) & 1) + v28);
								if (v27.m128_f32[0] <= 1.0)
									v27.m128_i32[0] = 1065353216;
								(*v24)[2].m128_i32[1] = v27.m128_i32[0];
							}
							v22 += 4i64;
							++v24;
						} while (v22 < 0x10);
						if (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24))
							+ 28))
						{
							v29 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24));
							v30 = sub_140354AA0(a1, *(_DWORD*)(v29 + 28), (__m128**)(a1 + 4768));
							if (v30 < 0)
							{
								(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24));
								return (unsigned int)v30;
							}
							v31 = *(_QWORD*)(a1 + 4768);
							v32 = (__m128) * (unsigned int*)(v31 + 36);
							v33 = (int)v32.m128_f32[0];
							if ((int)v32.m128_f32[0] != 0x80000000 && (float)v33 != v32.m128_f32[0])
								v32.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v32, v32)) & 1) + v33);
							if (v32.m128_f32[0] <= 1.0)
								v32.m128_i32[0] = 1065353216;
							*(_DWORD*)(v31 + 36) = v32.m128_i32[0];
						}
						v34 = *(float*)(v23 + 24);
						if (v34 >= 0.0000099999997)
							v35 = 1.0 / v34;
						else
							v35 = 10000.0;
						*(float*)(a1 + 4776) = v35;
						result = sub_140354930(a1, *(_DWORD*)v23, (int**)(a1 + 4808));
						if ((int)result >= 0)
						{
							result = sub_140357140(a1);
							if ((int)result >= 0)
							{
								result = sub_140357300(a1);
								if ((int)result >= 0)
								{
									result = sub_140357620(a1);
									if ((int)result >= 0)
									{
										sub_1407C2990((__int64**)(a1 + 5680), (__int64*)(a1 + 5568), 4);
										SystemInfo.lpMaximumApplicationAddress = sub_14035A150;
										SystemInfo.dwOemId = 20;
										SystemInfo.dwPageSize = 1;
										SystemInfo.lpMinimumApplicationAddress = (LPVOID)a1;
										SystemInfo.dwActiveProcessorMask = 0i64;
										SystemInfo.dwNumberOfProcessors = 1;
										result = sub_14019DCA0((__int64)&SystemInfo, 1, 0i64, (int**)(a1 + 6176));
										if ((int)result >= 0)
										{
											SystemInfo.dwOemId = 20;
											SystemInfo.lpMaximumApplicationAddress = sub_14035AC20;
											SystemInfo.dwPageSize = 1;
											SystemInfo.lpMinimumApplicationAddress = (LPVOID)a1;
											SystemInfo.dwActiveProcessorMask = 0i64;
											SystemInfo.dwNumberOfProcessors = 1;
											result = sub_14019DCA0((__int64)&SystemInfo, 1, 0i64, (int**)(a1 + 6184));
											if ((int)result >= 0)
											{
												SystemInfo.dwOemId = 20;
												SystemInfo.lpMaximumApplicationAddress = sub_14035B0E0;
												SystemInfo.dwPageSize = 1;
												SystemInfo.lpMinimumApplicationAddress = (LPVOID)a1;
												SystemInfo.dwActiveProcessorMask = 0i64;
												SystemInfo.dwNumberOfProcessors = 1;
												result = sub_14019DCA0((__int64)&SystemInfo, 1, 0i64, (int**)(a1 + 6192));
												if ((int)result >= 0)
												{
													SystemInfo.dwOemId = 20;
													SystemInfo.lpMaximumApplicationAddress = sub_14035B910;
													SystemInfo.dwPageSize = 1;
													SystemInfo.lpMinimumApplicationAddress = (LPVOID)a1;
													SystemInfo.dwActiveProcessorMask = 0i64;
													SystemInfo.dwNumberOfProcessors = 1;
													result = sub_14019DCA0((__int64)&SystemInfo, 1, 0i64, (int**)(a1 + 6200));
													if ((int)result >= 0)
													{
														SystemInfo.dwOemId = 20;
														SystemInfo.lpMaximumApplicationAddress = sub_14035B640;
														SystemInfo.dwPageSize = 1;
														SystemInfo.lpMinimumApplicationAddress = (LPVOID)a1;
														SystemInfo.dwActiveProcessorMask = 0i64;
														SystemInfo.dwNumberOfProcessors = 1;
														result = sub_14019DCA0((__int64)&SystemInfo, 1, 0i64, (int**)(a1 + 6208));
														if ((int)result >= 0)
														{
															SystemInfo.dwOemId = 20;
															SystemInfo.lpMaximumApplicationAddress = sub_14035BC40;
															SystemInfo.dwPageSize = 1;
															SystemInfo.lpMinimumApplicationAddress = (LPVOID)a1;
															SystemInfo.dwActiveProcessorMask = 0i64;
															SystemInfo.dwNumberOfProcessors = 1;
															result = sub_14019DCA0((__int64)&SystemInfo, 1, 0i64, (int**)(a1 + 6216));
															if ((int)result >= 0)
															{
																SystemInfo.dwOemId = 20;
																SystemInfo.lpMaximumApplicationAddress = sub_14035FD40;
																SystemInfo.dwPageSize = 2;
																SystemInfo.lpMinimumApplicationAddress = (LPVOID)a1;
																SystemInfo.dwActiveProcessorMask = 0i64;
																SystemInfo.dwNumberOfProcessors = 1;
																result = sub_14019DCA0((__int64)&SystemInfo, 1, 0i64, (int**)(a1 + 6224));
																if ((int)result >= 0)
																{
																	SystemInfo.dwOemId = 20;
																	SystemInfo.lpMaximumApplicationAddress = sub_1403610F0;
																	SystemInfo.dwPageSize = 2;
																	SystemInfo.lpMinimumApplicationAddress = (LPVOID)a1;
																	SystemInfo.dwActiveProcessorMask = 0i64;
																	SystemInfo.dwNumberOfProcessors = 1;
																	result = sub_14019DCA0((__int64)&SystemInfo, 1, 0i64, (int**)(a1 + 6232));
																	if ((int)result >= 0)
																	{
																		*(_DWORD*)(a1 + 848) = 0;
																		*(_OWORD*)(a1 + 864) = 0i64;
																		*(_QWORD*)(a1 + 2180) = qword_140C77760;
																		*(_QWORD*)(a1 + 2204) = qword_140C77760;
																		*(_QWORD*)(a1 + 2188) = qword_140C784C0;
																		*(_QWORD*)(a1 + 2196) = qword_140C784C8;
																		*(_QWORD*)(a1 + 2256) = qword_140C784C0;
																		*(_QWORD*)(a1 + 2264) = qword_140C784C8;
																		*(_QWORD*)(a1 + 2400) = qword_140C77760;
																		*(_QWORD*)(a1 + 2424) = qword_140C77760;
																		*(_QWORD*)(a1 + 2408) = qword_140C784C0;
																		*(_QWORD*)(a1 + 2416) = qword_140C784C8;
																		*(_QWORD*)(a1 + 2432) = qword_140C784C0;
																		*(_QWORD*)(a1 + 2440) = qword_140C784C8;
																		*(_QWORD*)(a1 + 2496) = qword_140C784C0;
																		*(_QWORD*)(a1 + 2504) = qword_140C784C8;
																		*(_DWORD*)(a1 + 1608) = 0;
																		*(_DWORD*)(a1 + 956) = 0;
																		GetSystemInfo(&SystemInfo);
																		dwNumberOfProcessors = SystemInfo.dwNumberOfProcessors;
																		if (SystemInfo.dwNumberOfProcessors > 4)
																			dwNumberOfProcessors = 4;
																		if (dwNumberOfProcessors)
																		{
																			v37 = (_QWORD*)(a1 + 2544);
																			v38 = (_QWORD*)(a1 + 2552);
																			v39 = dwNumberOfProcessors;
																			do
																			{
																				v40 = sub_14018B280(1328i64, 0);
																				if (v40)
																					v41 = sub_140354300(v40);
																				else
																					v41 = 0i64;
																				if (!v41[162])
																				{
																					v41[162] = v37;
																					v41[163] = *v37;
																					*v37 = v41;
																					v42 = v41[163];
																					if (v42)
																						*(_QWORD*)(v42 + 1296) = v41 + 163;
																				}
																				if (!v41[164])
																				{
																					v41[164] = v38;
																					v41[165] = *v38;
																					*v38 = v41;
																					v43 = v41[165];
																					if (v43)
																						*(_QWORD*)(v43 + 1312) = v41 + 165;
																				}
																				--v39;
																			} while (v39);
																		}
																		*(_QWORD*)&v44 = (unsigned int)dword_140C3B438;
																		*(_DWORD*)(a1 + 1908) = *(_DWORD*)(a1 + 160);
																		*(_DWORD*)(a1 + 1912) = *(_DWORD*)(a1 + 164);
																		*(float*)&v44 = (float)(*(float*)&v44 * 0.0055555557) * 60.0;
																		v45 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
																		*(float*)(a1 + 1916) = (float)(sub_1408FE3D0(v44) * 2.0)
																			/ (float)*(int*)(v45 + 12);
																		*(_QWORD*)(a1 + 1612) = 0x447A00003DCCCCCDi64;
																		result = 0i64;
																		*(_QWORD*)(a1 + 2160) = 0i64;
																		*(_QWORD*)(a1 + 2168) = 0i64;
																		*(_DWORD*)(a1 + 2176) = 0;
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
// 1403537E6: variable 'v11' is possibly undefined
// 140353BA3: variable 'v21' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C3B438: using guessed type int dword_140C3B438;
// 140C43EC8: using guessed type int dword_140C43EC8;
// 140C43ECC: using guessed type int dword_140C43ECC;
// 140C43ED0: using guessed type int dword_140C43ED0;
// 140C43ED4: using guessed type int dword_140C43ED4;
// 140C43ED8: using guessed type int dword_140C43ED8;
// 140C43EDC: using guessed type int dword_140C43EDC;
// 140C43EE0: using guessed type int dword_140C43EE0;
// 140C43EE4: using guessed type int dword_140C43EE4;
// 140C43EE8: using guessed type int dword_140C43EE8;
// 140C43EEC: using guessed type int dword_140C43EEC;
// 140C43EF0: using guessed type int dword_140C43EF0;
// 140C43EF4: using guessed type int dword_140C43EF4;
// 140C43EF8: using guessed type int dword_140C43EF8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;
// 140353720: using guessed type int var_90[4];

