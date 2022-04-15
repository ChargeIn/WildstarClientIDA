//----- (00000001405D91F0) ----------------------------------------------------
__int64 __fastcall sub_1405D91F0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v5; // r12
	__int64 v6; // rcx
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	_DWORD* v11; // r10
	unsigned int v12; // r9d
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rsi
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rdi
	unsigned int* v20; // rbx
	__int64 v21; // rax
	_QWORD* v22; // r15
	unsigned int v23; // r14d
	__int64 v24; // rdx
	unsigned int v25; // ebp
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rdi
	unsigned int v29; // ebx
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64 v32; // rdi
	_QWORD* v33; // rcx
	_QWORD* v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64 v38; // r13
	int* v39; // r12
	__int64 v40; // rax
	_QWORD* v41; // r15
	unsigned int v42; // r14d
	__int64 v43; // rdx
	unsigned int v44; // ebp
	__int64 v45; // rax
	__int64 v46; // rcx
	__int64 v47; // rdi
	unsigned int v48; // ebx
	__int64 v49; // rcx
	__int64 v50; // rax
	__int64 v51; // rdi
	_QWORD* v52; // rcx
	_QWORD* v53; // rbx
	__int64 v54; // rax
	__int64 v55; // rcx
	__int64 v56; // [rsp+20h] [rbp-38h]
	__int64 v57; // [rsp+78h] [rbp+20h]

	result = sub_1405D6880(a1, a2, a3);
	if ((int)result < 0)
		return result;
	v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	v57 = v5;
	if (!v5)
		return 2147500037i64;
	v6 = *(unsigned int*)(a1 + 92);
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v7 || *(_DWORD*)(v7 + 8) != (_DWORD)v6)
	{
		v8 = *(_QWORD*)(qword_140C65898 + 25744);
		if (!v8 || *(_DWORD*)(v8 + 8) != (_DWORD)v6)
			return 2147500037i64;
	}
	if (!sub_1404E1C50(v6, **(_DWORD**)(a1 + 176), v7))
		return 2147500037i64;
	v10 = sub_140561CC0(v9, **(_DWORD**)(a1 + 176));
	v12 = v11[16];
	v13 = (unsigned int)v11[17];
	v14 = (unsigned int)v11[18];
	v15 = (unsigned int)v11[19];
	v16 = v10;
	if (v12)
	{
		sub_1405D95A0(v14, v12, v10);
		return 0i64;
	}
	if (!(_DWORD)v13)
	{
		if ((_DWORD)v14 && v11[20])
		{
			v21 = sub_1407A1500(qword_140C65B70, v14);
			v22 = (_QWORD*)v21;
			if (v21)
			{
				v23 = 0;
				if (*(_QWORD*)(v21 + 8))
				{
					v24 = 0i64;
					do
					{
						v25 = *(_DWORD*)(*v22 + 4 * v24);
						if (v25)
						{
							v26 = sub_1403ACD90(qword_140C65B70, v25, v5);
							v28 = v26;
							if (v26)
							{
								v29 = 0;
								if (*(_DWORD*)(v26 + 40))
								{
									do
									{
										v30 = *(_QWORD*)(v28 + 48) + 168i64 * v29;
										sub_1405D9680(v30, *(_DWORD*)v30, *(_DWORD*)(v30 + 16), v16);
										++v29;
									} while (v29 < *(_DWORD*)(v28 + 40));
								}
								v31 = sub_1403F7D40(v27, v25);
								v32 = v31;
								if (v31)
								{
									v33 = *(_QWORD**)(v31 + 8);
									v34 = (_QWORD*)*v33;
									if ((_QWORD*)*v33 != v33)
									{
										do
										{
											v35 = sub_1404E1C50(qword_140C65898, *((_DWORD*)v34 + 4), *(_QWORD*)(qword_140C65898 + 120));
											sub_1405D9680(v36, *(_DWORD*)v35, *(_DWORD*)(v35 + 16), v16);
											v34 = (_QWORD*)*v34;
										} while (v34 != *(_QWORD**)(v32 + 8));
									}
								}
							}
						}
						v24 = ++v23;
					} while ((unsigned __int64)v23 < v22[1]);
				}
			}
		}
		else if ((_DWORD)v15)
		{
			if (v11[20])
			{
				v37 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65B70 + 48i64))(
					qword_140C65B70,
					(unsigned int)v15);
				v38 = v37;
				v56 = v37;
				if (v37)
				{
					v39 = *(int**)(v37 + 8);
					if (v39 != *(int**)(v37 + 16))
					{
						do
						{
							v40 = sub_1407A1500(qword_140C65B70, *v39);
							v41 = (_QWORD*)v40;
							if (v40)
							{
								v42 = 0;
								if (*(_QWORD*)(v40 + 8))
								{
									v43 = 0i64;
									do
									{
										v44 = *(_DWORD*)(*v41 + 4 * v43);
										if (v44)
										{
											v45 = sub_1403ACD90(qword_140C65B70, v44, v57);
											v47 = v45;
											if (v45)
											{
												v48 = 0;
												if (*(_DWORD*)(v45 + 40))
												{
													do
													{
														v49 = *(_QWORD*)(v47 + 48) + 168i64 * v48;
														sub_1405D9680(v49, *(_DWORD*)v49, *(_DWORD*)(v49 + 16), v16);
														++v48;
													} while (v48 < *(_DWORD*)(v47 + 40));
												}
												v50 = sub_1403F7D40(v46, v44);
												v51 = v50;
												if (v50)
												{
													v52 = *(_QWORD**)(v50 + 8);
													v53 = (_QWORD*)*v52;
													if ((_QWORD*)*v52 != v52)
													{
														do
														{
															v54 = sub_1404E1C50(
																qword_140C65898,
																*((_DWORD*)v53 + 4),
																*(_QWORD*)(qword_140C65898 + 120));
															sub_1405D9680(v55, *(_DWORD*)v54, *(_DWORD*)(v54 + 16), v16);
															v53 = (_QWORD*)*v53;
														} while (v53 != *(_QWORD**)(v51 + 8));
													}
												}
											}
										}
										v43 = ++v42;
									} while ((unsigned __int64)v42 < v41[1]);
									v38 = v56;
								}
							}
							++v39;
						} while (v39 != *(int**)(v38 + 16));
					}
				}
			}
		}
		return 0i64;
	}
	v17 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65B70 + 64i64))(
		qword_140C65B70,
		v13,
		v15);
	v19 = v17;
	if (!v17)
		return 0i64;
	v20 = *(unsigned int**)(v17 + 8);
	if (v20 == *(unsigned int**)(v17 + 16))
		return 0i64;
	do
		sub_1405D95A0(v18, *v20++, v16);
	while (v20 != *(unsigned int**)(v19 + 16));
	return 0i64;
}
// 1405D9283: variable 'v9' is possibly undefined
// 1405D9288: variable 'v11' is possibly undefined
// 1405D92FB: variable 'v18' is possibly undefined
// 1405D93C4: variable 'v27' is possibly undefined
// 1405D93FC: variable 'v36' is possibly undefined
// 1405D94F4: variable 'v46' is possibly undefined
// 1405D952C: variable 'v55' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

