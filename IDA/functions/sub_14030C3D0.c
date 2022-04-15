#include "../winhttp.h"

//----- (000000014030C3D0) ----------------------------------------------------
__int64 __fastcall sub_14030C3D0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v6; // r8
	__int64 result; // rax
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rbp
	unsigned int v12; // ebx
	__int64 v13; // rbx
	__int64 v14; // rbx
	__int64 v15; // rbx
	unsigned int v16; // r9d
	_QWORD* v17; // rcx
	__int64 v18; // rax
	__int64 v19; // r8
	__int64 v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rax
	unsigned int v23; // r9d
	_QWORD* v24; // rcx
	__int64 v25; // rax
	__int64 v26; // r8
	__int64 v27; // rdx
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v30; // rdx
	__int64 v31; // rdx
	__int64 v32; // rdx
	__int64 v33; // rdx

	v4 = *(_QWORD*)(a3 + 16);
	v6 = v4 + a2;
	if ((unsigned __int64)(v4 + a2) < *a1)
		return 2147500037i64;
	v9 = *(unsigned int*)(a3 + 8);
	if ((unsigned __int64)(a2 + v4 + 12 * v9) > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	if ((_DWORD)v9)
		v10 = v6;
	*(_QWORD*)(a3 + 16) = v10;
	result = sub_14030EBF0(a1, a2, (unsigned int*)(a3 + 48));
	if ((int)result >= 0)
	{
		v11 = 0i64;
	LABEL_8:
		v12 = 0;
		while (1)
		{
			result = sub_1402CA3C0(a1, a2, (unsigned int*)(a3 + 8 * (3 * (5 * v11 + v12) + 10)));
			if ((int)result < 0)
				break;
			if (++v12 >= 5)
			{
				v11 = (unsigned int)(v11 + 1);
				if ((unsigned int)v11 < 2)
					goto LABEL_8;
				v13 = 0i64;
				while (1)
				{
					result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 8 * (v13 + 2 * (v13 + 20))));
					if ((int)result < 0)
						break;
					v13 = (unsigned int)(v13 + 1);
					if ((unsigned int)v13 >= 5)
					{
						v14 = 0i64;
						while (1)
						{
							result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 8 * (v14 + 2 * (v14 + 28))));
							if ((int)result < 0)
								break;
							v14 = (unsigned int)(v14 + 1);
							if ((unsigned int)v14 >= 5)
							{
								v15 = 0i64;
								while (1)
								{
									result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 8 * ((unsigned int)v15 + 71i64 + 2 * v15)));
									if ((int)result < 0)
										break;
									v15 = (unsigned int)(v15 + 1);
									if ((unsigned int)v15 >= 5)
									{
										v16 = 0;
										v17 = (_QWORD*)(a3 + 712);
										while (1)
										{
											v18 = *(v17 - 1);
											v19 = v18 + a2;
											if ((unsigned __int64)(v18 + a2) < *a1)
												break;
											v20 = *((unsigned int*)v17 - 4);
											if ((unsigned __int64)(a2 + v18 + 4 * v20) > a1[1])
												break;
											v21 = 0i64;
											if ((_DWORD)v20)
												v21 = v19;
											*(v17 - 1) = v21;
											if ((unsigned __int64)(*v17 + a2) < *a1 || (unsigned __int64)(a2 + *v17 + 2 * v20) > a1[1])
												break;
											v22 = 0i64;
											if ((_DWORD)v20)
												v22 = *v17 + a2;
											++v16;
											v17 += 3;
											*(v17 - 3) = v22;
											if (v16 >= 5)
											{
												v23 = 0;
												v24 = (_QWORD*)(a3 + 832);
												while (1)
												{
													v25 = *(v24 - 1);
													v26 = v25 + a2;
													if ((unsigned __int64)(v25 + a2) < *a1)
														break;
													v27 = *((unsigned int*)v24 - 4);
													if ((unsigned __int64)(a2 + v25 + 4 * v27) > a1[1])
														break;
													v28 = 0i64;
													if ((_DWORD)v27)
														v28 = v26;
													*(v24 - 1) = v28;
													if ((unsigned __int64)(*v24 + a2) < *a1 || (unsigned __int64)(a2 + v27 + *v24) > a1[1])
														break;
													v29 = 0i64;
													if ((_DWORD)v27)
														v29 = *v24 + a2;
													++v23;
													v24 += 3;
													*(v24 - 3) = v29;
													if (v23 >= 5)
													{
														result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 1048));
														if ((int)result >= 0)
														{
															result = sub_14030ED20(a1, v30, (unsigned int*)(a3 + 1080));
															if ((int)result >= 0)
															{
																result = sub_14030ED20(a1, v31, (unsigned int*)(a3 + 1104));
																if ((int)result >= 0)
																{
																	result = sub_14030ED20(a1, v32, (unsigned int*)(a3 + 1128));
																	if ((int)result >= 0)
																	{
																		result = sub_14030ED20(a1, v33, (unsigned int*)(a3 + 1152));
																		if ((int)result >= 0)
																			return 0i64;
																	}
																}
															}
														}
														return result;
													}
												}
												return 2147500037i64;
											}
										}
										return 2147500037i64;
									}
								}
								return result;
							}
						}
						return result;
					}
				}
				return result;
			}
		}
	}
	return result;
}
// 14030C636: variable 'v30' is possibly undefined
// 14030C649: variable 'v31' is possibly undefined
// 14030C65C: variable 'v32' is possibly undefined
// 14030C66F: variable 'v33' is possibly undefined

