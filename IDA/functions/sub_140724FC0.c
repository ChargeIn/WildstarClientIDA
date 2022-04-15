#include "../winhttp.h"

//----- (0000000140724FC0) ----------------------------------------------------
void __fastcall sub_140724FC0(__int64 a1, unsigned int a2)
{
	unsigned int v3; // r12d
	int v4; // r10d
	__int64 v5; // r8
	__int64* v6; // r9
	__int64* v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r14
	__int64 v10; // rax
	__int64 v11; // r15
	__int64 v12; // rdx
	__int64* v13; // r8
	__int64* v14; // r9
	__int64 v15; // rcx
	int v16; // edi
	unsigned __int64 v17; // r13
	__int64 v18; // rbx
	int* v19; // rax
	__int64 v20; // rcx
	bool v21; // zf
	_DWORD* v22; // r10
	int v23; // eax
	__int64 v24; // rcx
	__int64 v25; // rcx
	_QWORD* v26; // rdx
	int* v27; // rax
	const void** v28; // rcx
	unsigned __int64 v29; // rdx
	__int64 v30; // r9
	__int64 v31; // r8
	unsigned __int64 v32; // r12
	unsigned int* v33; // rax
	unsigned int* v34; // rbx
	__int64 v35; // r15
	__int64 v36; // r14
	unsigned int v37; // ecx
	__int64 v38; // rsi
	__int64 v39; // rax
	__int64 v40; // r9
	__int64 v41; // rax
	__int128 v42; // xmm0
	int v43; // edx
	int v44; // r8d
	_DWORD* v45; // rcx
	__int128 v46; // xmm0
	__int128 v47; // xmm0
	__int128 v48; // xmm1
	int v49; // eax
	unsigned int v50; // ecx
	__int64 v51; // rax
	__int64 v52; // rcx
	__int64 v53; // rsi
	__int64 v54; // rdi
	__int64* i; // rbx
	int v56; // edx
	unsigned int v57; // ecx
	unsigned int v58; // ebx
	_DWORD* v59; // rax
	__int64 v60; // rax
	__int64 v61; // [rsp+30h] [rbp-D0h]
	_DWORD* v63; // [rsp+40h] [rbp-C0h]
	_DWORD* v64; // [rsp+48h] [rbp-B8h]
	unsigned __int64 v65; // [rsp+50h] [rbp-B0h]
	int* v66; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v67; // [rsp+60h] [rbp-A0h]
	__int64 v68; // [rsp+68h] [rbp-98h]
	__int64 v69; // [rsp+70h] [rbp-90h]
	__int128 v70; // [rsp+80h] [rbp-80h] BYREF
	__int128 v71; // [rsp+90h] [rbp-70h]
	__int64 v72; // [rsp+A0h] [rbp-60h]
	__int64 v73; // [rsp+A8h] [rbp-58h]
	__int128 v74; // [rsp+B0h] [rbp-50h]
	__int128 v75; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v76; // [rsp+D0h] [rbp-30h]
	__int64 v77; // [rsp+E0h] [rbp-20h]

	v3 = a2;
	v4 = *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64);
	v5 = *(_QWORD*)(qword_140C659F0 + 824);
	v6 = *(__int64**)(v5 + 16);
	v7 = *(__int64**)(v5 + 24);
	if (v6 != v7)
	{
		while (1)
		{
			v8 = *v6;
			if (*(_DWORD*)(*v6 + 188) == v4)
				break;
			if (++v6 == v7)
				return;
		}
		if (v8)
		{
			v9 = *(_QWORD*)(v8 + 280);
			if (v9)
			{
				if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 344i64))(v9))
				{
					v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 344i64))(v9);
					v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
					if (v11)
					{
						v63 = (_DWORD*)sub_140207D60(*(_DWORD*)(a1 + 108));
						if (v63)
						{
							v12 = *(_QWORD*)(qword_140C659F0 + 824);
							v13 = *(__int64**)(v12 + 16);
							v14 = *(__int64**)(v12 + 24);
							if (v13 != v14)
							{
								while (1)
								{
									v15 = *v13;
									if (*(_DWORD*)(*v13 + 188) == v3)
										break;
									if (++v13 == v14)
										return;
								}
								v64 = (_DWORD*)*v13;
								if (v15)
								{
									v16 = 0;
									v17 = 0i64;
									v65 = 0i64;
									v61 = 0i64;
									v18 = sub_1402070A0(*(_DWORD*)(v15 + 64));
									if (v18)
									{
										v19 = sub_14018DB00(0i64, 1ui64, 8i64);
										v17 = 1i64;
										*(_QWORD*)v19 = v18;
										v20 = (__int64)v19;
										v61 = (__int64)v19;
										v66 = v19;
										v65 = 1i64;
										v21 = v64[12] == 5;
										v67 = 1i64;
										if (v21)
										{
											sub_1405B1A30((__int64)v19, (__int64*)&v66);
											v17 = v67;
											v20 = (__int64)v66;
											v65 = v67;
											v61 = (__int64)v66;
										}
									}
									else
									{
										v20 = 0i64;
									}
									v22 = v63;
									v23 = v63[6];
									if ((v23 & 0x40) != 0)
									{
										v24 = *(_QWORD*)(a1 + 856);
										if (v24)
										{
											*(_DWORD*)(v24 + 16) = v63[5];
											*(_DWORD*)(*(_QWORD*)(a1 + 856) + 20i64) = 0;
											v25 = *(_QWORD*)(a1 + 856);
											if (*(_QWORD*)v25)
												**(_QWORD**)v25 = *(_QWORD*)(v25 + 8);
											v26 = *(_QWORD**)(v25 + 8);
											if (v26)
												*v26 = *(_QWORD*)v25;
											*(_QWORD*)v25 = 0i64;
											*(_QWORD*)(v25 + 8) = 0i64;
											sub_1403EAA20((const void**)v25, *(const void*****)(a1 + 856));
										}
										else
										{
											v27 = sub_14018B280(32i64, 0);
											if (v27)
											{
												v28 = (const void**)(unsigned int)v63[5];
												*(_QWORD*)v27 = 0i64;
												*((_QWORD*)v27 + 1) = 0i64;
												v27[4] = (int)v28;
												*(_QWORD*)(v27 + 5) = 0i64;
											}
											else
											{
												v27 = 0i64;
											}
											*(_QWORD*)(a1 + 856) = v27;
											sub_1403EAA20(v28, (const void****)v27);
										}
									}
									else if ((v23 & 0x100) != 0)
									{
										v29 = 0i64;
										if (v17)
										{
											v30 = qword_140C65898;
											v31 = *(_QWORD*)(qword_140C65898 + 25744);
											do
											{
												if (v31 && *(_DWORD*)(v31 + 6120) == *(_DWORD*)(*(_QWORD*)(v61 + 8 * v29) + 28i64))
													*(_DWORD*)(v30 + 31208) = v63[10];
												++v29;
											} while (v29 < v17);
											v16 = 0;
										}
									}
									else if ((v23 & 0x200) != 0)
									{
										v32 = 0i64;
										if (v17)
										{
											v33 = v63 + 11;
											do
											{
												v34 = v33;
												v35 = *(_QWORD*)(v20 + 8 * v32) - (_QWORD)v22;
												v36 = 4i64;
												do
												{
													v37 = *(unsigned int*)((char*)v34 + v35 - 8);
													if (v37)
													{
														if (*v34)
														{
															v38 = sub_14024B540(v37);
															v39 = sub_14024B540(*v34);
															v40 = v39;
															if (v38)
															{
																if (v39)
																{
																	v41 = *(_QWORD*)(v39 + 40);
																	v42 = *(_OWORD*)v38;
																	v43 = 0;
																	v44 = v64[25] & 1;
																	v45 = (_DWORD*)&v75 + 1;
																	v71 = *(_OWORD*)(v38 + 16);
																	v70 = v42;
																	v46 = *(_OWORD*)(v38 + 32);
																	v74 = *(_OWORD*)(v38 + 48);
																	v72 = v46;
																	v73 = v41;
																	*(_QWORD*)&v74 = *(_QWORD*)(v40 + 48);
																	v47 = *(_OWORD*)(v38 + 64);
																	v48 = *(_OWORD*)(v38 + 80);
																	LODWORD(v70) = *(_DWORD*)v38;
																	LODWORD(v41) = *(_DWORD*)(v40 + 56);
																	v75 = v47;
																	v76 = v48;
																	DWORD2(v74) = v41;
																	*(_QWORD*)&v47 = *(_QWORD*)(v38 + 96);
																	LODWORD(v48) = *(_DWORD*)(v40 + 20);
																	HIDWORD(v74) = *(_DWORD*)(v40 + 60);
																	LODWORD(v41) = *(_DWORD*)(v40 + 64);
																	v77 = v47;
																	LODWORD(v47) = *(_DWORD*)(v40 + 16);
																	DWORD1(v71) = v48;
																	LODWORD(v75) = v41;
																	LODWORD(v41) = *(_DWORD*)(v40 + 88);
																	LODWORD(v48) = *(_DWORD*)(v40 + 28);
																	LODWORD(v71) = v47;
																	LODWORD(v47) = *(_DWORD*)(v40 + 24);
																	DWORD2(v76) = v41;
																	*((_QWORD*)&v71 + 1) = __PAIR64__(v48, v47);
																	do
																	{
																		v49 = 0;
																		if (!v44)
																			v49 = *(_DWORD*)((char*)v45 + v40 - ((_QWORD)&v75 + 4) + 68);
																		++v43;
																		*v45++ = v49;
																	} while ((unsigned __int64)v43 < 4);
																	LODWORD(v72) = *(_DWORD*)(v40 + 32);
																	if (qword_140C65878)
																		sub_140350D70((__int64)v45, (int*)&v70);
																}
															}
														}
													}
													++v34;
													--v36;
												} while (v36);
												v22 = v63;
												v20 = v61;
												++v32;
												v33 = v63 + 11;
											} while (v32 < v65);
										}
										v3 = a2;
									}
									else
									{
										v57 = *(_DWORD*)(v11 + 64);
										v58 = 0;
										if (v57)
										{
											v59 = (_DWORD*)(*(_QWORD*)(v11 + 72) + 4i64);
											while (*v59 != *(_DWORD*)(a1 + 108))
											{
												++v58;
												v59 += 22;
												if (v58 >= v57)
													goto LABEL_55;
											}
											v60 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 344i64))(v9);
											(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)v60 + 216i64))(
												v60,
												v58,
												0xFFFFFFFFi64,
												-1i64);
										}
									}
								LABEL_55:
									v67 = 0i64;
									v68 = 0i64;
									v50 = v64[46];
									v69 = 0i64;
									v51 = sub_140205FA0(v50);
									if (v51)
										v16 = *(_DWORD*)(v51 + 4);
									sub_1404C9AF0(v52, &v66, 4, v16, v3);
									v53 = v67;
									v54 = v68;
									for (i = (__int64*)v67; i != (__int64*)v54; ++i)
									{
										v56 = *(_DWORD*)(*i + 128);
										if ((unsigned int)(v56 - 1) > 2 && (v56 != 4 || !(unsigned int)sub_140724910(*i)))
											(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)*i + 24i64))(*i, 1i64, v3);
									}
									if (v53)
										sub_14018B900(v53, 0);
									if (v61)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v61 - 16) + 8i64))(v61 - 16);
								}
							}
						}
					}
				}
			}
		}
	}
}
// 14072521D: variable 'v28' is possibly undefined
// 140725451: variable 'v52' is possibly undefined
// 140C65878: using guessed type __int64 qword_140C65878;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

