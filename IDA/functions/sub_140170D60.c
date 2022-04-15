//----- (0000000140170D60) ----------------------------------------------------
__int64 __fastcall sub_140170D60(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r12
	int v4; // r15d
	__int64 v5; // r14
	__int64 v6; // r13
	__int64 v7; // rdi
	const wchar_t* v8; // rbx
	wchar_t* v9; // rax
	int v10; // edx
	bool v11; // zf
	_WORD* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	int* v15; // rdi
	int* v16; // rsi
	__int64 v17; // rax
	__int64 v18; // rbx
	unsigned __int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rcx
	WCHAR* v22; // rax
	__int64 v23; // rbp
	__int64 v24; // rcx
	__int64 v25; // rdi
	const wchar_t* v26; // rbx
	wchar_t* v27; // rax
	int v28; // edx
	bool v29; // zf
	__int64 v30; // rax
	int* v31; // rdx
	__int64 v32; // rax
	__int64 v33; // rdi
	const wchar_t* v34; // rbx
	wchar_t* v35; // rax
	int v36; // edx
	bool v37; // zf
	__int64 v38; // rax
	int* v39; // rdx
	__int64 v40; // rcx
	__int64 v41; // rsi
	__int64 v42; // rdi
	unsigned __int64 i; // rbx
	wchar_t* v44; // rdx
	__int64 v45; // rax
	wchar_t* v46; // rax
	unsigned int* v47; // rax
	__int64 v48; // rcx
	unsigned int* v49; // rbx
	unsigned int* v50; // rdi
	unsigned __int64 v51; // rax
	__int64 v52; // r8
	int v53; // edx
	__int64 v54; // rdi
	const wchar_t* v55; // rbx
	wchar_t* v56; // rax
	int v57; // edx
	bool v58; // zf
	_WORD* v59; // rax
	__int64 v60; // rdi
	const wchar_t* v61; // rbx
	wchar_t* v62; // rax
	int v63; // edx
	bool v64; // zf
	_WORD* v65; // rax
	__int64 v66; // rdi
	const wchar_t* v67; // rbx
	wchar_t* v68; // rax
	int v69; // edx
	bool v70; // zf
	_WORD* v71; // rax
	unsigned int v73; // [rsp+20h] [rbp-68h] BYREF
	_QWORD v74[5]; // [rsp+28h] [rbp-60h] BYREF
	__int64 v75; // [rsp+90h] [rbp+8h] BYREF
	__int64 v76; // [rsp+A0h] [rbp+18h]
	int v77; // [rsp+A8h] [rbp+20h] BYREF

	v76 = a3;
	v75 = a1;
	v3 = a3;
	v4 = 0;
	v5 = sub_1401A5AE0(a2, L"Column");
	v6 = 0i64;
	if (!v5)
		return 0i64;
	do
	{
		if (v4 >= 32)
			break;
		v7 = *(_QWORD*)(v5 + 96);
		if (v7)
		{
			while (1)
			{
				v8 = L"Width";
				v9 = (wchar_t*)sub_1401A4F40(v7 + 8);
				if (v9 == L"Width")
					break;
				v10 = 0;
				if (!*v9)
					goto LABEL_13;
				do
				{
					if (!*v8 || *v9 != *v8)
						break;
					v11 = v10 == 0x7FFFFFFF;
					if (v10 == 0x7FFFFFFF)
						goto LABEL_11;
					++v9;
					++v8;
					++v10;
				} while (*v9);
				v11 = v10 == 0x7FFFFFFF;
			LABEL_11:
				if (v11)
					break;
				if (!*v9)
				{
				LABEL_13:
					if (!*v8)
						break;
				}
				v7 = *(_QWORD*)(v7 + 56);
				if (!v7)
					goto LABEL_17;
			}
			v12 = (_WORD*)sub_1401A4F40(v7 + 32);
			sub_1407DF428(v12, (__int64)L"%d", 88i64 * v4 + v3 + 64);
		}
	LABEL_17:
		v13 = sub_1401A6B80(v5, L"Text");
		if (v13)
			v14 = sub_1401A4F40(v13 + 32);
		else
			v14 = 0i64;
		v15 = (int*)&unk_1409D4564;
		v16 = 0i64;
		if (v14)
			v15 = (int*)v14;
		v17 = 0i64;
		if (*(_WORD*)v15)
		{
			do
				++v17;
			while (*((_WORD*)v15 + v17));
		}
		v18 = (2 * v17) >> 1;
		if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v16 = sub_14018B280(2 * (v18 + 1), 0);
		v19 = 2 * v18;
		sub_1407DB590(v16, v15, v19);
		if ((int*)((char*)v16 + v19))
			*(_WORD*)((char*)v16 + v19) = 0;
		v20 = sub_1401A6B80(v5, L"TextId");
		if (v20)
			v22 = (WCHAR*)sub_1401A4F40(v20 + 32);
		else
			v22 = 0i64;
		sub_1400E2630(v21, v74, v22, v16);
		if (v16)
			sub_14018B900((__int64)v16, 0);
		v23 = v3 + 88 * v6;
		v24 = *(_QWORD*)(v23 + 8);
		*(_QWORD*)(v23 + 8) = v74[1];
		*(_QWORD*)(v23 + 16) = v74[2];
		*(_QWORD*)(v23 + 24) = v74[3];
		if (v24)
			sub_14018B900(v24, 0);
		if (*(_QWORD*)(v23 + 8) == *(_QWORD*)(v23 + 16))
		{
			v25 = *(_QWORD*)(v5 + 96);
			if (v25)
			{
				while (1)
				{
					v26 = L"Name";
					v27 = (wchar_t*)sub_1401A4F40(v25 + 8);
					if (v27 == L"Name")
						break;
					v28 = 0;
					if (*v27)
					{
						do
						{
							if (!*v26 || *v27 != *v26)
								break;
							v29 = v28 == 0x7FFFFFFF;
							if (v28 == 0x7FFFFFFF)
								goto LABEL_44;
							++v27;
							++v26;
							++v28;
						} while (*v27);
						v29 = v28 == 0x7FFFFFFF;
					LABEL_44:
						if (v29)
							break;
					}
					if (!*v27 && !*v26)
						break;
					v25 = *(_QWORD*)(v25 + 56);
					if (!v25)
						goto LABEL_48;
				}
				v30 = sub_1401A4F40(v25 + 32);
			}
			else
			{
			LABEL_48:
				v30 = 0i64;
			}
			v31 = (int*)&unk_1409DD58C;
			if (v30)
				v31 = (int*)v30;
			v32 = 0i64;
			if (*(_WORD*)v31)
			{
				do
					++v32;
				while (*((_WORD*)v31 + v32));
			}
			sub_14001C480(v3 + 88i64 * v4, v31, (int*)((char*)v31 + 2 * v32));
		}
		v33 = *(_QWORD*)(v5 + 96);
		if (v33)
		{
			while (1)
			{
				v34 = L"Image";
				v35 = (wchar_t*)sub_1401A4F40(v33 + 8);
				if (v35 == L"Image")
					break;
				v36 = 0;
				if (*v35)
				{
					do
					{
						if (!*v34 || *v35 != *v34)
							break;
						v37 = v36 == 0x7FFFFFFF;
						if (v36 == 0x7FFFFFFF)
							goto LABEL_62;
						++v35;
						++v34;
						++v36;
					} while (*v35);
					v37 = v36 == 0x7FFFFFFF;
				LABEL_62:
					if (v37)
						break;
				}
				if (!*v35 && !*v34)
					break;
				v33 = *(_QWORD*)(v33 + 56);
				if (!v33)
					goto LABEL_66;
			}
			v38 = sub_1401A4F40(v33 + 32);
		}
		else
		{
		LABEL_66:
			v38 = 0i64;
		}
		v39 = (int*)&unk_1409DD54C;
		if (v38)
			v39 = (int*)v38;
		v40 = 0i64;
		if (*(_WORD*)v39)
		{
			do
				++v40;
			while (*((_WORD*)v39 + v40));
		}
		v41 = v3 + 88i64 * v4;
		sub_14001C480(v41 + 32, v39, (int*)((char*)v39 + 2 * v40));
		v42 = 0i64;
		for (i = 0i64; i < 6; ++i)
		{
			v44 = off_140A389F0[i];
			LOBYTE(v75) = 0;
			v45 = sub_1401A6B80(v5, v44);
			if (v45)
			{
				v46 = (wchar_t*)sub_1401A4F40(v45 + 32);
				sub_1401A52E0(v46, (bool*)&v75);
				if ((_BYTE)v75)
					v42 |= 1i64 << i;
			}
		}
		*(_DWORD*)(v23 + 76) = v42;
		v47 = sub_1400F66F0(&v73, v5, &word_140A31AB8, 0);
		v48 = qword_140C63678;
		v49 = (unsigned int*)(v23 + 84);
		v50 = v47;
		if ((unsigned int*)(v23 + 84) != v47)
		{
			sub_1401429A0(qword_140C63678, *v49);
			v51 = *v50;
			v48 = qword_140C63678;
			*v49 = v51;
			if (v51 < *(_QWORD*)(v48 + 48))
			{
				v52 = 32i64 * (unsigned int)v51 + *(_QWORD*)(v48 + 40);
				v53 = *(_DWORD*)(v52 + 16);
				if ((unsigned int)(v53 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(v52 + 16) = v53 + 1;
			}
		}
		sub_1401429A0(v48, v73);
		v3 = v76;
		*(_BYTE*)(v23 + 80) = 0;
		v54 = *(_QWORD*)(v5 + 96);
		v77 = 0;
		if (v54)
		{
			while (1)
			{
				v55 = L"MergeLeft";
				v56 = (wchar_t*)sub_1401A4F40(v54 + 8);
				if (v56 == L"MergeLeft")
					break;
				v57 = 0;
				if (*v56)
				{
					do
					{
						if (!*v55 || *v56 != *v55)
							break;
						v58 = v57 == 0x7FFFFFFF;
						if (v57 == 0x7FFFFFFF)
							goto LABEL_88;
						++v56;
						++v55;
						++v57;
					} while (*v56);
					v58 = v57 == 0x7FFFFFFF;
				LABEL_88:
					if (v58)
						break;
				}
				if (!*v56 && !*v55)
					break;
				v54 = *(_QWORD*)(v54 + 56);
				if (!v54)
					goto LABEL_97;
			}
			v59 = (_WORD*)sub_1401A4F40(v54 + 32);
			if ((unsigned int)sub_1407DF428(v59, (__int64)L"%d", &v77) == 1)
				*(_BYTE*)(v23 + 80) = v77 != 0;
		}
	LABEL_97:
		v60 = *(_QWORD*)(v5 + 96);
		if (v60)
		{
			while (1)
			{
				v61 = L"MinWidth";
				v62 = (wchar_t*)sub_1401A4F40(v60 + 8);
				if (v62 == L"MinWidth")
					break;
				v63 = 0;
				if (*v62)
				{
					do
					{
						if (!*v61 || *v62 != *v61)
							break;
						v64 = v63 == 0x7FFFFFFF;
						if (v63 == 0x7FFFFFFF)
							goto LABEL_105;
						++v62;
						++v61;
						++v63;
					} while (*v62);
					v64 = v63 == 0x7FFFFFFF;
				LABEL_105:
					if (v64)
						break;
				}
				if (!*v62 && !*v61)
					break;
				v60 = *(_QWORD*)(v60 + 56);
				if (!v60)
					goto LABEL_111;
			}
			v65 = (_WORD*)sub_1401A4F40(v60 + 32);
			sub_1407DF428(v65, (__int64)L"%d", v41 + 68);
		}
	LABEL_111:
		v66 = *(_QWORD*)(v5 + 96);
		if (v66)
		{
			while (1)
			{
				v67 = L"MaxWidth";
				v68 = (wchar_t*)sub_1401A4F40(v66 + 8);
				if (v68 == L"MaxWidth")
					break;
				v69 = 0;
				if (*v68)
				{
					do
					{
						if (!*v67 || *v68 != *v67)
							break;
						v70 = v69 == 0x7FFFFFFF;
						if (v69 == 0x7FFFFFFF)
							goto LABEL_119;
						++v68;
						++v67;
						++v69;
					} while (*v68);
					v70 = v69 == 0x7FFFFFFF;
				LABEL_119:
					if (v70)
						break;
				}
				if (!*v68 && !*v67)
					break;
				v66 = *(_QWORD*)(v66 + 56);
				if (!v66)
					goto LABEL_125;
			}
			v71 = (_WORD*)sub_1401A4F40(v66 + 32);
			sub_1407DF428(v71, (__int64)L"%d", v41 + 72);
		}
	LABEL_125:
		++v4;
		++v6;
		v5 = sub_1401A5BC0(v5, L"Column");
	} while (v5);
	return (unsigned int)v4;
}
// 140170E37: conditional instruction was optimized away because rdi.8!=0
// 14017124A: conditional instruction was optimized away because rdi.8!=0
// 140171261: conditional instruction was optimized away because rdi.8!=0
// 140171278: conditional instruction was optimized away because rdi.8!=0
// 140171327: conditional instruction was optimized away because rdi.8!=0
// 1401713BF: conditional instruction was optimized away because rdi.8!=0
// 140170F1E: variable 'v21' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A318C8: using guessed type wchar_t aTextid[7];
// 140A31918: using guessed type wchar_t aText[5];
// 140A31A98: using guessed type wchar_t aColumn[7];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31AD0: using guessed type wchar_t aImage_0[6];
// 140A32168: using guessed type wchar_t aMaxwidth[9];
// 140A32180: using guessed type wchar_t aMinwidth[9];
// 140A322C0: using guessed type wchar_t aMergeleft[10];
// 140A389F0: using guessed type wchar_t *off_140A389F0[6];
// 140C63678: using guessed type __int64 qword_140C63678;

