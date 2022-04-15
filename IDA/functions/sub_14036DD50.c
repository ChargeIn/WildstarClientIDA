#include "../winhttp.h"

//----- (000000014036DD50) ----------------------------------------------------
__int64 __fastcall sub_14036DD50(__int64 a1)
{
	__int64 result; // rax
	int v3; // eax
	int v4; // eax
	unsigned __int64 i; // rsi
	__int64 v6; // rcx
	__int64 v7; // rbx
	int v8; // eax
	float v9; // xmm2_4
	int v10; // ecx
	int v11; // eax
	float v12; // xmm0_4
	float v13; // xmm1_4
	__m128* v14; // rbx
	unsigned __int64* v15; // rsi
	double v16; // xmm8_8
	_QWORD* v17; // rsi
	int v18; // r15d
	unsigned __int64 v19; // rbx
	int v20; // eax
	__int64 j; // rbx
	__m128* v22; // rcx
	__int64 v23; // rdx
	int v24; // r9d
	__int64 v25; // rdx
	unsigned int v26; // r10d
	__m128 v27; // xmm7
	__m128 v28; // xmm6
	__int64 v29; // r8
	__m128* v30; // rcx
	__m128 v31; // xmm7
	__m128 v32; // xmm6
	__int64 k; // rbx
	__int64 v34; // rdx
	__int64 v35; // rcx
	__int64 v36; // rdx
	__int64 v37; // rcx
	__int64 v38; // rbx
	HANDLE EventW; // rcx
	__m128 v40; // [rsp+20h] [rbp-E0h]
	__m128 v41; // [rsp+30h] [rbp-D0h]
	int v42; // [rsp+40h] [rbp-C0h] BYREF
	LONGLONG v43; // [rsp+48h] [rbp-B8h]
	__m128 v44; // [rsp+50h] [rbp-B0h]
	__m128 v45; // [rsp+60h] [rbp-A0h]
	__m128 v46; // [rsp+70h] [rbp-90h]
	__m128 v47; // [rsp+80h] [rbp-80h]
	__m128 v48; // [rsp+90h] [rbp-70h]
	__m128 v49; // [rsp+A0h] [rbp-60h]
	__int128 v50; // [rsp+B0h] [rbp-50h]
	__m128 v51; // [rsp+C0h] [rbp-40h]
	__m128 v52; // [rsp+D0h] [rbp-30h]
	__int64 v53; // [rsp+140h] [rbp+40h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+148h] [rbp+48h] BYREF

	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 48i64))(
		*(_QWORD*)(a1 + 40),
		*(unsigned int*)(a1 + 880),
		0i64);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 64i64))(
			*(_QWORD*)(a1 + 40),
			*(unsigned int*)(a1 + 896));
		if ((int)result >= 0)
		{
			if (*(_DWORD*)(a1 + 888))
			{
				v3 = *(_DWORD*)(a1 + 880) - *(_DWORD*)(a1 + 884);
				if (v3 < 0)
					*(_DWORD*)(a1 + 892) = 0;
				else
					*(float*)(a1 + 892) = (float)v3 * 0.001;
			}
			v4 = *(_DWORD*)(a1 + 880);
			*(_DWORD*)(a1 + 888) = 1;
			*(_DWORD*)(a1 + 884) = v4;
			sub_140198620();
			for (i = 0i64; i < *(_QWORD*)(a1 + 2128); ++i)
			{
				v6 = *(_QWORD*)(*(_QWORD*)(a1 + 2136) + 8 * i);
				if (v6)
				{
					do
					{
						v7 = *(_QWORD*)(v6 + 8);
						sub_140375590(*(__m128**)(v6 + 24));
						v6 = v7;
					} while (v7);
				}
			}
			result = sub_1403724F0(a1 + 2656, a1, *(_QWORD*)(a1 + 2560));
			if ((int)result >= 0)
			{
				result = sub_1403724F0(a1 + 2688, a1, *(_QWORD*)(a1 + 2568));
				if ((int)result >= 0)
				{
					if ((*(_DWORD*)(a1 + 128) & 0x800000) != 0)
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2560) + 40i64))(*(_QWORD*)(a1 + 2560));
					result = sub_140356560(a1, 0);
					if ((int)result >= 0)
					{
						v8 = *(_DWORD*)(a1 + 128);
						if ((v8 & 1) != 0)
						{
							v42 = (v8 & 0x800000) != 0 ? 0x14 : 0;
							if (v42)
							{
								QueryPerformanceCounter(&PerformanceCount);
								v43 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
							}
							(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 152i64))(a1, &v42);
						}
						result = sub_140356160((_QWORD*)a1);
						if ((int)result >= 0)
						{
							result = sub_140356330(a1);
							if ((int)result >= 0)
							{
								result = sub_140356A30((__m128*)a1);
								if ((int)result >= 0)
								{
									if ((*(_BYTE*)(a1 + 128) & 0x10) == 0)
									{
									LABEL_40:
										*(_QWORD*)&v16 = *(unsigned int*)(a1 + 892);
										if (*(float*)&v16 >= 0.050000001)
											*(_QWORD*)&v16 = 1028443341i64;
										sub_14003D8F0(&v53, a1 + 4992);
										sub_1403705B0((__int64*)(a1 + 4848), *(int**)(a1 + 4960), *(_QWORD*)(a1 + 4968));
										*(_QWORD*)(a1 + 4968) = 0i64;
										v17 = (_QWORD*)(a1 + 4864);
										sub_1403705B0((__int64*)(a1 + 4864), *(int**)(a1 + 4976), *(_QWORD*)(a1 + 4984));
										v18 = 1;
										v19 = 0i64;
										do
										{
											if (v19 >= *(_QWORD*)(a1 + 4984))
												break;
											v20 = sub_14036FA60((__m128*)(a1 + 4880), *(float**)(*(_QWORD*)(a1 + 4976) + 8 * v19++));
											v18 = v20;
										} while (v20);
										*(_QWORD*)(a1 + 4984) = 0i64;
										for (j = *(_QWORD*)(a1 + 4856) - 1i64; j >= 0; --j)
										{
											v22 = *(__m128**)(*(_QWORD*)(a1 + 4848) + 8 * j);
											if ((unsigned int)(v22[3].m128_i32[0] + v22[9].m128_i32[2]) > *(_DWORD*)(a1 + 880))
											{
												sub_140391C30(v22, v16);
											}
											else
											{
												if (v22)
													sub_140369200((__int64)v22);
												v23 = *(_QWORD*)(a1 + 4856);
												if (j != v23 - 1)
													*(_QWORD*)(*(_QWORD*)(a1 + 4848) + 8 * j) = *(_QWORD*)(*(_QWORD*)(a1 + 4848) + 8 * v23 - 8);
												sub_14004EED0((__int64*)(a1 + 4848), *(_QWORD*)(a1 + 4856) - 1i64);
											}
										}
										if (!v18)
										{
											v24 = 0;
											v25 = *(_QWORD*)(a1 + 4872) - 1i64;
											if (v25 < 0)
												goto LABEL_64;
											v26 = *(_DWORD*)(a1 + 880);
											v27 = v41;
											v28 = v40;
											v29 = *v17 + 8 * v25;
											do
											{
												v30 = *(__m128**)v29;
												if (*(_DWORD*)(*(_QWORD*)v29 + 48i64) + *(_DWORD*)(*(_QWORD*)v29 + 152i64) > v26)
												{
													if (v24)
													{
														v27 = _mm_max_ps(v27, v30[6]);
														v28 = _mm_min_ps(v28, v30[5]);
														v47 = v27;
														v46 = v28;
														v48 = v28;
														v49 = v27;
													}
													else
													{
														v28 = v30[5];
														v27 = v30[6];
														v24 = 1;
													}
												}
												v29 -= 8i64;
												--v25;
											} while (v25 >= 0);
											if (v24)
											{
												v50 = xmmword_140B7B460;
												v31 = _mm_add_ps(v27, (__m128)xmmword_140B7B460);
												v32 = _mm_sub_ps(v28, (__m128)xmmword_140B7B460);
												v44 = v31;
												v45 = v32;
												v51 = v32;
												v52 = v31;
											}
											else
											{
											LABEL_64:
												v32 = (__m128)xmmword_140C784E0;
												v31 = (__m128)xmmword_140C784F0;
											}
											sub_14036F9F0(a1 + 4880);
											*(__m128*)(a1 + 4896) = v32;
											*(__m128*)(a1 + 4912) = v31;
											*(_DWORD*)(a1 + 4880) = 6;
										}
										for (k = *(_QWORD*)(a1 + 4872) - 1i64; k >= 0; --k)
										{
											v34 = *(_QWORD*)(*v17 + 8 * k);
											if ((unsigned int)(*(_DWORD*)(v34 + 48) + *(_DWORD*)(v34 + 152)) > *(_DWORD*)(a1 + 880))
											{
												if (!v18)
													sub_14036FA60((__m128*)(a1 + 4880), (float*)v34);
												sub_140391C30(*(__m128**)(*v17 + 8 * k), v16);
											}
											else
											{
												if (v18)
													sub_14036FBB0((__m128*)(a1 + 4880), v34);
												v35 = *(_QWORD*)(*v17 + 8 * k);
												if (v35)
													sub_140369200(v35);
												v36 = *(_QWORD*)(a1 + 4872);
												if (k != v36 - 1)
													*(_QWORD*)(*v17 + 8 * k) = *(_QWORD*)(*v17 + 8 * v36 - 8);
												sub_14004EED0((__int64*)(a1 + 4864), *(_QWORD*)(a1 + 4872) - 1i64);
											}
										}
										v37 = v53;
										if (*(_QWORD*)(v53 + 8) <= 1ui64)
										{
											*(_DWORD*)v53 = 0;
											_InterlockedExchange64((volatile __int64*)(v37 + 8), 0i64);
											if (*(_QWORD*)(v53 + 16))
											{
												v38 = v53;
												if (!*(_QWORD*)(v53 + 24))
												{
													EventW = CreateEventW(0i64, 0, 0, 0i64);
													if (_InterlockedCompareExchange64(
														(volatile signed __int64*)(v38 + 24),
														(signed __int64)EventW,
														0i64))
													{
														CloseHandle(EventW);
													}
												}
												SetEvent(*(HANDLE*)(v38 + 24));
											}
										}
										else
										{
											--* (_QWORD*)(v53 + 8);
										}
										return 0i64;
									}
									v9 = *(float*)(a1 + 4292);
									v10 = *(_DWORD*)qword_140C63750;
									v11 = dword_140C44300;
									if (v9 <= *(float*)(a1 + 4288))
									{
										if (v10 < dword_140C44300)
											v11 = *(_DWORD*)qword_140C63750;
										v13 = *(float*)(a1 + 4288) - (float)(*((float*)&off_140C442F0 + v11 + 8) * *(float*)(a1 + 892));
										*(float*)(a1 + 4288) = v13;
										if (v13 >= v9)
											goto LABEL_33;
									}
									else
									{
										if (v10 < dword_140C44300)
											v11 = *(_DWORD*)qword_140C63750;
										v12 = (float)(*((float*)&off_140C442F0 + v11 + 8) * *(float*)(a1 + 892)) + *(float*)(a1 + 4288);
										*(float*)(a1 + 4288) = v12;
										if (v12 <= v9)
											goto LABEL_33;
									}
									*(float*)(a1 + 4288) = v9;
								LABEL_33:
									v14 = *(__m128**)(a1 + 4832);
									while (v14)
									{
										if (*(_DWORD*)(v14->m128_u64[0] + 880) < (unsigned int)(v14[1].m128_i32[2] + v14[9].m128_i32[0]))
										{
											sub_14037B930(v14);
											v14 = (__m128*)v14[11].m128_u64[1];
										}
										else
										{
											v15 = (unsigned __int64*)v14;
											v14 = (__m128*)v14[11].m128_u64[1];
											sub_14037B140(v15);
											sub_14018B900((__int64)v15, 0);
											--* (_DWORD*)(a1 + 4840);
										}
									}
									goto LABEL_40;
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
// 14036E002: conditional instruction was optimized away because rsi.8!=0
// 14036E183: variable 'v41' is possibly undefined
// 14036E188: variable 'v40' is possibly undefined
// 140B7B460: using guessed type __int128 xmmword_140B7B460;
// 140C442F0: using guessed type __int64 (__fastcall **off_140C442F0)();
// 140C44300: using guessed type int dword_140C44300;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;

