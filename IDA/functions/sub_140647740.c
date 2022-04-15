//----- (0000000140647740) ----------------------------------------------------
__int64 __fastcall sub_140647740(_QWORD* a1)
{
	__int64** v1; // rdx
	unsigned int v2; // r14d
	__int64* v3; // rax
	unsigned __int64 v4; // r8
	__int64 v5; // rbx
	__int64 v6; // rdi
	int* v7; // rax
	int* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rbx
	int* v11; // rax
	int* v12; // rdi
	__int64 v13; // rcx
	_QWORD* v14; // r13
	unsigned __int64 v15; // rbx
	int v16; // esi
	int v17; // r12d
	__int16* v18; // r15
	unsigned int v19; // eax
	unsigned int v20; // esi
	unsigned __int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rax
	unsigned __int64 v24; // rbx
	int* v25; // r12
	int* v26; // rax
	WCHAR* v27; // r15
	unsigned __int64 v28; // rbx
	unsigned int v29; // eax
	int v30; // eax
	int v31; // r13d
	int v32; // r12d
	int* v33; // rbx
	unsigned __int64 v34; // rsi
	__int16* v35; // r15
	int v36; // eax
	_QWORD* v37; // rsi
	__int64 v38; // rcx
	unsigned __int64 v39; // rsi
	__int16* v40; // r15
	__int64* v41; // rbx
	__int64 v42; // rcx
	__int64* v43; // rax
	__int64 v44; // rcx
	__int64* v45; // rbx
	__int64 v46; // rcx
	__int64* v47; // rax
	__int64 v48; // rcx
	__int64 v50; // [rsp+20h] [rbp-19h] BYREF
	__int64 v51; // [rsp+28h] [rbp-11h]
	__int64 v52; // [rsp+30h] [rbp-9h] BYREF
	__int64 v53[5]; // [rsp+38h] [rbp-1h] BYREF
	int* v55; // [rsp+A8h] [rbp+6Fh] BYREF
	unsigned __int16* v56; // [rsp+B0h] [rbp+77h]

	v1 = (__int64**)a1[5];
	v2 = 0;
	v3 = *v1;
	v4 = 0i64;
	if (*v1 == (__int64*)v1)
		return 2147942487i64;
	do
	{
		v3 = (__int64*)*v3;
		++v4;
	} while (v3 != (__int64*)v1);
	if (v4 < 2)
		return 2147942487i64;
	v5 = **v1;
	v6 = *(_QWORD*)((*v1)[2] - 8);
	v50 = (*v1)[2];
	v51 = v6;
	v7 = sub_14018B280(2 * v6 + 18, 0);
	if (v7)
	{
		*(_QWORD*)v7 = off_140B55060;
		*((_QWORD*)v7 + 1) = v6;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = v7 + 4;
	v56 = (unsigned __int16*)(v7 + 4);
	sub_1401B2410(&v50, (__int64)(v7 + 4));
	*((_WORD*)v8 + v6) = 0;
	v9 = *(_QWORD*)(v5 + 16);
	v10 = *(_QWORD*)(v9 - 8);
	v50 = v9;
	v51 = v10;
	v11 = sub_14018B280(2 * v10 + 18, 0);
	if (v11)
	{
		*(_QWORD*)v11 = off_140B55060;
		*((_QWORD*)v11 + 1) = v10;
	}
	else
	{
		v11 = 0i64;
	}
	v12 = v11 + 4;
	sub_1401B2410(&v50, (__int64)(v11 + 4));
	v14 = a1;
	*((_WORD*)v12 + v10) = 0;
	v15 = 0i64;
	v55 = v12;
	v16 = 0;
	v17 = 0;
	do
	{
		v18 = sub_14034BDD0(v13, *((_DWORD*)&unk_140B29FF0 + 2 * v15));
		if (!(unsigned int)sub_14018E2C0((__int64)v18, v56))
			goto LABEL_21;
		if (*((_QWORD*)v56 - 1) == 1i64 && *v18 == *v56)
		{
			v17 = v16;
			v14 = (_QWORD*)v15;
			v16 = 1;
		}
		++v15;
	} while (v15 < 8);
	if (v17 || !v16)
	{
	LABEL_68:
		v30 = -2147024809;
		goto LABEL_69;
	}
	v15 = (unsigned __int64)v14;
LABEL_21:
	switch (dword_140B29FF4[2 * v15])
	{
	case 0:
		v19 = sub_14018E820((WCHAR*)v12);
		v20 = v19;
		if (!v19)
			goto LABEL_68;
		v21 = *((_QWORD*)v12 - 1);
		LODWORD(v53[0]) = v19;
		LODWORD(v52) = 0;
		v22 = 0i64;
		if (!v21)
			goto LABEL_26;
		while (*((_WORD*)v12 + v22) != 45)
		{
			if (++v22 >= v21)
			{
			LABEL_26:
				HIDWORD(v53[0]) = v20 + 1;
				goto LABEL_61;
			}
		}
		v23 = v22 + 1;
		v24 = v21 - v23;
		v25 = (int*)((char*)v12 + 2 * v23);
		v26 = sub_14018B280(2 * v24 + 18, 0);
		if (v26)
		{
			*((_QWORD*)v26 + 1) = v24;
			*(_QWORD*)v26 = off_140B55060;
		}
		else
		{
			v26 = 0i64;
		}
		v27 = (WCHAR*)(v26 + 4);
		v28 = v24;
		sub_1407DB590(v26 + 4, v25, v28 * 2);
		v27[v28] = 0;
		v29 = sub_14018E820(v27);
		if (v20 < v29)
			v20 = v29;
		HIDWORD(v53[0]) = v20 + 1;
		if (v27)
			(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v27 - 2) + 8i64))(v27 - 8);
		goto LABEL_61;
	case 1:
		LODWORD(v52) = 1;
		v30 = sub_140647580((__int64)&v55, v53);
		if (v30 < 0)
			goto LABEL_69;
		goto LABEL_61;
	case 2:
		v31 = (int)a1;
		LODWORD(v52) = 2;
		LODWORD(v55) = 0;
		v32 = 0;
		v33 = (int*)&unk_140B6FC60;
		v34 = 0i64;
		while (1)
		{
			v35 = sub_14034BDD0(v13, v33[1]);
			if (!(unsigned int)sub_14018E2C0((__int64)v35, (unsigned __int16*)v12))
				goto LABEL_60;
			if ((__int16*)sub_14018E5E0(v35, (unsigned __int16*)v12) == v35)
			{
				v31 = *v33;
				v36 = v32;
				v32 = 1;
				LODWORD(v55) = v36;
			}
			else
			{
				v36 = (int)v55;
			}
			v34 += 8i64;
			v33 += 2;
			if (v34 >= 0x20)
				goto LABEL_56;
		}
	case 3:
		LODWORD(v52) = 3;
		v30 = sub_140647190((__int64)&v55, v53);
		if (v30 < 0)
			goto LABEL_69;
		goto LABEL_61;
	case 4:
		LODWORD(v52) = 4;
		v30 = sub_140647340((__int64)&v55, v53);
		if (v30 < 0)
			goto LABEL_69;
		goto LABEL_61;
	case 5:
		v37 = a1;
		sub_140647FF0(a1 + 10, &v55);
		LODWORD(v52) = 5;
		goto LABEL_48;
	case 6:
		v37 = a1;
		sub_140647FF0(a1 + 10, &v55);
		LODWORD(v52) = 6;
	LABEL_48:
		v53[0] = *(_QWORD*)(v37[10] + 8i64 * v37[11] - 8);
		goto LABEL_61;
	case 8:
		sub_140647FF0(a1 + 10, &v55);
		v31 = (int)a1;
		LODWORD(v52) = 8;
		LODWORD(v55) = 0;
		v32 = 0;
		v33 = (int*)&unk_140B6FC80;
		v39 = 0i64;
		break;
	default:
		goto LABEL_68;
	}
	do
	{
		v40 = sub_14034BDD0(v38, v33[1]);
		if (!(unsigned int)sub_14018E2C0((__int64)v40, (unsigned __int16*)v12))
		{
		LABEL_60:
			LODWORD(v53[0]) = *v33;
			goto LABEL_61;
		}
		if ((__int16*)sub_14018E5E0(v40, (unsigned __int16*)v12) == v40)
		{
			v31 = *v33;
			v36 = v32;
			v32 = 1;
			LODWORD(v55) = v36;
		}
		else
		{
			v36 = (int)v55;
		}
		v39 += 8i64;
		v33 += 2;
	} while (v39 < 0x10);
