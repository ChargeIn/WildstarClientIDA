//----- (00000001405A7C90) ----------------------------------------------------
__int64 __fastcall sub_1405A7C90(__int64 a1)
{
	__int64 v1; // r13
	__int64 v2; // rax
	unsigned int v3; // r14d
	__int64(__fastcall * v4)(wchar_t**, __int64); // rax
	unsigned int v5; // eax
	__int64 v6; // rax
	_DWORD* v7; // rsi
	int* v8; // rax
	int* v9; // rdi
	int* v10; // rax
	int* v11; // rax
	__int64 v12; // rbx
	int* v13; // rax
	unsigned __int64 v14; // r12
	int** v15; // r15
	int* v16; // rax
	int* v17; // rcx
	unsigned int i; // r12d
	unsigned int v19; // eax
	__int64 v20; // rax
	unsigned int* v21; // rsi
	int* v22; // rdi
	int* v23; // rax
	int* v24; // rax
	unsigned __int64 v25; // r15
	int** v26; // r14
	int* v27; // rax
	int* v28; // rcx
	__int64 v29; // r14
	unsigned int v30; // edx
	__int64 v31; // r8
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rcx
	__int64* v39; // rax
	__int64 v40; // rax
	unsigned int v41; // esi
	int* v42; // rax
	unsigned __int64 v43; // rcx
	unsigned __int64 v44; // rax
	unsigned int v45; // ebx
	_DWORD* v46; // r8
	__int64 v47; // r9
	int* v48; // rax
	__int64 v49; // rcx
	unsigned int v50; // r15d
	unsigned int v51; // eax
	__int64 v52; // rax
	__int64 v53; // rdi
	unsigned int v54; // ebx
	__int64 v55; // rax
	__int64 v56; // rcx
	unsigned int v57; // ebx
	__int64 v58; // rax
	unsigned int v59; // ebx
	__int64 v60; // rax
	unsigned __int64 v61; // rsi
	_QWORD* v62; // rbx
	_QWORD* v63; // rbx
	__int64 v64; // rbx
	int* v65; // rax
	__int64 v66; // r8
	__int64 v67; // r9
	__int64 v68; // rcx
	__int64 v69; // r14
	bool v70; // zf
	__int64 v71; // r14
	__int64 v72; // rdx
	__int64 v73; // r15
	unsigned __int64 v74; // rdi
	_QWORD* v75; // rbx
	__int64 v76; // rsi
	int v77; // edi
	__int64 v78; // rbx
	int* v79; // rax
	int* v80; // r14
	int* v81; // rdx
	__int64 v82; // rcx
	__int64 v83; // rdx
	__int64 v84; // r15
	unsigned __int64 v85; // rdi
	_QWORD* v86; // rbx
	__int64 v87; // rsi
	int v88; // edi
	__int64 v89; // rbx
	int* v90; // rax
	int* v91; // r14
	int* v92; // rdx
	__int64 v93; // rcx
	unsigned int v94; // edx
	unsigned int v95; // esi
	unsigned int v96; // eax
	__int64 v97; // rax
	unsigned __int64 v98; // rdi
	int* v99; // rbx
	unsigned __int64 v100; // rcx
	unsigned __int64 v101; // rdx
	unsigned __int64 v102; // rax
	int* v104; // [rsp+20h] [rbp-48h] BYREF
	int* v105; // [rsp+28h] [rbp-40h] BYREF
	unsigned __int64 v106[2]; // [rsp+30h] [rbp-38h] BYREF
	_QWORD v107[2]; // [rsp+40h] [rbp-28h] BYREF
	char v108[24]; // [rsp+50h] [rbp-18h] BYREF
	__int64 v109; // [rsp+B0h] [rbp+48h] BYREF
	__int64 v110; // [rsp+B8h] [rbp+50h] BYREF
	__int64 v111; // [rsp+C0h] [rbp+58h] BYREF
	__int64 v112; // [rsp+C8h] [rbp+60h] BYREF

	v109 = a1;
	v1 = qword_140C65B80;
	v2 = (__int64)sub_14018B280(152i64, 0);
	if (v2)
		v2 = sub_1405A77A0(v2);
	*(_QWORD*)v1 = v2;
	v3 = 0;
	while (1)
	{
		v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		if (qword_140C63838)
		{
			v5 = qword_140C63838(off_140A6C778, qword_140C63858);
			goto LABEL_9;
		}
		if (dword_140C6389C)
			goto LABEL_28;
		if ((int)sub_14022B0A0() < 0)
			break;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D08 + 40i64))(qword_140C63D08);
	LABEL_9:
		if (v3 >= v5)
			break;
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A6C778, v3, qword_140C63858);
			goto LABEL_15;
		}
		if (dword_140C6389C || (int)sub_14022B0A0() < 0)
		{
		LABEL_26:
			++v3;
		}
		else
		{
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D08 + 32i64))(qword_140C63D08, v3);
		LABEL_15:
			v7 = (_DWORD*)v6;
			if (!v6)
				goto LABEL_26;
			v8 = sub_14018B280(40i64, 0);
			v9 = v8;
			if (v8)
			{
				*(_QWORD*)v8 = 0i64;
				v10 = sub_14018B280(24i64, 0);
				*((_QWORD*)v9 + 2) = v10;
				*(_QWORD*)v10 = v10;
				*(_QWORD*)(*((_QWORD*)v9 + 2) + 8i64) = *((_QWORD*)v9 + 2);
				v11 = sub_14018B280(24i64, 0);
				*((_QWORD*)v9 + 4) = v11;
				*(_QWORD*)v11 = v11;
				*(_QWORD*)(*((_QWORD*)v9 + 4) + 8i64) = *((_QWORD*)v9 + 4);
			}
			else
			{
				v9 = 0i64;
			}
			*(_QWORD*)v9 = v7;
			v12 = *(_QWORD*)(v1 + 88);
			v13 = sub_14018B280(24i64, 0);
			if (v13 != (int*)-16i64)
				*((_QWORD*)v13 + 2) = v9;
			*(_QWORD*)v13 = v12;
			*((_QWORD*)v13 + 1) = *(_QWORD*)(v12 + 8);
			**(_QWORD**)(v12 + 8) = v13;
			*(_QWORD*)(v12 + 8) = v13;
			if (*(_QWORD*)(v1 + 96) == *(_QWORD*)(v1 + 104))
				sub_1400290D0(v1 + 96);
			v14 = (*(__int64(__fastcall**)(_DWORD*))(v1 + 120))(v7);
			v15 = (int**)(*(_QWORD*)(v1 + 112) + 8 * (v14 % *(_QWORD*)(v1 + 104)));
			v16 = sub_14018B280(32i64, 0);
			if (!v16)
			{
				*v15 = 0i64;
				++* (_QWORD*)(v1 + 96);
				goto LABEL_26;
			}
			v17 = *v15;
			*(_QWORD*)v16 = v14;
			*((_QWORD*)v16 + 1) = v17;
			LODWORD(v17) = *v7;
			*((_QWORD*)v16 + 3) = v9;
			v16[4] = (int)v17;
			*v15 = v16;
			++* (_QWORD*)(v1 + 96);
			++v3;
		}
	}
	v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
