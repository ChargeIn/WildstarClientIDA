//----- (00000001406CEBC0) ----------------------------------------------------
__int64 __fastcall sub_1406CEBC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v8; // r14
	int* v9; // rax
	__int64 v10; // r13
	__int64 v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // rsi
	void(__fastcall * **v14)(_QWORD); // rdi
	__int64 v15; // rcx
	__int64 v16; // r12
	__int64 v17; // rdi
	const wchar_t* v18; // rbx
	wchar_t* v19; // rax
	int v20; // ecx
	bool v21; // zf
	__m128i* v22; // rax
	__int64 v23; // rsi
	_QWORD* v24; // rbx
	void(__fastcall * **v25)(_QWORD); // rdi
	__m128i* v26; // rax
	__int64 v27; // rsi
	_QWORD* v28; // rbx
	void(__fastcall * **v29)(_QWORD); // rdi
	__int64 v30; // rbx
	void(__fastcall * **v31)(_QWORD); // rbx
	__int64 v32; // rcx
	__int64 v33; // rcx
	void(__fastcall * **v34)(_QWORD); // rbx
	__int64 v35; // rcx
	__int64 v36; // rcx
	void(__fastcall * **v37)(_QWORD); // rbx
	__int64 v38; // rcx
	__int64 v39; // rcx
	void(__fastcall * **v40)(_QWORD); // rbx
	__int64 v41; // rcx
	__int64 v42; // rcx
	void(__fastcall * **v43)(_QWORD); // rbx
	__int64 v44; // rcx
	__int64 v45; // rcx
	__int64 v46; // r15
	__int64 v47; // rdi
	const wchar_t* v48; // rbx
	wchar_t* v49; // rax
	int v50; // ecx
	bool v51; // zf
	_WORD* v52; // rax
	__int64 v53; // rdi
	const wchar_t* v54; // rbx
	wchar_t* v55; // rax
	int v56; // ecx
	bool v57; // zf
	_WORD* v58; // rax
	__int64 v59; // rdi
	const wchar_t* v60; // rbx
	wchar_t* v61; // rax
	int v62; // ecx
	bool v63; // zf
	_WORD* v64; // rax
	__int64 v65; // rdi
	const wchar_t* v66; // rbx
	wchar_t* v67; // rax
	int v68; // ecx
	bool v69; // zf
	_WORD* v70; // rax
	__int64 v71; // rdi
	const wchar_t* v72; // rbx
	wchar_t* v73; // rax
	int v74; // ecx
	bool v75; // zf
	__int64 v76; // rax
	int* v77; // rdi
	int* v78; // rsi
	__int64 v79; // rax
	__int64 v80; // rbx
	unsigned __int64 v81; // rbx
	__int64 v82; // rdi
	const wchar_t* v83; // rbx
	wchar_t* v84; // rax
	int v85; // ecx
	bool v86; // zf
	_WORD* v87; // rax
	int v88; // ebx
	int v90; // [rsp+30h] [rbp-71h] BYREF
	int v91; // [rsp+34h] [rbp-6Dh] BYREF
	__m128i* v92; // [rsp+38h] [rbp-69h]
	__int64 v93; // [rsp+40h] [rbp-61h]
	__int128 v94; // [rsp+50h] [rbp-51h] BYREF
	__int128 v95[3]; // [rsp+60h] [rbp-41h] BYREF
	__int64 v96; // [rsp+90h] [rbp-11h]

	v8 = 0i64;
	v93 = a5;
	sub_1400D45E0((__int64)&v94, a1, a2, a5, 0i64);
	v9 = sub_14018B280(2272i64, 0);
	if (v9)
		v10 = sub_1406CDBC0((__int64)v9, a1, a2, &v94, a4);
	else
		v10 = 0i64;
	*(_QWORD*)&v94 = 0i64;
	BYTE8(v94) = 0;
	memset(v95, 0, sizeof(v95));
	v96 = 0i64;
	v11 = sub_1401A6B80(a5, L"Under");
	if (!v11)
	{
		v92 = 0i64;
		goto LABEL_6;
	}
	v26 = (__m128i*)sub_1401A4F40(v11 + 32);
	v16 = (__int64)v26;
	v92 = v26;
	if (!v26)
	{
	LABEL_6:
		v12 = (_QWORD*)(v10 + 1568);
		v13 = 6i64;
		do
		{
			if (a1 && (!*v12 || !sub_14002C740((__int64)(v12 + 2), L"IconicButtonBase")))
			{
				v14 = (void(__fastcall***)(_QWORD))sub_140108E80(a1 + 240, (const __m128i*)L"IconicButtonBase");
				if (v14)
				{
					v15 = 0i64;
					do
						v21 = aIconicbuttonba[++v15] == 0;
					while (!v21);
					sub_14001C480((__int64)(v12 + 2), (int*)L"IconicButtonBase", (int*)&aIconicbuttonba[v15]);
				}
				if (v14 != (void(__fastcall***)(_QWORD)) * v12)
				{
					if (v14)
						(**v14)(v14);
					if (*v12)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
						*v12 = 0i64;
					}
					*v12 = v14;
				}
			}
			v12 += 6;
			--v13;
		} while (v13);
		v16 = (__int64)v92;
		goto LABEL_22;
	}
	sub_14010B330(&v94, a1, v26, 0i64);
	v27 = 0i64;
	v28 = (_QWORD*)(v10 + 1568);
	do
	{
		v29 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v95 + v27);
		if (v29 != (void(__fastcall***)(_QWORD)) * v28)
		{
			if (v29)
				(**v29)(*((_QWORD*)v95 + v27));
			if (*v28)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v28 + 8i64))(*v28);
				*v28 = 0i64;
			}
			*v28 = v29;
		}
		++v27;
		v28 += 6;
	} while (v27 < 6);
