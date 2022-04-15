//----- (000000014082CC10) ----------------------------------------------------
__int64 __fastcall sub_14082CC10(LPCRITICAL_SECTION lpCriticalSection)
{
	char v2; // di
	LPCRITICAL_SECTION v3; // rcx
	int SpinCount_high; // eax
	unsigned int v5; // ebx
	unsigned __int16* v6; // rsi
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // r15
	__int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rax
	int v14; // eax
	_DWORD* v15; // rcx
	_DWORD* v16; // r14
	int v17; // ecx
	int v18; // ebx
	_DWORD* v19; // rcx
	int v20; // ecx
	int v21; // r12d
	int v22; // edi
	unsigned int v23; // r14d
	_QWORD* v24; // rax
	_QWORD* v25; // rbx
	__int64 v26; // r8
	__int64 v27; // r15
	__int64 v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rax
	_QWORD* v32; // rax
	int v33; // ecx
	int v34; // ebx
	__int64 v35; // r14
	__int64 v36; // rbx
	_QWORD* v37; // rax
	_QWORD* v38; // rdi
	int v39; // ecx
	int v40; // ecx
	int v41; // ecx
	__int64 v42; // rbx
	__int64 v43; // rdi
	char v44; // al
	char v45; // cl
	char v46; // cl
	__int64 v47; // rax
	int v48; // ecx
	int v49; // ebx
	__int64 v50; // rdx
	int* v51; // rax
	__int64 v52; // rdi
	unsigned int v53; // edx
	float v54; // xmm2_4
	int v55; // eax
	int v56; // ebx
	__int64 v57; // rdx
	__int64 v58; // rax
	int v59; // edx
	__int64 v60; // rax
	__int64 v61; // rdx
	__int64 v62; // rax
	__int64 v63; // rdx
	_DWORD* v64; // r8
	__int64 v65; // rdx
	int* v66; // r9
	__int64 v67; // rax
	int* v68; // r9
	__int64 v69; // rdx
	__int64 v70; // rax
	__int64 v71; // rbx
	_QWORD* v72; // rax
	_QWORD* v73; // rdi
	__int64 v74; // rax
	__int64 v75; // r14
	int v76; // ecx
	int v77; // ebx
	__int64 v78; // rax
	_QWORD* v79; // rax
	_QWORD* v80; // rbx
	__int64 v81; // rax
	int v82; // ecx
	int v83; // ecx
	__int64 v84; // rbx
	int v85; // ebx
	int v86; // edi
	__int64 v87; // rax
	__int64 v88; // r11
	__int64 v89; // rcx
	__int64 v90; // r10
	__int64 v91; // r14
	float v92; // xmm0_4
	unsigned __int8 v93; // dl
	float v94; // xmm0_4
	float v95; // xmm0_4
	unsigned __int8 v96; // bl
	__int64 v97; // rdi
	__int64 v98; // rdx
	__int64 v99; // rcx
	__int64 v100; // rax
	_QWORD* v101; // rbx
	unsigned int v102; // eax
	__int64 v103; // rdx
	int v104; // eax
	__int64(__fastcall * *v106)(); // [rsp+50h] [rbp-B0h] BYREF
	__int64 v107; // [rsp+58h] [rbp-A8h]
	__int64 v108; // [rsp+60h] [rbp-A0h]
	int v109; // [rsp+68h] [rbp-98h]
	__int16 v110; // [rsp+6Ch] [rbp-94h]
	char v111; // [rsp+6Eh] [rbp-92h]
	__int64 v112; // [rsp+70h] [rbp-90h]
	int v113; // [rsp+78h] [rbp-88h]
	char v114; // [rsp+7Ch] [rbp-84h]
	__int64 v115; // [rsp+80h] [rbp-80h]
	int v116; // [rsp+88h] [rbp-78h]
	int v117; // [rsp+94h] [rbp-6Ch]
	__int64 v118; // [rsp+98h] [rbp-68h]
	int v119; // [rsp+A0h] [rbp-60h] BYREF
	int v120; // [rsp+A8h] [rbp-58h] BYREF
	unsigned __int16* v121; // [rsp+B0h] [rbp-50h]
	int v122; // [rsp+B8h] [rbp-48h] BYREF
	int v123[4]; // [rsp+C0h] [rbp-40h] BYREF
	char v124; // [rsp+1C0h] [rbp+C0h]
	unsigned int v125; // [rsp+1C8h] [rbp+C8h]
	unsigned int v126; // [rsp+1D0h] [rbp+D0h] BYREF
	int v127; // [rsp+1D8h] [rbp+D8h]

	if (LOBYTE(lpCriticalSection[2].LockCount)
		|| HIDWORD(lpCriticalSection[4].SpinCount) != LODWORD(lpCriticalSection[5].DebugInfo))
	{
		v2 = 0;
		v124 = 0;
		EnterCriticalSection(lpCriticalSection);
		v3 = lpCriticalSection + 1;
	LABEL_4:
		SpinCount_high = HIDWORD(v3->SpinCount);
		v5 = 0;
		v126 = 0;
		v125 = 0;
		if (HIDWORD(v3->LockSemaphore) != SpinCount_high
			|| LODWORD(v3->SpinCount) != LODWORD(v3[1].DebugInfo)
			|| BYTE4(v3[1].DebugInfo))
		{
			v6 = (unsigned __int16*)sub_140829720((__int64*)v3, &v126);
			LeaveCriticalSection(lpCriticalSection);
			while (2)
			{
				v7 = v6[1];
				v121 = v6;
				switch (v7)
				{
				case 0:
					if (++LODWORD(lpCriticalSection[5].DebugInfo) != HIDWORD(lpCriticalSection[4].SpinCount)
						|| LOBYTE(lpCriticalSection[2].LockCount))
					{
						v2 = 0;
						v124 = 0;
					}
					else
					{
						v2 = 1;
						v124 = 1;
					}
					goto LABEL_183;
				case 1:
					v8 = sub_140830310(qword_140C61BA0, *((_QWORD*)v6 + 1));
					v9 = *(_QWORD*)(*((_QWORD*)v6 + 6) + 32i64);
					v10 = v8;
					if (!v9)
						goto LABEL_28;
					while (1)
					{
						if ((*(_BYTE*)(v9 + 60) & 1) != 0)
						{
							if (v10)
							{
								v11 = sub_1408819F0(dword_140C10F20, 80i64);
								v12 = v11;
								if (v11)
								{
									*(_QWORD*)v11 = off_1409A2DF8;
									*(_DWORD*)(v11 + 56) = 0;
									*(_QWORD*)(v11 + 32) = 0i64;
									*(_DWORD*)(v11 + 40) = 0;
									*(_QWORD*)(v11 + 48) = 0i64;
									*(_DWORD*)(v11 + 68) = 0;
									*(_QWORD*)(v11 + 72) = v10;
									*(_DWORD*)(v10 + 136) ^= (*(_DWORD*)(v10 + 136) ^ (*(_DWORD*)(v10 + 136) + 1)) & 0x3FFFFFFF;
									goto LABEL_20;
								}
							}
						}
						else
						{
							v13 = sub_1408819F0(dword_140C10F20, 80i64);
							v12 = v13;
							if (v13)
							{
								*(_QWORD*)v13 = off_1409A2DF8;
								*(_DWORD*)(v13 + 56) = 0;
								*(_QWORD*)(v13 + 32) = 0i64;
								*(_DWORD*)(v13 + 40) = 0;
								*(_QWORD*)(v13 + 48) = 0i64;
								*(_DWORD*)(v13 + 68) = 0;
								*(_QWORD*)(v13 + 72) = 0i64;
							LABEL_20:
								if (v12)
								{
									v14 = *((_DWORD*)v6 + 5);
									*(_QWORD*)(v12 + 8) = v9;
									*(_DWORD*)(v12 + 68) = v14;
									v15 = *(_DWORD**)(v12 + 48);
									*(_DWORD*)(v12 + 56) = *((_DWORD*)v6 + 4);
									*(_QWORD*)(v12 + 32) = *((_QWORD*)v6 + 3);
									*(_DWORD*)(v12 + 40) = *((_DWORD*)v6 + 8);
									v16 = (_DWORD*)*((_QWORD*)v6 + 5);
									if (v15)
										sub_140828460(v15);
									if (v16)
										++* v16;
									*(_QWORD*)(v12 + 48) = v16;
									sub_14082BB80((__int64)lpCriticalSection, v12);
								}
							}
						}
						v9 = *(_QWORD*)(v9 + 32);
						if (!v9)
						{
							v2 = v124;
						LABEL_28:
							if (v10)
							{
								v17 = *(_DWORD*)(v10 + 136) ^ (*(_DWORD*)(v10 + 136) ^ (*(_DWORD*)(v10 + 136) - 1)) & 0x3FFFFFFF;
								*(_DWORD*)(v10 + 136) = v17;
								if ((v17 & 0x3FFFFFFF) == 0)
								{
									v18 = dword_140C10F20;
									sub_14084BD30(v10);
									sub_140881720(v18, v10);
								}
							}
							sub_14083C260(qword_140C61B80, *((_DWORD*)v6 + 4));
							(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 6) + 16i64))(*((_QWORD*)v6 + 6));
							v19 = (_DWORD*)*((_QWORD*)v6 + 5);
							if (!v19)
								goto LABEL_37;
							sub_140828460(v19);
							v5 = v125;
							goto LABEL_183;
						}
					}
				case 2:
					v50 = *((_QWORD*)v6 + 2);
					if (v50 == -1)
					{
						v122 = 0;
						v51 = &v122;
						goto LABEL_80;
					}
					v52 = sub_140830310(qword_140C61BA0, v50);
					if (!v52)
						goto LABEL_182;
					v53 = *((_DWORD*)v6 + 2);
					v54 = *((float*)v6 + 3);
					v123[0] = 0;
					sub_1408380A0(qword_140C61BB0, v53, v54, v52, v123, 1);
					v55 = *(_DWORD*)(v52 + 136) ^ (*(_DWORD*)(v52 + 136) ^ (*(_DWORD*)(v52 + 136) - 1)) & 0x3FFFFFFF;
					*(_DWORD*)(v52 + 136) = v55;
					if ((v55 & 0x3FFFFFFF) != 0)
						goto LABEL_182;
					goto LABEL_83;
				case 3:
					v57 = *((_QWORD*)v6 + 2);
					if (v57 == -1)
					{
						v51 = (int*)(v6 + 12);
					LABEL_80:
						sub_1408380A0(qword_140C61BB0, *((_DWORD*)v6 + 2), *((float*)v6 + 3), 0i64, v51, 1);
						goto LABEL_183;
					}
					v58 = sub_140830310(qword_140C61BA0, v57);
					v52 = v58;
					if (!v58)
						goto LABEL_182;
					sub_1408380A0(qword_140C61BB0, *((_DWORD*)v6 + 2), *((float*)v6 + 3), v58, (int*)v6 + 6, 1);
					goto LABEL_88;
				case 5:
					v65 = *((_QWORD*)v6 + 2);
					if (v65 == -1)
					{
						v119 = 0;
						v66 = &v119;
						goto LABEL_118;
					}
					v67 = sub_140830310(qword_140C61BA0, v65);
					v52 = v67;
					if (!v67)
						goto LABEL_182;
					v120 = 0;
					v68 = &v120;
					goto LABEL_121;
				case 6:
					v69 = *((_QWORD*)v6 + 2);
					if (v69 == -1)
					{
						v66 = (int*)(v6 + 12);
					LABEL_118:
						sub_140837C80(qword_140C61BB0, *((_DWORD*)v6 + 2), 0i64, v66);
						goto LABEL_183;
					}
					v67 = sub_140830310(qword_140C61BA0, v69);
					v52 = v67;
					if (!v67)
						goto LABEL_182;
					v68 = (int*)(v6 + 12);
				LABEL_121:
					sub_140837C80(qword_140C61BB0, *((_DWORD*)v6 + 2), v67, v68);
					goto LABEL_88;
				case 7:
					sub_14082A960(
						(unsigned __int8**)qword_140C61B78,
						*((_DWORD*)v6 + 2),
						*((_DWORD*)v6 + 3),
						*((_BYTE*)v6 + 16),
						*((_BYTE*)v6 + 17));
					goto LABEL_183;
				case 8:
					v60 = sub_140830310(qword_140C61BA0, *((_QWORD*)v6 + 1));
					v52 = v60;
					if (!v60)
						goto LABEL_182;
					sub_1408381E0(qword_140C61BB0, *((_DWORD*)v6 + 4), *((_DWORD*)v6 + 5), v60);
					goto LABEL_88;
				case 10:
					v61 = *((_QWORD*)v6 + 1);
					if (v61 == -1)
					{
						sub_14082B070(qword_140C61B78, *((_DWORD*)v6 + 4), 0i64);
						goto LABEL_183;
					}
					v62 = sub_140830310(qword_140C61BA0, v61);
					v52 = v62;
					if (v62)
					{
						sub_14082B070(qword_140C61B78, *((_DWORD*)v6 + 4), v62);
					LABEL_88:
						v59 = *(_DWORD*)(v52 + 136) ^ (*(_DWORD*)(v52 + 136) ^ (*(_DWORD*)(v52 + 136) - 1)) & 0x3FFFFFFF;
						*(_DWORD*)(v52 + 136) = v59;
						if ((v59 & 0x3FFFFFFF) == 0)
						{
						LABEL_83:
							v56 = dword_140C10F20;
							sub_14084BD30(v52);
							sub_140881720(v56, v52);
							v5 = v125;
						}
					}
					goto LABEL_182;
				case 11:
					sub_140830570(qword_140C61BA0, *((_QWORD*)v6 + 1));
					goto LABEL_183;
				case 12:
					v63 = *((_QWORD*)v6 + 1);
					if (v63 == -1)
						sub_140830C00(qword_140C61BA0);
					else
						sub_140830D80(qword_140C61BA0, v63);
					goto LABEL_183;
				case 13:
					sub_140830A60(qword_140C61BA0, *((_QWORD*)v6 + 1), (int*)v6 + 4, 1u, 0);
					goto LABEL_183;
				case 14:
					sub_1408307D0(qword_140C61BA0, *((_QWORD*)v6 + 1), *((_DWORD*)v6 + 4));
					goto LABEL_183;
				case 16:
					sub_14084B420(*((_DWORD*)v6 + 2), (float*)v6 + 3);
					goto LABEL_183;
				case 17:
					v64 = v6 + 6;
					if (!*((_BYTE*)v6 + 37))
						v64 = 0i64;
					sub_14084B500(*((_DWORD*)v6 + 2), *((_BYTE*)v6 + 36), v64);
					goto LABEL_183;
				case 18:
					sub_140830840(qword_140C61BA0, *((_QWORD*)v6 + 1), (__int64)(v6 + 10), *((_DWORD*)v6 + 4));
					goto LABEL_183;
				case 19:
					sub_140830890(qword_140C61BA0, *((_QWORD*)v6 + 1), *((float*)v6 + 4));
					goto LABEL_183;
				case 20:
					sub_140830A00(
						qword_140C61BA0,
						*((_QWORD*)v6 + 1),
						*((_DWORD*)v6 + 4),
						*((float*)v6 + 5),
						*((float*)v6 + 6));
					goto LABEL_183;
				case 22:
					v70 = sub_140830310(qword_140C61BA0, *((_QWORD*)v6 + 1));
					v52 = v70;
					if (!v70)
						goto LABEL_182;
					sub_140839CF0(*((_QWORD*)v6 + 6), v70);
					goto LABEL_88;
				case 23:
					switch (*((_DWORD*)v6 + 4))
					{
					case 0:
						sub_140839AD0(*((_QWORD*)v6 + 1), *((_DWORD*)v6 + 5), *((_DWORD*)v6 + 6));
						(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 1) + 16i64))(*((_QWORD*)v6 + 1));
						break;
					case 1:
						sub_1408399E0(*((_QWORD*)v6 + 1), *((_DWORD*)v6 + 5), *((_DWORD*)v6 + 6));
						(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 1) + 16i64))(*((_QWORD*)v6 + 1));
						break;
					case 2:
						sub_140839BD0(*((_QWORD*)v6 + 1), *((_DWORD*)v6 + 5), *((_DWORD*)v6 + 6));
						(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 1) + 16i64))(*((_QWORD*)v6 + 1));
						break;
					case 3:
						*(_BYTE*)(*((_QWORD*)v6 + 1) + 144i64) = 1;
						sub_14083C260(qword_140C61B80, *(_DWORD*)(*((_QWORD*)v6 + 1) + 136i64));
						(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 1) + 16i64))(*((_QWORD*)v6 + 1));
						goto LABEL_136;
					case 4:
						sub_140839D20(*((_QWORD*)v6 + 1), *((_DWORD*)v6 + 5), *((_DWORD*)v6 + 6));
						(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 1) + 16i64))(*((_QWORD*)v6 + 1));
						break;
					case 5:
						sub_1408398B0(*((_QWORD*)v6 + 1));
						(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 1) + 16i64))(*((_QWORD*)v6 + 1));
						break;
					case 6:
						sub_140839CD0(*((_QWORD*)v6 + 1));
						(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 1) + 16i64))(*((_QWORD*)v6 + 1));
						break;
					default:
						goto LABEL_136;
					}
					goto LABEL_183;
				case 24:
					v84 = *((_QWORD*)v6 + 1);
					sub_140844B30(v84);
					sub_140841FE0(v84, 0);
					v5 = v125;
					goto LABEL_183;
				case 25:
					v71 = *((_QWORD*)v6 + 1);
					v72 = (_QWORD*)sub_140856810((v71 != -1) + 260, 0);
					v73 = v72;
					if (!v72)
						goto LABEL_37;
					if (v71 == -1)
					{
						v78 = *v72;
						v106 = off_1409A2DF8;
						v116 = 0;
						v112 = 0i64;
						v113 = 0;
						v115 = 0i64;
						v117 = 0;
						v118 = 0i64;
						(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)()))(v78 + 64))(v73, &v106);
					}
					else
					{
						v74 = sub_140830310(qword_140C61BA0, v71);
						v75 = v74;
						if (!v74)
							goto LABEL_144;
						v116 = 0;
						v112 = 0i64;
						v113 = 0;
						v115 = 0i64;
						v117 = 0;
						v118 = v74;
						v106 = off_1409A2DF8;
						*(_DWORD*)(v74 + 136) ^= (*(_DWORD*)(v74 + 136) ^ (*(_DWORD*)(v74 + 136) + 1)) & 0x3FFFFFFF;
						(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)()))(*v73 + 64i64))(v73, &v106);
						v76 = *(_DWORD*)(v75 + 136) ^ (*(_DWORD*)(v75 + 136) ^ (*(_DWORD*)(v75 + 136) - 1)) & 0x3FFFFFFF;
						*(_DWORD*)(v75 + 136) = v76;
						if ((v76 & 0x3FFFFFFF) == 0)
						{
							v77 = dword_140C10F20;
							sub_14084BD30(v75);
							sub_140881720(v77, v75);
							sub_14082B3A0(&v106);
							(*(void(__fastcall**)(_QWORD*))(*v73 + 16i64))(v73);
							v5 = v125;
							goto LABEL_182;
						}
					}
					sub_14082B3A0(&v106);
				LABEL_144:
					(*(void(__fastcall**)(_QWORD*))(*v73 + 16i64))(v73);
					v5 = v125;
					goto LABEL_182;
				case 26:
					sub_14084B3D0(*((_DWORD*)v6 + 2), *((_BYTE*)v6 + 12), *((_BYTE*)v6 + 13));
					goto LABEL_183;
				case 27:
					sub_14084B3A0(*((_BYTE*)v6 + 8), *((_BYTE*)v6 + 9));
					goto LABEL_183;
				case 28:
					v88 = qword_140C61FE0;
					if (qword_140C61FE0)
					{
						v89 = *((unsigned __int8*)v6 + 8);
						v90 = *((unsigned __int8*)v6 + 9);
						*(_BYTE*)(*(unsigned __int8*)(v89 + qword_140C61FE0 + 120) + qword_140C61FE0 + 124) &= ~(1 << v89);
						*(_BYTE*)(v89 + v88 + 120) = v90;
						*(_BYTE*)(v90 + v88 + 124) |= 1 << v89;
					}
					goto LABEL_183;
				case 29:
					if (*((_BYTE*)v6 + 24))
					{
						v85 = v6[6];
						v86 = v6[5];
						v87 = sub_140845DF0();
						sub_140845980(v87, *((_BYTE*)v6 + 8), v86, v85, *((_QWORD*)v6 + 2));
						v5 = v125;
						goto LABEL_182;
					}
					if (qword_140C61FE0)
						sub_140846440((__int64*)qword_140C61FE0, *((_BYTE*)v6 + 8), v6[5], v6[6]);
					goto LABEL_183;
				case 30:
					v91 = qword_140C61FE0;
					if (!qword_140C61FE0)
						goto LABEL_183;
					v92 = *((float*)v6 + 2);
					v93 = *((_BYTE*)v6 + 12);
					if (v92 <= 0.0)
					{
						v95 = v92 * 0.050000001;
						if (v95 >= -37.0)
						{
							if ((dword_140C61BFC & 1) == 0)
							{
								dword_140C61BFC |= 1u;
								dword_140C61BF8 = 1272224376;
							}
							v127 = ((int)(float)((float)(v95 * *(float*)&dword_140C61BF8) + 1065353200.0) & 0x7FFFFF) + 1065353216;
						}
					}
					else
					{
						v94 = v92 * -0.050000001;
						if (v94 >= -37.0)
						{
							if ((dword_140C61BFC & 1) == 0)
							{
								dword_140C61BFC |= 1u;
								dword_140C61BF8 = 1272224376;
							}
							v127 = ((int)(float)((float)(v94 * *(float*)&dword_140C61BF8) + 1065353200.0) & 0x7FFFFF) + 1065353216;
						}
					}
					v96 = 0;
					v97 = 3 * (v93 + 1i64);
					v98 = *(_QWORD*)(qword_140C61FE0 + 24 * (v93 + 1i64));
					if (!(unsigned int)((*(_QWORD*)(qword_140C61FE0 + 8 * v97 + 8) - v98) >> 4))
						goto LABEL_37;
					do
					{
						v99 = *(_QWORD*)(v98 + 16i64 * v96 + 8);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v99 + 128i64))(v99);
						v98 = *(_QWORD*)(v91 + 8 * v97);
						++v96;
					} while (v96 < (unsigned int)((*(_QWORD*)(v91 + 8 * v97 + 8) - v98) >> 4));
					v5 = v125;
					goto LABEL_182;
				case 31:
					sub_14082B920((__int64)lpCriticalSection, *((_DWORD*)v6 + 2));
					v79 = (_QWORD*)sub_14085A9A0();
					v80 = v79;
					if (!v79)
						goto LABEL_37;
					v81 = *v79;
					v109 = *((_DWORD*)v6 + 4);
					v82 = *((_DWORD*)v6 + 2);
					v110 = 0;
					LODWORD(v108) = v82;
					v83 = *((_DWORD*)v6 + 3);
					v111 = 0;
					HIDWORD(v108) = v83;
					LODWORD(v106) = 0;
					v107 = 0i64;
					(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)()))(v81 + 128))(v80, &v106);
					(*(void(__fastcall**)(_QWORD*))(*v80 + 16i64))(v80);
					v5 = v125;
					goto LABEL_183;
				case 32:
					v35 = sub_140830310(qword_140C61BA0, *((_QWORD*)v6 + 2));
					if (!v35 && *((_QWORD*)v6 + 2) != -1i64)
						goto LABEL_136;
					v36 = *(_QWORD*)(*((_QWORD*)v6 + 1) + 32i64);
					if (!v36)
						goto LABEL_73;
					do
					{
						if (*(_WORD*)(v36 + 60) == 1027)
						{
							v37 = (_QWORD*)sub_140855940(v36);
							v38 = v37;
							if (v37)
							{
								sub_14082CB30(
									(__int64)lpCriticalSection,
									v37,
									v35,
									*((_DWORD*)v6 + 6),
									*((_DWORD*)v6 + 7),
									*((_DWORD*)v6 + 8),
									*((_DWORD*)v6 + 9));
								(*(void(__fastcall**)(_QWORD*))(*v38 + 16i64))(v38);
							}
						}
						else
						{
							v39 = *((_DWORD*)v6 + 6);
							if (!v39)
								goto LABEL_60;
							v40 = v39 - 1;
							if (v40)
							{
								v41 = v40 - 1;
								if (v41)
								{
									if (v41 != 1)
										goto LABEL_61;
								LABEL_60:
									sub_14082EF10((__int64)qword_140C61B68, *(_DWORD*)(v36 + 24), *((_DWORD*)v6 + 9));
									goto LABEL_61;
								}
								sub_14082E7E0((__int64)qword_140C61B68, *(_DWORD*)(v36 + 24), *((_DWORD*)v6 + 9));
							}
							else
							{
								sub_14082C1A0((__int64)qword_140C61B68, *(_DWORD*)(v36 + 24), *((_DWORD*)v6 + 9));
							}
						}
					LABEL_61:
						v36 = *(_QWORD*)(v36 + 32);
					} while (v36);
				LABEL_72:
					v2 = v124;
				LABEL_73:
					if (v35)
					{
						v48 = *(_DWORD*)(v35 + 136) ^ (*(_DWORD*)(v35 + 136) ^ (*(_DWORD*)(v35 + 136) - 1)) & 0x3FFFFFFF;
						*(_DWORD*)(v35 + 136) = v48;
						if ((v48 & 0x3FFFFFFF) == 0)
						{
							v49 = dword_140C10F20;
							sub_14084BD30(v35);
							sub_140881720(v49, v35);
						}
					}
					v5 = v125;
				LABEL_136:
					(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 1) + 16i64))(*((_QWORD*)v6 + 1));
				LABEL_183:
					v6 = (unsigned __int16*)((char*)v6 + *v6);
					v104 = *v121;
					++dword_140C62410;
					v5 += v104;
					v125 = v5;
					if (v5 < v126 && !v2)
						continue;
					EnterCriticalSection(lpCriticalSection);
					sub_140829780((__int64)&lpCriticalSection[1], v5);
					v3 = lpCriticalSection + 1;
					if (v2)
						goto LABEL_186;
					goto LABEL_4;
				case 33:
					sub_1408308E0(qword_140C61BA0, *((_QWORD*)v6 + 1), *((float*)v6 + 4));
					goto LABEL_183;
				case 34:
					sub_140830A60(qword_140C61BA0, *((_QWORD*)v6 + 1), (int*)v6 + 6, v6[8], *((_DWORD*)v6 + 5));
					goto LABEL_183;
				case 35:
					sub_14084B960(*((_DWORD*)v6 + 2), *((float*)v6 + 3));
					goto LABEL_183;
				case 36:
					v35 = sub_140830310(qword_140C61BA0, *((_QWORD*)v6 + 2));
					if (!v35 && *((_QWORD*)v6 + 2) != -1i64)
						goto LABEL_136;
					v42 = *(_QWORD*)(*((_QWORD*)v6 + 1) + 32i64);
					if (!v42)
						goto LABEL_73;
					do
					{
						if (*(_WORD*)(v42 + 60) == 1027)
						{
							v43 = sub_140830F00(qword_140C61BA8, *(_DWORD*)(v42 + 56), 0);
							if (v43)
							{
								v44 = v6[14] & 1;
								v45 = *((_BYTE*)v6 + 29) & 1;
								v110 = 0;
								v111 = 0;
								v109 = 4;
								v107 = v35;
								v108 = 0i64;
								LODWORD(v106) = 4;
								v46 = v114 & 0xFC | v44 | (2 * v45);
								v113 = *((_DWORD*)v6 + 6);
								v47 = *(_QWORD*)v43;
								v114 = v46;
								(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(v47 + 128))(v43, &v106);
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v43 + 16i64))(v43);
							}
						}
						v42 = *(_QWORD*)(v42 + 32);
					} while (v42);
					goto LABEL_72;
				case 37:
					v20 = *((_DWORD*)v6 + 14);
					v21 = *((_DWORD*)v6 + 4);
					v22 = 16 * (*((_DWORD*)v6 + 13) + (*((_DWORD*)v6 + 12) << 12)) + 2;
					v23 = v22 | 0x80000000;
					if (v20)
					{
						if (v20 != 1)
							goto LABEL_182;
						v24 = (_QWORD*)sub_140830F00(qword_140C61BA8, v23, 0);
						v25 = v24;
						if (v24)
						{
							v26 = *v24;
							v108 = *((unsigned int*)v6 + 4);
							v110 = 0;
							v111 = 0;
							v109 = 4;
							v107 = 0i64;
							LODWORD(v106) = 0;
							(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)()))(v26 + 128))(v24, &v106);
							(*(void(__fastcall**)(_QWORD*))(*v25 + 16i64))(v25);
						}
						goto LABEL_37;
					}
					v27 = sub_140830310(qword_140C61BA0, *((_QWORD*)v6 + 1));
					if (v27)
					{
						v28 = sub_14083EDE0(qword_140C61BA8 + 398, v23);
						v29 = v28;
						if (v28)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
						}
						else
						{
							v30 = sub_1408575E0(v23);
							v29 = v30;
							if (v30)
								sub_140857A60(v30, v22, 0i64);
						}
						v31 = sub_140830F00(qword_140C61BA8, v23, 0);
						if (v31 || !v29)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
						}
						else
						{
							v32 = sub_140857F40(v23);
							if (v32)
								sub_1408564B0((__int64)(v32 + 21), *(_DWORD*)(v29 + 24));
						}
						v109 = v21;
						v106 = 0i64;
						LODWORD(v107) = 0;
						v108 = 0i64;
						sub_14082C9D0((__int64)lpCriticalSection, v23, v27, (__int64)&v106);
						v33 = *(_DWORD*)(v27 + 136) ^ (*(_DWORD*)(v27 + 136) ^ (*(_DWORD*)(v27 + 136) - 1)) & 0x3FFFFFFF;
						*(_DWORD*)(v27 + 136) = v33;
						if ((v33 & 0x3FFFFFFF) != 0)
						{
						LABEL_37:
							v5 = v125;
							goto LABEL_182;
						}
						v34 = dword_140C10F20;
						sub_14084BD30(v27);
						sub_140881720(v34, v27);
						v5 = v125;
					}
				LABEL_182:
					v2 = v124;
					goto LABEL_183;
				case 38:
					if (qword_140C61C60)
					{
						v103 = *((_QWORD*)v6 + 1);
						if (v103)
						{
							sub_14085CDC0(qword_140C61C60, v103);
							if (*((_BYTE*)v6 + 16) && qword_140C61FE0)
								sub_1408467F0(qword_140C61FE0, *((_QWORD*)v6 + 1));
							sub_140881720(dword_140C10F20, *((_QWORD*)v6 + 1));
						}
						else
						{
							sub_14085CE40(qword_140C61C60);
							if (qword_140C61FE0)
								sub_140846960(qword_140C61FE0);
						}
					}
					goto LABEL_183;
				case 39:
					v100 = sub_140830F00(qword_140C61BA8, *((_DWORD*)v6 + 2), *((_DWORD*)v6 + 5));
					v101 = (_QWORD*)v100;
					if (!v100)
						goto LABEL_37;
					v102 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v100 + 112i64))(v100);
					if (v102 <= 9 || v102 == 12)
						sub_140854420(v101, *((_DWORD*)v6 + 3), *((_DWORD*)v6 + 4), 1);
					(*(void(__fastcall**)(_QWORD*))(*v101 + 16i64))(v101);
					v5 = v125;
					goto LABEL_183;
				case 40:
					sub_140831540(*((_DWORD*)v6 + 2));
					goto LABEL_183;
				default:
					goto LABEL_183;
				}
			}
		}
	LABEL_186:
		LOBYTE(lpCriticalSection[2].LockCount) = 0;
		LeaveCriticalSection(lpCriticalSection);
		SetEvent(lpCriticalSection[5].LockSemaphore);
	}
	return 1i64;
}
// 1409A2DF8: using guessed type __int64 (__fastcall *off_1409A2DF8[2])();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B78: using guessed type __int64 qword_140C61B78;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;
// 140C61C60: using guessed type __int64 qword_140C61C60;
// 140C61FE0: using guessed type __int64 qword_140C61FE0;
// 140C62410: using guessed type int dword_140C62410;
// 14082CC10: using guessed type int var_F0[4];