LABEL_28:
	for (i = 0; ; ++i)
	{
	LABEL_29:
		if (v4)
		{
			v19 = v4(off_140A6C708, qword_140C63858);
			goto LABEL_34;
		}
		if (dword_140C64D18)
			goto LABEL_96;
		if ((int)sub_14022A820() < 0)
			break;
		v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C642A8 + 40i64))(qword_140C642A8);
	LABEL_34:
		if (i >= v19)
			break;
		if (qword_140C63848)
		{
			v20 = qword_140C63848(off_140A6C708, i, qword_140C63858);
		LABEL_42:
			v21 = (unsigned int*)v20;
			goto LABEL_43;
		}
		if (dword_140C64D18)
		{
			v21 = 0i64;
		}
		else
		{
			if ((int)sub_14022A820() >= 0)
			{
				v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C642A8 + 32i64))(qword_140C642A8, i);
				goto LABEL_42;
			}
			v21 = 0i64;
		}
	LABEL_43:
		v22 = sub_14018B280(160i64, 0);
		if (v22)
		{
			v23 = sub_14018B280(24i64, 0);
			*((_QWORD*)v22 + 10) = v23;
			*(_QWORD*)v23 = v23;
			*(_QWORD*)(*((_QWORD*)v22 + 10) + 8i64) = *((_QWORD*)v22 + 10);
			v24 = sub_14018B280(48i64, 0);
			*((_QWORD*)v22 + 13) = 0i64;
			*((_QWORD*)v22 + 12) = v24;
			*(_BYTE*)v24 = 0;
			*(_QWORD*)(*((_QWORD*)v22 + 12) + 8i64) = 0i64;
			*(_QWORD*)(*((_QWORD*)v22 + 12) + 16i64) = *((_QWORD*)v22 + 12);
			*(_QWORD*)(*((_QWORD*)v22 + 12) + 24i64) = *((_QWORD*)v22 + 12);
			*((_QWORD*)v22 + 16) = 0i64;
			*((_QWORD*)v22 + 15) = 0i64;
			*((_QWORD*)v22 + 18) = 0i64;
			*((_QWORD*)v22 + 17) = 0i64;
		}
		else
		{
			v22 = 0i64;
		}
		if ((int)sub_14054F290((__int64)v22, *v21) < 0)
			goto LABEL_94;
		if (*(_QWORD*)(v1 + 8) == *(_QWORD*)(v1 + 16))
			sub_1400290D0(v1 + 8);
		v25 = (*(__int64(__fastcall**)(unsigned int*))(v1 + 32))(v21);
		v26 = (int**)(*(_QWORD*)(v1 + 24) + 8 * (v25 % *(_QWORD*)(v1 + 16)));
		v27 = sub_14018B280(32i64, 0);
		if (v27)
		{
			v28 = *v26;
			*(_QWORD*)v27 = v25;
			*((_QWORD*)v27 + 1) = v28;
			LODWORD(v28) = *v21;
			*((_QWORD*)v27 + 3) = v22;
			v27[4] = (int)v28;
		}
		*v26 = v27;
		++* (_QWORD*)(v1 + 8);
		if (*(_DWORD*)(*((_QWORD*)v22 + 1) + 436i64))
		{
			v29 = v21[108];
			if (!(_DWORD)v29)
				goto LABEL_94;
			v30 = v21[107];
			v31 = *(_QWORD*)(qword_140C65930 + 112);
			v32 = v31;
			v33 = *(_QWORD*)(v31 + 8);
			while (v33)
			{
				if (*(_DWORD*)(v33 + 32) < v30)
				{
					v33 = *(_QWORD*)(v33 + 24);
				}
				else
				{
					v32 = v33;
					v33 = *(_QWORD*)(v33 + 16);
				}
			}
			if (v32 == v31 || v30 < *(_DWORD*)(v32 + 32))
			{
				v110 = *(_QWORD*)(qword_140C65930 + 112);
				v34 = &v110;
			}
			else
			{
				v109 = v32;
				v34 = &v109;
			}
			v35 = *v34;
			if (v35 == v31 || (v36 = *(_QWORD*)(v35 + 40)) == 0)
			{
				v37 = *(_QWORD*)(v31 + 8);
				v38 = v31;
				while (v37)
				{
					if (*(_DWORD*)(v37 + 32))
					{
						v38 = v37;
						v37 = *(_QWORD*)(v37 + 16);
					}
					else
					{
						v37 = *(_QWORD*)(v37 + 24);
					}
				}
				if (v38 == v31 || *(_DWORD*)(v38 + 32) > 1u)
				{
					v112 = v31;
					v39 = &v112;
				}
				else
				{
					v111 = v38;
					v39 = &v111;
				}
				v40 = *v39;
				if (v40 == v31)
					v36 = 0i64;
				else
					v36 = *(_QWORD*)(v40 + 40);
			}
			v41 = *v21;
			if (v36)
			{
				v42 = sub_14018B280(4i64, 0);
				v43 = (unsigned __int64)v42;
				if (v42)
					*v42 = v41;
				else
					v43 = 0i64;
				*(_QWORD*)(v36 + 8) += v29;
				v44 = *(_QWORD*)(v36 + 8);
				v106[1] = v43;
				v106[0] = v44;
				sub_1400EEDD0(v36 + 24, (__int64)v108, v106);
			}
		}
		v45 = 0;
		if (!v22[4])
		{
		LABEL_94:
			v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
			++i;
			goto LABEL_29;
		}
		do
		{
			v46 = *(_DWORD**)&v22[2 * v45 + 6];
			if (v46)
			{
				v47 = *(_QWORD*)(v1 + 56);
				v48 = (int*)v47;
				v49 = *(_QWORD*)(v47 + 8);
				while (v49)
				{
					if (*(_DWORD*)(v49 + 32) < *v46)
					{
						v49 = *(_QWORD*)(v49 + 24);
					}
					else
					{
						v48 = (int*)v49;
						v49 = *(_QWORD*)(v49 + 16);
					}
				}
				if (v48 == (int*)v47 || *v46 < (unsigned int)v48[8])
				{
					LODWORD(v107[0]) = *v46;
					v107[1] = 0i64;
					v104 = v48;
					sub_140055C60(v1 + 48, &v105, (__int64*)&v104, v107);
					v48 = v105;
				}
				*((_QWORD*)v48 + 5) = v22;
			}
			++v45;
		} while (v45 < v22[4]);
		v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	}
	v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