LABEL_22:
	v17 = *(_QWORD*)(v93 + 96);
	if (v17)
	{
		while (1)
		{
			v18 = L"Over";
			v19 = (wchar_t*)sub_1401A4F40(v17 + 8);
			if (v19 == L"Over")
				break;
			v20 = 0;
			if (*v19)
			{
				do
				{
					if (!*v18 || *v19 != *v18)
						break;
					v21 = v20 == 0x7FFFFFFF;
					if (v20 == 0x7FFFFFFF)
						goto LABEL_30;
					++v19;
					++v18;
					++v20;
				} while (*v19);
				v21 = v20 == 0x7FFFFFFF;
			LABEL_30:
				if (v21)
					break;
			}
			if (!*v19 && !*v18)
				break;
			v17 = *(_QWORD*)(v17 + 56);
			if (!v17)
				goto LABEL_34;
		}
		v22 = (__m128i*)sub_1401A4F40(v17 + 32);
	}
	else
	{
	LABEL_34:
		v22 = 0i64;
	}
	if (v16)
	{
		sub_14010B330(&v94, *(_QWORD*)(v10 + 32), v22, 0i64);
		v23 = 0i64;
		v24 = (_QWORD*)(v10 + 1856);
		do
		{
			v25 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v95 + v23);
			if (v25 != (void(__fastcall***)(_QWORD)) * v24)
			{
				if (v25)
					(**v25)(*((_QWORD*)v95 + v23));
				if (*v24)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v24 + 8i64))(*v24);
					*v24 = 0i64;
				}
				*v24 = v25;
			}
			++v23;
			v24 += 6;
		} while (v23 < 6);
	}
	else if (a1)
	{
		v30 = *(_QWORD*)(v10 + 1856);
		if (v30 && !sub_14002C740(v10 + 1872, word_1409F7974))
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
			*(_QWORD*)(v10 + 1856) = 0i64;
		}
		if (!*(_QWORD*)(v10 + 1952) || !sub_14002C740(v10 + 1968, L"IconicButtonEdgeGlow"))
		{
			v31 = (void(__fastcall***)(_QWORD))sub_140108E80(a1 + 240, (const __m128i*)L"IconicButtonEdgeGlow");
			if (v31)
			{
				v32 = 0i64;
				do
					v21 = aIconicbuttoned[++v32] == 0;
				while (!v21);
				sub_14001C480(v10 + 1968, (int*)L"IconicButtonEdgeGlow", (int*)&aIconicbuttoned[v32]);
			}
			if (v31 != *(void(__fastcall****)(_QWORD))(v10 + 1952))
			{
				if (v31)
					(**v31)(v31);
				v33 = *(_QWORD*)(v10 + 1952);
				if (v33)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
					*(_QWORD*)(v10 + 1952) = 0i64;
				}
				*(_QWORD*)(v10 + 1952) = v31;
			}
		}
		if (!*(_QWORD*)(v10 + 1904) || !sub_14002C740(v10 + 1920, L"IconicButtonInnerGlow1"))
		{
			v34 = (void(__fastcall***)(_QWORD))sub_140108E80(a1 + 240, (const __m128i*)L"IconicButtonInnerGlow1");
			if (v34)
			{
				v35 = 0i64;
				do
					v21 = aIconicbuttonin[++v35] == 0;
				while (!v21);
				sub_14001C480(v10 + 1920, (int*)L"IconicButtonInnerGlow1", (int*)&aIconicbuttonin[v35]);
			}
			if (v34 != *(void(__fastcall****)(_QWORD))(v10 + 1904))
			{
				if (v34)
					(**v34)(v34);
				v36 = *(_QWORD*)(v10 + 1904);
				if (v36)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
					*(_QWORD*)(v10 + 1904) = 0i64;
				}
				*(_QWORD*)(v10 + 1904) = v34;
			}
		}
		if (!*(_QWORD*)(v10 + 2000) || !sub_14002C740(v10 + 2016, L"IconicButtonInnerGlow2"))
		{
			v37 = (void(__fastcall***)(_QWORD))sub_140108E80(a1 + 240, (const __m128i*)L"IconicButtonInnerGlow2");
			if (v37)
			{
				v38 = 0i64;
				do
					v21 = aIconicbuttonin_0[++v38] == 0;
				while (!v21);
				sub_14001C480(v10 + 2016, (int*)L"IconicButtonInnerGlow2", (int*)&aIconicbuttonin_0[v38]);
			}
			if (v37 != *(void(__fastcall****)(_QWORD))(v10 + 2000))
			{
				if (v37)
					(**v37)(v37);
				v39 = *(_QWORD*)(v10 + 2000);
				if (v39)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
					*(_QWORD*)(v10 + 2000) = 0i64;
				}
				*(_QWORD*)(v10 + 2000) = v37;
			}
		}
		if (!*(_QWORD*)(v10 + 2048) || !sub_14002C740(v10 + 2064, L"IconicButtonInnerGlow3"))
		{
			v40 = (void(__fastcall***)(_QWORD))sub_140108E80(a1 + 240, (const __m128i*)L"IconicButtonInnerGlow3");
			if (v40)
			{
				v41 = 0i64;
				do
					v21 = aIconicbuttonin_1[++v41] == 0;
				while (!v21);
				sub_14001C480(v10 + 2064, (int*)L"IconicButtonInnerGlow3", (int*)&aIconicbuttonin_1[v41]);
			}
			if (v40 != *(void(__fastcall****)(_QWORD))(v10 + 2048))
			{
				if (v40)
					(**v40)(v40);
				v42 = *(_QWORD*)(v10 + 2048);
				if (v42)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v42 + 8i64))(v42);
					*(_QWORD*)(v10 + 2048) = 0i64;
				}
				*(_QWORD*)(v10 + 2048) = v40;
			}
		}
		if (!*(_QWORD*)(v10 + 2096) || !sub_14002C740(v10 + 2112, L"IconicButtonEdgeGlow"))
		{
			v43 = (void(__fastcall***)(_QWORD))sub_140108E80(a1 + 240, (const __m128i*)L"IconicButtonEdgeGlow");
			if (v43)
			{
				v44 = 0i64;
				do
					v21 = aIconicbuttoned_0[++v44] == 0;
				while (!v21);
				sub_14001C480(v10 + 2112, (int*)L"IconicButtonEdgeGlow", (int*)&aIconicbuttoned_0[v44]);
			}
			if (v43 != *(void(__fastcall****)(_QWORD))(v10 + 2096))
			{
				if (v43)
					(**v43)(v43);
				v45 = *(_QWORD*)(v10 + 2096);
				if (v45)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 8i64))(v45);
					*(_QWORD*)(v10 + 2096) = 0i64;
				}
				*(_QWORD*)(v10 + 2096) = v43;
			}
		}
	}
	v46 = v93;
	*(_DWORD*)(v10 + 2192) = dword_140C4AEE8;
	*(_DWORD*)(v10 + 2196) = dword_140C4AEEC;
	*(_DWORD*)(v10 + 2200) = dword_140C4AF48;
	*(_DWORD*)(v10 + 2204) = dword_140C4AF4C;
	v47 = *(_QWORD*)(v46 + 96);
	v90 = 0;
	if (v47)
	{
		while (1)
		{
			v48 = L"LeftMargin";
			v49 = (wchar_t*)sub_1401A4F40(v47 + 8);
			if (v49 == L"LeftMargin")
				break;
			v50 = 0;
			if (*v49)
			{
				do
				{
					if (!*v48 || *v49 != *v48)
						break;
					v51 = v50 == 0x7FFFFFFF;
					if (v50 == 0x7FFFFFFF)
						goto LABEL_128;
					++v49;
					++v48;
					++v50;
				} while (*v49);
				v51 = v50 == 0x7FFFFFFF;
			LABEL_128:
				if (v51)
					break;
			}
			if (!*v49 && !*v48)
				break;
			v47 = *(_QWORD*)(v47 + 56);
			if (!v47)
				goto LABEL_135;
		}
		v52 = (_WORD*)sub_1401A4F40(v47 + 32);
		if ((unsigned int)sub_1407DF428(v52, (__int64)L"%d", &v90) == 1)
			*(_DWORD*)(v10 + 2192) = v90;
	}
