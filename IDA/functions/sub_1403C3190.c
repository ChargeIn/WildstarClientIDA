//----- (00000001403C3190) ----------------------------------------------------
__int64 __fastcall sub_1403C3190(__int64 a1, __int64 a2)
{
	int v4; // r8d
	__int64 v5; // rbx
	int v6; // r8d
	__int64 v7; // rbx
	int v8; // edi
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // ecx
	__int64 v12; // rax
	int v13; // ecx
	int v14; // r8d
	__int64 v15; // rbx
	int v16; // eax
	int v17; // eax
	int v18; // eax
	int v19; // eax
	int v20; // eax
	int v21; // eax
	int v22; // eax
	int v23; // eax
	int v24; // edi
	__int64 v25; // rbx
	__int64 v26; // rax
	int v27; // ecx
	__int64 v28; // rax
	int v29; // ecx
	int v30; // edi
	__int64 v31; // rbx
	__int64 v32; // rax
	int v33; // ecx
	__int64 v34; // rax
	int v35; // ecx
	int v36; // r8d
	int v37; // r8d
	__int64 v38; // rbx
	int v39; // r8d
	__int64 v40; // rbx
	int v41; // eax
	int v42; // eax
	int v43; // r8d
	__int64 v44; // rbx
	int v45; // r8d
	int v46; // r8d
	int* v47; // rbx
	int v48; // xmm0_4
	int v49; // eax
	int v50; // r8d
	__int64 v51; // rbx
	int v52; // r8d
	int v53; // r8d
	__int64 v54; // rbx
	int v55; // edi
	__int64 v56; // rbx
	__int64 v57; // rax
	int v58; // ecx
	__int64 v59; // rax
	int v60; // ecx
	int v61; // r8d
	__int64 v62; // rdi
	int v63; // ebx
	__int64 v64; // rax
	int v65; // ecx
	__int64 v66; // rax
	int v67; // ecx
	__int64 v68; // rdi
	int v69; // ebx
	__int64 v70; // rax
	int v71; // ecx
	__int64 v72; // rax
	int v73; // ecx
	int v74; // edi
	__int64 v75; // rbx
	__int64 v76; // rax
	int v77; // ecx
	__int64 v78; // rax
	int v79; // ecx
	int v80; // r8d
	__int64 v81; // rbx
	int v82; // r8d
	__int64 v83; // rbx
	int v84; // edi
	__int64 v85; // rbx
	__int64 v86; // rax
	int v87; // ecx
	__int64 v88; // rax
	int v89; // ecx
	int v90; // edi
	__int64 v91; // rbx
	__int64 v92; // rax
	int v93; // ecx
	__int64 v94; // rax
	int v95; // ecx
	int v96; // edi
	__int64 v97; // rbx
	__int64 v98; // rax
	int v99; // ecx
	__int64 v100; // rax
	int v101; // ecx
	int v102; // edi
	__int64 v103; // rbx
	__int64 v104; // rax
	int v105; // ecx
	__int64 v106; // rax
	int v107; // ecx
	__int64 v108; // rdi
	int v109; // ebx
	__int64 v110; // rax
	int v111; // ecx
	__int64 v112; // rax
	int v113; // ecx
	int v114; // edi
	__int64 v115; // rbx
	__int64 v116; // rax
	int v117; // ecx
	__int64 v118; // rax
	int v119; // ecx
	int v120; // edi
	__int64 v121; // rbx
	__int64 v122; // rax
	int v123; // ecx
	__int64 v124; // rax
	int v125; // ecx
	int v126; // r8d
	__int64 v127; // rbx
	__int64(__fastcall * *v128)(); // [rsp+20h] [rbp-50h] BYREF
	int v129; // [rsp+28h] [rbp-48h]
	__int128 v130; // [rsp+2Ch] [rbp-44h]
	int v131; // [rsp+3Ch] [rbp-34h]
	_QWORD v132[5]; // [rsp+40h] [rbp-30h] BYREF
	__int64 v133; // [rsp+68h] [rbp-8h]

	if (*(int*)a2 >= 36)
		return 2147500037i64;
	switch (*(_DWORD*)a2)
	{
	case 0:
		v4 = *(_DWORD*)(a2 + 12);
		DWORD1(v130) = *(_DWORD*)(a2 + 16);
		v129 = v4;
		LODWORD(v130) = 0;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F8B0;
		LODWORD(v132[0]) = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 0, v4))
		{
			v5 = a2 + 8;
			if (v5)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v5 != -4)
					{
						DWORD1(v130) = *(_DWORD*)(v5 + 8);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v5 + 12);
					}
					LODWORD(v132[0]) = *(_DWORD*)v5;
					sub_14060B510((int*)&v128);
				}
			}
		}
		break;
	case 1:
		v6 = *(_DWORD*)(a2 + 28);
		DWORD1(v130) = *(_DWORD*)(a2 + 32);
		v129 = v6;
		LODWORD(v130) = 1;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F910;
		v132[0] = 28i64;
		v132[1] = 0i64;
		LODWORD(v132[2]) = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 1, v6))
		{
			v7 = a2 + 8;
			if (v7)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v7 != -20)
					{
						DWORD1(v130) = *(_DWORD*)(v7 + 24);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v7 + 28);
					}
					v132[0] = *(_QWORD*)v7;
					LODWORD(v132[1]) = *(_DWORD*)(v7 + 8);
					HIDWORD(v132[1]) = *(unsigned __int8*)(v7 + 12);
					LODWORD(v132[2]) = *(_DWORD*)(v7 + 16);
					sub_14060B750((int*)&v128);
				}
			}
		}
		break;
	case 2:
		v8 = *(_DWORD*)(a2 + 8);
		v9 = a2 + 8;
		*(_QWORD*)&v130 = 0x1C00000002i64;
		v129 = v8;
		v128 = off_140B6F940;
		if ((unsigned int)sub_1403C2EE0(a1, 2, v8))
		{
			if (v9)
			{
				v10 = sub_1403D90D0(qword_140C65898, v8);
				if (v10)
				{
					v11 = *(_DWORD*)(v10 + 128);
					if (v11 == 20
						|| v11 == 23
						|| (v12 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v10 + 688))) != 0
						&& ((v13 = *(_DWORD*)(v12 + 128), v13 == 20) || v13 == 23))
					{
						DWORD1(v130) = *(_DWORD*)(v9 + 4);
						sub_14060BBC0((__int64)&v128);
					}
				}
			}
		}
		break;
	case 3:
		v14 = *(_DWORD*)(a2 + 52);
		DWORD1(v130) = *(_DWORD*)(a2 + 56);
		v129 = v14;
		LODWORD(v130) = 3;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F970;
		memset(v132, 0, 32);
		v132[4] = 0x400000000i64;
		LODWORD(v133) = 152;
		if ((unsigned int)sub_1403C2EE0(0i64, 3, v14))
		{
			v15 = a2 + 8;
			if (v15)
			{
				if (!(unsigned int)sub_14060B170((__int64)&v128) && v15 != -44)
				{
					DWORD1(v130) = *(_DWORD*)(v15 + 48);
					*((_QWORD*)&v130 + 1) = *(_QWORD*)(v15 + 52);
				}
				v132[0] = *(_QWORD*)v15;
				v132[1] = *(_QWORD*)(v15 + 8);
				v132[2] = *(_QWORD*)(v15 + 16);
				v132[3] = *(_QWORD*)(v15 + 24);
				v132[4] = *(_QWORD*)(v15 + 32);
				LODWORD(v133) = *(_DWORD*)(v15 + 40);
				sub_14060BD50((int*)&v128);
			}
		}
		break;
	case 4:
		v16 = *(_DWORD*)(a2 + 52);
		LODWORD(v130) = 4;
		v129 = v16;
		v17 = *(_DWORD*)(a2 + 56);
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		DWORD1(v130) = v17;
		memset(v132, 0, 32);
		v128 = off_140B6F9A0;
		v132[4] = 0x400000000i64;
		LODWORD(v133) = 152;
		if (a2 != -8)
		{
			if (a2 != -52)
			{
				DWORD1(v130) = *(_DWORD*)(a2 + 56);
				*((_QWORD*)&v130 + 1) = *(_QWORD*)(a2 + 60);
			}
			v132[0] = *(_QWORD*)(a2 + 8);
			v132[1] = *(_QWORD*)(a2 + 16);
			v132[2] = *(_QWORD*)(a2 + 24);
			v132[3] = *(_QWORD*)(a2 + 32);
			v132[4] = *(_QWORD*)(a2 + 40);
			LODWORD(v133) = *(_DWORD*)(a2 + 48);
			sub_14060C2B0((int*)&v128);
		}
		break;
	case 5:
		v18 = *(_DWORD*)(a2 + 48);
		LODWORD(v130) = 5;
		v129 = v18;
		v19 = *(_DWORD*)(a2 + 52);
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		DWORD1(v130) = v19;
		memset(v132, 0, 24);
		v128 = off_140B6F730;
		v132[3] = 0x400000000i64;
		LODWORD(v132[4]) = 152;
		if (a2 != -8)
		{
			if (a2 != -48)
			{
				DWORD1(v130) = *(_DWORD*)(a2 + 52);
				*((_QWORD*)&v130 + 1) = *(_QWORD*)(a2 + 56);
			}
			v132[0] = *(_QWORD*)(a2 + 8);
			LODWORD(v132[1]) = *(_DWORD*)(a2 + 16);
			LODWORD(v132[2]) = *(_DWORD*)(a2 + 28);
			HIDWORD(v132[2]) = *(_DWORD*)(a2 + 20);
			LODWORD(v132[3]) = *(_DWORD*)(a2 + 32);
			HIDWORD(v132[3]) = *(_DWORD*)(a2 + 40);
			LODWORD(v132[4]) = *(_DWORD*)(a2 + 44);
			HIDWORD(v132[1]) = *(_DWORD*)(a2 + 24);
			sub_14060C810((int*)&v128);
		}
		break;
	case 6:
		v20 = *(_DWORD*)(a2 + 52);
		LODWORD(v130) = 6;
		v129 = v20;
		v21 = *(_DWORD*)(a2 + 56);
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		DWORD1(v130) = v21;
		v132[0] = 0i64;
		v132[1] = 0i64;
		*(_OWORD*)((char*)&v132[2] + 4) = 0ui64;
		v128 = off_140B6F760;
		HIDWORD(v132[4]) = 4;
		if (a2 != -8)
		{
			if (a2 != -52)
			{
				DWORD1(v130) = *(_DWORD*)(a2 + 56);
				*((_QWORD*)&v130 + 1) = *(_QWORD*)(a2 + 60);
			}
			v132[0] = *(_QWORD*)(a2 + 8);
			LODWORD(v132[1]) = *(_DWORD*)(a2 + 16);
			HIDWORD(v132[3]) = *(_DWORD*)(a2 + 36);
			HIDWORD(v132[4]) = *(_DWORD*)(a2 + 44);
			LODWORD(v132[3]) = *(_DWORD*)(a2 + 32);
			LODWORD(v132[2]) = *(_DWORD*)(a2 + 20);
			LODWORD(v132[4]) = *(_DWORD*)(a2 + 40);
			HIDWORD(v132[2]) = *(_DWORD*)(a2 + 28);
			HIDWORD(v132[1]) = *(_DWORD*)(a2 + 24);
			sub_14060CBD0((int*)&v128);
		}
		break;
	case 7:
		v22 = *(_DWORD*)(a2 + 52);
		LODWORD(v130) = 7;
		v129 = v22;
		v23 = *(_DWORD*)(a2 + 56);
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		DWORD1(v130) = v23;
		v132[0] = 0i64;
		v132[1] = 0i64;
		v132[3] = 0i64;
		v128 = off_140B6F790;
		v132[4] = 0x400000000i64;
		if (a2 != -8)
		{
			if (a2 != -52)
			{
				DWORD1(v130) = *(_DWORD*)(a2 + 56);
				*((_QWORD*)&v130 + 1) = *(_QWORD*)(a2 + 60);
			}
			v132[0] = *(_QWORD*)(a2 + 8);
			LODWORD(v132[1]) = *(_DWORD*)(a2 + 16);
			HIDWORD(v132[3]) = *(_DWORD*)(a2 + 36);
			HIDWORD(v132[4]) = *(_DWORD*)(a2 + 44);
			LODWORD(v132[3]) = *(_DWORD*)(a2 + 32);
			LODWORD(v132[2]) = *(_DWORD*)(a2 + 20);
			HIDWORD(v132[1]) = *(_DWORD*)(a2 + 24);
			LODWORD(v132[4]) = *(_DWORD*)(a2 + 40);
			sub_14060D120((int*)&v128);
		}
		break;
	case 8:
		v24 = *(_DWORD*)(a2 + 8);
		v25 = a2 + 8;
		*(_QWORD*)&v130 = 8i64;
		v129 = v24;
		v128 = off_140B6F7C0;
		if ((unsigned int)sub_1403C2EE0(a1, 8, v24))
		{
			if (v25)
			{
				v26 = sub_1403D90D0(qword_140C65898, v24);
				if (v26)
				{
					v27 = *(_DWORD*)(v26 + 128);
					if (v27 == 20
						|| v27 == 23
						|| (v28 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v26 + 688))) != 0
						&& ((v29 = *(_DWORD*)(v28 + 128), v29 == 20) || v29 == 23))
					{
						DWORD1(v130) = *(_DWORD*)(v25 + 4);
						sub_14060D630((__int64)&v128);
					}
				}
			}
		}
		break;
	case 9:
		v30 = *(_DWORD*)(a2 + 8);
		v31 = a2 + 8;
		v129 = v30;
		*(_QWORD*)&v130 = 9i64;
		v128 = off_140B6F7F0;
		DWORD2(v130) = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 9, v30))
		{
			if (v31)
			{
				v32 = sub_1403D90D0(qword_140C65898, v30);
				if (v32)
				{
					v33 = *(_DWORD*)(v32 + 128);
					if (v33 == 20
						|| v33 == 23
						|| (v34 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v32 + 688))) != 0
						&& ((v35 = *(_DWORD*)(v34 + 128), v35 == 20) || v35 == 23))
					{
						*(_QWORD*)((char*)&v130 + 4) = *(_QWORD*)(v31 + 4);
						sub_14060D880((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0xA:
		v36 = *(_DWORD*)(a2 + 8);
		DWORD1(v130) = *(_DWORD*)(a2 + 12);
		v129 = v36;
		LODWORD(v130) = 10;
		v128 = off_140B6F820;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		if ((unsigned int)sub_1403C2EE0(0i64, 10, v36) && a2 != -8 && (unsigned int)sub_14060B170((__int64)&v128))
		{
			DWORD1(v130) = *(_DWORD*)(a2 + 12);
			*((_QWORD*)&v130 + 1) = *(_QWORD*)(a2 + 16);
			sub_14060DA40((int*)&v128);
		}
		break;
	case 0xB:
		v37 = *(_DWORD*)(a2 + 20);
		DWORD1(v130) = *(_DWORD*)(a2 + 24);
		v129 = v37;
		LODWORD(v130) = 11;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F850;
		v132[0] = 0i64;
		LODWORD(v132[1]) = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 11, v37))
		{
			v38 = a2 + 8;
			if (v38)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v38 != -12)
					{
						DWORD1(v130) = *(_DWORD*)(v38 + 16);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v38 + 20);
					}
					v132[0] = *(_QWORD*)v38;
					LODWORD(v132[1]) = *(_DWORD*)(v38 + 8);
					sub_14060DB10((int*)&v128);
				}
			}
		}
		break;
	case 0xC:
		v39 = *(_DWORD*)(a2 + 24);
		DWORD1(v130) = *(_DWORD*)(a2 + 28);
		v129 = v39;
		LODWORD(v130) = 12;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F880;
		v132[0] = 0i64;
		v132[1] = 0x9800000000i64;
		if ((unsigned int)sub_1403C2EE0(0i64, 12, v39))
		{
			v40 = a2 + 8;
			if (v40)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v40 != -16)
					{
						DWORD1(v130) = *(_DWORD*)(v40 + 20);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v40 + 24);
					}
					v132[0] = *(_QWORD*)v40;
					HIDWORD(v132[1]) = *(_DWORD*)(v40 + 12);
					sub_14060DD20((int*)&v128);
				}
			}
		}
		break;
	case 0xD:
		v41 = *(_DWORD*)(a2 + 24);
		LODWORD(v130) = 13;
		v129 = v41;
		v42 = *(_DWORD*)(a2 + 28);
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		DWORD1(v130) = v42;
		v132[0] = 0i64;
		v132[1] = 0i64;
		LODWORD(v132[2]) = 152;
		v128 = off_140B6F5B0;
		if (a2 != -8)
		{
			if (a2 != -24)
			{
				DWORD1(v130) = *(_DWORD*)(a2 + 28);
				*((_QWORD*)&v130 + 1) = *(_QWORD*)(a2 + 32);
			}
			v132[0] = *(_QWORD*)(a2 + 8);
			v132[1] = *(unsigned int*)(a2 + 16);
			LODWORD(v132[2]) = *(_DWORD*)(a2 + 20);
			sub_14060DF10((int*)&v128);
		}
		break;
	case 0xE:
		v43 = *(_DWORD*)(a2 + 12);
		DWORD1(v130) = *(_DWORD*)(a2 + 16);
		v129 = v43;
		LODWORD(v130) = 14;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F5E0;
		LODWORD(v132[0]) = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 14, v43))
		{
			v44 = a2 + 8;
			if (v44)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v44 != -4)
					{
						DWORD1(v130) = *(_DWORD*)(v44 + 8);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v44 + 12);
					}
					LODWORD(v132[0]) = *(_DWORD*)v44;
					sub_14060E210((int*)&v128);
				}
			}
		}
		break;
	case 0xF:
		v45 = *(_DWORD*)(a2 + 48);
		DWORD1(v130) = *(_DWORD*)(a2 + 52);
		v129 = v45;
		LODWORD(v130) = 15;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F610;
		LODWORD(v132[0]) = 0;
		*(_OWORD*)((char*)v132 + 4) = 4ui64;
		*(_QWORD*)((char*)&v132[2] + 4) = 0i64;
		v133 = 0i64;
		v132[4] = 0i64;
		if ((unsigned int)sub_1403C2EE0(0i64, 15, v45))
		{
			if (a2 != -8)
			{
				sub_14060E330((__int64)&v128, a2 + 8);
				if (v132[4])
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v132[4] - 16i64) + 8i64))(v132[4] - 16i64);
			}
		}
		break;
	case 0x10:
		v46 = *(_DWORD*)(a2 + 20);
		DWORD1(v130) = *(_DWORD*)(a2 + 24);
		LODWORD(v132[0]) = 0;
		v129 = v46;
		LODWORD(v130) = 16;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F640;
		*(_QWORD*)((char*)v132 + 4) = 31i64;
		if ((unsigned int)sub_1403C2EE0(0i64, 16, v46))
		{
			v47 = (int*)(a2 + 8);
			if (v47)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v47 != (int*)-12i64)
					{
						DWORD1(v130) = v47[4];
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v47 + 5);
					}
					v48 = *v47;
					HIDWORD(v132[0]) = v47[1];
					v49 = v47[2];
					LODWORD(v132[0]) = v48;
					LODWORD(v132[1]) = v49;
					sub_14060F170((int*)&v128);
				}
			}
		}
		break;
	case 0x11:
		v50 = *(_DWORD*)(a2 + 12);
		DWORD1(v130) = *(_DWORD*)(a2 + 16);
		v129 = v50;
		LODWORD(v130) = 17;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F670;
		LODWORD(v132[0]) = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 17, v50))
		{
			v51 = a2 + 8;
			if (v51)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v51 != -4)
					{
						DWORD1(v130) = *(_DWORD*)(v51 + 8);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v51 + 12);
					}
					LODWORD(v132[0]) = *(_DWORD*)v51;
					sub_14060F390((int*)&v128);
				}
			}
		}
		break;
	case 0x12:
		v52 = *(_DWORD*)(a2 + 8);
		DWORD1(v130) = *(_DWORD*)(a2 + 12);
		v129 = v52;
		LODWORD(v130) = 18;
		v128 = off_140B6F6A0;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		if ((unsigned int)sub_1403C2EE0(0i64, 18, v52) && a2 != -8 && (unsigned int)sub_14060B170((__int64)&v128))
		{
			DWORD1(v130) = *(_DWORD*)(a2 + 12);
			*((_QWORD*)&v130 + 1) = *(_QWORD*)(a2 + 16);
			sub_14060F530((int*)&v128);
		}
		break;
	case 0x13:
		v53 = *(_DWORD*)(a2 + 16);
		DWORD1(v130) = *(_DWORD*)(a2 + 20);
		v129 = v53;
		LODWORD(v130) = 19;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F6D0;
		v132[0] = 0x14C00000000i64;
		if ((unsigned int)sub_1403C2EE0(0i64, 19, v53))
		{
			v54 = a2 + 8;
			if (v54)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v54 != -8)
					{
						DWORD1(v130) = *(_DWORD*)(v54 + 12);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v54 + 16);
					}
					v132[0] = *(_QWORD*)v54;
					sub_14060F600((int*)&v128);
				}
			}
		}
		break;
	case 0x14:
		v55 = *(_DWORD*)(a2 + 8);
		v56 = a2 + 8;
		LODWORD(v130) = 20;
		v129 = v55;
		v128 = off_140B6F700;
		*(_QWORD*)((char*)&v130 + 4) = 31i64;
		if ((unsigned int)sub_1403C2EE0(a1, 20, v55))
		{
			if (v56)
			{
				v57 = sub_1403D90D0(qword_140C65898, v55);
				if (v57)
				{
					v58 = *(_DWORD*)(v57 + 128);
					if (v58 == 20
						|| v58 == 23
						|| (v59 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v57 + 688))) != 0
						&& ((v60 = *(_DWORD*)(v59 + 128), v60 == 20) || v60 == 23))
					{
						*(_QWORD*)((char*)&v130 + 4) = *(_QWORD*)(v56 + 4);
						sub_14060F7B0((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x15:
		v61 = *(_DWORD*)(a2 + 8);
		DWORD1(v130) = *(_DWORD*)(a2 + 12);
		v129 = v61;
		LODWORD(v130) = 21;
		v128 = off_140B6F430;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		if ((unsigned int)sub_1403C2EE0(0i64, 21, v61) && a2 != -8 && (unsigned int)sub_14060B170((__int64)&v128))
		{
			DWORD1(v130) = *(_DWORD*)(a2 + 12);
			*((_QWORD*)&v130 + 1) = *(_QWORD*)(a2 + 16);
			sub_14060F970((int*)&v128);
		}
		break;
	case 0x16:
		v62 = a2 + 8;
		v63 = *(_DWORD*)(a2 + 8);
		LODWORD(v130) = 22;
		v128 = off_140B6F460;
		v129 = v63;
		if ((unsigned int)sub_1403C2EE0(a1, 22, v63))
		{
			if (v62)
			{
				v64 = sub_1403D90D0(qword_140C65898, v63);
				if (v64)
				{
					v65 = *(_DWORD*)(v64 + 128);
					if (v65 == 20
						|| v65 == 23
						|| (v66 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v64 + 688))) != 0
						&& ((v67 = *(_DWORD*)(v66 + 128), v67 == 20) || v67 == 23))
					{
						sub_14060FA40((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x17:
		v68 = a2 + 8;
		v69 = *(_DWORD*)(a2 + 8);
		LODWORD(v130) = 23;
		v128 = off_140B6F490;
		v129 = v69;
		if ((unsigned int)sub_1403C2EE0(a1, 23, v69))
		{
			if (v68)
			{
				v70 = sub_1403D90D0(qword_140C65898, v69);
				if (v70)
				{
					v71 = *(_DWORD*)(v70 + 128);
					if (v71 == 20
						|| v71 == 23
						|| (v72 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v70 + 688))) != 0
						&& ((v73 = *(_DWORD*)(v72 + 128), v73 == 20) || v73 == 23))
					{
						sub_14060FB80((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x18:
		v74 = *(_DWORD*)(a2 + 8);
		v75 = a2 + 8;
		*(_QWORD*)&v130 = 24i64;
		v129 = v74;
		v128 = off_140B6F4C0;
		if ((unsigned int)sub_1403C2EE0(a1, 24, v74))
		{
			if (v75)
			{
				v76 = sub_1403D90D0(qword_140C65898, v74);
				if (v76)
				{
					v77 = *(_DWORD*)(v76 + 128);
					if (v77 == 20
						|| v77 == 23
						|| (v78 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v76 + 688))) != 0
						&& ((v79 = *(_DWORD*)(v78 + 128), v79 == 20) || v79 == 23))
					{
						DWORD1(v130) = *(_DWORD*)(v75 + 4);
						sub_14060FCC0((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x19:
		v80 = *(_DWORD*)(a2 + 12);
		DWORD1(v130) = *(_DWORD*)(a2 + 16);
		v129 = v80;
		LODWORD(v130) = 25;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F4F0;
		LODWORD(v132[0]) = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 25, v80))
		{
			v81 = a2 + 8;
			if (v81)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v81 != -4)
					{
						DWORD1(v130) = *(_DWORD*)(v81 + 8);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v81 + 12);
					}
					LODWORD(v132[0]) = *(_DWORD*)v81;
					sub_14060FEC0((int*)&v128);
				}
			}
		}
		break;
	case 0x1A:
		v82 = *(_DWORD*)(a2 + 16);
		DWORD1(v130) = *(_DWORD*)(a2 + 20);
		v129 = v82;
		LODWORD(v130) = 26;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F520;
		v132[0] = 0i64;
		if ((unsigned int)sub_1403C2EE0(0i64, 26, v82))
		{
			v83 = a2 + 8;
			if (v83)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v83 != -8)
					{
						DWORD1(v130) = *(_DWORD*)(v83 + 12);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v83 + 16);
					}
					v132[0] = *(_QWORD*)v83;
					sub_140610060((int*)&v128);
				}
			}
		}
		break;
	case 0x1B:
		v84 = *(_DWORD*)(a2 + 8);
		v85 = a2 + 8;
		v129 = v84;
		v130 = 0x1Bui64;
		v128 = off_140B6F550;
		v131 = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 27, v84))
		{
			if (v85)
			{
				v86 = sub_1403D90D0(qword_140C65898, v84);
				if (v86)
				{
					v87 = *(_DWORD*)(v86 + 128);
					if (v87 == 20
						|| v87 == 23
						|| (v88 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v86 + 688))) != 0
						&& ((v89 = *(_DWORD*)(v88 + 128), v89 == 20) || v89 == 23))
					{
						DWORD1(v130) = *(_DWORD*)(v85 + 4);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v85 + 8);
						v131 = *(_DWORD*)(v85 + 16);
						sub_1406102D0((int*)&v128);
					}
				}
			}
		}
		break;
	case 0x1C:
		v90 = *(_DWORD*)(a2 + 8);
		v91 = a2 + 8;
		v129 = v90;
		v130 = 0x1Cui64;
		v128 = off_140B6F310;
		if ((unsigned int)sub_1403C2EE0(0i64, 28, v90))
		{
			if (v91)
			{
				v92 = sub_1403D90D0(qword_140C65898, v90);
				if (v92)
				{
					v93 = *(_DWORD*)(v92 + 128);
					if (v93 == 20
						|| v93 == 23
						|| (v94 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v92 + 688))) != 0
						&& ((v95 = *(_DWORD*)(v94 + 128), v95 == 20) || v95 == 23))
					{
						DWORD1(v130) = *(_DWORD*)(v91 + 4);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v91 + 8);
						sub_140610670((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x1D:
		v96 = *(_DWORD*)(a2 + 8);
		v97 = a2 + 8;
		v129 = v96;
		*(_QWORD*)&v130 = 29i64;
		v128 = off_140B6F340;
		if ((unsigned int)sub_1403C2EE0(a1, 29, v96))
		{
			if (v97)
			{
				v98 = sub_1403D90D0(qword_140C65898, v96);
				if (v98)
				{
					v99 = *(_DWORD*)(v98 + 128);
					if (v99 == 20
						|| v99 == 23
						|| (v100 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v98 + 688))) != 0
						&& ((v101 = *(_DWORD*)(v100 + 128), v101 == 20) || v101 == 23))
					{
						DWORD1(v130) = *(_DWORD*)(v97 + 4);
						sub_140610850((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x1E:
		v102 = *(_DWORD*)(a2 + 8);
		v103 = a2 + 8;
		*(_QWORD*)&v130 = 30i64;
		v129 = v102;
		v128 = off_140B6F370;
		if ((unsigned int)sub_1403C2EE0(a1, 30, v102))
		{
			if (v103)
			{
				v104 = sub_1403D90D0(qword_140C65898, v102);
				if (v104)
				{
					v105 = *(_DWORD*)(v104 + 128);
					if (v105 == 20
						|| v105 == 23
						|| (v106 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v104 + 688))) != 0
						&& ((v107 = *(_DWORD*)(v106 + 128), v107 == 20) || v107 == 23))
					{
						DWORD1(v130) = *(_DWORD*)(v103 + 4);
						sub_140610A50((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x1F:
		v108 = a2 + 8;
		v109 = *(_DWORD*)(a2 + 8);
		LODWORD(v130) = 31;
		v128 = off_140B6F3A0;
		v129 = v109;
		if ((unsigned int)sub_1403C2EE0(a1, 31, v109))
		{
			if (v108)
			{
				v110 = sub_1403D90D0(qword_140C65898, v109);
				if (v110)
				{
					v111 = *(_DWORD*)(v110 + 128);
					if (v111 == 20
						|| v111 == 23
						|| (v112 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v110 + 688))) != 0
						&& ((v113 = *(_DWORD*)(v112 + 128), v113 == 20) || v113 == 23))
					{
						sub_140610BB0((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x20:
		v114 = *(_DWORD*)(a2 + 8);
		v115 = a2 + 8;
		*(_QWORD*)&v130 = 32i64;
		v129 = v114;
		v128 = off_140B6F3D0;
		if ((unsigned int)sub_1403C2EE0(a1, 32, v114))
		{
			if (v115)
			{
				v116 = sub_1403D90D0(qword_140C65898, v114);
				if (v116)
				{
					v117 = *(_DWORD*)(v116 + 128);
					if (v117 == 20
						|| v117 == 23
						|| (v118 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v116 + 688))) != 0
						&& ((v119 = *(_DWORD*)(v118 + 128), v119 == 20) || v119 == 23))
					{
						DWORD1(v130) = *(unsigned __int8*)(v115 + 4);
						sub_140610CF0((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x21:
		v120 = *(_DWORD*)(a2 + 8);
		v121 = a2 + 8;
		LODWORD(v130) = 33;
		v129 = v120;
		v128 = off_140B6F400;
		*(_QWORD*)((char*)&v130 + 4) = 4i64;
		if ((unsigned int)sub_1403C2EE0(a1, 33, v120))
		{
			if (v121)
			{
				v122 = sub_1403D90D0(qword_140C65898, v120);
				if (v122)
				{
					v123 = *(_DWORD*)(v122 + 128);
					if (v123 == 20
						|| v123 == 23
						|| (v124 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v122 + 688))) != 0
						&& ((v125 = *(_DWORD*)(v124 + 128), v125 == 20) || v125 == 23))
					{
						*(_QWORD*)((char*)&v130 + 4) = *(_QWORD*)(v121 + 4);
						sub_140610E70((__int64)&v128);
					}
				}
			}
		}
		break;
	case 0x23:
		v126 = *(_DWORD*)(a2 + 12);
		DWORD1(v130) = *(_DWORD*)(a2 + 16);
		v129 = v126;
		LODWORD(v130) = 35;
		*((_QWORD*)&v130 + 1) = 0x800000000i64;
		v128 = off_140B6F8E0;
		LODWORD(v132[0]) = 0;
		if ((unsigned int)sub_1403C2EE0(0i64, 35, v126))
		{
			v127 = a2 + 8;
			if (v127)
			{
				if ((unsigned int)sub_14060B170((__int64)&v128))
				{
					if (v127 != -4)
					{
						DWORD1(v130) = *(_DWORD*)(v127 + 8);
						*((_QWORD*)&v130 + 1) = *(_QWORD*)(v127 + 12);
					}
					LODWORD(v132[0]) = *(_DWORD*)v127;
					sub_14060B630((int*)&v128);
				}
			}
		}
		break;
	default:
		return 0i64;
	}
	return 0i64;
}
// 1403C33A9: conditional instruction was optimized away because rax.8!=0
// 1403C37FA: conditional instruction was optimized away because rax.8!=0
// 1403C38AB: conditional instruction was optimized away because rax.8!=0
// 1403C3EEB: conditional instruction was optimized away because rax.8!=0
// 1403C4017: conditional instruction was optimized away because rax.8!=0
// 1403C40BD: conditional instruction was optimized away because rax.8!=0
// 1403C4165: conditional instruction was optimized away because rax.8!=0
// 1403C4331: conditional instruction was optimized away because rax.8!=0
// 1403C43F5: conditional instruction was optimized away because rax.8!=0
// 1403C44B6: conditional instruction was optimized away because rax.8!=0
// 1403C4568: conditional instruction was optimized away because rax.8!=0
// 1403C4614: conditional instruction was optimized away because rax.8!=0
// 1403C46BC: conditional instruction was optimized away because rax.8!=0
// 1403C4772: conditional instruction was optimized away because rax.8!=0
// 140B6F310: using guessed type __int64 (__fastcall *off_140B6F310[267])();
// 140B6F340: using guessed type __int64 (__fastcall *off_140B6F340[261])();
// 140B6F370: using guessed type __int64 (__fastcall *off_140B6F370[255])();
// 140B6F3A0: using guessed type __int64 (__fastcall *off_140B6F3A0[249])();
// 140B6F3D0: using guessed type __int64 (__fastcall *off_140B6F3D0[243])();
// 140B6F400: using guessed type __int64 (__fastcall *off_140B6F400[237])();
// 140B6F430: using guessed type __int64 (__fastcall *off_140B6F430[231])();
// 140B6F460: using guessed type __int64 (__fastcall *off_140B6F460[225])();
// 140B6F490: using guessed type __int64 (__fastcall *off_140B6F490[219])();
// 140B6F4C0: using guessed type __int64 (__fastcall *off_140B6F4C0[213])();
// 140B6F4F0: using guessed type __int64 (__fastcall *off_140B6F4F0[207])();
// 140B6F520: using guessed type __int64 (__fastcall *off_140B6F520[201])();
// 140B6F550: using guessed type __int64 (__fastcall *off_140B6F550[195])();
// 140B6F5B0: using guessed type __int64 (__fastcall *off_140B6F5B0[183])();
// 140B6F5E0: using guessed type __int64 (__fastcall *off_140B6F5E0[177])();
// 140B6F610: using guessed type __int64 (__fastcall *off_140B6F610[171])();
// 140B6F640: using guessed type __int64 (__fastcall *off_140B6F640[165])();
// 140B6F670: using guessed type __int64 (__fastcall *off_140B6F670[159])();
// 140B6F6A0: using guessed type __int64 (__fastcall *off_140B6F6A0[153])();
// 140B6F6D0: using guessed type __int64 (__fastcall *off_140B6F6D0[147])();
// 140B6F700: using guessed type __int64 (__fastcall *off_140B6F700[141])();
// 140B6F730: using guessed type __int64 (__fastcall *off_140B6F730[135])();
// 140B6F760: using guessed type __int64 (__fastcall *off_140B6F760[129])();
// 140B6F790: using guessed type __int64 (__fastcall *off_140B6F790[123])();
// 140B6F7C0: using guessed type __int64 (__fastcall *off_140B6F7C0[117])();
// 140B6F7F0: using guessed type __int64 (__fastcall *off_140B6F7F0[111])();
// 140B6F820: using guessed type __int64 (__fastcall *off_140B6F820[105])();
// 140B6F850: using guessed type __int64 (__fastcall *off_140B6F850[99])();
// 140B6F880: using guessed type __int64 (__fastcall *off_140B6F880[93])();
// 140B6F8B0: using guessed type __int64 (__fastcall *off_140B6F8B0[87])();
// 140B6F8E0: using guessed type __int64 (__fastcall *off_140B6F8E0[81])();
// 140B6F910: using guessed type __int64 (__fastcall *off_140B6F910[75])();
// 140B6F940: using guessed type __int64 (__fastcall *off_140B6F940[69])();
// 140B6F970: using guessed type __int64 (__fastcall *off_140B6F970[63])();
// 140B6F9A0: using guessed type __int64 (__fastcall *off_140B6F9A0[57])();
// 140C65898: using guessed type __int64 qword_140C65898;

