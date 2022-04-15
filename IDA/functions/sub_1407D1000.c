//----- (00000001407D1000) ----------------------------------------------------
__int64 __fastcall sub_1407D1000(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rcx
	unsigned __int64 v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rdx
	__int64 v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v30; // rdx
	__int64 v31; // rax
	unsigned int* v32; // r8
	__int64 v33; // r8

	if (*(_DWORD*)a3 != 1481853785)
		return 2686124033i64;
	if (*(_DWORD*)(a3 + 4) != 16)
		return 2686124034i64;
	result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 24));
	if ((int)result >= 0)
	{
		result = sub_1407D0F30(a1, v7, (unsigned int*)(a3 + 40));
		if ((int)result >= 0)
		{
			result = sub_1407D0F30(a1, a2, (unsigned int*)(a3 + 192));
			if ((int)result >= 0)
			{
				result = sub_1407D0F30(a1, a2, (unsigned int*)(a3 + 344));
				if ((int)result >= 0)
				{
					result = sub_1407D0F30(a1, a2, (unsigned int*)(a3 + 496));
					if ((int)result >= 0)
					{
						result = sub_1407D7800(a1, a2, (unsigned int*)(a3 + 648));
						if ((int)result >= 0)
						{
							result = sub_1407D7770(a1, a2, (unsigned int*)(a3 + 672));
							if ((int)result >= 0)
							{
								result = sub_1407D7800(a1, a2, (unsigned int*)(a3 + 696));
								if ((int)result >= 0)
								{
									result = sub_1407D7890(a1, a2, (unsigned int*)(a3 + 720));
									if ((int)result >= 0)
									{
										result = sub_1407D7920(a1, a2, (unsigned int*)(a3 + 744));
										if ((int)result >= 0)
										{
											result = sub_1407D7A20(a1, a2, (unsigned int*)(a3 + 760));
											if ((int)result >= 0)
											{
												v8 = *(_QWORD*)(a3 + 792);
												v9 = v8 + a2;
												if ((unsigned __int64)(v8 + a2) < *a1)
													return 2147500037i64;
												v10 = *(unsigned int*)(a3 + 784);
												if ((unsigned __int64)(a2 + v8 + 4 * v10) > a1[1])
													return 2147500037i64;
												v11 = 0i64;
												v12 = 0i64;
												if ((_DWORD)v10)
													v12 = v9;
												*(_QWORD*)(a3 + 792) = v12;
												v13 = *(_QWORD*)(a3 + 800);
												v14 = v13 + a2;
												if ((unsigned __int64)(v13 + a2) < *a1 || (unsigned __int64)(a2 + v13 + 4 * v10) > a1[1])
													return 2147500037i64;
												v15 = 0i64;
												if ((_DWORD)v10)
													v15 = v14;
												*(_QWORD*)(a3 + 800) = v15;
												v16 = *(_QWORD*)(a3 + 816);
												v17 = v16 + a2;
												if ((unsigned __int64)(v16 + a2) < *a1)
													return 2147500037i64;
												v18 = *(unsigned int*)(a3 + 808);
												if ((unsigned __int64)(a2 + v16 + 4 * v18) > a1[1])
													return 2147500037i64;
												v19 = 0i64;
												if ((_DWORD)v18)
													v19 = v17;
												*(_QWORD*)(a3 + 816) = v19;
												v20 = *(_QWORD*)(a3 + 824);
												v21 = v20 + a2;
												if ((unsigned __int64)(v20 + a2) < *a1 || (unsigned __int64)(a2 + v20 + 4 * v18) > a1[1])
													return 2147500037i64;
												v22 = 0i64;
												if ((_DWORD)v18)
													v22 = v21;
												*(_QWORD*)(a3 + 824) = v22;
												result = sub_1402D4B30(a1, a2, (unsigned int*)(a3 + 832));
												if ((int)result < 0)
													return result;
												result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 848));
												if ((int)result < 0)
													return result;
												result = sub_1407D7800(a1, v23, (unsigned int*)(a3 + 864));
												if ((int)result < 0)
													return result;
												result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 888));
												if ((int)result < 0)
													return result;
												result = sub_1402CA420(a1, v24, (unsigned int*)(a3 + 904));
												if ((int)result < 0)
													return result;
												v25 = *(_QWORD*)(a3 + 928);
												v26 = v25 + a2;
												if ((unsigned __int64)(v25 + a2) < *a1)
													return 2147500037i64;
												v27 = *(unsigned int*)(a3 + 920);
												if ((unsigned __int64)(a2 + v25 + 4 * v27) > a1[1])
													return 2147500037i64;
												v28 = 0i64;
												if ((_DWORD)v27)
													v28 = v26;
												*(_QWORD*)(a3 + 928) = v28;
												v29 = *(_QWORD*)(a3 + 936);
												v30 = v29 + a2;
												if ((unsigned __int64)(v29 + a2) < *a1 || (unsigned __int64)(a2 + v29 + 4 * v27) > a1[1])
													return 2147500037i64;
												v31 = 0i64;
												if ((_DWORD)v27)
													v31 = v30;
												*(_QWORD*)(a3 + 936) = v31;
												result = sub_1407D7800(a1, a2, (unsigned int*)(a3 + 944));
												if ((int)result >= 0)
												{
													result = sub_1407D7800(a1, a2, (unsigned int*)(a3 + 968));
													if ((int)result >= 0)
													{
														v32 = (unsigned int*)(a3 + 992);
														while (1)
														{
															result = sub_1407D7770(a1, a2, v32);
															if ((int)result < 0)
																break;
															++v11;
															v32 = (unsigned int*)(v33 + 24);
															if (v11 >= 8)
															{
																result = sub_1407D7AB0(a1, a2, (unsigned int*)(a3 + 1184));
																if ((int)result >= 0)
																{
																	result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 1200));
																	if ((int)result >= 0)
																		return 0i64;
																}
																return result;
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
// 1407D104D: variable 'v7' is possibly undefined
// 1407D1258: variable 'v23' is possibly undefined
// 1407D1281: variable 'v24' is possibly undefined
// 1407D1356: variable 'v33' is possibly undefined