LABEL_135:
	v53 = *(_QWORD*)(v46 + 96);
	if (v53)
	{
		while (1)
		{
			v54 = L"TopMargin";
			v55 = (wchar_t*)sub_1401A4F40(v53 + 8);
			if (v55 == L"TopMargin")
				break;
			v56 = 0;
			if (*v55)
			{
				do
				{
					if (!*v54 || *v55 != *v54)
						break;
					v57 = v56 == 0x7FFFFFFF;
					if (v56 == 0x7FFFFFFF)
						goto LABEL_143;
					++v55;
					++v54;
					++v56;
				} while (*v55);
				v57 = v56 == 0x7FFFFFFF;
			LABEL_143:
				if (v57)
					break;
			}
			if (!*v55 && !*v54)
				break;
			v53 = *(_QWORD*)(v53 + 56);
			if (!v53)
				goto LABEL_150;
		}
		v58 = (_WORD*)sub_1401A4F40(v53 + 32);
		if ((unsigned int)sub_1407DF428(v58, (__int64)L"%d", &v90) == 1)
			*(_DWORD*)(v10 + 2196) = v90;
	}
LABEL_150:
	v59 = *(_QWORD*)(v46 + 96);
	if (v59)
	{
		while (1)
		{
			v60 = L"RightMargin";
			v61 = (wchar_t*)sub_1401A4F40(v59 + 8);
			if (v61 == L"RightMargin")
				break;
			v62 = 0;
			if (*v61)
			{
				do
				{
					if (!*v60 || *v61 != *v60)
						break;
					v63 = v62 == 0x7FFFFFFF;
					if (v62 == 0x7FFFFFFF)
						goto LABEL_158;
					++v61;
					++v60;
					++v62;
				} while (*v61);
				v63 = v62 == 0x7FFFFFFF;
			LABEL_158:
				if (v63)
					break;
			}
			if (!*v61 && !*v60)
				break;
			v59 = *(_QWORD*)(v59 + 56);
			if (!v59)
				goto LABEL_165;
		}
		v64 = (_WORD*)sub_1401A4F40(v59 + 32);
		if ((unsigned int)sub_1407DF428(v64, (__int64)L"%d", &v90) == 1)
			*(_DWORD*)(v10 + 2200) = v90;
	}
