//----- (00000001407A9760) ----------------------------------------------------
__int64 __fastcall sub_1407A9760(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4, unsigned int a5)
{
	_DWORD* v5; // r12
	_WORD* v6; // r15
	int* v7; // rax
	__int64 v8; // rbx
	int* v9; // r14
	int* v10; // rsi
	int* v11; // rdi
	__int64 v12; // rcx
	_QWORD* v13; // rax
	int* v14; // rcx
	int* v15; // r14
	__int64 v16; // rax
	bool v17; // zf
	__int64 v18; // r15
	__int64 v19; // rcx
	int* v20; // r15
	__int16* v21; // rax
	__int16* v22; // rdi
	__int64 v23; // r8
	__int64* v24; // rax
	int* v25; // r12
	int* v26; // rdx
	int* v27; // rcx
	unsigned __int64 v28; // rbx
	unsigned __int64 v29; // rax
	unsigned __int64 v30; // rbx
	__int64 v31; // rbx
	__int64 v32; // rcx
	__int64 v34; // r15
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64 v37; // r15
	__int64 v38; // rcx
	__int64 v39; // r15
	__int64 v40; // rcx
	__int16* v41; // rax
	__int64 v42; // rax
	__int64 v43; // r15
	__int64 v44; // rcx
	__int16* v45; // rax
	_QWORD* v46; // rax
	int* v47; // rcx
	__int64 v48; // rcx
	_QWORD* v49; // rax
	int* v50; // rcx
	_QWORD* v51; // rax
	int* v52; // rcx
	_QWORD* v53; // rax
	int* v54; // rcx
	_QWORD* v55; // rax
	int* v56; // rcx
	_QWORD* v57; // rax
	int* v58; // rcx
	_QWORD* v59; // rax
	int* v60; // rcx
	_QWORD* v61; // rax
	int* v62; // rcx
	_QWORD* v63; // rax
	int* v64; // rcx
	_QWORD* v65; // rax
	int* v66; // rcx
	int v67; // edx
	_DWORD* v68; // rcx
	__int64 v69; // rax
	_QWORD* v70; // rax
	int* v71; // rcx
	__int64 v72; // rcx
	__int64 v73; // rcx
	_QWORD* v74; // rax
	int* v75; // rcx
	__int64 v76; // rcx
	__int64 v77; // rax
	__int64 v78; // r15
	__int64 v79; // rcx
	int* v80; // r14
	unsigned __int64 v81; // rbx
	unsigned __int64 v82; // rax
	unsigned __int64 v83; // rbx
	unsigned __int64 v84; // rbx
	__int64 v87; // [rsp+30h] [rbp-D0h] BYREF
	int* v88; // [rsp+38h] [rbp-C8h]
	int* v89; // [rsp+40h] [rbp-C0h]
	int* v90; // [rsp+48h] [rbp-B8h]
	_WORD* v91; // [rsp+50h] [rbp-B0h]
	__int64 v92; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v93; // [rsp+60h] [rbp-A0h]
	__int64 v94; // [rsp+78h] [rbp-88h]
	char v95[8]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v96; // [rsp+88h] [rbp-78h]
	__int64 v97; // [rsp+90h] [rbp-70h]
	_QWORD v98[4]; // [rsp+A0h] [rbp-60h] BYREF
	_QWORD v99[4]; // [rsp+C0h] [rbp-40h] BYREF
	_QWORD v100[4]; // [rsp+E0h] [rbp-20h] BYREF
	_QWORD v101[4]; // [rsp+100h] [rbp+0h] BYREF
	__int64 v102; // [rsp+120h] [rbp+20h] BYREF
	__int64 v103; // [rsp+128h] [rbp+28h]
	_QWORD v104[4]; // [rsp+140h] [rbp+40h] BYREF
	_QWORD v105[4]; // [rsp+160h] [rbp+60h] BYREF
	__int64 v106; // [rsp+180h] [rbp+80h] BYREF
	__int64 v107; // [rsp+188h] [rbp+88h]
	_QWORD v108[4]; // [rsp+1A0h] [rbp+A0h] BYREF
	_QWORD v109[4]; // [rsp+1C0h] [rbp+C0h] BYREF
	_QWORD v110[4]; // [rsp+1E0h] [rbp+E0h] BYREF
	_QWORD v111[4]; // [rsp+200h] [rbp+100h] BYREF
	_QWORD v112[4]; // [rsp+220h] [rbp+120h] BYREF
	WCHAR String[256]; // [rsp+240h] [rbp+140h] BYREF

	v5 = a2;
	v94 = a1;
	v6 = (_WORD*)a3;
	v91 = (_WORD*)a3;
	v7 = sub_14018B280(16i64, 0);
	v8 = 0i64;
	v9 = v7 + 4;
	v10 = v7;
	v88 = v7;
	v11 = v7;
	v89 = v7;
	v90 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	*v6 = 0;
	if (*v5 == 1)
	{
		v67 = 0;
		v68 = &unk_140B52E30;
		while (v5[2] != *v68)
		{
			++v67;
			v68 += 8;
			if ((unsigned __int64)v67 >= 0x2B)
				goto LABEL_112;
		}
		v69 = 32i64 * v67;
		if (a5)
		{
			v70 = sub_1400E2540(
				(__int64)v68,
				v109,
				*(_DWORD*)((char*)&unk_140B52E30 + v69 + 8),
				*(int**)((char*)&unk_140B52E30 + v69 + 24));
			v71 = v10;
			v10 = (int*)v70[1];
			v70[1] = v71;
			v11 = (int*)v70[2];
			v70[2] = v71;
			v72 = v70[3];
			v70[3] = v9;
			v90 = (int*)v72;
			v73 = v109[1];
		}
		else
		{
			v74 = sub_1400E2540(
				(__int64)v68,
				v111,
				*(_DWORD*)((char*)&unk_140B52E30 + v69 + 4),
				*(int**)((char*)&unk_140B52E30 + v69 + 16));
			v75 = v10;
			v10 = (int*)v74[1];
			v74[1] = v75;
			v11 = (int*)v74[2];
			v74[2] = v75;
			v76 = v74[3];
			v74[3] = v9;
			v90 = (int*)v76;
			v73 = v111[1];
		}
		v89 = v11;
		v88 = v10;
		if (v73)
			sub_14018B900(v73, 0);
		if (v10 != v11)
			goto LABEL_31;
	LABEL_112:
		if (GetKeyNameTextW((v5[2] | 0x200) << 16, String, 256))
		{
			if (String[0])
			{
				do
					++v8;
				while (String[v8]);
			}
			v80 = (int*)&String[v8];
			v81 = (2 * v8) >> 1;
			v82 = ((char*)v11 - (char*)v10) >> 1;
			if (v81 > v82)
			{
				v84 = v82;
				sub_1407DB590(v10, (int*)String, 2 * v82);
				sub_14001C310(&v87, (int*)&String[v84], v80);
				v10 = v88;
			}
			else
			{
				v83 = 2 * v81;
				sub_1407DB590(v10, (int*)String, v83);
				if ((int*)((char*)v10 + v83) != v11)
					sub_1407DB590((int*)((char*)v10 + v83), v11, 2ui64);
			}
			goto LABEL_31;
		}
		v15 = 0i64;
		v88 = 0i64;
		v90 = 0i64;
		v77 = 0i64;
		do
			v17 = aUnknown_16[++v77] == 0;
		while (!v17);
		v78 = (2 * v77) >> 1;
		if ((unsigned __int64)(v78 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v15 = sub_14018B280(2 * (v78 + 1), 0);
			v88 = v15;
			v90 = (int*)((char*)v15 + 2 * v78 + 2);
		}
		sub_1407DB590(v15, (int*)L"Unknown", 2 * v78);
		v20 = (int*)((char*)v15 + 2 * v78);
		v89 = v20;
		if (v20)
			*(_WORD*)v20 = 0;
		v45 = sub_14034BDD0(v79, 617068);
		v22 = v45;
		if (!v45)
		{
			v23 = 617068i64;
		LABEL_17:
			v24 = sub_14018EFA0(&v92, (__int64)L"<<%d>>", v23);
			if (v24 != &v87)
			{
				sub_14001C480((__int64)&v87, (int*)v24[1], (int*)v24[2]);
				v15 = v88;
			}
			if (v93)
				sub_14018B900(v93, 0);
			goto LABEL_28;
		}
		if (*v45)
		{
			do
				++v8;
			while (v45[v8]);
		}
	}
	else
	{
		v12 = (unsigned int)(*v5 - 2);
		if (*v5 != 2)
		{
			v13 = sub_1400E2540(v12, &v102, 484730, (int*)L"Unbound");
			v14 = v10;
			v10 = (int*)v13[1];
			v13[1] = v14;
			v13[2] = v11;
			v13[3] = v9;
			if (v103)
				sub_14018B900(v103, 0);
			sub_14001B2D0(v6, a4, (__int64)v10);
			goto LABEL_36;
		}
		switch (v5[2])
		{
		case 0:
			v15 = 0i64;
			v88 = 0i64;
			v90 = 0i64;
			v16 = 0i64;
			if (a5)
			{
				do
					v17 = aLmb[++v16] == 0;
				while (!v17);
				v18 = (2 * v16) >> 1;
				if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v15 = sub_14018B280(2 * (v18 + 1), 0);
					v88 = v15;
					v90 = (int*)((char*)v15 + 2 * v18 + 2);
				}
				sub_1407DB590(v15, (int*)L"LMB", 2 * v18);
				v20 = (int*)((char*)v15 + 2 * v18);
				v89 = v20;
				if (v20)
					*(_WORD*)v20 = 0;
				v21 = sub_14034BDD0(v19, 612694);
				v22 = v21;
				if (!v21)
				{
					v23 = 612694i64;
					goto LABEL_17;
				}
				if (*v21)
				{
					do
						++v8;
					while (v21[v8]);
				}
			}
			else
			{
				do
					v17 = aLeftMouseButto[++v16] == 0;
				while (!v17);
				v34 = (2 * v16) >> 1;
				if ((unsigned __int64)(v34 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v15 = sub_14018B280(2 * (v34 + 1), 0);
					v88 = v15;
					v90 = (int*)((char*)v15 + 2 * v34 + 2);
				}
				sub_1407DB590(v15, (int*)L"Left Mouse Button", 2 * v34);
				v20 = (int*)((char*)v15 + 2 * v34);
				v89 = v20;
				if (v20)
					*(_WORD*)v20 = 0;
				v21 = sub_14034BDD0(v35, 612695);
				v22 = v21;
				if (!v21)
				{
					v23 = 612695i64;
					goto LABEL_17;
				}
				if (*v21)
				{
					do
						++v8;
					while (v21[v8]);
				}
			}
			goto LABEL_23;
		case 1:
			v15 = 0i64;
			v88 = 0i64;
			v90 = 0i64;
			v36 = 0i64;
			if (a5)
			{
				do
					v17 = aRmb[++v36] == 0;
				while (!v17);
				v37 = (2 * v36) >> 1;
				if ((unsigned __int64)(v37 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v15 = sub_14018B280(2 * (v37 + 1), 0);
					v88 = v15;
					v90 = (int*)((char*)v15 + 2 * v37 + 2);
				}
				sub_1407DB590(v15, (int*)L"RMB", 2 * v37);
				v20 = (int*)((char*)v15 + 2 * v37);
				v89 = v20;
				if (v20)
					*(_WORD*)v20 = 0;
				v21 = sub_14034BDD0(v38, 612717);
				v22 = v21;
				if (!v21)
				{
					v23 = 612717i64;
					goto LABEL_17;
				}
				if (*v21)
				{
					do
						++v8;
					while (v21[v8]);
				}
			LABEL_23:
				v25 = (int*)&v21[v8];
				v26 = (int*)v22;
				v27 = v15;
				v28 = (2 * v8) >> 1;
				v29 = ((char*)v20 - (char*)v15) >> 1;
				if (v28 > v29)
					goto LABEL_26;
				goto LABEL_24;
			}
			do
				v17 = aRightMouseButt[++v36] == 0;
			while (!v17);
			v39 = (2 * v36) >> 1;
			if ((unsigned __int64)(v39 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v15 = sub_14018B280(2 * (v39 + 1), 0);
				v88 = v15;
				v90 = (int*)((char*)v15 + 2 * v39 + 2);
			}
			sub_1407DB590(v15, (int*)L"Right Mouse Button", 2 * v39);
			v20 = (int*)((char*)v15 + 2 * v39);
			v89 = v20;
			if (v20)
				*(_WORD*)v20 = 0;
			v41 = sub_14034BDD0(v40, 612716);
			v22 = v41;
			if (!v41)
			{
				v23 = 612716i64;
				goto LABEL_17;
			}
			if (*v41)
			{
				do
					++v8;
				while (v41[v8]);
			}
			v25 = (int*)&v41[v8];
			v26 = (int*)v41;
			v27 = v15;
			v28 = (2 * v8) >> 1;
			v29 = ((char*)v20 - (char*)v15) >> 1;
			if (v28 <= v29)
				goto LABEL_24;
			goto LABEL_26;
		case 2:
			if (!a5)
			{
				v46 = sub_1400E2540(v12, v100, 612719, (int*)L"Middle Mouse Button");
				v47 = v10;
				v10 = (int*)v46[1];
				v46[1] = v47;
				v46[2] = v11;
				v46[3] = v9;
				v48 = v100[1];
			LABEL_85:
				if (v48)
					sub_14018B900(v48, 0);
				goto LABEL_31;
			}
			v15 = 0i64;
			v88 = 0i64;
			v90 = 0i64;
			v42 = 0i64;
			do
				v17 = aMmb[++v42] == 0;
			while (!v17);
			v43 = (2 * v42) >> 1;
			if ((unsigned __int64)(v43 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v15 = sub_14018B280(2 * (v43 + 1), 0);
				v88 = v15;
				v90 = (int*)((char*)v15 + 2 * v43 + 2);
			}
			sub_1407DB590(v15, (int*)L"MMB", 2 * v43);
			v20 = (int*)((char*)v15 + 2 * v43);
			v89 = v20;
			if (v20)
				*(_WORD*)v20 = 0;
			v45 = sub_14034BDD0(v44, 612718);
			v22 = v45;
			if (!v45)
			{
				v23 = 612718i64;
				goto LABEL_17;
			}
			if (*v45)
			{
				do
					++v8;
				while (v45[v8]);
			}
			break;
		case 3:
			if (a5)
			{
				v49 = sub_1400E2540(v12, v108, 612720, (int*)L"MB4");
				v50 = v10;
				v10 = (int*)v49[1];
				v49[1] = v50;
				v49[2] = v11;
				v49[3] = v9;
				v48 = v108[1];
			}
			else
			{
				v51 = sub_1400E2540(v12, v98, 612908, (int*)L"Mouse Button 4");
				v52 = v10;
				v10 = (int*)v51[1];
				v51[1] = v52;
				v51[2] = v11;
				v51[3] = v9;
				v48 = v98[1];
			}
			goto LABEL_85;
		case 4:
			if (a5)
			{
				v53 = sub_1400E2540(v12, v112, 617066, (int*)L"MB5");
				v54 = v10;
				v10 = (int*)v53[1];
				v53[1] = v54;
				v53[2] = v11;
				v53[3] = v9;
				v48 = v112[1];
			}
			else
			{
				v55 = sub_1400E2540(v12, v105, 617067, (int*)L"Mouse Button 5");
				v56 = v10;
				v10 = (int*)v55[1];
				v55[1] = v56;
				v55[2] = v11;
				v55[3] = v9;
				v48 = v105[1];
			}
			goto LABEL_85;
		case 5:
			if (a5)
			{
				v57 = sub_1400E2540(v12, v110, 612721, (int*)L"Wheel Up");
				v58 = v10;
				v10 = (int*)v57[1];
				v57[1] = v58;
				v57[2] = v11;
				v57[3] = v9;
				v48 = v110[1];
			}
			else
			{
				v59 = sub_1400E2540(v12, v99, 612724, (int*)L"Mouse Wheel Up");
				v60 = v10;
				v10 = (int*)v59[1];
				v59[1] = v60;
				v59[2] = v11;
				v59[3] = v9;
				v48 = v99[1];
			}
			goto LABEL_85;
		case 6:
			if (a5)
			{
				v61 = sub_1400E2540(v12, v101, 612725, (int*)L"Wheel Down");
				v62 = v10;
				v10 = (int*)v61[1];
				v61[1] = v62;
				v61[2] = v11;
				v61[3] = v9;
				v48 = v101[1];
			}
			else
			{
				v63 = sub_1400E2540(v12, v104, 612731, (int*)L"Mouse Wheel Down");
				v64 = v10;
				v10 = (int*)v63[1];
				v63[1] = v64;
				v63[2] = v11;
				v63[3] = v9;
				v48 = v104[1];
			}
			goto LABEL_85;
		default:
			v65 = sub_1400E2540(v12, &v106, 617068, (int*)L"Unknown");
			v66 = v10;
			v10 = (int*)v65[1];
			v65[1] = v66;
			v65[2] = v11;
			v65[3] = v9;
			if (v107)
				sub_14018B900(v107, 0);
			v8 = a4;
			sub_14001B2D0(v6, a4, (__int64)v10);
			goto LABEL_32;
		}
	}
	v25 = (int*)&v45[v8];
	v26 = (int*)v22;
	v27 = v15;
	v28 = (2 * v8) >> 1;
	v29 = ((char*)v20 - (char*)v15) >> 1;
	if (v28 > v29)
	{
	LABEL_26:
		v31 = v29;
		sub_1407DB590(v27, v26, 2 * v29);
		sub_14001C310(&v87, (int*)&v22[v31], v25);
		v15 = v88;
	}
	else
	{
	LABEL_24:
		v30 = 2 * v28;
		sub_1407DB590(v27, v26, v30);
		if ((int*)((char*)v15 + v30) != v20)
			sub_1407DB590((int*)((char*)v15 + v30), v20, 2ui64);
	}
	v5 = a2;
LABEL_28:
	v32 = (__int64)v10;
	v10 = v15;
	if (v32)
		sub_14018B900(v32, 0);
	v6 = v91;
LABEL_31:
	v8 = a4;
LABEL_32:
	(*(void(__fastcall**)(__int64, char*, _QWORD, _QWORD))(*(_QWORD*)v94 + 256i64))(v94, v95, (unsigned int)v5[1], a5);
	if ((v97 - v96) >> 1)
		sub_14001B6E0(v6, v8, v96);
	sub_14001B6E0(v6, v8, (__int64)v10);
	LODWORD(v8) = 1;
	if (v96)
		sub_14018B900(v96, 0);
LABEL_36:
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return (unsigned int)v8;
}
// 1407A98F6: variable 'v19' is possibly undefined
// 1407A9AFB: variable 'v35' is possibly undefined
// 1407A9BC6: variable 'v38' is possibly undefined
// 1407A9C86: variable 'v40' is possibly undefined
// 1407A9D86: variable 'v44' is possibly undefined
// 1407AA1A6: variable 'v79' is possibly undefined
// 140A171C0: using guessed type wchar_t aD_17[7];
// 140B52850: using guessed type wchar_t aLeftMouseButto[18];
// 140B52878: using guessed type wchar_t aRmb[4];
// 140B52880: using guessed type wchar_t aRightMouseButt[19];
// 140B528A8: using guessed type wchar_t aMmb[4];
// 140B528B0: using guessed type wchar_t aMiddleMouseBut[20];
// 140B528D8: using guessed type wchar_t aMb4[4];
// 140B528E0: using guessed type wchar_t aMouseButton4[15];
// 140B52900: using guessed type wchar_t aMb5[4];
// 140B52908: using guessed type wchar_t aMouseButton5[15];
// 140B52928: using guessed type wchar_t aWheelUp[9];
// 140B52940: using guessed type wchar_t aMouseWheelUp[15];
// 140B52960: using guessed type wchar_t aWheelDown[11];
// 140B52978: using guessed type wchar_t aMouseWheelDown[17];
// 140B529A0: using guessed type wchar_t aUnknown_15[8];
// 140B529B0: using guessed type wchar_t aUnbound[8];
// 140B52A80: using guessed type wchar_t aUnknown_16[8];
// 140B52A90: using guessed type wchar_t aLmb[4];
// 1407A9760: using guessed type char var_410[8];

