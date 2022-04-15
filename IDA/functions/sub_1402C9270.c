#include "../winhttp.h"

//----- (00000001402C9270) ----------------------------------------------------
__int64 __fastcall sub_1402C9270(unsigned __int64* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rcx
	unsigned __int64 v8; // rdx
	unsigned int v9; // r8d
	__int64 v10; // r14
	unsigned __int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rdx
	unsigned int v14; // r8d
	__int64 v15; // rcx
	__int64 v16; // rax
	unsigned int v17; // ebp
	__int64 v18; // r15
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rdx
	__int64 v33; // rax
	__int64 v34; // rax
	__int64 v35; // rdx
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rdx
	__int64 v41; // rdx
	__int64 v42; // rdx

	if (*(_DWORD*)a3 != 1229210950)
		return 2685403137i64;
	if (*(_DWORD*)(a3 + 4) != 41)
		return 2685403138i64;
	v7 = *(_QWORD*)(a3 + 40);
	v8 = v7 + a2;
	if (v8 < *a1)
		return 2147500037i64;
	v9 = *(_DWORD*)(a3 + 32);
	if (a2 + v7 + ((unsigned __int64)v9 << 6) > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	v11 = 0i64;
	if (v9)
		v11 = v8;
	*(_QWORD*)(a3 + 40) = v11;
	result = sub_1402CA5E0(a1, a2, (unsigned int*)(a3 + 48));
	if ((int)result < 0)
		return result;
	v12 = *(_QWORD*)(a3 + 72);
	v13 = v12 + a2;
	if (v12 + a2 < *a1)
		return 2147500037i64;
	v14 = *(_DWORD*)(a3 + 64);
	v15 = 88i64 * v14;
	if (a2 + v15 + v12 > a1[1])
		return 2147500037i64;
	v16 = 0i64;
	if (v14)
		v16 = v13;
	v17 = 0;
	v18 = v16 + ((v15 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	*(_QWORD*)(a3 + 72) = v16;
	if (!v14)
	{
	LABEL_18:
		v19 = *(_QWORD*)(a3 + 88);
		v20 = v19 + a2;
		if (v19 + a2 >= *a1)
		{
			v21 = *(unsigned int*)(a3 + 80);
			if (a2 + v19 + 2 * v21 <= a1[1])
			{
				v22 = 0i64;
				if ((_DWORD)v21)
					v22 = v20;
				*(_QWORD*)(a3 + 88) = v22;
				v23 = *(_QWORD*)(a3 + 104);
				if (v23 + a2 >= *a1 && a2 + v23 + ((unsigned __int64)*(unsigned int*)(a3 + 96) << 6) <= a1[1])
				{
					v24 = 0i64;
					if (*(_DWORD*)(a3 + 96))
						v24 = v23 + a2;
					*(_QWORD*)(a3 + 104) = v24;
					result = sub_1402CA6C0(a1, a2, (unsigned int*)(a3 + 112));
					if ((int)result < 0)
						return result;
					v25 = *(_QWORD*)(a3 + 136);
					if (v25 + a2 >= *a1 && a2 + v25 + 176 * (unsigned __int64)*(unsigned int*)(a3 + 128) <= a1[1])
					{
						v26 = 0i64;
						if (*(_DWORD*)(a3 + 128))
							v26 = v25 + a2;
						*(_QWORD*)(a3 + 136) = v26;
						result = sub_1402CA530(a1, a2, (unsigned int*)(a3 + 144));
						if ((int)result < 0)
							return result;
						v27 = *(_QWORD*)(a3 + 168);
						if (v27 + a2 >= *a1 && a2 + v27 + ((unsigned __int64)*(unsigned int*)(a3 + 160) << 6) <= a1[1])
						{
							v28 = 0i64;
							if (*(_DWORD*)(a3 + 160))
								v28 = v27 + a2;
							*(_QWORD*)(a3 + 168) = v28;
							result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 176));
							if ((int)result < 0)
								return result;
							result = sub_1402CA7C0(a1, v29, (int*)(a3 + 192));
							if ((int)result < 0)
								return result;
							v30 = *(_QWORD*)(a3 + 216);
							v31 = v30 + a2;
							if (v30 + a2 >= *a1)
							{
								v32 = *(unsigned int*)(a3 + 208);
								if (a2 + v30 + 8 * v32 <= a1[1])
								{
									v33 = 0i64;
									if ((_DWORD)v32)
										v33 = v31;
									*(_QWORD*)(a3 + 216) = v33;
									v34 = *(_QWORD*)(a3 + 232);
									v35 = v34 + a2;
									if (v34 + a2 >= *a1)
									{
										v36 = *(unsigned int*)(a3 + 224);
										if (a2 + v34 + 2 * v36 <= a1[1])
										{
											v37 = 0i64;
											if ((_DWORD)v36)
												v37 = v35;
											*(_QWORD*)(a3 + 232) = v37;
											v38 = *(_QWORD*)(a3 + 248);
											if (v38 + a2 >= *a1)
											{
												v39 = *(unsigned int*)(a3 + 240);
												if (a2 + v38 + 2 * v39 <= a1[1])
												{
													if ((_DWORD)v39)
														v10 = v38 + a2;
													*(_QWORD*)(a3 + 248) = v10;
													result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 288));
													if ((int)result >= 0)
													{
														result = sub_1402CB010(a1, v40, (unsigned int*)(a3 + 304));
														if ((int)result >= 0)
														{
															result = sub_1402CB010(a1, v41, (unsigned int*)(a3 + 256));
															if ((int)result >= 0)
															{
																result = sub_1402CB010(a1, v42, (unsigned int*)(a3 + 272));
																if ((int)result >= 0)
																	return 0i64;
															}
														}
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
		return 2147500037i64;
	}
	while (1)
	{
		result = sub_1402C91B0(a1, v18, a1[2] + *(_QWORD*)(a3 + 72) + 88i64 * v17);
		if ((int)result < 0)
			return result;
		if (++v17 >= *(_DWORD*)(a3 + 64))
			goto LABEL_18;
	}
}
// 1402C94D0: variable 'v29' is possibly undefined
// 1402C95AF: variable 'v40' is possibly undefined
// 1402C95C6: variable 'v41' is possibly undefined
// 1402C95DD: variable 'v42' is possibly undefined