LABEL_96:
	v50 = 0;
LABEL_97:
	while (2)
	{
		if (v4)
		{
			v51 = v4(off_140A6C890, qword_140C63858);
			goto LABEL_102;
		}
		if (dword_140C63A1C)
			goto LABEL_173;
		if ((int)sub_14022C5E0() >= 0)
		{
			v51 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64640 + 40i64))(qword_140C64640);
		LABEL_102:
			if (v50 >= v51)
				break;
			if (qword_140C63848)
			{
				v52 = qword_140C63848(off_140A6C890, v50, qword_140C63858);
				goto LABEL_110;
			}
			if (dword_140C63A1C)
			{
				v53 = 0i64;
			}
			else if ((int)sub_14022C5E0() >= 0)
			{
				v52 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64640 + 32i64))(qword_140C64640, v50);
			LABEL_110:
				v53 = v52;
			}
			else
			{
				v53 = 0i64;
			}
			switch (*(_DWORD*)(v53 + 8))
			{
			case 1:
				v54 = *(_DWORD*)(v53 + 12);
				if (qword_140C63840)
				{
					v55 = qword_140C63840(off_140A6ABB0, v54, qword_140C63858);
					goto LABEL_161;
				}
				if (dword_140C649FC || (int)sub_140209480() < 0)
					goto LABEL_171;
				v56 = qword_140C640E8;
				goto LABEL_160;
			case 2:
				v54 = *(_DWORD*)(v53 + 12);
				if (qword_140C63840)
				{
					v55 = qword_140C63840(off_140A6A328, v54, qword_140C63858);
					goto LABEL_161;
				}
				if (dword_140C6546C || (int)sub_1401FEEC0() < 0)
					goto LABEL_171;
				v56 = qword_140C64D20;
				goto LABEL_160;
			case 3:
				v54 = *(_DWORD*)(v53 + 12);
				if (qword_140C63840)
				{
					v55 = qword_140C63840(off_140A69F38, v54, qword_140C63858);
					goto LABEL_161;
				}
				if (dword_140C64A64 || (int)sub_1401FA240() < 0)
					goto LABEL_171;
				v56 = qword_140C640D8;
				goto LABEL_160;
			case 4:
				v54 = *(_DWORD*)(v53 + 12);
				if (qword_140C63840)
				{
					v55 = qword_140C63840(off_140A6DDC8, v54, qword_140C63858);
					goto LABEL_161;
				}
				if (dword_140C63E34 || (int)sub_140246220() < 0)
					goto LABEL_171;
				v56 = qword_140C64160;
				goto LABEL_160;
			case 5:
				v54 = *(_DWORD*)(v53 + 12);
				if (qword_140C63840)
				{
					v55 = qword_140C63840(off_140A6DAF0, v54, qword_140C63858);
					goto LABEL_161;
				}
				if (dword_140C64D70 || (int)sub_140242AE0() < 0)
					goto LABEL_171;
				v56 = qword_140C64068;
				goto LABEL_160;
			case 6:
				v54 = *(_DWORD*)(v53 + 12);
				if (qword_140C63840)
				{
					v55 = qword_140C63840(off_140A690C8, v54, qword_140C63858);
					goto LABEL_161;
				}
				if (dword_140C64170 || (int)sub_1401E89C0() < 0)
					goto LABEL_171;
				v56 = qword_140C652D0;
				goto LABEL_160;
			case 7:
				v57 = *(_DWORD*)(v53 + 12);
				if (qword_140C63840)
				{
					v58 = qword_140C63840(off_140A69090, v57, qword_140C63858);
				}
				else
				{
					if (dword_140C64F2C || (int)sub_1401E8580() < 0)
						goto LABEL_171;
					v58 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A98 + 24i64))(
						qword_140C64A98,
						v57);
				}
				if (!v58)
					goto LABEL_171;
				v59 = *(_DWORD*)(v58 + 16);
				if (qword_140C63840)
				{
					v60 = qword_140C63840(off_140A690C8, v59, qword_140C63858);
				}
				else
				{
					if (dword_140C64170 || (int)sub_1401E89C0() < 0)
						goto LABEL_171;
					v60 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(
						qword_140C652D0,
						v59);
				}
				if (v60)
					goto LABEL_162;
				v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
				++v50;
				continue;
			case 8:
			case 9:
				v54 = *(_DWORD*)(v53 + 12);
				if (qword_140C63840)
				{
					v55 = qword_140C63840(off_140A6A4E8, v54, qword_140C63858);
				}
				else
				{
					if (dword_140C64C20 || (int)sub_1402010C0() < 0)
						goto LABEL_171;
					v56 = qword_140C64E50;
				LABEL_160:
					v55 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v56 + 24i64))(v56, v54);
				}
			LABEL_161:
				if (v55)
				{
				LABEL_162:
					v61 = (*(__int64(__fastcall**)(__int64))(v1 + 32))(v53 + 4);
					v62 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 8 * (v61 % *(_QWORD*)(v1 + 16)));
					if (v62)
					{
						while (v61 != *v62 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v1 + 40))(v53 + 4, v62 + 2))
						{
							v62 = (_QWORD*)v62[1];
							if (!v62)
							{
								v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
								++v50;
								goto LABEL_97;
							}
						}
						v63 = v62 + 3;
						if (v63)
						{
							v64 = *(_QWORD*)(*v63 + 80i64);
							v65 = sub_14018B280(24i64, 0);
							if (v65 != (int*)-16i64)
								*((_QWORD*)v65 + 2) = v53;
							*(_QWORD*)v65 = v64;
							*((_QWORD*)v65 + 1) = *(_QWORD*)(v64 + 8);
							**(_QWORD**)(v64 + 8) = v65;
							*(_QWORD*)(v64 + 8) = v65;
						}
					}
				}
			LABEL_171:
				v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
				++v50;
				break;
			case 0xA:
				goto LABEL_162;
			default:
				goto LABEL_171;
			}
			continue;
		}
		break;
	}
	v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
