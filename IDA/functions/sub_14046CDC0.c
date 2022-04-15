//----- (000000014046CDC0) ----------------------------------------------------
__int64 __fastcall sub_14046CDC0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	int v7; // eax
	unsigned int v8; // r14d
	__int32 v9; // eax
	unsigned __int32 v10; // eax
	__int64 v11; // rcx
	_DWORD* v12; // rcx
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	int v18; // eax
	int v19; // eax
	int v20; // r10d
	unsigned int v21; // ebx
	__int64 v22; // r8
	int v23; // edi
	int v24; // ecx
	__int64 v25; // rax
	int v26; // r15d
	int v27; // eax
	int v28; // r9d
	int v29; // eax
	bool v30; // zf
	char v31; // r9
	int v32; // r10d
	int v33; // eax
	int v34; // eax
	int v35; // eax
	BOOL v36; // eax
	int v37; // ecx
	BOOL v38; // eax
	int v39; // ecx
	BOOL v40; // eax
	int v41; // ecx
	int v42; // eax
	int v43; // edx
	int v44; // eax
	BOOL v45; // r15d
	__int64 v46; // rax
	__int64 v47; // r13
	unsigned int v48; // edx
	__int64 v49; // rax
	unsigned int v50; // ecx
	int v51; // eax
	unsigned int v52; // eax
	int v53; // ecx
	__int64 v54; // rax
	__m128* v55; // r15
	int v56; // r10d
	__m128 v57; // xmm1
	__m128* v58; // rax
	__m128 v59; // xmm4
	__m128 v60; // xmm5
	__m128 v61; // xmm3
	__m128 v62; // xmm2
	float v63; // xmm1_4
	__m128 v64; // xmm5
	__m128 v65; // xmm6
	__m128 v66; // xmm0
	__m128 v67; // xmm0
	unsigned __int64 v68; // rcx
	__m128* v69; // rax
	__m128 v70; // xmm5
	__m128 v71; // xmm5
	__m128 v72; // xmm4
	__m128 v73; // xmm3
	float v74; // xmm1_4
	__m128 v75; // xmm2
	__m128 v76; // xmm1
	double v77; // xmm0_8
	int v78; // edx
	__int64 v79; // rax
	int v80; // eax
	int v81; // r15d
	int v82; // ebx
	__int32 v83; // eax
	__m128* v84; // r8
	__int64 v85; // rax
	__int64 v86; // rbx
	__int64 v87; // rax
	__int64 v88; // rdx
	unsigned int v89; // ecx
	unsigned int v90; // eax
	__m128* v91; // r8
	unsigned int v92; // eax
	unsigned int v93; // eax
	__int64 v94; // rcx
	unsigned int v95; // ebx
	unsigned int v96; // r13d
	int v97; // r15d
	int v98; // ebx
	int v99; // eax
	unsigned int v100; // eax
	__int64 v101; // rcx
	__int64 v102; // rbx
	int v103; // eax
	int v104; // r15d
	unsigned int v105; // ecx
	float v106; // xmm1_4
	unsigned int v107; // edi
	__int64 v108; // rbx
	__int64 v109; // rax
	int v110; // ecx
	float v111; // xmm0_4
	__int64 v112; // rcx
	__int64 v113; // rcx
	__int64 v114; // rcx
	__int64 v115; // rcx
	__int64 v116; // rcx
	unsigned int v117; // [rsp+38h] [rbp-89h] BYREF
	unsigned int v118; // [rsp+3Ch] [rbp-85h]
	__int64 v119; // [rsp+40h] [rbp-81h] BYREF
	int v120; // [rsp+48h] [rbp-79h] BYREF
	int v121; // [rsp+4Ch] [rbp-75h]
	__int64 v122; // [rsp+50h] [rbp-71h]
	__m128 v123; // [rsp+58h] [rbp-69h] BYREF
	__int128 v124; // [rsp+68h] [rbp-59h] BYREF
	unsigned __int64 v125; // [rsp+78h] [rbp-49h] BYREF
	__int64 v126; // [rsp+80h] [rbp-41h]
	__int64 v127; // [rsp+88h] [rbp-39h]
	__int64 v128; // [rsp+90h] [rbp-31h]
	__m128 v129; // [rsp+98h] [rbp-29h] BYREF
	__int128 v130; // [rsp+A8h] [rbp-19h]
	int v131; // [rsp+B8h] [rbp-9h]
	__int128 v132; // [rsp+C0h] [rbp-1h]
	void* retaddr; // [rsp+120h] [rbp+5Fh] BYREF
	__int64 v134; // [rsp+128h] [rbp+67h] BYREF
	int v135; // [rsp+138h] [rbp+77h]
	BOOL v136; // [rsp+140h] [rbp+7Fh] BYREF

	result = (__int64)&retaddr;
	v135 = a3;
	if (*(_QWORD*)(a1 + 5864))
	{
		*(_DWORD*)(a1 + 5008) = sub_14047BE40(a1);
		v7 = *(_DWORD*)(a1 + 4936);
		v8 = 0;
		if (v7 != *(_DWORD*)(a1 + 4940))
		{
			if (v7 == 1)
			{
				v123 = 0ui64;
				v124 = 0ui64;
				v9 = *(_DWORD*)(a1 + 5000);
				if (!v9)
					v9 = sub_14046E5F0(a1);
				v123.m128_i32[0] = v9;
				v10 = sub_1401AE6A0(0, 0xFFFF);
				v11 = *(_QWORD*)(a1 + 5864);
				v123.m128_i32[1] = v10;
				v12 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v11 + 424i64))(
					v11,
					v123.m128_u32[0],
					v10);
				if (*v12 == 150 && v123.m128_i32[0] != 150 && v123.m128_i32[0] != 165)
				{
					v13 = *(_QWORD*)(a1 + 5864);
					v123.m128_i32[0] = 165;
					v12 = (_DWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v13 + 424i64))(
						v13,
						165i64,
						v123.m128_u32[1]);
				}
				v123.m128_i32[2] = 1065353216;
				if (*(_DWORD*)(a1 + 5000) || !*(_DWORD*)(a1 + 4940))
					v123.m128_i32[3] = 0;
				else
					v123.m128_i32[3] = v12[5];
				LODWORD(v124) = 4;
				v14 = v12[3];
				v15 = *(_QWORD*)(a1 + 5864);
				*(_DWORD*)(a1 + 4992) = v14;
				*(_DWORD*)(a1 + 4996) = 0;
				*(_DWORD*)(a1 + 4932) = 39;
				(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)v15 + 584i64))(v15, 1i64, &v123);
				if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
					*(_QWORD*)(a1 + 5864),
					v123.m128_u32[0],
					v123.m128_u32[1],
					91i64) == -1)
					sub_14047F210(a1, (__m128*)(a1 + 4576), 0, 0);
				if (!*(_DWORD*)(a1 + 4940))
				{
					sub_14003D8F0(&v134, qword_140C65898 + 28472);
					sub_14047C750(a1, 1);
					sub_14047CF40(a1, 1);
					sub_14003D880(&v134);
				}
			}
			else
			{
				v16 = *(_QWORD*)(a1 + 5864);
				v123.m128_u64[0] = 0i64;
				v123.m128_u64[1] = 1065353216i64;
				v124 = 0ui64;
				(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)v16 + 584i64))(v16, 1i64, &v123);
				a2 = 1;
			}
			*(_DWORD*)(a1 + 4940) = *(_DWORD*)(a1 + 4936);
		}
		v17 = *(_QWORD*)(a1 + 5864);
		*(_DWORD*)(a1 + 4948) = 0;
		result = (*(__int64(__fastcall**)(__int64, bool))(*(_QWORD*)v17 + 392i64))(v17, *(_DWORD*)(a1 + 4920) != 0);
		if (*(_DWORD*)(a1 + 472) && ((*(_BYTE*)(a1 + 4208) & 0x40) != 0 || *(_DWORD*)(a1 + 684)))
			result = sub_1404742E0(a1);
		if (!*(_DWORD*)(a1 + 4936))
		{
			if (a2)
			{
				*(_DWORD*)(a1 + 4892) = *(_DWORD*)(a1 + 4232);
				v18 = *(_DWORD*)(a1 + 13776);
				if (v18 || *(_DWORD*)(a1 + 448))
					*(_DWORD*)(a1 + 448) = v18;
				v19 = *(_DWORD*)(a1 + 440);
				*(_DWORD*)(a1 + 452) = 0;
				*(_DWORD*)(a1 + 444) = v19;
				*(_DWORD*)(a1 + 464) = *(_DWORD*)(a1 + 460);
				*(_DWORD*)(a1 + 5012) = *(_DWORD*)(a1 + 5008);
			}
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5864) + 96i64))(*(_QWORD*)(a1 + 5864));
			v20 = *(_DWORD*)(a1 + 5008);
			v21 = *(_DWORD*)(a1 + 4932);
			if (!v20 || (v22 = *(_QWORD*)(a1 + 3840), (*(_QWORD*)&v132 = v22) == 0i64))
			{
				v22 = a1;
				*(_QWORD*)&v132 = a1;
			}
			v23 = 43;
			if (v21 == 42)
			{
				*(_DWORD*)(a1 + 4932) = 43;
				goto LABEL_144;
			}
			if (v21 == 43 && !a2)
			{
				*(_DWORD*)(a1 + 4932) = 43;
				goto LABEL_144;
			}
			v24 = *(_DWORD*)(a1 + 128);
			if (v24 != 27
				&& v24 != 18
				&& (!*(_QWORD*)(a1 + 184) || *(_DWORD*)(*(_QWORD*)(a1 + 184) + 4i64) != 5)
				&& v24 != 11)
			{
				if (*(_DWORD*)(a1 + 14052) && !v20)
				{
					v25 = *(_QWORD*)(a1 + 3840);
					if (!v25 || (*(_BYTE*)(v25 + 4208) & 2) == 0 || (v26 = 1, *(int*)(v25 + 4896) <= 2))
						v26 = 0;
					if (v21 == 1)
					{
						if (!a2)
						{
							*(_DWORD*)(a1 + 4932) = 1;
							goto LABEL_144;
						}
					}
					else if (v21 != 2)
					{
						v30 = !sub_14047BEA0(a1);
						v27 = 0;
						if (v30)
							LOBYTE(v27) = v26 != 0;
						else
							LOBYTE(v27) = *(_DWORD*)(a1 + 4932) != 0;
						*(_DWORD*)(a1 + 4932) = v27;
						goto LABEL_144;
					}
					*(_DWORD*)(a1 + 4932) = v26 != 0 ? 2 : 0;
					goto LABEL_144;
				}
				v28 = *(_DWORD*)(v22 + 4208);
				if ((v28 & 0x3000) != 0)
				{
					if (v21 != 6 && v21 != 11)
					{
						v29 = 6;
						if ((*(_DWORD*)(a1 + 4208) & 0x2000) != 0)
							v29 = 11;
						*(_DWORD*)(a1 + 4932) = v29;
					}
					goto LABEL_144;
				}
				if ((v28 & 0x18000) != 0)
				{
					if (((v21 - 16) & 0xFFFFFFFD) != 0)
						*(_DWORD*)(a1 + 4932) = (*(_DWORD*)(a1 + 4208) & 0x10000 | 0x80000u) >> 15;
					goto LABEL_144;
				}
				if ((v28 & 0x800) != 0)
				{
					if (v21 == 5)
					{
						*(_DWORD*)(a1 + 5012) = v20;
						*(_DWORD*)(a1 + 4932) = 20;
					}
					else if (v21 == 20)
					{
						if (a2)
							*(_DWORD*)(a1 + 4932) = 21;
					}
					else if (v21 != 21)
					{
						*(_DWORD*)(a1 + 4932) = 20;
					}
					goto LABEL_144;
				}
				if ((v28 & 0x40) != 0)
				{
					if (v21 == 5)
					{
						*(_DWORD*)(a1 + 5012) = v20;
						*(_DWORD*)(a1 + 4932) = 22;
					}
					else if (v21 == 22)
					{
						if (a2)
							*(_DWORD*)(a1 + 4932) = 23;
					}
					else if (v21 != 23)
					{
						*(_DWORD*)(a1 + 4932) = 22;
					}
					goto LABEL_144;
				}
				if (v20)
				{
					if (!*(_DWORD*)(a1 + 5012) && *(_DWORD*)(a1 + 4872))
					{
						*(_DWORD*)(a1 + 4932) = 4;
						*(_DWORD*)(a1 + 5012) = v20;
						goto LABEL_144;
					}
				}
				else if (*(_DWORD*)(a1 + 5012))
				{
					*(_DWORD*)(a1 + 4932) = 5;
					goto LABEL_144;
				}
				if (v21 <= 2 || v21 == 3 && !a2)
				{
					*(_DWORD*)(a1 + 4932) = 3;
					goto LABEL_144;
				}
				if ((v28 & 8) != 0 && (v28 & 0x80u) == 0)
				{
					if (v21 == 21)
						v30 = a2 == 0;
					else
						v30 = v21 == 41;
					if (!v30)
						*(_DWORD*)(a1 + 4932) = 41;
					goto LABEL_144;
				}
				if (!(unsigned int)sub_14045E630(v22))
				{
					v33 = *(_DWORD*)(a1 + 4896);
					if (v33 > 2)
					{
						if (v31 >= 0 || (LOBYTE(v34) = sub_14047C120((_QWORD*)a1), v34))
						{
							switch (*(_DWORD*)(a1 + 4932))
							{
							case 3:
							case 5:
							case 0x14:
							case 0x15:
							case 0x16:
							case 0x17:
							case 0x29:
								v35 = *(_DWORD*)(a1 + 4896);
								if (v35 < 5)
								{
									if (v35 < 4)
										goto LABEL_107;
									if (*(int*)(a1 + 84) <= 1)
									{
										v38 = sub_140482370((_DWORD*)a1);
										v39 = 27;
										if (v38)
											v39 = 29;
										*(_DWORD*)(a1 + 4932) = v39;
									}
									else
									{
										*(_DWORD*)(a1 + 4932) = 28;
									}
								}
								else if (*(int*)(a1 + 84) <= 1)
								{
									v36 = sub_140482370((_DWORD*)a1);
									v37 = 30;
									if (v36)
										v37 = 32;
									*(_DWORD*)(a1 + 4932) = v37;
								}
								else
								{
									*(_DWORD*)(a1 + 4932) = 31;
								}
								break;
							case 6:
								if (*(int*)(a1 + 4896) < 4)
									goto LABEL_107;
								*(_DWORD*)(a1 + 4932) = sub_140482370((_DWORD*)a1) + 7;
								goto LABEL_144;
							case 7:
							case 8:
							case 0x1B:
							case 0x1C:
							case 0x1D:
							case 0x1E:
							case 0x1F:
							case 0x20:
							case 0x21:
							case 0x22:
							case 0x23:
								if (a2 || *(int*)(a1 + 4896) < 4)
									goto LABEL_107;
								goto LABEL_106;
							case 9:
							case 0xA:
							case 0xC:
							case 0xD:
							case 0xE:
							case 0xF:
							case 0x11:
							case 0x13:
							case 0x18:
							case 0x19:
							case 0x1A:
							case 0x26:
							case 0x27:
							case 0x28:
								*(_DWORD*)(a1 + 4932) = 37;
								goto LABEL_144;
							case 0x24:
								goto LABEL_144;
							case 0x25:
								if (a2)
									goto LABEL_107;
							LABEL_106:
								if (*(_DWORD*)(a1 + 5004))
									goto LABEL_107;
								goto LABEL_144;
							default:
								goto LABEL_107;
							}
						}
						else
						{
						LABEL_107:
							*(_DWORD*)(a1 + 4932) = 36;
						}
						goto LABEL_144;
					}
					if (v33 < 2)
					{
						if (v31 < 0)
						{
						LABEL_130:
							*(_DWORD*)(a1 + 4932) = 38;
						}
						else
						{
							switch (v21)
							{
							case 3u:
							case 5u:
							case 0x14u:
							case 0x15u:
							case 0x16u:
							case 0x17u:
							case 0x29u:
								if (v32)
									goto LABEL_130;
								if (*(int*)(a1 + 84) <= 1)
								{
									v40 = sub_140482370((_DWORD*)a1);
									v41 = 33;
									if (v40)
										v41 = 35;
									*(_DWORD*)(a1 + 4932) = v41;
								}
								else
								{
									*(_DWORD*)(a1 + 4932) = 34;
								}
								break;
							case 0xBu:
								*(_DWORD*)(a1 + 4932) = sub_140482370((_DWORD*)a1) + 12;
								break;
							case 0xCu:
							case 0xDu:
							case 0x21u:
							case 0x22u:
							case 0x23u:
								if (a2)
									goto LABEL_130;
								break;
							case 0x26u:
								goto LABEL_144;
							default:
								goto LABEL_130;
							}
						}
						goto LABEL_144;
					}
					if (v31 >= 0 || (LOBYTE(v42) = sub_14047C120((_QWORD*)a1), v42))
					{
						switch (*(_DWORD*)(a1 + 4932))
						{
						case 3:
						case 5:
						case 0x14:
						case 0x15:
						case 0x16:
						case 0x17:
						case 0x29:
							if (sub_140482370((_DWORD*)a1))
								*(_DWORD*)(a1 + 4932) = 26;
							else
								*(_DWORD*)(a1 + 4932) = (*(_DWORD*)(a1 + 84) > 1) + 24;
							break;
						case 4:
						case 9:
						case 0xA:
						case 0xE:
						case 0xF:
						case 0x11:
						case 0x13:
						case 0x18:
						case 0x19:
						case 0x1A:
						case 0x28:
							if (a2 || a3)
								goto LABEL_143;
							break;
						case 6:
							*(_DWORD*)(a1 + 4932) = sub_140482370((_DWORD*)a1) + 9;
							break;
						case 7:
						case 8:
						case 0x1B:
						case 0x1C:
						case 0x1D:
						case 0x1E:
						case 0x1F:
						case 0x20:
						case 0x21:
						case 0x22:
						case 0x23:
						case 0x24:
						case 0x25:
						case 0x26:
							v44 = *(_DWORD*)(a1 + 440);
							*(_DWORD*)(a1 + 4932) = 40;
							*(_DWORD*)(a1 + 452) = 0;
							*(_DWORD*)(a1 + 444) = v44;
							*(_DWORD*)(a1 + 464) = *(_DWORD*)(a1 + 460);
							break;
						case 0xB:
							*(_DWORD*)(a1 + 4932) = sub_140482370((_DWORD*)a1) + 14;
							break;
						case 0x10:
							*(_DWORD*)(a1 + 4932) = 17;
							break;
						case 0x12:
							*(_DWORD*)(a1 + 4932) = 19;
							break;
						case 0x27:
							break;
						default:
							goto LABEL_143;
						}
					LABEL_144:
						v43 = *(_DWORD*)(a1 + 4932);
						LODWORD(v134) = 0;
						switch (v43)
						{
						case 9:
						case 10:
						case 14:
						case 15:
						case 17:
						case 19:
						case 39:
						case 40:
							LODWORD(v134) = 1;
							break;
						default:
							break;
						}
						v45 = (unsigned int)(v43 - 6) <= 9;
						v136 = (unsigned int)(v43 - 16) <= 3;
						v46 = sub_1404695E0(a1);
						v47 = 0i64;
						v129.m128_u64[0] = v46;
						if (v46)
						{
							v47 = *(_QWORD*)(v46 + 312);
						}
						else
						{
							if (*(_QWORD*)(qword_140C65898 + 120) != a1)
								goto LABEL_165;
							if (!*(_DWORD*)(qword_140C65898 + 25440))
								goto LABEL_165;
							v48 = *(_DWORD*)(qword_140C65898 + 25444);
							if (!v48)
								goto LABEL_165;
							v47 = sub_1403ACD90(qword_140C65B70, v48, a1);
						}
						if (v47)
						{
							v49 = *(_QWORD*)(v47 + 112);
							if ((*(_DWORD*)(v49 + 264) & 0x400000) == 0)
							{
								v50 = *(_DWORD*)(v49 + 124);
								if (v50 <= 8)
								{
									v51 = 298;
									if (_bittest(&v51, v50))
									{
									LABEL_167:
										if (v45 || v136)
											goto LABEL_204;
										if (*(_DWORD*)(a1 + 4956) && !*(_DWORD*)(a1 + 4952))
										{
											*(_OWORD*)(a1 + 4976) = *(_OWORD*)(a1 + 4416);
											*(_DWORD*)(a1 + 4952) = 1;
										}
										v52 = sub_140467E40(a1);
										if (!*(_DWORD*)(a1 + 4956))
										{
											if (v52 > 0xA)
												goto LABEL_200;
											v53 = 1456;
											if (!_bittest(&v53, v52))
												goto LABEL_200;
										}
										v54 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 264));
										v55 = (__m128*)v54;
										if (!v54
											|| *(_DWORD*)(a1 + 268) == 2
											|| (*(_BYTE*)(v54 + 36) & 1) != 0
											|| *(_QWORD*)(v54 + 24) && !sub_140466B90(a1, v54))
										{
											goto LABEL_200;
										}
										if (!*(_DWORD*)(a1 + 4956))
											goto LABEL_186;
										if (v129.m128_u64[0] && (*(_BYTE*)(*(_QWORD*)(v47 + 112) + 264i64) & 1) == 0
											|| (unsigned int)sub_14045E6D0(a1)
											|| (unsigned int)sub_14045AE10(a1))
										{
										LABEL_199:
											*(_DWORD*)(a1 + 4948) = 1;
											goto LABEL_200;
										}
										if (!v56)
										{
										LABEL_186:
											v57 = _mm_mul_ps(*(__m128*)(a1 + 4416), _mm_sub_ps(v55[286], *(__m128*)(a1 + 4576)));
											if ((float)((float)(v57.m128_f32[0] + _mm_shuffle_ps(v57, v57, 85).m128_f32[0])
												+ _mm_shuffle_ps(v57, v57, 170).m128_f32[0]) <= 0.0)
											{
											LABEL_200:
												if (*(_DWORD*)(a1 + 4956))
												{
													if (!*(_DWORD*)(a1 + 4948))
													{
														v75 = _mm_sub_ps(*(__m128*)(a1 + 4976), *(__m128*)(a1 + 4416));
														v76 = _mm_mul_ps(v75, v75);
														if ((float)((float)(v76.m128_f32[0] + _mm_shuffle_ps(v76, v76, 85).m128_f32[0])
															+ _mm_shuffle_ps(v76, v76, 170).m128_f32[0]) >= *(float*)&dword_140C3C7A8)
														{
															*(_DWORD*)(a1 + 4948) = 1;
															*(_OWORD*)(a1 + 4960) = *(_OWORD*)(a1 + 4416);
														}
													}
												}
											LABEL_204:
												HIDWORD(v122) = 0;
												v77 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
												v78 = 0;
												v119 = 1065353216i64;
												v122 = 0i64;
												v120 = 0;
												v121 = 0;
												v118 = (int)(v77 * 65536.0);
												v136 = 0;
												if ((dword_140DC2EC8 & 1) == 0)
												{
													dword_140DC2EC8 |= 1u;
													v79 = sub_140200220(0x10Eu);
													if (v79)
														v80 = *(_DWORD*)(v79 + 4);
													else
														v80 = 0;
													v78 = v121;
													dword_140DC2ECC = v80;
												}
												v81 = 266;
												switch (*(_DWORD*)(a1 + 4932))
												{
												case 0:
													v117 = sub_14046EE00((_DWORD*)a1);
													break;
												case 1:
													v117 = sub_14046EF40((_DWORD*)a1);
													break;
												case 2:
													v117 = sub_14046F080((_DWORD*)a1);
													break;
												case 3:
													v117 = 1611;
													break;
												case 4:
													v117 = 5414;
													*(_DWORD*)(a1 + 5312) = 0;
													break;
												case 5:
													v117 = 5415;
													break;
												case 6:
													v117 = 7423;
													break;
												case 7:
													v117 = 7426;
													break;
												case 8:
													v117 = 7674;
													break;
												case 9:
													v117 = 7424;
													break;
												case 0xA:
													v117 = 7425;
													break;
												case 0xB:
													v117 = 7427;
													break;
												case 0xC:
													v117 = 7430;
													break;
												case 0xD:
													v117 = 7675;
													break;
												case 0xE:
													v117 = 7428;
													break;
												case 0xF:
													v117 = 7429;
													break;
												case 0x10:
													v117 = 6652;
													break;
												case 0x11:
													v117 = 6653;
													break;
												case 0x12:
													v117 = 6646;
													break;
												case 0x13:
													v117 = 6649;
													break;
												case 0x14:
													v117 = 5472;
													if (v21 != 20)
														v121 = v78 | 3;
													break;
												case 0x15:
												case 0x17:
												case 0x29:
													v117 = 167;
													break;
												case 0x16:
													v117 = 166;
													break;
												case 0x18:
													v117 = 159;
													break;
												case 0x19:
													v117 = 7802;
													break;
												case 0x1A:
													v117 = 160;
													break;
												case 0x1B:
													v117 = 266;
													break;
												case 0x1C:
													v117 = 7803;
													break;
												case 0x1D:
												case 0x20:
													v117 = 7673;
													break;
												case 0x1E:
													v117 = 7852;
													break;
												case 0x1F:
													v117 = 7863;
													break;
												case 0x21:
													v117 = 7805;
													break;
												case 0x22:
													v117 = 7804;
													break;
												case 0x23:
													v117 = 7833;
													break;
												case 0x24:
												case 0x25:
												case 0x26:
													v117 = sub_14046ECC0((_DWORD*)a1);
													break;
												case 0x27:
													v117 = sub_14046E720((_DWORD*)a1, (_DWORD*)&v119 + 1, &v136, &v120);
													break;
												case 0x28:
													v117 = sub_14046E720((_DWORD*)a1, (_DWORD*)&v119 + 1, &v136, &v120);
													if (v117 == 150)
													{
														if (*(_DWORD*)(a1 + 5008))
														{
															v117 = 5419;
														}
														else if (*(_DWORD*)(a1 + 4864))
														{
															v117 = 556;
														}
														else
														{
															HIDWORD(v122) = dword_140DC2ECC;
														}
													}
													break;
												case 0x2B:
													v117 = 1334;
													break;
												default:
													break;
												}
												v82 = sub_140467E40(a1);
												v131 = v82;
												if (*(_DWORD*)(a1 + 4948))
												{
													if (!*(_DWORD*)(a1 + 4956))
													{
														if (v117 == 160 || v117 == 7429 || v117 == 7669 || v117 - 7671 <= 3)
														{
															v125 = 0i64;
															v126 = 1065353216i64;
															v127 = 0i64;
															v128 = 0i64;
															v84 = (__m128*) & v125;
														}
														else
														{
															v123.m128_u64[0] = 0i64;
															v123.m128_u64[1] = 1065353216i64;
															v124 = 0ui64;
															v123.m128_i32[0] = sub_14046E720((_DWORD*)a1, &v123.m128_i32[3], &v129, &v124);
															v83 = sub_1404705D0((_DWORD*)a1, v123.m128_i32[0], v82, 0i64);
															LODWORD(v124) = 36;
															v84 = &v123;
															v123.m128_i32[0] = v83;
														}
														goto LABEL_264;
													}
												}
												else if (*(_DWORD*)(a1 + 4952))
												{
													v129.m128_u64[0] = 0i64;
													v129.m128_u64[1] = 1065353216i64;
													v130 = 0ui64;
													v84 = &v129;
												LABEL_264:
													(*(void(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 5864) + 584i64))(
														*(_QWORD*)(a1 + 5864),
														8i64,
														v84);
												}
												v85 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
												v86 = v85;
												if (v85)
												{
													if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v85 + 32i64))(v85))
													{
														v87 = *(_QWORD*)(v86 + 184);
														if (v87)
														{
															v88 = *(_QWORD*)(a1 + 3840);
															if (v88)
															{
																v89 = *(_DWORD*)(v87 + 4);
																if (v89 <= 8)
																{
																	if (_bittest(&v81, v89))
																	{
																		if (*(float*)(v88 + 4904) >= 0.0)
																		{
																			v92 = 165;
																			if (v89 == 8)
																				v92 = 268;
																			LODWORD(v130) = *(_DWORD*)(v88 + 4904);
																			v129.m128_u64[1] = 1065353216i64;
																			*(_QWORD*)((char*)&v130 + 4) = 17i64;
																			v91 = &v129;
																			v129.m128_u64[0] = v92;
																		}
																		else
																		{
																			v90 = 164;
																			if (v89 == 8)
																				v90 = 267;
																			LODWORD(v124) = *(_DWORD*)(v88 + 4904);
																			v123.m128_u64[1] = 1065353216i64;
																			*(_QWORD*)((char*)&v124 + 4) = 17i64;
																			v123.m128_u64[0] = v90;
																			v91 = &v123;
																		}
																		(*(void(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 5864) + 600i64))(
																			*(_QWORD*)(a1 + 5864),
																			5i64,
																			v91);
																		v93 = sub_1400518A0(qword_140C63628, 124, 2, 0);
																		v94 = *(_QWORD*)(a1 + 5512);
																		v95 = v93;
																		if (v94)
																			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v94 + 80i64))(v94, v93);
																		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 376i64))(
																			*(_QWORD*)(a1 + 5864),
																			v95);
																	}
																}
															}
														}
													}
												}
												v96 = v117;
												if (*(_DWORD*)(a1 + 440) == 10 || (v97 = 0, *(_DWORD*)(a1 + 444) == 10))
													v97 = 1;
												v98 = *(_DWORD*)(a1 + 4232);
												v99 = sub_14047BBA0((_DWORD*)a1);
												v100 = sub_1401DB470(v117, v98, v99, v131, v97, &v129);
												v101 = *(_QWORD*)(a1 + 5864);
												v117 = v100;
												v102 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v101 + 424i64))(
													v101,
													v100,
													v118);
												v103 = *(_DWORD*)(v132 + 4208);
												if ((v103 & 0x3000) != 0 || (v103 & 0x18000) != 0)
												{
													v104 = v134;
												}
												else
												{
													v104 = v134;
													if (!(_DWORD)v134)
													{
														v30 = *(_DWORD*)(a1 + 4932) == 38;
														v23 = 2;
														v120 = 2;
														if (v30 && !*(_DWORD*)(a1 + 4860))
															LODWORD(v119) = -1082130432;
														if (*(float*)(v102 + 28) != 0.0)
														{
															v121 = 4;
															if (!a2)
																v121 = 12;
														}
														goto LABEL_301;
													}
													v23 = v120;
													if (v120)
													{
														if (v120 != 1)
															goto LABEL_301;
													}
													else
													{
														v23 = 1;
														v120 = 1;
													}
													if (*(_DWORD*)(a1 + 4232) != 1 || *(_DWORD*)(v102 + 12) != 1)
														goto LABEL_301;
													v23 = 2;
												}
												v120 = v23;
											LABEL_301:
												if (v117 != v129.m128_i32[0] && *(_DWORD*)v102 != v129.m128_i32[0] && *(_DWORD*)v102 != 150)
												{
													if (v23 == 1)
													{
														v23 = 34;
														v120 = 34;
													}
													else if (v23 == 2)
													{
														v23 = 35;
														v120 = 35;
													}
												}
												if (*(_DWORD*)(a1 + 5312))
												{
													v121 |= 8u;
													*(_DWORD*)(a1 + 5312) = 0;
												}
												if (v135 && (((v135 - 9) & 0xFFFFFFFD) == 0 || v23 == 1 || v23 == 34))
													v121 |= 3u;
												if (HIDWORD(v119) && v136 && (v105 = *(_DWORD*)(v102 + 20)) != 0)
													HIDWORD(v119) %= v105;
												else
													HIDWORD(v119) = 0;
												if (*(_DWORD*)(a1 + 452))
													*(_DWORD*)(a1 + 456) += *(_DWORD*)(v102 + 20);
												(*(void(__fastcall**)(_QWORD, _QWORD, unsigned int*))(**(_QWORD**)(a1 + 5864) + 584i64))(
													*(_QWORD*)(a1 + 5864),
													0i64,
													&v117);
												*(_DWORD*)(a1 + 4992) = *(_DWORD*)(v102 + 12);
												*(_DWORD*)(a1 + 4996) = *(_DWORD*)(v102 + 4) & 0x10;
												if (*(_DWORD*)(a1 + 4832))
												{
													v106 = fabs(*(float*)(a1 + 4808));
													if (*(float*)(a1 + 4820) == 0.0)
														*(_DWORD*)(a1 + 4880) = 0;
													if (v106 > 1.5707964 || *(float*)(a1 + 4824) > 2.0)
														*(_DWORD*)(a1 + 4880) = 1;
													if (*(_DWORD*)(a1 + 4884)
														|| v106 < 0.0000099999997
														|| !v104
														|| *(_DWORD*)(a1 + 14052)
														|| sub_1404695E0(a1)
														|| *(_QWORD*)(qword_140C65898 + 25744) == a1 && *(_DWORD*)(qword_140C65898 + 25440))
													{
														*(_DWORD*)(a1 + 4880) = 0;
													}
													if (*(_DWORD*)(a1 + 4880))
													{
														if (*(float*)(a1 + 4820) == 0.0)
														{
															if (*(_DWORD*)(a1 + 4232) || sub_140482370((_DWORD*)a1))
															{
																v113 = *(_QWORD*)(a1 + 5864);
																v125 = 0i64;
																v126 = 1065353216i64;
																v127 = 0i64;
																v128 = 0i64;
																(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v113 + 584i64))(
																	v113,
																	7i64,
																	&v125);
																*(_DWORD*)(a1 + 4820) = 1041865114;
															}
															else
															{
																v107 = (*(float*)(a1 + 4808) >= 0.0) + 606;
																v108 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
																v109 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864)
																	+ 424i64))(
																		*(_QWORD*)(a1 + 5864),
																		v107,
																		v108);
																v125 = __PAIR64__(v108, v107);
																v110 = *(_DWORD*)(v109 + 20);
																v126 = 1065353216i64;
																v127 = 14i64;
																v128 = 0i64;
																v111 = (float)v110;
																v112 = *(_QWORD*)(a1 + 5864);
																*(float*)(a1 + 4820) = v111 * 0.001;
																(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v112 + 584i64))(
																	v112,
																	7i64,
																	&v125);
															}
														}
													}
													else
													{
														v114 = *(_QWORD*)(a1 + 5864);
														v125 = 0i64;
														v126 = 1065353216i64;
														v127 = 0i64;
														v128 = 0i64;
														(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v114 + 584i64))(
															v114,
															7i64,
															&v125);
														*(_DWORD*)(a1 + 4820) = 0;
													}
												}
												result = *(unsigned int*)(a1 + 128);
												if ((_DWORD)result == 4 || (_DWORD)result == 30)
												{
													v115 = *(_QWORD*)(a1 + 5880);
													if (v115)
													{
														LOBYTE(v8) = *(_DWORD*)(a1 + 440) == 3;
														result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v115 + 296i64))(v115, v8);
													}
												}
												v116 = *(_QWORD*)(a1 + 5872);
												if (v116)
													return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v116 + 304i64))(v116, v96);
												v116 = *(_QWORD*)(a1 + 5880);
												if (v116)
													return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v116 + 304i64))(v116, v96);
												return result;
											}
										}
										if ((*(unsigned int(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 5864) + 864i64))(
											*(_QWORD*)(a1 + 5864),
											8i64,
											&v129))
										{
											v58 = *(__m128**)(qword_140C65898 + 29096);
											if (!v58)
												v58 = *(__m128**)(qword_140C65898 + 29088);
											v59 = *(__m128*)(a1 + 4544);
											v60 = (__m128)0x40400000u;
											v61 = _mm_mul_ps(v59, v59);
											v61.m128_f32[0] = (float)(v61.m128_f32[0] + _mm_shuffle_ps(v61, v61, 85).m128_f32[0])
												+ _mm_shuffle_ps(v61, v61, 170).m128_f32[0];
											v62 = *(__m128*)(a1 + 4576);
											v63 = 1.0 / fsqrt(v61.m128_f32[0]);
											v60.m128_f32[0] = fmaxf(
												(float)((float)(3.0 - (float)((float)(v61.m128_f32[0] * v63) * v63)) * 0.5)
												* v63,
												0.0);
											v64 = _mm_mul_ps(_mm_shuffle_ps(v60, v60, 0), v59);
											v65 = _mm_mul_ps(
												_mm_sub_ps(
													_mm_add_ps(
														_mm_add_ps(
															_mm_add_ps(
																_mm_mul_ps(_mm_shuffle_ps(v129, v129, 85), v58[11]),
																_mm_mul_ps(_mm_shuffle_ps(v129, v129, 0), v58[10])),
															_mm_mul_ps(_mm_shuffle_ps(v129, v129, 170), v58[12])),
														v58[13]),
													v62),
												v64);
											v66 = _mm_shuffle_ps(v65, v65, 85);
											v66.m128_f32[0] = (float)(v66.m128_f32[0] + v65.m128_f32[0])
												+ _mm_shuffle_ps(v65, v65, 170).m128_f32[0];
											v67 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v66, v66, 0), v64), v62);
										}
										else
										{
											v67 = *(__m128*)(a1 + 4656);
										}
										v68 = v55[366].m128_u64[1];
										v129 = v67;
										if (v68
											&& (*(unsigned int(__fastcall**)(unsigned __int64, __int64, __m128*))(*(_QWORD*)v68 + 864i64))(
												v68,
												8i64,
												&v123))
										{
											v69 = *(__m128**)(qword_140C65898 + 29096);
											if (!v69)
												v69 = *(__m128**)(qword_140C65898 + 29088);
											v70 = _mm_add_ps(
												_mm_add_ps(
													_mm_add_ps(
														_mm_mul_ps(_mm_shuffle_ps(v123, v123, 85), v69[11]),
														_mm_mul_ps(_mm_shuffle_ps(v123, v123, 0), v69[10])),
													_mm_mul_ps(_mm_shuffle_ps(v123, v123, 170), v69[12])),
												v69[13]);
										}
										else
										{
											v70 = v55[291];
										}
										v71 = _mm_sub_ps(v70, v129);
										v72 = (__m128)0x40400000u;
										v73 = _mm_mul_ps(v71, v71);
										v73.m128_f32[0] = (float)(v73.m128_f32[0] + _mm_shuffle_ps(v73, v73, 85).m128_f32[0])
											+ _mm_shuffle_ps(v73, v73, 170).m128_f32[0];
										v74 = 1.0 / fsqrt(v73.m128_f32[0]);
										v72.m128_f32[0] = fmaxf(
											(float)((float)(3.0 - (float)((float)(v73.m128_f32[0] * v74) * v74)) * 0.5)
											* v74,
											0.0);
										*(__m128*)(a1 + 4960) = _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0), v71);
										goto LABEL_199;
									}
								}
							}
						}
					LABEL_165:
						if (!*(_DWORD*)(a1 + 4956) && !*(_DWORD*)(a1 + 5664))
							goto LABEL_204;
						goto LABEL_167;
					}
				}
			}
		LABEL_143:
			*(_DWORD*)(a1 + 4932) = 39;
			goto LABEL_144;
		}
	}
	return result;
}
// 14046D351: conditional instruction was optimized away because r10d.4!=0
// 14046D3D1: variable 'v31' is possibly undefined
// 14046D3DD: variable 'v34' is possibly undefined
// 14046D534: variable 'v32' is possibly undefined
// 14046D594: variable 'v42' is possibly undefined
// 14046D86E: variable 'v56' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C3C7A8: using guessed type int dword_140C3C7A8;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140DC2EC8: using guessed type int dword_140DC2EC8;
// 140DC2ECC: using guessed type int dword_140DC2ECC;

