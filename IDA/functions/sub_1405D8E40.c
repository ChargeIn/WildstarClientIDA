//----- (00000001405D8E40) ----------------------------------------------------
void __fastcall sub_1405D8E40(__int64 a1)
{
	int v1; // edx
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rbx
	__int64 v5; // r12
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned int v8; // r10d
	unsigned int v9; // r8d
	int v10; // edx
	unsigned int v11; // r9d
	__int64 v12; // rsi
	__int64 v13; // rcx
	__int64 v14; // rdi
	unsigned int* i; // rbx
	__int64 v16; // rax
	_QWORD* v17; // r15
	unsigned int v18; // r14d
	__int64 v19; // rdx
	unsigned int v20; // ebp
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rdi
	unsigned int v24; // ebx
	__int64 v25; // rcx
	__int64 v26; // rax
	__int64 v27; // rdi
	_QWORD* v28; // rcx
	_QWORD* v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // r13
	int* v34; // r12
	__int64 v35; // rax
	_QWORD* v36; // r15
	unsigned int v37; // r14d
	__int64 v38; // rdx
	unsigned int v39; // ebp
	__int64 v40; // rax
	__int64 v41; // rcx
	__int64 v42; // rdi
	unsigned int v43; // ebx
	__int64 v44; // rcx
	__int64 v45; // rax
	__int64 v46; // rdi
	_QWORD* v47; // rcx
	_QWORD* v48; // rbx
	__int64 v49; // rax
	__int64 v50; // rcx
	__int64 v52; // [rsp+68h] [rbp+10h]
	__int64 v53; // [rsp+70h] [rbp+18h]

	v1 = *(_DWORD*)(a1 + 92);
	*(_QWORD*)a1 = off_140B6E050;
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2 && *(_DWORD*)(v2 + 8) == v1 || (v3 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v3 + 8) == v1)
	{
		v4 = *(unsigned int**)(a1 + 176);
		if (v4)
		{
			v5 = sub_1403D90D0(qword_140C65898, v1);
			v52 = v5;
			v7 = sub_140561CC0(v6, *v4);
			v8 = v4[16];
			v9 = v4[17];
			v10 = v4[18];
			v11 = v4[19];
			v12 = v7;
			if (v8)
			{
				sub_1405D9610(v4[20] != 0, v8, v7);
			}
			else if (v9)
			{
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65B70 + 64i64))(qword_140C65B70, v9);
				for (i = *(unsigned int**)(v14 + 8); i != *(unsigned int**)(v14 + 16); ++i)
					sub_1405D9610(v13, *i, v12);
			}
			else if (v10 && v4[20])
			{
				v16 = sub_1407A1500(qword_140C65B70, v10);
				v17 = (_QWORD*)v16;
				if (v16)
				{
					v18 = 0;
					if (*(_QWORD*)(v16 + 8))
					{
						v19 = 0i64;
						do
						{
							v20 = *(_DWORD*)(*v17 + 4 * v19);
							if (v20)
							{
								v21 = sub_1403ACD90(qword_140C65B70, v20, v5);
								v23 = v21;
								if (v21)
								{
									v24 = 0;
									if (*(_DWORD*)(v21 + 40))
									{
										do
										{
											v25 = *(_QWORD*)(v23 + 48) + 168i64 * v24;
											sub_1405D96F0(v25, *(_DWORD*)v25, *(_DWORD*)(v25 + 16), v12);
											++v24;
										} while (v24 < *(_DWORD*)(v23 + 40));
									}
									v26 = sub_1403F7D40(v22, v20);
									v27 = v26;
									if (v26)
									{
										v28 = *(_QWORD**)(v26 + 8);
										v29 = (_QWORD*)*v28;
										if ((_QWORD*)*v28 != v28)
										{
											do
											{
												v30 = sub_1404E1C50(qword_140C65898, *((_DWORD*)v29 + 4), *(_QWORD*)(qword_140C65898 + 120));
												sub_1405D96F0(v31, *(_DWORD*)v30, *(_DWORD*)(v30 + 16), v12);
												v29 = (_QWORD*)*v29;
											} while (v29 != *(_QWORD**)(v27 + 8));
										}
									}
								}
							}
							v19 = ++v18;
						} while ((unsigned __int64)v18 < v17[1]);
					}
				}
			}
			else if (v11)
			{
				if (v4[20])
				{
					v32 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65B70 + 48i64))(qword_140C65B70, v11);
					v33 = v32;
					v53 = v32;
					if (v32)
					{
						v34 = *(int**)(v32 + 8);
						if (v34 != *(int**)(v32 + 16))
						{
							do
							{
								v35 = sub_1407A1500(qword_140C65B70, *v34);
								v36 = (_QWORD*)v35;
								if (v35)
								{
									v37 = 0;
									if (*(_QWORD*)(v35 + 8))
									{
										v38 = 0i64;
										do
										{
											v39 = *(_DWORD*)(*v36 + 4 * v38);
											if (v39)
											{
												v40 = sub_1403ACD90(qword_140C65B70, v39, v52);
												v42 = v40;
												if (v40)
												{
													v43 = 0;
													if (*(_DWORD*)(v40 + 40))
													{
														do
														{
															v44 = *(_QWORD*)(v42 + 48) + 168i64 * v43;
															sub_1405D96F0(v44, *(_DWORD*)v44, *(_DWORD*)(v44 + 16), v12);
															++v43;
														} while (v43 < *(_DWORD*)(v42 + 40));
													}
													v45 = sub_1403F7D40(v41, v39);
													v46 = v45;
													if (v45)
													{
														v47 = *(_QWORD**)(v45 + 8);
														v48 = (_QWORD*)*v47;
														if ((_QWORD*)*v47 != v47)
														{
															do
															{
																v49 = sub_1404E1C50(
																	qword_140C65898,
																	*((_DWORD*)v48 + 4),
																	*(_QWORD*)(qword_140C65898 + 120));
																sub_1405D96F0(v50, *(_DWORD*)v49, *(_DWORD*)(v49 + 16), v12);
																v48 = (_QWORD*)*v48;
															} while (v48 != *(_QWORD**)(v46 + 8));
														}
													}
												}
											}
											v38 = ++v37;
										} while ((unsigned __int64)v37 < v36[1]);
										v33 = v53;
									}
								}
								++v34;
							} while (v34 != *(int**)(v33 + 16));
						}
					}
				}
			}
		}
	}
	sub_1405D6680(a1);
}
// 1405D8EBA: variable 'v6' is possibly undefined
// 1405D8F25: variable 'v13' is possibly undefined
// 1405D8FD4: variable 'v22' is possibly undefined
// 1405D900C: variable 'v31' is possibly undefined
// 1405D9104: variable 'v41' is possibly undefined
// 1405D913C: variable 'v50' is possibly undefined
// 140B6E050: using guessed type __int64 (__fastcall *off_140B6E050[41])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

