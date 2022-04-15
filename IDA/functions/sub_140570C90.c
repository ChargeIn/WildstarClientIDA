#include "../winhttp.h"

//----- (0000000140570C90) ----------------------------------------------------
__int64 __fastcall sub_140570C90(__int64 a1, __int64 a2, int a3, __int64* a4)
{
	__int64 v4; // rsi
	int v8; // eax
	__int64 v9; // r13
	_QWORD* v10; // rcx
	_QWORD* v11; // rbx
	unsigned int* v12; // r14
	__int64 v13; // rax
	__int64 v14; // rcx
	int v15; // r8d
	__int64 v16; // rax
	_QWORD** v17; // rsi
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v23; // rcx
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rsi
	__int64 v27; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v30; // rcx
	__int64 v31; // rbx
	unsigned int* v32; // r14
	__int64 v33; // rax
	__int64 v34; // rsi
	__int64 v35; // rax
	__int64 n; // rax
	__int64 ii; // rax
	__int64 v39; // [rsp+30h] [rbp-50h]
	__int64 v40; // [rsp+38h] [rbp-48h]
	__int64 v41[2]; // [rsp+40h] [rbp-40h] BYREF
	__int64 v42[2]; // [rsp+50h] [rbp-30h] BYREF
	_QWORD v43[2]; // [rsp+60h] [rbp-20h] BYREF
	__int64 v44; // [rsp+70h] [rbp-10h] BYREF
	__int64 v45; // [rsp+78h] [rbp-8h]
	__int64 v46; // [rsp+B0h] [rbp+30h] BYREF

	v46 = a1;
	v4 = qword_140C65970;
	v39 = qword_140C65970;
	if (qword_140C65970)
	{
		if (*(_DWORD*)(qword_140C65970 + 8) == 2)
		{
			v40 = *(_QWORD*)(qword_140C65898 + 120);
			if (v40)
			{
				if (a2 && *(_QWORD*)(a2 + 24))
				{
					v8 = dword_140C4D460;
					if (*(_DWORD*)qword_140C63750 < dword_140C4D460)
						v8 = *(_DWORD*)qword_140C63750;
					v9 = sub_1402215C0(*((_DWORD*)&xmmword_140C4D470 + v8));
					if (v9)
					{
						v10 = *(_QWORD**)(*(_QWORD*)(a2 + 24) + 384i64);
						v11 = (_QWORD*)v10[2];
						if (v11 != v10)
						{
							do
							{
								v12 = (unsigned int*)v11[4];
								if (v12)
								{
									if (*(_DWORD*)(a2 + 14164))
									{
										v13 = *(_QWORD*)(a2 + 24);
										if (v13)
										{
											if ((*(_QWORD*)(v13 + 392) || *(_QWORD*)(v13 + 456))
												&& (*(_DWORD*)(a2 + 14160) & 2) == 0
												&& (unsigned int)sub_140574B70(v40, a2, v11[4]))
											{
												if (a4)
												{
													v41[1] = 0i64;
													v41[0] = 1i64;
													sub_140573D10(a4, v41);
												}
												if (a3)
												{
													*(_BYTE*)(a2 + 12900) = 1;
													*(_BYTE*)(a2 + 12903) = 1;
												}
											}
										}
									}
								}
								v14 = *(_QWORD*)(v4 + 88);
								if (v14)
								{
									v15 = 2;
									if (v12[12])
										v15 = 14;
									v16 = sub_140572E80(v14, *v12, v15);
									v17 = (_QWORD**)v16;
									if (v16
										&& !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v16 + 56i64))(v16)
										&& sub_140573DC0(a2, v40, (__int64)v12, (__int64)v17))
									{
										if (a4)
										{
											v42[0] = 0i64;
											v42[1] = (__int64)v17;
											sub_140573D10(a4, v42);
										}
										if (a3)
										{
											*(_BYTE*)(a2 + 12828) = 1;
											*(_BYTE*)(a2 + 12831) = 1;
										}
									}
									if ((unsigned int)sub_140573E90(a2, v40, v12, v17, &v46, *(_DWORD*)(v9 + 60) & 1))
									{
										if (a4)
										{
											v43[1] = 0i64;
											LODWORD(v43[0]) = 2;
											HIDWORD(v43[0]) = v46;
											sub_140573D10(a4, v43);
										}
										if (a3)
										{
											v18 = 9i64 * (90 - (v17 != 0i64));
											*(_BYTE*)(a2 + 8 * v18 + 6420) = 1;
											*(_BYTE*)(a2 + 8 * v18 + 6423) = 1;
										}
									}
									if (sub_1405740B0(a2, v40, v12, (__int64)v17))
									{
										if (a4)
										{
											v45 = 0i64;
											v44 = 6i64;
											sub_140573D10(a4, &v44);
										}
										if (a3)
										{
											v19 = 9i64 * (90 - (v17 != 0i64));
											*(_BYTE*)(a2 + 8 * v19 + 6420) = 1;
											*(_BYTE*)(a2 + 8 * v19 + 6423) = 1;
										}
									}
									v4 = v39;
								}
								v20 = v11[3];
								if (v20)
								{
									v11 = (_QWORD*)v11[3];
									for (i = *(_QWORD**)(v20 + 16); i; i = (_QWORD*)i[2])
										v11 = i;
								}
								else
								{
									for (j = v11[1]; v11 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
										v11 = (_QWORD*)j;
									if (v11[3] != j)
										v11 = (_QWORD*)j;
								}
							} while (v11 != *(_QWORD**)(*(_QWORD*)(a2 + 24) + 384i64));
						}
						if (*(_QWORD*)(v4 + 88))
						{
							v23 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 416i64);
							v24 = *(_QWORD*)(v23 + 16);
							if (v24 != v23)
							{
								do
								{
									v25 = sub_140572E80(*(_QWORD*)(v4 + 88), **(_DWORD**)(v24 + 32), 20);
									v26 = v25;
									if (v25 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v25 + 56i64))(v25))
									{
										if (a4)
										{
											v44 = 3i64;
											v45 = v26;
											sub_140573D10(a4, &v44);
										}
										if (a3)
											*(_BYTE*)(a2 + 12828) = 1;
									}
									v27 = *(_QWORD*)(v24 + 24);
									if (v27)
									{
										v24 = *(_QWORD*)(v24 + 24);
										for (k = *(_QWORD*)(v27 + 16); k; k = *(_QWORD*)(k + 16))
											v24 = k;
									}
									else
									{
										for (m = *(_QWORD*)(v24 + 8); v24 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
											v24 = m;
										if (*(_QWORD*)(v24 + 24) != m)
											v24 = m;
									}
									v4 = v39;
								} while (v24 != *(_QWORD*)(*(_QWORD*)(a2 + 24) + 416i64));
							}
							v30 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 448i64);
							v31 = *(_QWORD*)(v30 + 16);
							if (v31 != v30)
							{
								do
								{
									v32 = *(unsigned int**)(v31 + 32);
									v33 = sub_140572E80(*(_QWORD*)(v4 + 88), *v32, 23);
									v34 = v33;
									if (v33
										&& !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v33 + 56i64))(v33)
										&& sub_140574160(a2, v40, (__int64)v32, v34, *(_DWORD*)(v31 + 40)))
									{
										if (a4)
										{
											v44 = 4i64;
											v45 = v34;
											sub_140573D10(a4, &v44);
										}
										if (a3)
										{
											*(_BYTE*)(a2 + 12828) = 1;
											*(_BYTE*)(a2 + 12831) = 1;
										}
									}
									v35 = *(_QWORD*)(v31 + 24);
									if (v35)
									{
										v31 = *(_QWORD*)(v31 + 24);
										for (n = *(_QWORD*)(v35 + 16); n; n = *(_QWORD*)(n + 16))
											v31 = n;
									}
									else
									{
										for (ii = *(_QWORD*)(v31 + 8); v31 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
											v31 = ii;
										if (*(_QWORD*)(v31 + 24) != ii)
											v31 = ii;
									}
									v4 = v39;
								} while (v31 != *(_QWORD*)(*(_QWORD*)(a2 + 24) + 448i64));
							}
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C4D460: using guessed type int dword_140C4D460;
// 140C4D470: using guessed type __int128 xmmword_140C4D470;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

