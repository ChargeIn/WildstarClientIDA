//----- (00000001403AFB10) ----------------------------------------------------
__int64 __fastcall sub_1403AFB10(
	__int64 a1,
	_DWORD* a2,
	__int64 a3,
	__int64 a4,
	__int64 a5,
	__int64 a6,
	__int64 a7,
	__int64 a8,
	__int64 a9,
	int a10)
{
	__int64 v10; // rbx
	unsigned __int64 v11; // r12
	__int64 v12; // rsi
	int v15; // r15d
	int v16; // edx
	__int64 v17; // rax
	int v18; // r13d
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rax
	int v22; // ecx
	__int64 v23; // rax
	int v24; // edi
	unsigned int v25; // eax
	unsigned int v26; // ecx
	int v27; // eax
	unsigned __int64 v28; // r8
	unsigned __int64 v29; // rdx
	int* v30; // rcx
	__int64 result; // rax
	int v32; // r15d
	_DWORD* v33; // rcx
	int v34; // r14d
	int v35; // eax
	int v36; // edi
	int v37; // eax
	int v38; // edi
	__int64 v39; // rax
	BOOL v40; // esi
	BOOL v41; // eax
	BOOL v42; // eax
	BOOL v43; // eax
	int v44; // eax
	int v45; // eax
	int v46; // eax
	int v47; // eax
	int v48; // eax
	unsigned __int64 v49; // r8
	unsigned __int64 v50; // rdx
	int* v51; // rax
	int v52; // r15d
	__int64 v53; // r9
	__int64 v54; // rax
	int v55; // edi
	unsigned __int64 v56; // r8
	unsigned __int64 v57; // rdx
	int* v58; // rcx
	unsigned __int64 v59; // r8
	unsigned __int64 v60; // rdx
	int* v61; // rcx
	unsigned __int64 v62; // r8
	unsigned __int64 v63; // rdx
	int* v64; // rcx
	unsigned __int64 v65; // r8
	unsigned __int64 v66; // rdx
	int* v67; // rcx
	int v68; // r13d
	__int64 v69; // r15
	int v70; // eax
	unsigned __int64 v71; // r8
	unsigned __int64 v72; // rdx
	int* v73; // rax
	__int64 v74; // rdi
	int v75; // eax
	unsigned int v76; // ecx
	__int64 v77; // rax
	__int64 v78; // rax
	unsigned __int64 v79; // r8
	unsigned __int64 v80; // rdx
	int* v81; // rcx
	unsigned __int64 v82; // r8
	unsigned __int64 v83; // rdx
	int* v84; // rax
	__int64 v85; // rsi
	__int64 v86; // r14
	int v87; // eax
	unsigned __int64 v88; // r8
	unsigned __int64 v89; // rdx
	int* v90; // rax
	__int64 v91; // rcx
	int v92; // eax
	unsigned __int64 v93; // r8
	unsigned __int64 v94; // rdx
	int* v95; // rax
	__int64 v96; // rcx
	int v97; // eax
	unsigned __int64 v98; // r8
	unsigned __int64 v99; // rdx
	int* v100; // rax
	__int64 v101; // rcx
	__int64 v102; // r9
	__int64 v103; // rsi
	int v104; // eax
	int v105; // edi
	unsigned __int64 v106; // r8
	unsigned __int64 v107; // rdx
	int* v108; // rax
	int v109; // eax
	unsigned __int64 v110; // r8
	unsigned __int64 v111; // rdx
	int* v112; // rax
	__int64 v113; // rcx
	unsigned __int64 v114; // r8
	unsigned __int64 v115; // rdx
	int* v116; // rcx
	int v117; // eax
	unsigned __int64 v118; // r8
	unsigned __int64 v119; // rdx
	int* v120; // rax
	__int64 v121; // rcx
	unsigned __int64 v122; // r8
	int* v123; // rcx
	int v124; // [rsp+30h] [rbp-18h]
	int v125[4]; // [rsp+38h] [rbp-10h] BYREF
	__int64 v129; // [rsp+A8h] [rbp+60h] BYREF

	v129 = a4;
	v10 = a8;
	v11 = 0i64;
	v12 = a4;
	if (!a8 || (v15 = 0, !*(_DWORD*)(a8 + 20)))
		v15 = 1;
	v16 = *(_DWORD*)(a4 + 5632);
	LODWORD(a8) = v15;
	v124 = 0;
	v17 = sub_140561C30(qword_140C65B70, v16);
	v18 = a10;
	if (v17
		|| *(_QWORD*)(qword_140C65898 + 120) == v12 && (v19 = sub_14039DF50(qword_140C65898)) != 0 && sub_1404695E0(v19))
	{
		if (a2[5])
		{
			v20 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v12 + 5632));
			if (!v20 && *(_QWORD*)(qword_140C65898 + 120) == v12)
			{
				v21 = sub_14039DF50(qword_140C65898);
				if (v21)
					v20 = sub_1404695E0(v21);
				else
					v20 = 0i64;
			}
			if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v20 + 312) + 112i64) + 264i64) & 0x20) == 0)
			{
				v22 = *(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64);
				if ((v22 & 8) == 0 && (v22 & 4) == 0)
				{
					v23 = sub_1404695E0(v12);
					v24 = *(_DWORD*)(v23 + 80) + *(_DWORD*)(v23 + 404) - dword_140C636A8;
					if (v24 < 0)
						v24 = 0;
					sub_1404695E0(v12);
					if (!v18)
						goto LABEL_27;
					v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 120i64))(a1);
					v26 = 0;
					if (v24)
						v26 = v24;
					if (v26 <= v25)
					{
						v124 = 1;
						if (!v10)
						{
						LABEL_36:
							v27 = 0;
							goto LABEL_37;
						}
						*(_DWORD*)(v10 + 16) = 317;
					}
					else
					{
					LABEL_27:
						if (v10)
						{
							v28 = *(_QWORD*)(v10 + 8);
							v125[0] = 13;
							*(_DWORD*)(v10 + 16) = 13;
							*(_DWORD*)(v10 + 24) = 1;
							v29 = 0i64;
							if (v28)
							{
								v30 = *(int**)v10;
								while (*v30 != 13)
								{
									if (*v30 <= 13)
									{
										++v29;
										++v30;
										if (v29 < v28)
											continue;
									}
									goto LABEL_33;
								}
							}
							else
							{
							LABEL_33:
								sub_1401C2E70((__int64*)v10, v29, v125);
							}
						}
						if (v15)
							return 13i64;
					}
				}
			}
		}
	}
	if (!v10)
		goto LABEL_36;
	v27 = *(_DWORD*)(v10 + 28);