LABEL_56:
	if (!v32 || v36)
	{
		v30 = -2147023728;
		goto LABEL_69;
	}
	LODWORD(v53[0]) = v31;
LABEL_61:
	if (a1[7] >= 0xFFFFFFFFui64)
	{
		v30 = -2147024882;
	LABEL_69:
		v2 = v30;
		goto LABEL_70;
	}
	sub_140647F30(a1 + 6, &v52);
	v41 = *(__int64**)a1[5];
	v42 = *v41;
	v43 = (__int64*)v41[1];
	*v43 = *v41;
	*(_QWORD*)(v42 + 8) = v43;
	v44 = v41[2];
	if (v44)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v44 - 16) + 8i64))(v44 - 16);
	sub_14018B900((__int64)v41, 0);
	v45 = *(__int64**)a1[5];
	v46 = *v45;
	v47 = (__int64*)v45[1];
	*v47 = *v45;
	*(_QWORD*)(v46 + 8) = v47;
	v48 = v45[2];
	if (v48)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v48 - 16) + 8i64))(v48 - 16);
	sub_14018B900((__int64)v45, 0);
LABEL_70:
	if (v12)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
	if (v56)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v56 - 2) + 8i64))(v56 - 8);
	return v2;
}
// 1406478C4: conditional instruction was optimized away because rbx.8<8u
// 140647877: variable 'v13' is possibly undefined
// 140647B03: variable 'v38' is possibly undefined
// 140B29FF4: using guessed type int dword_140B29FF4[15];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

