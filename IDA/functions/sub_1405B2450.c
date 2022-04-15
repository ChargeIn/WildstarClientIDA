#include "../winhttp.h"

//----- (00000001405B2450) ----------------------------------------------------
__int64 __fastcall sub_1405B2450(__m128* a1)
{
	int v2; // r9d
	__int64 result; // rax
	__int64 v4; // rdx
	__int64* v5; // rcx
	__int64* v6; // r8
	__int64* v7; // r14
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v11; // rcx
	__int64* v12; // rdx
	__int64* v13; // r8
	__int64 v14; // rax
	__int64 v15; // r13
	__int64 v16; // rax
	__int64 v17; // rdx
	__int64 v18; // r12
	__int64 v19; // r15
	unsigned int v20; // esi
	__int64 v21; // rdi
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // r8
	__int64* v25; // r14
	__int64 v26; // rdi
	__int64 v27; // rax
	__int64 v28; // r10
	__int64 v29; // r11
	__int64 v30; // rcx
	__int64 v31; // rax
	__m128 v32; // xmm0
	__m128 v33; // xmm2
	__m128 v34; // xmm3
	__int64 v35; // rax
	__m128i v36; // xmm3
	__int64* v37; // [rsp+30h] [rbp-D0h]
	unsigned __int64 v38; // [rsp+38h] [rbp-C8h]
	__int64 v39[3]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v40; // [rsp+58h] [rbp-A8h]
	__m128* v41; // [rsp+60h] [rbp-A0h]
	__int64 v42; // [rsp+68h] [rbp-98h]
	unsigned __int64 v43; // [rsp+70h] [rbp-90h]
	__int64 v44; // [rsp+78h] [rbp-88h]
	__int128 v45; // [rsp+80h] [rbp-80h]
	__m128 v46[3]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v47; // [rsp+C0h] [rbp-40h]
	int v48; // [rsp+C8h] [rbp-38h]
	char v49[64]; // [rsp+D0h] [rbp-30h] BYREF
	int v50[14]; // [rsp+110h] [rbp+10h] BYREF
	int v51[14]; // [rsp+148h] [rbp+48h] BYREF
	__m128* v52[2]; // [rsp+180h] [rbp+80h] BYREF
	__m128 v53[4]; // [rsp+190h] [rbp+90h] BYREF
	__int128 v54[6]; // [rsp+1D0h] [rbp+D0h] BYREF

	v2 = *(_DWORD*)(a1[18].m128_u64[1] + 20);
	result = qword_140C659F0;
	v4 = *(_QWORD*)(qword_140C659F0 + 824);
	v5 = *(__int64**)(v4 + 16);
	v6 = *(__int64**)(v4 + 24);
	if (v5 != v6)
	{
		while (1)
		{
			result = *v5;
			if (*(_DWORD*)(*v5 + 188) == v2)
				break;
			if (++v5 == v6)
				return result;
		}
		if (result)
		{
			v7 = *(__int64**)(result + 280);
			v37 = v7;
			if (v7)
			{
				result = (*(__int64(__fastcall**)(__int64*))(*v7 + 344))(v7);
				if (result)
				{
					v8 = (*(__int64(__fastcall**)(__int64*))(*v7 + 344))(v7);
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8);
					if (result)
					{
						v9 = (*(__int64(__fastcall**)(__int64*))(*v7 + 344))(v7);
						result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
						if (*(_DWORD*)(result + 208))
						{
							if (a1[7].m128_i32[0])
							{
								v10 = *(unsigned int*)(a1[18].m128_u64[1] + 20);
								v11 = *(_QWORD*)(qword_140C659F0 + 824);
								v12 = *(__int64**)(v11 + 16);
								v13 = *(__int64**)(v11 + 24);
								if (v12 == v13)
								{
								LABEL_14:
									v15 = 0i64;
								LABEL_15:
									v16 = (*(__int64(__fastcall**)(__int64*, __int64*, __int64*, __int64))(*v7 + 344))(
										v7,
										v12,
										v13,
										v10);
									v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 24i64))(v16);
									v40 = v17;
									result = a1[7].m128_u32[0];
									if ((unsigned int)result < *(_DWORD*)(v17 + 208))
									{
										v18 = *(_QWORD*)(v17 + 216);
										v19 = (unsigned int)result;
										result = *(unsigned int*)(v18 + 8 * result + 4);
										if (a1[7].m128_i32[1] < (unsigned int)result)
										{
											v20 = *(_DWORD*)(v18 + 8 * v19);
											for (result = v20 + (unsigned int)result;
												v20 < (unsigned int)result;
												result = (unsigned int)(*(_DWORD*)(v18 + 8 * v19) + *(_DWORD*)(v18 + 8 * v19 + 4)))
											{
												v21 = *(_QWORD*)(v17 + 200)
													+ 56i64 * *(unsigned __int16*)(*(_QWORD*)(v17 + 232) + 2i64 * v20);
												if (sub_140203520(a1[6].m128_u32[3]))
												{
													v22 = a1[7].m128_u32[2];
													LODWORD(v43) = 1065353216;
													v44 = 0i64;
													v54[0] = v43;
													*((_QWORD*)&v45 + 1) = *(_QWORD*)(v21 + 32) + 48 * v22;
													*(_QWORD*)&v45 = *((_QWORD*)&v45 + 1) + 32i64;
													v54[1] = v45;
													sub_1401B0590((int*)v54, (__int64)v49);
													v39[1] = (__int64)&a1[34];
													v39[2] = (__int64)v49;
													v23 = *v7;
													v52[0] = a1 + 34;
													v52[1] = (__m128*)v49;
													(*(void(__fastcall**)(__int64*))(v23 + 56))(v7);
													sub_1401AFB10(v52, v53);
													v42 = v24;
													*((_QWORD*)&v54[0] + 1) = v24;
													v41 = v53;
													*(_QWORD*)&v54[0] = v53;
													sub_1401AFB10((__m128**)v54, v46);
													v25 = (__int64*)&a1[53];
													v38 = a1[38].m128_u64[1];
													if (v20 == *(_DWORD*)(v18 + 8 * v19))
													{
														v26 = *(_QWORD*)(v15 + 16) & 0xFFFFFFFFFFFFFFFi64;
													}
													else
													{
														v25 = &a1[53].m128_i64[1];
														v38 = a1[38].m128_u64[0];
														v26 = *(_QWORD*)(v15 + 16) & 0xFFFFFFFFFFFFFFFi64 | 0x8000000000000000ui64;
													}
													v39[0] = v26;
													v27 = sub_1404C2740((__int64)a1);
													if ((*(int(__fastcall**)(__int64, __m128*, unsigned __int64, __int64*, __int64*, __int64))(v28 + 200))(
														v29,
														v46,
														v38,
														v39,
														v25,
														v27) >= 0)
													{
														sub_1404C7FF0(a1[18].m128_i64[1], *v25, (__int64)a1);
														sub_1405B2DB0(v30, *v25, (__int64)a1);
													}
													v31 = sub_140203DA0(a1[6].m128_u32[0]);
													if (v31 && *(_DWORD*)(v31 + 32))
													{
														sub_1407E4830(v51, 0i64, 0x34ui64);
														sub_1407E4830(v50, 0i64, 0x34ui64);
														if ((unsigned int)sub_1405B2B50((__int64)a1, (float*)v51, (float*)v50))
														{
															if (v20 == *(_DWORD*)(v18 + 8 * v19))
															{
																v32 = (__m128)(unsigned int)v50[5];
																v33 = (__m128)(unsigned int)v50[4];
																v34 = (__m128)(unsigned int)v50[3];
															}
															else
															{
																v32 = (__m128)(unsigned int)v51[5];
																v33 = (__m128)(unsigned int)v51[4];
																v34 = (__m128)(unsigned int)v51[3];
															}
															v36 = (__m128i)_mm_unpacklo_ps(
																_mm_unpacklo_ps(v34, v32),
																_mm_unpacklo_ps(v33, (__m128)0i64));
															v47 = v36.m128i_i64[0];
															v48 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 8));
														}
														sub_1405AE580(v15, v26, a1[6].m128_u32[0], v46, 0);
													}
													v7 = v37;
												}
												v17 = v40;
												++v20;
											}
										}
									}
									return result;
								}
								while (1)
								{
									v14 = *v12;
									if (*(_DWORD*)(*v12 + 188) == (_DWORD)v10)
										break;
									if (++v12 == v13)
										goto LABEL_14;
								}
								v15 = *v12;
								if (!v14)
									goto LABEL_15;
								v35 = sub_1402074E0(*(_DWORD*)(v14 + 68));
								if (!v35)
									goto LABEL_15;
								result = sub_140203DA0(*(_DWORD*)(v35 + 12));
								if (result)
								{
									result = *(unsigned int*)(result + 8);
									if (a1[7].m128_i32[0] == (_DWORD)result)
										goto LABEL_15;
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
// 1405B2592: variable 'v12' is possibly undefined
// 1405B2592: variable 'v13' is possibly undefined
// 1405B2592: variable 'v10' is possibly undefined
// 1405B26D3: variable 'v24' is possibly undefined
// 1405B2792: variable 'v28' is possibly undefined
// 1405B2792: variable 'v29' is possibly undefined
// 1405B27B5: variable 'v30' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 1405B2450: using guessed type __m128 var_D0[4];
// 1405B2450: using guessed type __m128 var_1D0[3];