LABEL_37:
	v32 = a2[18];
	v33 = *(_DWORD**)(a3 + 112);
	if (v33[76])
	{
		v34 = v33[78];
		v35 = ~v27;
		v36 = v35 & v33[77];
		if (((unsigned __int8)v35 & (_BYTE)v33[77] & 1) != 0)
		{
			if (*(_DWORD*)(v12 + 592) || (v37 = 0, *(_DWORD*)(v12 + 128) == 23))
				v37 = 1;
			if ((v34 & 1) != 0)
			{
				if (!v37)
				{
					v38 = 58;
					goto LABEL_119;
				}
			}
			else if (v37)
			{
				v38 = 57;
				goto LABEL_119;
			}
		}
		if ((v36 & 2) != 0)
		{
			if ((v34 & 2) != 0)
			{
				if (!*(_DWORD*)(v12 + 684))
				{
					v38 = 60;
					goto LABEL_119;
				}
			}
			else if (*(_DWORD*)(v12 + 684))
			{
				v38 = 59;
				goto LABEL_119;
			}
		}
		if ((v36 & 8) != 0)
		{
			v39 = sub_1405B3F90(v12);
			if ((v34 & 8) != 0)
			{
				if (*(_DWORD*)(v39 + 4896) == 2)
				{
					v38 = 64;
					goto LABEL_119;
				}
			}
			else if (*(_DWORD*)(v39 + 4896) != 2)
			{
				v38 = 63;
				goto LABEL_119;
			}
		}
		if ((v36 & 0x20) != 0)
		{
			v40 = *(_DWORD*)(v129 + 196) == 0;
			v41 = sub_14047BD80(v129);
			if ((v34 & 0x20) != 0)
			{
				if (!v40 && !v41)
				{
					v38 = 68;
					v12 = v129;
					goto LABEL_119;
				}
			}
			else if (v40 || v41)
			{
				v12 = v129;
				v38 = 67;
				goto LABEL_119;
			}
			v12 = v129;
		}
		if ((v36 & 0x80u) != 0)
		{
			v42 = sub_14047BDC0(v12);
			if ((v34 & 0x80u) == 0)
			{
				if (v42)
				{
					v38 = 71;
					goto LABEL_119;
				}
			}
			else if (!v42)
			{
				v38 = 72;
				goto LABEL_119;
			}
		}
		if ((v36 & 0x40) != 0)
		{
			v43 = sub_14047BE00(v12);
			if ((v34 & 0x40) != 0)
			{
				if (!v43)
				{
					v38 = 70;
					goto LABEL_119;
				}
			}
			else if (v43)
			{
				v38 = 69;
				goto LABEL_119;
			}
		}
		if ((v36 & 0x100) != 0)
		{
			if ((v34 & 0x100) != 0)
			{
				if (*(_DWORD*)(v12 + 4232) != 1)
				{
					v38 = 280;
					goto LABEL_119;
				}
			}
			else if (*(_DWORD*)(v12 + 4232) == 1)
			{
				v38 = 279;
				goto LABEL_119;
			}
		}
		if ((v36 & 0x200) != 0)
		{
			if ((*(_DWORD*)(v12 + 4208) & 0x40) != 0 || (v44 = 0, (*(_DWORD*)(v12 + 4208) & 0x800) != 0))
				v44 = 1;
			if ((v34 & 0x200) != 0)
			{
				if (!v44)
				{
					v38 = 170;
					goto LABEL_119;
				}
			}
			else if (v44)
			{
				v38 = 171;
				goto LABEL_119;
			}
		}
		if ((v36 & 0x10) != 0)
		{
			if ((v34 & 0x10) != 0)
			{
				if (*(int*)(v12 + 84) <= 1)
				{
					v38 = 66;
					goto LABEL_119;
				}
			}
			else if (*(int*)(v12 + 84) > 1)
			{
				v38 = 65;
				goto LABEL_119;
			}
		}
		if ((v36 & 4) != 0)
		{
			v45 = *(_DWORD*)(v12 + 4208) & 4;
			if ((v34 & 4) != 0)
			{
				if (!v45)
				{
					v38 = 309;
					goto LABEL_119;
				}
			}
			else if (v45)
			{
				v38 = 310;
				goto LABEL_119;
			}
		}
		if ((v36 & 0x400) != 0)
		{
			if (*(_DWORD*)(v12 + 3408) && *(_QWORD*)(qword_140C65898 + 25744) == v12)
			{
				v46 = sub_1403982A0(qword_140C65898, 1);
				v47 = sub_140469990(v12, v46);
			}
			else
			{
				v47 = 0;
			}
			if ((v34 & 0x400) != 0)
			{
				if (!v47)
				{
					v38 = 313;
					goto LABEL_119;
				}
			}
			else if (v47)
			{
				v38 = 314;
				goto LABEL_119;
			}
		}
	}
	v48 = sub_1403B2C40(a3, (_QWORD*)v12, 1, v32);
	v38 = v48;
	if (v48 && v48 != 317)
	{
	LABEL_119:
		if (v10)
		{
			v49 = *(_QWORD*)(v10 + 8);
			v125[0] = v38;
			*(_DWORD*)(v10 + 16) = v38;
			*(_DWORD*)(v10 + 24) = 1;
			v50 = 0i64;
			if (v49)
			{
				v51 = *(int**)v10;
				while (*v51 != v38)
				{
					if (*v51 <= v38)
					{
						++v50;
						++v51;
						if (v50 < v49)
							continue;
					}
					goto LABEL_125;
				}
			}
			else
			{
			LABEL_125:
				sub_1401C2E70((__int64*)v10, v50, v125);
			}
		}
		v52 = a8;
		if ((_DWORD)a8)
			return (unsigned int)v38;
		goto LABEL_129;
	}
	v52 = a8;
