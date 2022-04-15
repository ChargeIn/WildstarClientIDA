#include "../winhttp.h"

//----- (000000014059B7C0) ----------------------------------------------------
__int64 __fastcall sub_14059B7C0(_QWORD* a1)
{
	int* v1; // rax
	int* v2; // r15
	unsigned int v3; // ecx
	unsigned int v4; // ebx
	_DWORD* v5; // r14
	__int64 v6; // rax
	__int64 v7; // rcx
	_DWORD* v8; // rbx
	__int64 v9; // r10
	int v10; // r13d
	int v11; // eax
	__int64 v12; // rbp
	__int64 v13; // r10
	int v14; // r8d
	unsigned int v15; // edi
	__int64 v16; // rax
	int v17; // esi
	int v18; // r9d
	unsigned __int64 v19; // rsi
	int v20; // xmm0_4
	int v21; // ecx
	int* v22; // rax
	int* v23; // rdi
	__int64 v24; // rax
	int v25; // ecx
	_DWORD* i; // rdx
	__int64 v27; // rax
	int v28; // eax
	__int64 v29; // r10
	__int64 v30; // rcx
	__int64 v32; // [rsp+30h] [rbp-58h] BYREF
	int v33; // [rsp+38h] [rbp-50h]
	__m128 v34; // [rsp+40h] [rbp-48h] BYREF

	v1 = sub_140417BF0(a1, 1u);
	v2 = v1;
	if (v1)
	{
		v3 = v1[112];
		if (v3)
		{
			v4 = *(_DWORD*)(qword_140C65898 + 6864);
			v5 = (_DWORD*)sub_140243A00(v3);
			v6 = sub_140245C00(v4);
			v8 = (_DWORD*)v6;
			v9 = v6 ? sub_1405BE150(v7, *(_DWORD*)(v6 + 8)) : 0i64;
			if (v5)
			{
				if (v8)
				{
					if (v9)
					{
						v10 = *(_DWORD*)(v9 + 16);
						if ((v10 & 8) != 0)
						{
							v11 = sub_1405926A0((__int64)v8);
							v12 = qword_140C65898;
							if ((unsigned int)sub_1403A0D20(qword_140C65898, v11))
							{
								v14 = v8[2];
								if (v14 == v5[1])
								{
									v15 = v8[7];
									if (v15 <= *(_DWORD*)(v13 + 12))
									{
										if (v15)
											v16 = v13 + 48i64 * (v15 - 1) + 32;
										else
											v16 = 0i64;
									}
									else
									{
										v16 = 0i64;
									}
									v17 = v8[27];
									if (!v17 && (!v16 || (v17 = *(_DWORD*)(v16 + 28)) == 0))
										v17 = *(_DWORD*)(v13 + 24);
									if (*(_DWORD*)(v12 + 6936) < v17 + (unsigned int)sub_1405E6300(v12 + 5784, 26, v14, v2[81], 0))
									{
										v18 = v5[1];
										v19 = *((_QWORD*)v2 + 6);
										v34 = _mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128)(unsigned int)v5[3], (__m128)0i64),
											_mm_unpacklo_ps((__m128)(unsigned int)v5[4], (__m128)0i64));
										v20 = sub_1405E6230(v12 + 5784, 14, v34.m128_f32, v18).m128_u32[0];
										v21 = v20;
										if (v20 < 0)
											v21 = 0x80000000 - v20;
										if ((int)abs32(v21 - 1065353216) > 84)
											v19 = (unsigned int)(int)(float)((float)(int)v19 * *(float*)&v20);
										if (v19 <= *(_QWORD*)(v12 + 5624))
										{
											if ((v10 & 1) != 0)
												v15 = sub_1405E6300(v12 + 5784, 27, 0, 0, 0) + 1;
											if (v5[2] <= v15)
											{
												v22 = sub_140417BF0(a1, 2u);
												v23 = v22;
												if (!v22)
													goto LABEL_42;
												v24 = sub_140244280(v22[113]);
												if (v24)
												{
													v25 = 0;
													for (i = (_DWORD*)(v24 + 12); (unsigned int)(*i - 1) > 8 && *i != 14; ++i)
													{
														if ((unsigned int)++v25 >= 5)
															return 0i64;
													}
													v27 = sub_140244280(v23[113]);
													if (v27)
													{
														if (v8[2] == *(_DWORD*)(v27 + 4)
															&& v8[7] == *(_DWORD*)(v27 + 8)
															&& (unsigned int)(*(_DWORD*)(qword_140C65898 + 6936) + 1) < 5)
														{
														LABEL_42:
															v33 = 0;
															v28 = sub_1405926A0((__int64)v8);
															v32 = (unsigned int)sub_1403A0D20(v29, v28);
															HIDWORD(v32) = *v2;
															if (v23)
																v33 = *v23;
															else
																v33 = 0;
															sub_1403F4900(v30, 0x84Au, (__int64)&v32);
														}
													}
												}
											}
										}
									}
									else
									{
										sub_1403CC530(v12, 0x55u);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 14059B826: variable 'v7' is possibly undefined
// 14059B8A7: variable 'v13' is possibly undefined
// 14059BAAB: variable 'v29' is possibly undefined
// 14059BADA: variable 'v30' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