LABEL_165:
	v65 = *(_QWORD*)(v46 + 96);
	if (v65)
	{
		while (1)
		{
			v66 = L"BottomMargin";
			v67 = (wchar_t*)sub_1401A4F40(v65 + 8);
			if (v67 == L"BottomMargin")
				break;
			v68 = 0;
			if (*v67)
			{
				do
				{
					if (!*v66 || *v67 != *v66)
						break;
					v69 = v68 == 0x7FFFFFFF;
					if (v68 == 0x7FFFFFFF)
						goto LABEL_173;
					++v67;
					++v66;
					++v68;
				} while (*v67);
				v69 = v68 == 0x7FFFFFFF;
			LABEL_173:
				if (v69)
					break;
			}
			if (!*v67 && !*v66)
				break;
			v65 = *(_QWORD*)(v65 + 56);
			if (!v65)
				goto LABEL_180;
		}
		v70 = (_WORD*)sub_1401A4F40(v65 + 32);
		if ((unsigned int)sub_1407DF428(v70, (__int64)L"%d", &v90) == 1)
			*(_DWORD*)(v10 + 2204) = v90;
	}
LABEL_180:
	v71 = *(_QWORD*)(v46 + 96);
	if (v71)
	{
		while (1)
		{
			v72 = L"ContentType";
			v73 = (wchar_t*)sub_1401A4F40(v71 + 8);
			if (v73 == L"ContentType")
				break;
			v74 = 0;
			if (*v73)
			{
				do
				{
					if (!*v72 || *v73 != *v72)
						break;
					v75 = v74 == 0x7FFFFFFF;
					if (v74 == 0x7FFFFFFF)
						goto LABEL_188;
					++v73;
					++v72;
					++v74;
				} while (*v73);
				v75 = v74 == 0x7FFFFFFF;
			LABEL_188:
				if (v75)
					break;
			}
			if (!*v73 && !*v72)
				break;
			v71 = *(_QWORD*)(v71 + 56);
			if (!v71)
				goto LABEL_192;
		}
		v76 = sub_1401A4F40(v71 + 32);
	}
	else
	{
	LABEL_192:
		v76 = 0i64;
	}
	v77 = (int*)&unk_1409F7964;
	v78 = 0i64;
	if (v76)
		v77 = (int*)v76;
	v79 = 0i64;
	if (*(_WORD*)v77)
	{
		do
			++v79;
		while (*((_WORD*)v77 + v79));
	}
	v80 = (2 * v79) >> 1;
	if ((unsigned __int64)(v80 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v78 = sub_14018B280(2 * (v80 + 1), 0);
	v81 = 2 * v80;
	sub_1407DB590(v78, v77, v81);
	if ((int*)((char*)v78 + v81))
		*(_WORD*)((char*)v78 + v81) = 0;
	v82 = *(_QWORD*)(v46 + 96);
	v91 = 0;
	if (v82)
	{
		while (1)
		{
			v83 = L"ContentId";
			v84 = (wchar_t*)sub_1401A4F40(v82 + 8);
			if (v84 == L"ContentId")
				break;
			v85 = 0;
			if (*v84)
			{
				do
				{
					if (!*v83 || *v84 != *v83)
						break;
					v86 = v85 == 0x7FFFFFFF;
					if (v85 == 0x7FFFFFFF)
						goto LABEL_209;
					++v84;
					++v83;
					++v85;
				} while (*v84);
				v86 = v85 == 0x7FFFFFFF;
			LABEL_209:
				if (v86)
					break;
			}
			if (!*v84 && !*v83)
				break;
			v82 = *(_QWORD*)(v82 + 56);
			if (!v82)
				goto LABEL_219;
		}
		v87 = (_WORD*)sub_1401A4F40(v82 + 32);
		if ((unsigned int)sub_1407DF428(v87, (__int64)L"%d", &v91) == 1)
		{
			v88 = v91;
			if (*(_WORD*)v78)
			{
				do
					++v8;
				while (*((_WORD*)v78 + v8));
			}
			sub_14001C480(v10 + 1464, v78, (int*)((char*)v78 + 2 * v8));
			*(_DWORD*)(v10 + 1496) = v88;
		}
	}
LABEL_219:
	if (v78)
		sub_14018B900((__int64)v78, 0);
	return v10;
}
// 1406CEE85: conditional instruction was optimized away because rdi.8!=0
// 1406CEED8: conditional instruction was optimized away because r15.8!=0
// 1406CEF78: conditional instruction was optimized away because r15.8!=0
// 1406CF018: conditional instruction was optimized away because r15.8!=0
// 1406CF0B8: conditional instruction was optimized away because r15.8!=0
// 1406CF158: conditional instruction was optimized away because r15.8!=0
// 1406CF2B7: conditional instruction was optimized away because rdi.8!=0
// 1406CF367: conditional instruction was optimized away because rdi.8!=0
// 1406CF417: conditional instruction was optimized away because rdi.8!=0
// 1406CF4C7: conditional instruction was optimized away because rdi.8!=0
// 1406CF657: conditional instruction was optimized away because rdi.8!=0
// 1406CF66E: conditional instruction was optimized away because rdi.8!=0
// 1409E4114: using guessed type wchar_t aD_16[3];
// 1409F7974: using guessed type _WORD word_1409F7974[2];
// 140A31938: using guessed type wchar_t aContentid[10];
// 140A31950: using guessed type wchar_t aContenttype[12];
// 140A31E30: using guessed type wchar_t aLeftmargin[11];
// 140A31E48: using guessed type wchar_t aTopmargin[10];
// 140A31FA8: using guessed type wchar_t aBottommargin[13];
// 140A31FC8: using guessed type wchar_t aRightmargin[12];
// 140B3AC40: using guessed type wchar_t aIconicbuttoned_0[21];
// 140B3AC70: using guessed type wchar_t aIconicbuttonin_1[23];
// 140B3ACA0: using guessed type wchar_t aIconicbuttonin_0[23];
// 140B3ACD0: using guessed type wchar_t aIconicbuttonin[23];
// 140B3AD00: using guessed type wchar_t aIconicbuttoned[21];
// 140B3AD30: using guessed type wchar_t aIconicbuttonba[17];
// 140B3B188: using guessed type wchar_t aUnder[6];
// 140B3B1A0: using guessed type wchar_t aOver[5];
// 140C4AEE8: using guessed type int dword_140C4AEE8;
// 140C4AEEC: using guessed type int dword_140C4AEEC;
// 140C4AF48: using guessed type int dword_140C4AF48;
// 140C4AF4C: using guessed type int dword_140C4AF4C;