LABEL_129:
	result = sub_1403B14C0(a1, a3, v12, v10, v18);
	if ((_DWORD)result)
	{
		if ((_DWORD)result == 317)
		{
			v124 = 1;
		}
		else if (v52)
		{
			return result;
		}
	}
	v53 = a3;
	v54 = *(_QWORD*)(a3 + 112);
	v55 = *(_DWORD*)(v54 + 332);
	if (v55)
	{
		if ((v55 & 0x1000000) != 0 && *(_QWORD*)(v12 + 1112) && *(_DWORD*)(v54 + 244) != 3)
		{
			if (v10)
			{
				v56 = *(_QWORD*)(v10 + 8);
				v125[0] = 268;
				*(_DWORD*)(v10 + 16) = 268;
				*(_DWORD*)(v10 + 24) = 1;
				v57 = 0i64;
				if (v56)
				{
					v58 = *(int**)v10;
					while (*v58 != 268)
					{
						if (*v58 <= 268)
						{
							++v57;
							++v58;
							if (v57 < v56)
								continue;
						}
						goto LABEL_144;
					}
				}
				else
				{
				LABEL_144:
					sub_1401C2E70((__int64*)v10, v57, v125);
					v53 = a3;
				}
			}
			if (v52)
				return 268i64;
		}
		if ((v55 & 8) != 0
			&& *(_QWORD*)(v12 + 776)
			&& (unsigned int)(*(_DWORD*)(*(_QWORD*)(v53 + 112) + 244i64) - 1) <= 1)
		{
			if (v10)
			{
				v59 = *(_QWORD*)(v10 + 8);
				v125[0] = 39;
				*(_DWORD*)(v10 + 16) = 39;
				*(_DWORD*)(v10 + 24) = 1;
				v60 = 0i64;
				if (v59)
				{
					v61 = *(int**)v10;
					while (*v61 != 39)
					{
						if (*v61 <= 39)
						{
							++v60;
							++v61;
							if (v60 < v59)
								continue;
						}
						goto LABEL_156;
					}
				}
				else
				{
				LABEL_156:
					sub_1401C2E70((__int64*)v10, v60, v125);
					v53 = a3;
				}
			}
			if (v52)
				return 39i64;
		}
		if ((v55 & 0x10) != 0 && *(_QWORD*)(v12 + 792) && !*(_DWORD*)(*(_QWORD*)(v53 + 112) + 244i64))
		{
			if (v10)
			{
				v62 = *(_QWORD*)(v10 + 8);
				v125[0] = 40;
				*(_DWORD*)(v10 + 16) = 40;
				*(_DWORD*)(v10 + 24) = 1;
				v63 = 0i64;
				if (v62)
				{
					v64 = *(int**)v10;
					while (*v64 != 40)
					{
						if (*v64 <= 40)
						{
							++v63;
							++v64;
							if (v63 < v62)
								continue;
						}
						goto LABEL_168;
					}
				}
				else
				{
				LABEL_168:
					sub_1401C2E70((__int64*)v10, v63, v125);
					v53 = a3;
				}
			}
			if (v52)
				return 40i64;
		}
	}
	if (*(_DWORD*)(*(_QWORD*)(v53 + 112) + 356i64))
	{
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, *(unsigned int*)(v12 + 8)))
		{
			v68 = a8;
		}
		else
		{
			if (v10)
			{
				v65 = *(_QWORD*)(v10 + 8);
				v125[0] = 140;
				*(_DWORD*)(v10 + 16) = 140;
				*(_DWORD*)(v10 + 24) = 1;
				v66 = 0i64;
				if (v65)
				{
					v67 = *(int**)v10;
					while (*v67 != 140)
					{
						if (*v67 <= 140)
						{
							++v66;
							++v67;
							if (v66 < v65)
								continue;
						}
						goto LABEL_179;
					}
				}
				else
				{
				LABEL_179:
					sub_1401C2E70((__int64*)v10, v66, v125);
				}
			}
			v68 = a8;
			if ((_DWORD)a8)
				return 140i64;
		}
		v53 = a3;
	}
	else
	{
		v68 = a8;
	}
	v69 = a5;
	if (a5)
	{
		v70 = sub_1403B4E40(v53, *(_QWORD*)(a5 + 29048), *(_DWORD*)(v12 + 8));
		v38 = v70;
		if (v70 && v70 != 317)
		{
			if (v10)
			{
				v71 = *(_QWORD*)(v10 + 8);
				LODWORD(a8) = v70;
				*(_DWORD*)(v10 + 16) = v70;
				*(_DWORD*)(v10 + 24) = 1;
				v72 = 0i64;
				if (v71)
				{
					v73 = *(int**)v10;
					while (*v73 != v38)
					{
						if (*v73 <= v38)
						{
							++v72;
							++v73;
							if (v72 < v71)
								continue;
						}
						goto LABEL_193;
					}
				}
				else
				{
				LABEL_193:
					sub_1401C2E70((__int64*)v10, v72, (int*)&a8);
				}
			}
			if (v68)
				return (unsigned int)v38;
		}
		v74 = a3;
		if ((*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) & 0x200000) != 0)
		{
			v75 = *(_DWORD*)(qword_140C65B98 + 268);
			if (!v75 || (unsigned int)(v75 - 3) <= 4)
			{
				v76 = *(_DWORD*)(qword_140C65B98 + 264);
				if (v76)
				{
					v77 = sub_140215240(v76);
					if (v77)
					{
						v78 = sub_140214E00(*(_DWORD*)(v77 + 16));
						if (v78)
						{
							if ((*(_DWORD*)(v78 + 16) & 2) != 0)
							{
								if (v10)
								{
									v79 = *(_QWORD*)(v10 + 8);
									LODWORD(a8) = 252;
									*(_DWORD*)(v10 + 16) = 252;
									*(_DWORD*)(v10 + 24) = 1;
									v80 = 0i64;
									if (v79)
									{
										v81 = *(int**)v10;
										while (*v81 != 252)
										{
											if (*v81 <= 252)
											{
												++v80;
												++v81;
												if (v80 < v79)
													continue;
											}
											goto LABEL_208;
										}
									}
									else
									{
									LABEL_208:
										sub_1401C2E70((__int64*)v10, v80, (int*)&a8);
									}
								}
								if (v68)
									return 252i64;
							}
						}
					}
				}
			}
		}
		if ((*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) & 0x200) != 0 && !sub_1403A1140())
		{
			if (v10)
			{
				v82 = *(_QWORD*)(v10 + 8);
				LODWORD(a8) = 252;
				*(_DWORD*)(v10 + 16) = 252;
				*(_DWORD*)(v10 + 24) = 1;
				v83 = 0i64;
				if (v82)
				{
					v84 = *(int**)v10;
					while (*v84 != 252)
					{
						if (*v84 <= 252)
						{
							++v83;
							++v84;
							if (v83 < v82)
								continue;
						}
						goto LABEL_218;
					}
				}
				else
				{
				LABEL_218:
					sub_1401C2E70((__int64*)v10, v83, (int*)&a8);
				}
			}
			if (v68)
				return 252i64;
		}
	}
	else
	{
		v74 = a3;
	}
	v85 = a7;
	v86 = v129;
	v87 = sub_1403B1780(v74, v129, a7, a9);
	v38 = v87;
	if (v87 && v87 != 317)
	{
		if (v10)
		{
			v88 = *(_QWORD*)(v10 + 8);
			LODWORD(v129) = v87;
			*(_DWORD*)(v10 + 16) = v87;
			*(_DWORD*)(v10 + 24) = 1;
			v89 = 0i64;
			if (v88)
			{
				v90 = *(int**)v10;
				while (*v90 != v38)
				{
					if (*v90 <= v38)
					{
						++v89;
						++v90;
						if (v89 < v88)
							continue;
					}
					goto LABEL_231;
				}
			}
			else
			{
			LABEL_231:
				sub_1401C2E70((__int64*)v10, v89, (int*)&v129);
			}
		}
		if (v68)
			return (unsigned int)v38;
	}
	if (*(_QWORD*)(qword_140C65898 + 120) == v86 && (v91 = *(_QWORD*)(qword_140C65898 + 28048)) != 0)
	{
		v92 = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v91 + 136i64))(
			v91,
			a3,
			v85,
			(unsigned int)a2[6]);
		v38 = v92;
		if (v92 && v92 != 317)
		{
			if (v10)
			{
				v93 = *(_QWORD*)(v10 + 8);
				LODWORD(v129) = v92;
				*(_DWORD*)(v10 + 16) = v92;
				*(_DWORD*)(v10 + 24) = 1;
				v94 = 0i64;
				if (v93)
				{
					v95 = *(int**)v10;
					while (*v95 != v38)
					{
						if (*v95 <= v38)
						{
							++v94;
							++v95;
							if (v94 < v93)
								continue;
						}
						goto LABEL_243;
					}
				}
				else
				{
				LABEL_243:
					sub_1401C2E70((__int64*)v10, v94, (int*)&v129);
				}
			}
			if (v68)
				return (unsigned int)v38;
		}
		v96 = *(_QWORD*)(qword_140C65898 + 120) == v86 ? *(_QWORD*)(qword_140C65898 + 28048) : 0i64;
		v97 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v96 + 184i64))(v96, a3);
		v38 = v97;
		if (v97)
		{
			if (v97 != 317)
			{
				if (v10)
				{
					v98 = *(_QWORD*)(v10 + 8);
					LODWORD(v129) = v97;
					*(_DWORD*)(v10 + 16) = v97;
					*(_DWORD*)(v10 + 24) = 1;
					v99 = 0i64;
					if (v98)
					{
						v100 = *(int**)v10;
						while (*v100 != v38)
						{
							if (*v100 <= v38)
							{
								++v99;
								++v100;
								if (v99 < v98)
									continue;
							}
							goto LABEL_256;
						}
					}
					else
					{
					LABEL_256:
						sub_1401C2E70((__int64*)v10, v99, (int*)&v129);
					}
				}
				if (v68)
					return (unsigned int)v38;
			}
		}
		if (*(_QWORD*)(qword_140C65898 + 120) == v86)
			v101 = *(_QWORD*)(qword_140C65898 + 28048);
		else
			v101 = 0i64;
		v102 = v85;
		v103 = a3;
		v104 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)v101 + 152i64))(
			v101,
			a3,
			v86,
			v102,
			a2[6]);
		v105 = v104;
		if (v104 && v104 != 317)
		{
			if (v10)
			{
				v106 = *(_QWORD*)(v10 + 8);
				LODWORD(v129) = v104;
				*(_DWORD*)(v10 + 16) = v104;
				*(_DWORD*)(v10 + 24) = 1;
				v107 = 0i64;
				if (v106)
				{
					v108 = *(int**)v10;
					while (*v108 != v105)
					{
						if (*v108 <= v105)
						{
							++v107;
							++v108;
							if (v107 < v106)
								continue;
						}
						goto LABEL_269;
					}
				}
				else
				{
				LABEL_269:
					sub_1401C2E70((__int64*)v10, v107, (int*)&v129);
				}
			}
			if (v68)
				return (unsigned int)v105;
		}
	}
	else
	{
		v103 = a3;
		v109 = sub_1403B1DE0(a3, v86);
		v38 = v109;
		if (v109 && v109 != 317)
		{
			if (v10)
			{
				v110 = *(_QWORD*)(v10 + 8);
				LODWORD(v129) = v109;
				*(_DWORD*)(v10 + 16) = v109;
				*(_DWORD*)(v10 + 24) = 1;
				v111 = 0i64;
				if (v110)
				{
					v112 = *(int**)v10;
					while (*v112 != v38)
					{
						if (*v112 <= v38)
						{
							++v111;
							++v112;
							if (v111 < v110)
								continue;
						}
						goto LABEL_280;
					}
				}
				else
				{
				LABEL_280:
					sub_1401C2E70((__int64*)v10, v111, (int*)&v129);
				}
			}
			if (v68)
				return (unsigned int)v38;
		}
	}
	if (a6)
	{
		v113 = *(_QWORD*)(a6 + 72);
		if (!v113)
			v113 = *(_QWORD*)(a6 + 64) + 8i64;
		if (*(_DWORD*)(v113 + 8) > *(_DWORD*)(v86 + 56))
		{
			if (v10)
			{
				v114 = *(_QWORD*)(v10 + 8);
				LODWORD(v129) = 26;
				*(_DWORD*)(v10 + 16) = 26;
				*(_DWORD*)(v10 + 24) = 1;
				v115 = 0i64;
				if (v114)
				{
					v116 = *(int**)v10;
					while (*v116 != 26)
					{
						if (*v116 <= 26)
						{
							++v115;
							++v116;
							if (v115 < v114)
								continue;
						}
						goto LABEL_292;
					}
				}
				else
				{
				LABEL_292:
					sub_1401C2E70((__int64*)v10, v115, (int*)&v129);
				}
			}
			if (v68)
				return 26i64;
		}
	}
	v117 = sub_1403B1E40(v103, v69);
	v38 = v117;
	if (v117)
	{
		if (v117 != 317)
		{
			if (v10)
			{
				v118 = *(_QWORD*)(v10 + 8);
				LODWORD(v129) = v117;
				*(_DWORD*)(v10 + 16) = v117;
				*(_DWORD*)(v10 + 24) = 1;
				v119 = 0i64;
				if (v118)
				{
					v120 = *(int**)v10;
					while (*v120 != v38)
					{
						if (*v120 <= v38)
						{
							++v119;
							++v120;
							if (v119 < v118)
								continue;
						}
						goto LABEL_303;
					}
				}
				else
				{
				LABEL_303:
					sub_1401C2E70((__int64*)v10, v119, (int*)&v129);
				}
			}
			if (v68)
				return (unsigned int)v38;
		}
	}
	if (v69)
	{
		v121 = *(_QWORD*)(v103 + 112);
		v129 = 0x1000000000i64;
		if (*(_DWORD*)(v121 + 256) == 1)
		{
			if (sub_1403AC780(v69 + 160, (int*)&v129))
				goto LABEL_308;
		}
		else if (*(_DWORD*)(v121 + 256) != 2)
		{
			goto LABEL_308;
		}
		if (v10)
		{
			v122 = *(_QWORD*)(v10 + 8);
			LODWORD(v129) = 169;
			*(_DWORD*)(v10 + 16) = 169;
			*(_DWORD*)(v10 + 24) = 1;
			if (v122)
			{
				v123 = *(int**)v10;
				while (*v123 != 169)
				{
					if (*v123 <= 169)
					{
						++v11;
						++v123;
						if (v11 < v122)
							continue;
					}
					goto LABEL_320;
				}
			}
			else
			{
			LABEL_320:
				sub_1401C2E70((__int64*)v10, v11, (int*)&v129);
			}
		}
		if (v68)
			return 169i64;
	}
LABEL_308:
	result = sub_1403B1F40((__int64)a2, v103, v69, v10);
	if (!(_DWORD)result || (_DWORD)result == 317)
	{
		if (v124)
			return 317i64;
	}
	return result;
}
// 1403B0043: conditional instruction was optimized away because eax.4!=13D
// 1403B07E2: conditional instruction was optimized away because eax.4 is in (1..13C|>=13Eu)
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C65B98: using guessed type __int64 qword_140C65B98;