LABEL_173:
	v66 = qword_140C65918;
	v67 = 0i64;
	LODWORD(v109) = 0;
	if (*(_DWORD*)(qword_140C65918 + 40))
	{
		v68 = qword_140C66650;
		do
		{
			v69 = 480i64 * (unsigned int)v67;
			v70 = *(_QWORD*)(v66 + 32) + v69 == 0;
			v71 = *(_QWORD*)(v66 + 32) + v69;
			v112 = v71;
			if (!v70)
			{
				v72 = *(_QWORD*)(v71 + 96);
				v73 = 0i64;
				if (*(_DWORD*)(v68 + 4 * v72))
				{
					do
					{
						LODWORD(v110) = *(_DWORD*)(v68 + 4 * (v72 + v73));
						v74 = (*(__int64(__fastcall**)(__int64*))(v1 + 32))(&v110);
						v75 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 8 * (v74 % *(_QWORD*)(v1 + 16)));
						if (v75)
						{
							while (v74 != *v75 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v1 + 40))(&v110, v75 + 2))
							{
								v75 = (_QWORD*)v75[1];
								if (!v75)
									goto LABEL_188;
							}
							if (v75 != (_QWORD*)-24i64)
							{
								v76 = v75[3];
								v77 = *(_DWORD*)v71;
								v78 = *(_QWORD*)(v76 + 144);
								v79 = sub_14018DB00(*(_QWORD*)(v76 + 136), v78 + 1, 4i64);
								v80 = v79;
								v79[v78] = v77;
								v81 = *(int**)(v76 + 136);
								if (v81 != v79)
								{
									sub_1407DB590(v79, v81, 4i64 * *(_QWORD*)(v76 + 144));
									v82 = *(_QWORD*)(v76 + 136);
									if (v82)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v82 - 16) + 8i64))(v82 - 16);
									*(_QWORD*)(v76 + 136) = v80;
								}
								v71 = v112;
								*(_QWORD*)(v76 + 144) = v78 + 1;
							}
						}
					LABEL_188:
						v72 = *(_QWORD*)(v71 + 96);
						v68 = qword_140C66650;
						++v73;
					} while (*(_DWORD*)(qword_140C66650 + 4 * (v72 + v73)));
					v66 = qword_140C65918;
					v67 = (unsigned int)v109;
				}
				v83 = *(_QWORD*)(v71 + 88);
				v84 = 0i64;
				if (*(_DWORD*)(v68 + 4 * v83))
				{
					do
					{
						LODWORD(v111) = *(_DWORD*)(v68 + 4 * (v83 + v84));
						v85 = (*(__int64(__fastcall**)(__int64*, __int64, __int64, __int64))(v1 + 32))(&v111, v83, v66, v67);
						v86 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 8 * (v85 % *(_QWORD*)(v1 + 16)));
						if (v86)
						{
							while (v85 != *v86 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v1 + 40))(&v111, v86 + 2))
							{
								v86 = (_QWORD*)v86[1];
								if (!v86)
									goto LABEL_202;
							}
							if (v86 != (_QWORD*)-24i64)
							{
								v87 = v86[3];
								v88 = *(_DWORD*)v71;
								v89 = *(_QWORD*)(v87 + 128);
								v90 = sub_14018DB00(*(_QWORD*)(v87 + 120), v89 + 1, 4i64);
								v91 = v90;
								v90[v89] = v88;
								v92 = *(int**)(v87 + 120);
								if (v92 != v90)
								{
									sub_1407DB590(v90, v92, 4i64 * *(_QWORD*)(v87 + 128));
									v93 = *(_QWORD*)(v87 + 120);
									if (v93)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v93 - 16) + 8i64))(v93 - 16);
									*(_QWORD*)(v87 + 120) = v91;
								}
								v71 = v112;
								*(_QWORD*)(v87 + 128) = v89 + 1;
							}
						}
					LABEL_202:
						v83 = *(_QWORD*)(v71 + 88);
						v68 = qword_140C66650;
						++v84;
					} while (*(_DWORD*)(qword_140C66650 + 4 * (v83 + v84)));
					v66 = qword_140C65918;
					LODWORD(v67) = v109;
				}
			}
			v94 = *(_DWORD*)(v66 + 40);
			v67 = (unsigned int)(v67 + 1);
			LODWORD(v109) = v67;
		} while ((unsigned int)v67 < v94);
		v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	}
	v95 = 0;
	while (2)
	{
		if (v4)
		{
			v96 = ((__int64(__fastcall*)(wchar_t**, __int64, __int64, __int64))v4)(
				off_140A6AD00,
				qword_140C63858,
				v66,
				v67);
			goto LABEL_212;
		}
		if (!dword_140C638C8 && (int)sub_14020AE00() >= 0)
		{
			v96 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65168 + 40i64))(qword_140C65168);
		LABEL_212:
			if (v95 >= v96)
				return 0i64;
			if (qword_140C63848)
			{
				v97 = qword_140C63848(off_140A6AD00, v95, qword_140C63858);
			LABEL_218:
				if (v97)
				{
					v98 = 0i64;
					v99 = (int*)(v97 + 4);
					do
					{
						v67 = (unsigned int)*v99;
						if (!(_DWORD)v67)
							break;
						v100 = *(_QWORD*)(v1 + 144);
						v101 = 0i64;
						while (v101 < v100)
						{
							v102 = v101 + ((v100 - v101) >> 1);
							v66 = *(unsigned int*)(*(_QWORD*)(v1 + 136) + 4 * v102);
							if ((unsigned int)v67 < (unsigned int)v66)
							{
								v100 = v101 + ((v100 - v101) >> 1);
							}
							else
							{
								if ((unsigned int)v67 <= (unsigned int)v66)
									goto LABEL_228;
								v101 = v102 + 1;
							}
						}
						sub_1401C2E70((__int64*)(v1 + 136), v101, v99);
					LABEL_228:
						++v98;
						++v99;
					} while (v98 < 0xF);
				}
			}
			else if (!dword_140C638C8 && (int)sub_14020AE00() >= 0)
			{
				v97 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65168 + 32i64))(qword_140C65168, v95);
				goto LABEL_218;
			}
			v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
			++v95;
			continue;
		}
		return 0i64;
	}
}
// 1405A875E: variable 'v66' is possibly undefined
// 1405A875E: variable 'v67' is possibly undefined
// 140A69090: using guessed type wchar_t *off_140A69090[2];
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140A69F38: using guessed type wchar_t *off_140A69F38[2];
// 140A6A328: using guessed type wchar_t *off_140A6A328[2];
// 140A6A4E8: using guessed type wchar_t *off_140A6A4E8[2];
// 140A6ABB0: using guessed type wchar_t *off_140A6ABB0[2];
// 140A6AD00: using guessed type wchar_t *off_140A6AD00[2];
// 140A6C708: using guessed type wchar_t *off_140A6C708[2];
// 140A6C778: using guessed type wchar_t *off_140A6C778[2];
// 140A6C890: using guessed type wchar_t *off_140A6C890[2];
// 140A6DAF0: using guessed type wchar_t *off_140A6DAF0[2];
// 140A6DDC8: using guessed type wchar_t *off_140A6DDC8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6389C: using guessed type int dword_140C6389C;
// 140C638C8: using guessed type int dword_140C638C8;
// 140C63A1C: using guessed type int dword_140C63A1C;
// 140C63D08: using guessed type __int64 qword_140C63D08;
// 140C63E34: using guessed type int dword_140C63E34;
// 140C64068: using guessed type __int64 qword_140C64068;
// 140C640D8: using guessed type __int64 qword_140C640D8;
// 140C640E8: using guessed type __int64 qword_140C640E8;
// 140C64160: using guessed type __int64 qword_140C64160;
// 140C64170: using guessed type int dword_140C64170;
// 140C642A8: using guessed type __int64 qword_140C642A8;
// 140C64640: using guessed type __int64 qword_140C64640;
// 140C649FC: using guessed type int dword_140C649FC;
// 140C64A64: using guessed type int dword_140C64A64;
// 140C64A98: using guessed type __int64 qword_140C64A98;
// 140C64C20: using guessed type int dword_140C64C20;
// 140C64D18: using guessed type int dword_140C64D18;
// 140C64D20: using guessed type __int64 qword_140C64D20;
// 140C64D70: using guessed type int dword_140C64D70;
// 140C64E50: using guessed type __int64 qword_140C64E50;
// 140C64F2C: using guessed type int dword_140C64F2C;
// 140C65168: using guessed type __int64 qword_140C65168;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140C6546C: using guessed type int dword_140C6546C;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65930: using guessed type __int64 qword_140C65930;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C66650: using guessed type __int64 qword_140C66650;
// 1405A7C90: using guessed type char var_18[24];

