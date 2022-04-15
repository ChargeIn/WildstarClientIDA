//----- (000000014045C500) ----------------------------------------------------
__int64 __fastcall sub_14045C500(__int64 a1, int a2)
{
	__int64 result; // rax
	int v4; // r14d
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // r8
	__int64 v8; // r15
	__int64 v9; // rbx
	unsigned __int64 v10; // r12
	__int64 v11; // r13
	__int64 v12; // rdi
	unsigned __int64 v13; // rcx
	_QWORD* v14; // rax
	unsigned __int64 v15; // rcx
	_QWORD* v16; // rax
	unsigned __int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // r8
	__int64 v22; // r15
	__int64 v23; // rbx
	unsigned __int64 v24; // r12
	__int64 v25; // r13
	__int64 v26; // rdi
	unsigned __int64 v27; // rcx
	_QWORD* v28; // rax
	unsigned __int64 v29; // rcx
	_QWORD* v30; // rax
	unsigned __int64 v31; // rcx
	_QWORD* v32; // rax
	__int64 v33; // rax
	unsigned int v34; // ecx
	__int64 v35; // r12
	__int64 v36; // r15
	int* v37; // rdi
	__int64 v38; // rax
	int* v39; // r12
	int v40; // r13d
	int* v41; // rax
	int* v42; // rbx
	__int64 v43; // rcx
	__int16* v44; // rax
	int* v45; // r15
	__int64 v46; // rcx
	int* v47; // rax
	__int64 v48; // rax
	int* v49; // r12
	__int64 v50; // r13
	_WORD* v51; // rax
	__int64 v52; // rax
	__int64 v53; // rax
	int v54; // eax
	int v55; // r15d
	int v56; // eax
	__int64 v57; // rcx
	__int64 v58; // rax
	int v59; // ebx
	int v60; // eax
	int v61; // ecx
	unsigned int v62; // eax
	unsigned int v63; // edi
	__int64 v64; // r13
	unsigned int v65; // ebx
	unsigned int v66; // r12d
	unsigned int v67; // ebx
	bool v68; // cf
	__int64 v69; // rcx
	unsigned int v70; // eax
	unsigned int v71; // r12d
	__int64 v72; // rdi
	__int64 v73; // rax
	__int64 v74; // rbx
	unsigned int v75; // edx
	unsigned int v76; // edx
	__int64 v77; // rcx
	unsigned __int64 v78; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v79; // [rsp+38h] [rbp-C8h]
	__int128 v80; // [rsp+40h] [rbp-C0h]
	int v81[2]; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v82; // [rsp+58h] [rbp-A8h]
	__int128 v83; // [rsp+60h] [rbp-A0h]
	__int64 v84; // [rsp+70h] [rbp-90h] BYREF
	char v85[184]; // [rsp+78h] [rbp-88h] BYREF
	__int64 v86; // [rsp+130h] [rbp+30h]
	unsigned int v87; // [rsp+190h] [rbp+90h]
	unsigned int v88; // [rsp+190h] [rbp+90h]
	__int64 v89; // [rsp+190h] [rbp+90h]
	unsigned int v90; // [rsp+190h] [rbp+90h]
	unsigned int v91; // [rsp+190h] [rbp+90h]
	_QWORD* v93; // [rsp+1A0h] [rbp+A0h]

	result = *(unsigned int*)(a1 + 684);
	if ((_DWORD)result == a2)
		return result;
	v4 = 0;
	*(_DWORD*)(a1 + 684) = a2;
	if ((_DWORD)result)
	{
		if (!a2)
		{
			v5 = *(_QWORD*)(a1 + 248);
			if (v5)
			{
				v6 = *(_QWORD*)(v5 + 336);
				if (v6)
				{
					v7 = *(unsigned int*)(v6 + 16);
					if ((!(_DWORD)v7
						|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
							+ 24i64))(
								qword_140C659A0,
								0i64,
								v7,
								0i64,
								0i64,
								0))
						&& !*(_DWORD*)(a1 + 592)
						&& !*(_DWORD*)(a1 + 596))
					{
						v8 = qword_140C65918;
						v87 = **(_DWORD**)(*(_QWORD*)(a1 + 248) + 336i64);
						sub_140482A00(
							(__int64)&v78,
							v87,
							*(_DWORD*)(a1 + 684) != 0,
							3u,
							*(_QWORD*)(qword_140C65918 + 64),
							*(unsigned int*)(qword_140C65918 + 72));
						v9 = *((_QWORD*)&v80 + 1);
						v10 = v78;
						v11 = v79;
						v12 = v80;
						v13 = 0i64;
						if (*((_QWORD*)&v80 + 1))
						{
							v14 = (_QWORD*)(v80 + 32);
							do
							{
								if (*((_DWORD*)v14 - 5))
									break;
								if (*v14)
									goto LABEL_26;
								++v13;
								v14 += 6;
							} while (v13 < *((_QWORD*)&v80 + 1));
						}
						sub_140482A00((__int64)&v78, v87, 2u, 3u, *(_QWORD*)(v8 + 64), *(unsigned int*)(v8 + 72));
						v9 = *((_QWORD*)&v80 + 1);
						v10 = v78;
						v11 = v79;
						v12 = v80;
						v15 = 0i64;
						if (*((_QWORD*)&v80 + 1))
						{
							v16 = (_QWORD*)(v80 + 32);
							do
							{
								if (*((_DWORD*)v16 - 5))
									break;
								if (*v16)
									goto LABEL_26;
								++v15;
								v16 += 6;
							} while (v15 < *((_QWORD*)&v80 + 1));
						}
						sub_140482A00(
							(__int64)&v78,
							v87,
							*(_DWORD*)(a1 + 684) != 0,
							6u,
							*(_QWORD*)(v8 + 64),
							*(unsigned int*)(v8 + 72));
						v9 = *((_QWORD*)&v80 + 1);
						v10 = v78;
						v11 = v79;
						v12 = v80;
						v17 = 0i64;
						if (*((_QWORD*)&v80 + 1))
						{
							v18 = (_QWORD*)(v80 + 32);
							do
							{
								if (*((_DWORD*)v18 - 5))
									break;
								if (*v18)
									goto LABEL_26;
								++v17;
								v18 += 6;
							} while (v17 < *((_QWORD*)&v80 + 1));
						}
						sub_140482A00((__int64)&v78, v87, 2u, 6u, *(_QWORD*)(v8 + 64), *(unsigned int*)(v8 + 72));
						v10 = v78;
						v11 = v79;
						v9 = *((_QWORD*)&v80 + 1);
						v12 = v80;
					LABEL_26:
						if (!*(_QWORD*)(a1 + 5344)
							|| (_DWORD)v10 != *(_DWORD*)(a1 + 5320)
							|| __PAIR64__(v11, HIDWORD(v10)) != *(_QWORD*)(a1 + 5324))
						{
							sub_140195D70(a1 + 5440);
							sub_140195D70(a1 + 5368);
							*(_QWORD*)(a1 + 5320) = v10;
							*(_QWORD*)(a1 + 5328) = v11;
							*(_QWORD*)(a1 + 5336) = v12;
							*(_DWORD*)(a1 + 5316) = 0;
							*(_QWORD*)(a1 + 5344) = v9;
							while (*(_QWORD*)(a1 + 1424))
								(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1424) + 32i64))(*(_QWORD*)(a1 + 1424));
							sub_14047CAB0(a1);
						}
					}
				}
			}
		}
	}
	else if (a2)
	{
		v19 = *(_QWORD*)(a1 + 248);
		if (v19)
		{
			v20 = *(_QWORD*)(v19 + 336);
			if (v20)
			{
				v21 = *(unsigned int*)(v20 + 16);
				if ((!(_DWORD)v21
					|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							0i64,
							v21,
							0i64,
							0i64,
							0))
					&& !*(_DWORD*)(a1 + 592)
					&& !*(_DWORD*)(a1 + 596))
				{
					v22 = qword_140C65918;
					v88 = **(_DWORD**)(*(_QWORD*)(a1 + 248) + 336i64);
					sub_140482A00(
						(__int64)&v78,
						v88,
						*(_DWORD*)(a1 + 684) != 0,
						2u,
						*(_QWORD*)(qword_140C65918 + 64),
						*(unsigned int*)(qword_140C65918 + 72));
					v23 = *((_QWORD*)&v80 + 1);
					v24 = v78;
					v25 = v79;
					v26 = v80;
					v27 = 0i64;
					if (*((_QWORD*)&v80 + 1))
					{
						v28 = (_QWORD*)(v80 + 32);
						do
						{
							if (*((_DWORD*)v28 - 5))
								break;
							if (*v28)
								goto LABEL_55;
							++v27;
							v28 += 6;
						} while (v27 < *((_QWORD*)&v80 + 1));
					}
					sub_140482A00((__int64)&v78, v88, 2u, 2u, *(_QWORD*)(v22 + 64), *(unsigned int*)(v22 + 72));
					v23 = *((_QWORD*)&v80 + 1);
					v24 = v78;
					v25 = v79;
					v26 = v80;
					v29 = 0i64;
					if (*((_QWORD*)&v80 + 1))
					{
						v30 = (_QWORD*)(v80 + 32);
						do
						{
							if (*((_DWORD*)v30 - 5))
								break;
							if (*v30)
								goto LABEL_55;
							++v29;
							v30 += 6;
						} while (v29 < *((_QWORD*)&v80 + 1));
					}
					sub_140482A00(
						(__int64)&v78,
						v88,
						*(_DWORD*)(a1 + 684) != 0,
						6u,
						*(_QWORD*)(v22 + 64),
						*(unsigned int*)(v22 + 72));
					v23 = *((_QWORD*)&v80 + 1);
					v24 = v78;
					v25 = v79;
					v26 = v80;
					v31 = 0i64;
					if (*((_QWORD*)&v80 + 1))
					{
						v32 = (_QWORD*)(v80 + 32);
						do
						{
							if (*((_DWORD*)v32 - 5))
								break;
							if (*v32)
								goto LABEL_55;
							++v31;
							v32 += 6;
						} while (v31 < *((_QWORD*)&v80 + 1));
					}
					sub_140482A00((__int64)&v78, v88, 2u, 6u, *(_QWORD*)(v22 + 64), *(unsigned int*)(v22 + 72));
					v24 = v78;
					v25 = v79;
					v23 = *((_QWORD*)&v80 + 1);
					v26 = v80;
				LABEL_55:
					if (!*(_QWORD*)(a1 + 5344)
						|| (_DWORD)v24 != *(_DWORD*)(a1 + 5320)
						|| __PAIR64__(v25, HIDWORD(v24)) != *(_QWORD*)(a1 + 5324))
					{
						sub_140195D70(a1 + 5440);
						sub_140195D70(a1 + 5368);
						*(_QWORD*)(a1 + 5320) = v24;
						*(_QWORD*)(a1 + 5328) = v25;
						*(_QWORD*)(a1 + 5336) = v26;
						*(_DWORD*)(a1 + 5316) = 0;
						*(_QWORD*)(a1 + 5344) = v23;
						while (*(_QWORD*)(a1 + 1424))
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1424) + 32i64))(*(_QWORD*)(a1 + 1424));
						sub_14047CAB0(a1);
					}
				}
			}
		}
		v33 = *(_QWORD*)(a1 + 24);
		if (v33)
		{
			v34 = *(_DWORD*)(v33 + 220);
			if (v34)
			{
				if (!*(_DWORD*)(a1 + 592) && !*(_DWORD*)(a1 + 596))
				{
					v35 = sub_1401F7E60(v34);
					if (v35)
					{
						v36 = 0i64;
						v37 = 0i64;
						if (sub_1401AE760(0.0, 100.0) <= *(float*)(v35 + 20))
						{
							v38 = 4i64;
							v39 = (int*)(v35 + 4);
							v89 = 4i64;
							do
							{
								v40 = *v39;
								if (*v39)
								{
									v41 = sub_14018DB00((__int64)v37, v36 + 1, 4i64);
									v41[v36] = v40;
									v42 = v41;
									if (v37 != v41)
									{
										sub_1407DB590(v41, v37, 4 * v36);
										if (v37)
											(*(void(__fastcall**)(int*))(*((_QWORD*)v37 - 2) + 8i64))(v37 - 4);
										v37 = v42;
									}
									++v36;
									v38 = v89;
								}
								++v39;
								v89 = --v38;
							} while (v38);
							if ((_DWORD)v36)
							{
								v90 = v37[(unsigned int)sub_1401AE6F0(0, (int)v36 - 1)];
								v44 = sub_14034BDD0(v43, v90);
								v45 = (int*)v44;
								if (v44)
								{
									v46 = 0i64;
									if (*v44)
									{
										do
											++v46;
										while (v44[v46]);
										if (v46)
										{
											sub_1404DDE90(&v84);
											v47 = sub_14018B280(96i64, 0);
											if (v47)
												v93 = (_QWORD*)sub_1404DB7E0((__int64)v47, a1);
											else
												v93 = 0i64;
											v48 = 0i64;
											v49 = 0i64;
											v82 = 0i64;
											v83 = 0ui64;
											do
												++v48;
											while (word_140B0A7C8[v48]);
											v50 = (2 * v48) >> 1;
											if ((unsigned __int64)(v50 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
											{
												v49 = sub_14018B280(2 * (v50 + 1), 0);
												v82 = (__int64)v49;
												*(_QWORD*)&v83 = v49;
												*((_QWORD*)&v83 + 1) = (char*)v49 + 2 * v50 + 2;
											}
											sub_1407DB590(v49, (int*)word_140B0A7C8, 2 * v50);
											v51 = (_WORD*)v49 + v50;
											*(_QWORD*)&v83 = v51;
											if (v51)
												*v51 = 0;
											sub_1400B7480((__int64)&v84, v93);
											(*(void(__fastcall**)(_QWORD*, int*))(*v93 + 72i64))(v93, v81);
											if (v82)
												sub_14018B900(v82, 0);
											v52 = 0i64;
											if (*(_WORD*)v45)
											{
												do
													++v52;
												while (*((_WORD*)v45 + v52));
											}
											sub_14001C480((__int64)v85, v45, (int*)((char*)v45 + 2 * v52));
											v53 = sub_1400B7660(&v84);
											sub_140475EF0(a1, *(int**)(v53 + 8), 1, 0.0);
											sub_140472ED0(a1, v90);
											if (v86)
												sub_14018B900(v86, 0);
											sub_1400B7390(&v84);
										}
									}
								}
							}
							if (v37)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v37 - 2) + 8i64))(v37 - 4);
						}
					}
				}
			}
		}
	}
	if (*(_DWORD*)(a1 + 684))
	{
		if (!*(_QWORD*)(a1 + 3264))
			goto LABEL_115;
		v54 = sub_140467ED0(a1);
		*(_DWORD*)(a1 + 5164) &= ~2u;
		v55 = *(_DWORD*)(a1 + 5164);
		if ((v54 & 0xFFFFFFF6) == 0 && v54 != 1)
			v55 = 63;
		v56 = *(_DWORD*)(a1 + 5160);
		if (v56 == v55)
			goto LABEL_115;
		if (v55 == 63)
		{
		LABEL_105:
			sub_140195D70(a1 + 5168);
			sub_140195D70(a1 + 5240);
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
				*(_QWORD*)(a1 + 3264),
				3i64,
				3i64);
			*(_DWORD*)(a1 + 5312) = 1;
			if (*(_QWORD*)(a1 + 5864))
			{
				sub_140471EF0(a1, 1, 1);
				sub_140471EF0(a1, 1, 0);
			}
			goto LABEL_110;
		}
		if (v56 == 63)
			goto LABEL_108;
	}
	else
	{
		v59 = 0;
		if (!*(_QWORD*)(a1 + 3264))
			goto LABEL_115;
		v60 = sub_140467ED0(a1);
		*(_DWORD*)(a1 + 5164) |= 2u;
		v55 = *(_DWORD*)(a1 + 5164);
		if ((v60 & 0xFFFFFFF6) == 0 && v60 != 1)
		{
			v59 = 1;
			v55 = 63;
		}
		v61 = *(_DWORD*)(a1 + 5160);
		if (v61 == v55)
			goto LABEL_115;
		if (v55 == 63)
		{
			if (!v59)
			{
				if (*(_QWORD*)(a1 + 5864))
				{
					if (!*(_DWORD*)(a1 + 440) && !*(_DWORD*)(a1 + 444))
					{
						v62 = sub_140470540((_DWORD*)a1, 6708);
						v63 = v62;
						if (v62)
						{
							if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
								*(_QWORD*)(a1 + 5864),
								v62))
							{
								v91 = sub_1401AE6A0(0, 0xFFFF);
								v64 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
									*(_QWORD*)(a1 + 5864),
									v63,
									v91);
								v65 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
									*(_QWORD*)(a1 + 5864),
									v63,
									v91,
									57i64);
								v66 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
									*(_QWORD*)(a1 + 5864),
									v63,
									v91,
									55i64);
								if (v65 < v66)
									v66 = v65;
								v67 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
									*(_QWORD*)(a1 + 5864),
									v63,
									v91,
									56i64);
								if (v67 == -1)
									v67 = *(_DWORD*)(v64 + 20) >> 1;
								if (v66 == -1)
									v66 = v67;
								v68 = *(_DWORD*)(v64 + 20) < v66;
								LODWORD(v78) = 0;
								v79 = a1;
								if (v68)
									v66 = *(_DWORD*)(v64 + 20);
								*(_QWORD*)&v80 = sub_140471DB0;
								*((_QWORD*)&v80 + 1) = 0i64;
								sub_140195960(a1 + 5168, v66, (__int64)&v78, 4);
								if (*(_DWORD*)(v64 + 20) < v67)
									v67 = *(_DWORD*)(v64 + 20);
								LODWORD(v78) = 0;
								v79 = a1;
								*(_QWORD*)&v80 = sub_140471E00;
								*((_QWORD*)&v80 + 1) = 0i64;
								sub_140195960(a1 + 5240, v67, (__int64)&v78, 4);
								v69 = *(_QWORD*)(a1 + 5864);
								v82 = 1065353216i64;
								v81[1] = v91;
								v81[0] = v63;
								LODWORD(v83) = 33;
								*(_QWORD*)((char*)&v83 + 4) = 2i64;
								HIDWORD(v83) = 0;
								(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v69 + 584i64))(v69, 6i64, v81);
								goto LABEL_110;
							}
						}
					}
				}
			}
			goto LABEL_105;
		}
		if (v61 == 63)
		{
			if (!v59)
			{
				if (*(_QWORD*)(a1 + 5864))
				{
					if (!*(_DWORD*)(a1 + 440) && !*(_DWORD*)(a1 + 444))
					{
						v70 = sub_1404705D0((_DWORD*)a1, (unsigned int)(*(_DWORD*)(a1 + 684) != 0) + 6709, v60, 0i64);
						v71 = v70;
						if (v70)
						{
							if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
								*(_QWORD*)(a1 + 5864),
								v70))
							{
								v72 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
								v73 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
									*(_QWORD*)(a1 + 5864),
									v71,
									v72);
								v74 = v73;
								v75 = *(_DWORD*)(v73 + 24);
								LODWORD(v78) = 0;
								v79 = a1;
								v68 = *(_DWORD*)(v73 + 20) < v75;
								*(_QWORD*)&v80 = sub_140471E50;
								*((_QWORD*)&v80 + 1) = 0i64;
								if (v68)
									v75 = *(_DWORD*)(v73 + 20);
								sub_140195960(a1 + 5168, v75, (__int64)&v78, 4);
								v76 = *(_DWORD*)(v74 + 24);
								if (*(_DWORD*)(v74 + 20) < v76)
									v76 = *(_DWORD*)(v74 + 20);
								LODWORD(v78) = 0;
								v79 = a1;
								*(_QWORD*)&v80 = sub_140471EA0;
								*((_QWORD*)&v80 + 1) = 0i64;
								sub_140195960(a1 + 5240, v76, (__int64)&v78, 4);
								v77 = *(_QWORD*)(a1 + 5864);
								v78 = __PAIR64__(v72, v71);
								v79 = 1065353216i64;
								LODWORD(v80) = 33;
								*(_QWORD*)((char*)&v80 + 4) = 2i64;
								HIDWORD(v80) = 0;
								(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v77 + 584i64))(
									v77,
									6i64,
									&v78);
								goto LABEL_109;
							}
						}
					}
				}
			}
		LABEL_108:
			LODWORD(v78) = 0;
			*(_QWORD*)&v80 = sub_140471E50;
			v79 = a1;
			*((_QWORD*)&v80 + 1) = 0i64;
			sub_140195960(a1 + 5168, 150, (__int64)&v78, 4);
			*(_QWORD*)&v80 = sub_140471EA0;
			LODWORD(v78) = 0;
			v79 = a1;
			*((_QWORD*)&v80 + 1) = 0i64;
			sub_140195960(a1 + 5240, 150, (__int64)&v78, 4);
		LABEL_109:
			*(_DWORD*)(a1 + 5312) = 1;
		}
	}
LABEL_110:
	if ((v55 & 4) != 0)
		sub_140195D70(a1 + 5016);
	if ((v55 & 0x10) != 0)
		sub_140195D70(a1 + 5088);
	*(_DWORD*)(a1 + 5160) = v55;
LABEL_115:
	v57 = qword_140C65898;
	*(_DWORD*)(a1 + 6312) = 1;
	v58 = *(_QWORD*)(v57 + 120);
	if (v58)
	{
		LOBYTE(v4) = *(_DWORD*)(a1 + 8) == *(_DWORD*)(v58 + 8);
		if (v4)
			*(_DWORD*)(v57 + 28568) = 1;
	}
	if (!a2)
	{
		sub_140008410(a1 + 328);
		v57 = qword_140C65898;
	}
	return sub_14042E120(*(_QWORD*)(v57 + 29504), *(_DWORD*)(a1 + 8), a2);
}
// 14045CBAC: variable 'v43' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 14045C500: using guessed type char var_108[184];

