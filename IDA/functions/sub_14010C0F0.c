#include "../winhttp.h"

//----- (000000014010C0F0) ----------------------------------------------------
__int64 __fastcall sub_14010C0F0(__int64 a1, _QWORD* a2, __int64 a3, char a4)
{
	__int64 v5; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rax
	int* v13; // rdx
	__int64 v14; // rax
	wchar_t** v15; // rdi
	__int64 v16; // rax
	const __m128i* v17; // rax
	const __m128i* v18; // rbx
	__int64 v19; // rax
	const __m128i* v20; // rax
	__int64 v21; // rdi
	const wchar_t* v22; // rbx
	wchar_t* v23; // rax
	int v24; // ecx
	bool v25; // zf
	__int64 v26; // rax
	__int64 v27; // rdi
	const wchar_t* v28; // rbx
	wchar_t* v29; // rax
	int v30; // ecx
	bool v31; // zf
	__int64 v32; // rax
	__int64 v33; // rdi
	const wchar_t* v34; // rbx
	wchar_t* v35; // rax
	int v36; // ecx
	bool v37; // zf
	__int64 v38; // rax
	__int64 v39; // rax
	__int64 v40; // rax
	__int64 v41; // rax
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rdi
	const wchar_t* v46; // rbx
	wchar_t* v47; // rax
	int v48; // ecx
	bool v49; // zf
	int* v50; // rax
	const __m128i* v51; // rax
	const __m128i* v52; // rbx
	const __m128i* v53; // rax
	const __m128i* v54; // rax
	const __m128i* v55; // rbx
	const __m128i* v56; // rax
	const __m128i* v57; // rax
	const __m128i* v58; // rbx
	const __m128i* v59; // rax
	__int64 v60; // rdi
	const wchar_t* v61; // rbx
	wchar_t* v62; // rax
	int v63; // ecx
	bool v64; // zf
	int* v65; // rax
	__int64 v66; // rdi
	const wchar_t* v67; // rbx
	wchar_t* v68; // rax
	int v69; // ecx
	bool v70; // zf
	int* v71; // rax
	__int64 v72; // rdi
	const wchar_t* v73; // rbx
	wchar_t* v74; // rax
	int v75; // ecx
	bool v76; // zf
	int* v77; // rax
	__int64 v78; // rdi
	const wchar_t* v79; // rbx
	wchar_t* v80; // rax
	int v81; // ecx
	bool v82; // zf
	int* v83; // rax
	__int64 v84; // rdi
	const wchar_t* v85; // rbx
	wchar_t* v86; // rax
	int v87; // ecx
	bool v88; // zf
	_WORD* v89; // rax
	__int64 v90; // rdi
	const wchar_t* v91; // rbx
	wchar_t* v92; // rax
	int v93; // ecx
	bool v94; // zf
	_WORD* v95; // rax
	__int64 v96; // rdi
	const wchar_t* v97; // rbx
	wchar_t* v98; // rax
	int v99; // ecx
	bool v100; // zf
	_WORD* v101; // rax
	__int64 v102; // rdi
	const wchar_t* v103; // rbx
	wchar_t* v104; // rax
	int v105; // ecx
	bool v106; // zf
	_WORD* v107; // rax
	__int64 v108; // rdi
	const wchar_t* v109; // rbx
	wchar_t* v110; // rax
	int v111; // ecx
	bool v112; // zf
	_WORD* v113; // rax
	__int64 v114; // rdi
	const wchar_t* v115; // rbx
	wchar_t* v116; // rax
	int v117; // ecx
	bool v118; // zf
	__int64 v119; // rax
	int* v120; // rdx
	__int64 v121; // rax
	unsigned __int64 i; // rbx
	__int64 result; // rax
	__int64 j; // rbp
	int* v125; // rax
	__int64 v126; // rdi
	int* v127; // r8
	_DWORD* v128; // rdx
	char* v129; // r9
	__int64 v130; // rcx
	int v131; // eax
	__int64 v132; // rbx
	int* v133; // rax
	int* v134; // rsi
	int* v135; // rdx
	__int64 v136; // rcx
	int v137; // [rsp+68h] [rbp+20h] BYREF

	LOBYTE(v137) = a4;
	v5 = *(_QWORD*)(a1 + 952);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 952) = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 960);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(a1 + 960) = 0i64;
	}
	v9 = *(_QWORD*)(a1 + 968);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 968) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 984);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		*(_QWORD*)(a1 + 984) = 0i64;
	}
	v11 = *(_QWORD*)(a1 + 976);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 976) = 0i64;
	}
	v12 = sub_1401A6B80(a3, L"Name");
	if (v12)
		v12 = sub_1401A4F40(v12 + 32);
	v13 = (int*)&unk_1409D55A4;
	if (v12)
		v13 = (int*)v12;
	v14 = 0i64;
	if (*(_WORD*)v13)
	{
		do
			++v14;
		while (*((_WORD*)v13 + v14));
	}
	sub_14001C480(a1 + 16, v13, (int*)((char*)v13 + 2 * v14));
	v15 = off_140A33250;
	do
	{
		v16 = sub_1401A6B80(a3, *v15);
		if (!v16)
			goto LABEL_25;
		v17 = (const __m128i*)sub_1401A4F40(v16 + 32);
		v18 = v17;
		if (!v17 || !v17->m128i_i16[0] || ((a2[43] - a2[42]) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
			goto LABEL_25;
		v19 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v17);
		if (v19)
			goto LABEL_26;
		v20 = sub_1407DF6E0(v18, stru_1409D5204);
		if (v20)
			v19 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v20->m128i_i64 + 2);
		else
			LABEL_25:
		v19 = 0i64;
	LABEL_26:
		*(wchar_t**)((char*)v15++ + a1 - (_QWORD)off_140A33250 + 80) = (wchar_t*)v19;
	} while ((__int64)v15 < (__int64)off_140A33290);
	v21 = *(_QWORD*)(a3 + 96);
	if (!v21)
		goto LABEL_39;
	while (1)
	{
		v22 = L"SingleBorderFrame";
		v23 = (wchar_t*)sub_1401A4F40(v21 + 8);
		if (v23 == L"SingleBorderFrame")
			break;
		v24 = 0;
		if (*v23)
		{
			do
			{
				if (!*v22 || *v23 != *v22)
					break;
				v25 = v24 == 0x7FFFFFFF;
				if (v24 == 0x7FFFFFFF)
					goto LABEL_35;
				++v23;
				++v22;
				++v24;
			} while (*v23);
			v25 = v24 == 0x7FFFFFFF;
		LABEL_35:
			if (v25)
				break;
		}
		if (!*v23 && !*v22)
			break;
		v21 = *(_QWORD*)(v21 + 56);
		if (!v21)
			goto LABEL_39;
	}
	v51 = (const __m128i*)sub_1401A4F40(v21 + 32);
	v52 = v51;
	if (!v51 || !v51->m128i_i16[0] || ((a2[43] - a2[42]) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
		goto LABEL_39;
	v26 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v51);
	if (!v26)
	{
		v53 = sub_1407DF6E0(v52, stru_1409D5204);
		if (v53)
		{
			v26 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v53->m128i_i64 + 2);
			goto LABEL_40;
		}
	LABEL_39:
		v26 = 0i64;
	}
LABEL_40:
	*(_QWORD*)(a1 + 160) = v26;
	v27 = *(_QWORD*)(a3 + 96);
	if (!v27)
		goto LABEL_52;
	while (1)
	{
		v28 = L"ClientFrame";
		v29 = (wchar_t*)sub_1401A4F40(v27 + 8);
		if (v29 == L"ClientFrame")
			break;
		v30 = 0;
		if (*v29)
		{
			do
			{
				if (!*v28 || *v29 != *v28)
					break;
				v31 = v30 == 0x7FFFFFFF;
				if (v30 == 0x7FFFFFFF)
					goto LABEL_48;
				++v29;
				++v28;
				++v30;
			} while (*v29);
			v31 = v30 == 0x7FFFFFFF;
		LABEL_48:
			if (v31)
				break;
		}
		if (!*v29 && !*v28)
			break;
		v27 = *(_QWORD*)(v27 + 56);
		if (!v27)
			goto LABEL_52;
	}
	v54 = (const __m128i*)sub_1401A4F40(v27 + 32);
	v55 = v54;
	if (!v54 || !v54->m128i_i16[0] || ((a2[43] - a2[42]) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
		goto LABEL_52;
	v32 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v54);
	if (!v32)
	{
		v56 = sub_1407DF6E0(v55, stru_1409D5204);
		if (v56)
		{
			v32 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v56->m128i_i64 + 2);
			goto LABEL_53;
		}
	LABEL_52:
		v32 = 0i64;
	}
LABEL_53:
	*(_QWORD*)(a1 + 144) = v32;
	v33 = *(_QWORD*)(a3 + 96);
	if (!v33)
		goto LABEL_65;
	while (1)
	{
		v34 = L"IMEBG";
		v35 = (wchar_t*)sub_1401A4F40(v33 + 8);
		if (v35 == L"IMEBG")
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
					goto LABEL_61;
				++v35;
				++v34;
				++v36;
			} while (*v35);
			v37 = v36 == 0x7FFFFFFF;
		LABEL_61:
			if (v37)
				break;
		}
		if (!*v35 && !*v34)
			break;
		v33 = *(_QWORD*)(v33 + 56);
		if (!v33)
			goto LABEL_65;
	}
	v57 = (const __m128i*)sub_1401A4F40(v33 + 32);
	v58 = v57;
	if (!v57 || !v57->m128i_i16[0] || ((a2[43] - a2[42]) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
		goto LABEL_65;
	v38 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v57);
	if (v38)
		goto LABEL_66;
	v59 = sub_1407DF6E0(v58, stru_1409D5204);
	if (!v59)
	{
	LABEL_65:
		v38 = 0i64;
		goto LABEL_66;
	}
	v38 = sub_1400FDFE0((__int64)(a2 + 36), (__int64)v59->m128i_i64 + 2);
LABEL_66:
	*(_QWORD*)(a1 + 152) = v38;
	v39 = sub_1401A5AE0(a3, L"VScroll");
	if (v39)
		sub_14010B980(a1 + 168, a2, v39);
	v40 = sub_1401A5AE0(a3, L"HScroll");
	if (v40)
		sub_14010B980(a1 + 408, a2, v40);
	v41 = sub_1401A5AE0(a3, L"BlankButton");
	if (v41)
		sub_14010B160((char*)(a1 + 648), a2, v41);
	v42 = sub_1401A5AE0(a3, L"CheckButton");
	if (v42)
		sub_14010B160((char*)(a1 + 792), a2, v42);
	v43 = sub_1401A5AE0(a3, L"RadioButton");
	if (v43)
		sub_14010B160((char*)(a1 + 720), a2, v43);
	v44 = sub_1401A5AE0(a3, L"CloseButton");
	if (v44)
		sub_14010B160((char*)(a1 + 864), a2, v44);
	v45 = *(_QWORD*)(a3 + 96);
	if (v45)
	{
		while (1)
		{
			v46 = L"DefaultCursor";
			v47 = (wchar_t*)sub_1401A4F40(v45 + 8);
			if (v47 == L"DefaultCursor")
				break;
			v48 = 0;
			if (*v47)
			{
				do
				{
					if (!*v46 || *v47 != *v46)
						break;
					v49 = v48 == 0x7FFFFFFF;
					if (v48 == 0x7FFFFFFF)
						goto LABEL_86;
					++v47;
					++v46;
					++v48;
				} while (*v47);
				v49 = v48 == 0x7FFFFFFF;
			LABEL_86:
				if (v49)
					break;
			}
			if (!*v47 && !*v46)
				break;
			v45 = *(_QWORD*)(v45 + 56);
			if (!v45)
				goto LABEL_90;
		}
		v50 = (int*)sub_1401A4F40(v45 + 32);
	}
	else
	{
	LABEL_90:
		v50 = 0i64;
	}
	if (v50)
		v50 = (int*)sub_1401545C0(a2[45], v50);
	*(_QWORD*)(a1 + 952) = v50;
	if (v50)
		(**(void(__fastcall***)(int*))v50)(v50);
	v60 = *(_QWORD*)(a3 + 96);
	if (v60)
	{
		while (1)
		{
			v61 = L"ResizeNSCursor";
			v62 = (wchar_t*)sub_1401A4F40(v60 + 8);
			if (v62 == L"ResizeNSCursor")
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
						goto LABEL_123;
					++v62;
					++v61;
					++v63;
				} while (*v62);
				v64 = v63 == 0x7FFFFFFF;
			LABEL_123:
				if (v64)
					break;
			}
			if (!*v62 && !*v61)
				break;
			v60 = *(_QWORD*)(v60 + 56);
			if (!v60)
				goto LABEL_127;
		}
		v65 = (int*)sub_1401A4F40(v60 + 32);
	}
	else
	{
	LABEL_127:
		v65 = 0i64;
	}
	if (v65)
		v65 = (int*)sub_1401545C0(a2[45], v65);
	*(_QWORD*)(a1 + 960) = v65;
	if (v65)
		(**(void(__fastcall***)(int*))v65)(v65);
	v66 = *(_QWORD*)(a3 + 96);
	if (v66)
	{
		while (1)
		{
			v67 = L"ResizeEWCursor";
			v68 = (wchar_t*)sub_1401A4F40(v66 + 8);
			if (v68 == L"ResizeEWCursor")
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
						goto LABEL_142;
					++v68;
					++v67;
					++v69;
				} while (*v68);
				v70 = v69 == 0x7FFFFFFF;
			LABEL_142:
				if (v70)
					break;
			}
			if (!*v68 && !*v67)
				break;
			v66 = *(_QWORD*)(v66 + 56);
			if (!v66)
				goto LABEL_146;
		}
		v71 = (int*)sub_1401A4F40(v66 + 32);
	}
	else
	{
	LABEL_146:
		v71 = 0i64;
	}
	if (v71)
		v71 = (int*)sub_1401545C0(a2[45], v71);
	*(_QWORD*)(a1 + 968) = v71;
	if (v71)
		(**(void(__fastcall***)(int*))v71)(v71);
	v72 = *(_QWORD*)(a3 + 96);
	if (v72)
	{
		while (1)
		{
			v73 = L"ResizeNESWCursor";
			v74 = (wchar_t*)sub_1401A4F40(v72 + 8);
			if (v74 == L"ResizeNESWCursor")
				break;
			v75 = 0;
			if (*v74)
			{
				do
				{
					if (!*v73 || *v74 != *v73)
						break;
					v76 = v75 == 0x7FFFFFFF;
					if (v75 == 0x7FFFFFFF)
						goto LABEL_161;
					++v74;
					++v73;
					++v75;
				} while (*v74);
				v76 = v75 == 0x7FFFFFFF;
			LABEL_161:
				if (v76)
					break;
			}
			if (!*v74 && !*v73)
				break;
			v72 = *(_QWORD*)(v72 + 56);
			if (!v72)
				goto LABEL_165;
		}
		v77 = (int*)sub_1401A4F40(v72 + 32);
	}
	else
	{
	LABEL_165:
		v77 = 0i64;
	}
	if (v77)
		v77 = (int*)sub_1401545C0(a2[45], v77);
	*(_QWORD*)(a1 + 984) = v77;
	if (v77)
		(**(void(__fastcall***)(int*))v77)(v77);
	v78 = *(_QWORD*)(a3 + 96);
	if (v78)
	{
		while (1)
		{
			v79 = L"ResizeNWSECursor";
			v80 = (wchar_t*)sub_1401A4F40(v78 + 8);
			if (v80 == L"ResizeNWSECursor")
				break;
			v81 = 0;
			if (*v80)
			{
				do
				{
					if (!*v79 || *v80 != *v79)
						break;
					v82 = v81 == 0x7FFFFFFF;
					if (v81 == 0x7FFFFFFF)
						goto LABEL_180;
					++v80;
					++v79;
					++v81;
				} while (*v80);
				v82 = v81 == 0x7FFFFFFF;
			LABEL_180:
				if (v82)
					break;
			}
			if (!*v80 && !*v79)
				break;
			v78 = *(_QWORD*)(v78 + 56);
			if (!v78)
				goto LABEL_184;
		}
		v83 = (int*)sub_1401A4F40(v78 + 32);
	}
	else
	{
	LABEL_184:
		v83 = 0i64;
	}
	if (v83)
		v83 = (int*)sub_1401545C0(a2[45], v83);
	*(_QWORD*)(a1 + 976) = v83;
	if (v83)
		(**(void(__fastcall***)(int*))v83)(v83);
	v84 = *(_QWORD*)(a3 + 96);
	v137 = 0;
	if (v84)
	{
		while (1)
		{
			v85 = L"UseMargins";
			v86 = (wchar_t*)sub_1401A4F40(v84 + 8);
			if (v86 == L"UseMargins")
				break;
			v87 = 0;
			if (*v86)
			{
				do
				{
					if (!*v85 || *v86 != *v85)
						break;
					v88 = v87 == 0x7FFFFFFF;
					if (v87 == 0x7FFFFFFF)
						goto LABEL_199;
					++v86;
					++v85;
					++v87;
				} while (*v86);
				v88 = v87 == 0x7FFFFFFF;
			LABEL_199:
				if (v88)
					break;
			}
			if (!*v86 && !*v85)
				break;
			v84 = *(_QWORD*)(v84 + 56);
			if (!v84)
				goto LABEL_205;
		}
		v89 = (_WORD*)sub_1401A4F40(v84 + 32);
		sub_1407DF428(v89, (__int64)L"%d", &v137);
	}
LABEL_205:
	*(_BYTE*)(a1 + 992) = v137 != 0;
	v90 = *(_QWORD*)(a3 + 96);
	if (v90)
	{
		while (1)
		{
			v91 = L"TopMargin";
			v92 = (wchar_t*)sub_1401A4F40(v90 + 8);
			if (v92 == L"TopMargin")
				break;
			v93 = 0;
			if (*v92)
			{
				do
				{
					if (!*v91 || *v92 != *v91)
						break;
					v94 = v93 == 0x7FFFFFFF;
					if (v93 == 0x7FFFFFFF)
						goto LABEL_213;
					++v92;
					++v91;
					++v93;
				} while (*v92);
				v94 = v93 == 0x7FFFFFFF;
			LABEL_213:
				if (v94)
					break;
			}
			if (!*v92 && !*v91)
				break;
			v90 = *(_QWORD*)(v90 + 56);
			if (!v90)
				goto LABEL_219;
		}
		v95 = (_WORD*)sub_1401A4F40(v90 + 32);
		sub_1407DF428(v95, (__int64)L"%d", a1 + 996);
	}
LABEL_219:
	v96 = *(_QWORD*)(a3 + 96);
	if (v96)
	{
		while (1)
		{
			v97 = L"LeftMargin";
			v98 = (wchar_t*)sub_1401A4F40(v96 + 8);
			if (v98 == L"LeftMargin")
				break;
			v99 = 0;
			if (*v98)
			{
				do
				{
					if (!*v97 || *v98 != *v97)
						break;
					v100 = v99 == 0x7FFFFFFF;
					if (v99 == 0x7FFFFFFF)
						goto LABEL_227;
					++v98;
					++v97;
					++v99;
				} while (*v98);
				v100 = v99 == 0x7FFFFFFF;
			LABEL_227:
				if (v100)
					break;
			}
			if (!*v98 && !*v97)
				break;
			v96 = *(_QWORD*)(v96 + 56);
			if (!v96)
				goto LABEL_233;
		}
		v101 = (_WORD*)sub_1401A4F40(v96 + 32);
		sub_1407DF428(v101, (__int64)L"%d", a1 + 1000);
	}
LABEL_233:
	v102 = *(_QWORD*)(a3 + 96);
	if (v102)
	{
		while (1)
		{
			v103 = L"RightMargin";
			v104 = (wchar_t*)sub_1401A4F40(v102 + 8);
			if (v104 == L"RightMargin")
				break;
			v105 = 0;
			if (*v104)
			{
				do
				{
					if (!*v103 || *v104 != *v103)
						break;
					v106 = v105 == 0x7FFFFFFF;
					if (v105 == 0x7FFFFFFF)
						goto LABEL_241;
					++v104;
					++v103;
					++v105;
				} while (*v104);
				v106 = v105 == 0x7FFFFFFF;
			LABEL_241:
				if (v106)
					break;
			}
			if (!*v104 && !*v103)
				break;
			v102 = *(_QWORD*)(v102 + 56);
			if (!v102)
				goto LABEL_247;
		}
		v107 = (_WORD*)sub_1401A4F40(v102 + 32);
		sub_1407DF428(v107, (__int64)L"%d", a1 + 1004);
	}
LABEL_247:
	v108 = *(_QWORD*)(a3 + 96);
	if (v108)
	{
		while (1)
		{
			v109 = L"BottomMargin";
			v110 = (wchar_t*)sub_1401A4F40(v108 + 8);
			if (v110 == L"BottomMargin")
				break;
			v111 = 0;
			if (*v110)
			{
				do
				{
					if (!*v109 || *v110 != *v109)
						break;
					v112 = v111 == 0x7FFFFFFF;
					if (v111 == 0x7FFFFFFF)
						goto LABEL_255;
					++v110;
					++v109;
					++v111;
				} while (*v110);
				v112 = v111 == 0x7FFFFFFF;
			LABEL_255:
				if (v112)
					break;
			}
			if (!*v110 && !*v109)
				break;
			v108 = *(_QWORD*)(v108 + 56);
			if (!v108)
				goto LABEL_261;
		}
		v113 = (_WORD*)sub_1401A4F40(v108 + 32);
		sub_1407DF428(v113, (__int64)L"%d", a1 + 1008);
	}
LABEL_261:
	v114 = *(_QWORD*)(a3 + 96);
	if (v114)
	{
		while (1)
		{
			v115 = L"WindowSoundTemplate";
			v116 = (wchar_t*)sub_1401A4F40(v114 + 8);
			if (v116 == L"WindowSoundTemplate")
				break;
			v117 = 0;
			if (*v116)
			{
				do
				{
					if (!*v115 || *v116 != *v115)
						break;
					v118 = v117 == 0x7FFFFFFF;
					if (v117 == 0x7FFFFFFF)
						goto LABEL_269;
					++v116;
					++v115;
					++v117;
				} while (*v116);
				v118 = v117 == 0x7FFFFFFF;
			LABEL_269:
				if (v118)
					break;
			}
			if (!*v116 && !*v115)
				break;
			v114 = *(_QWORD*)(v114 + 56);
			if (!v114)
				goto LABEL_273;
		}
		v119 = sub_1401A4F40(v114 + 32);
	}
	else
	{
	LABEL_273:
		v119 = 0i64;
	}
	v120 = (int*)&unk_1409D55CC;
	if (v119)
		v120 = (int*)v119;
	v121 = 0i64;
	if (*(_WORD*)v120)
	{
		do
			++v121;
		while (*((_WORD*)v120 + v121));
	}
	sub_14001C480(a1 + 48, v120, (int*)((char*)v120 + 2 * v121));
	for (i = 0i64; i < *(_QWORD*)(a1 + 944); ++i)
		sub_14018B900(*(_QWORD*)(*(_QWORD*)(a1 + 936) + 8 * i), 0);
	*(_QWORD*)(a1 + 944) = 0i64;
	result = sub_1401A5AE0(a3, L"Adornment");
	for (j = result; result; j = result)
	{
		v125 = sub_14018B280(144i64, 0);
		v126 = (__int64)v125;
		if (v125)
		{
			*(_QWORD*)v125 = 0i64;
			*((_QWORD*)v125 + 1) = 0i64;
			*((_QWORD*)v125 + 2) = 0i64;
			v125[28] = 0;
			v127 = v125 + 12;
			v128 = v125 + 24;
			v129 = (char*)(&unk_140A1BA88 - (_UNKNOWN*)(v125 + 8));
			v130 = 4i64;
			do
			{
				v131 = *(_DWORD*)&v129[(_QWORD)v128 - 64];
				*v128 = 0;
				v127 += 2;
				*(v128 - 4) = v131;
				*((_QWORD*)v127 - 1) = 0i64;
				++v128;
				--v130;
			} while (v130);
			*(_QWORD*)(v126 + 128) = 0i64;
			*(_DWORD*)(v126 + 136) = -1;
		}
		else
		{
			v126 = 0i64;
		}
		sub_14010BA60(v126, (__int64)a2, j);
		v132 = *(_QWORD*)(a1 + 944);
		v133 = sub_14018DB00(*(_QWORD*)(a1 + 936), v132 + 1, 8i64);
		v134 = v133;
		*(_QWORD*)&v133[2 * v132] = v126;
		v135 = *(int**)(a1 + 936);
		if (v135 != v133)
		{
			sub_1407DB590(v133, v135, 8i64 * *(_QWORD*)(a1 + 944));
			v136 = *(_QWORD*)(a1 + 936);
			if (v136)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v136 - 16) + 8i64))(v136 - 16);
			*(_QWORD*)(a1 + 936) = v134;
		}
		*(_QWORD*)(a1 + 944) = v132 + 1;
		result = sub_1401A5BC0(j, L"Adornment");
	}
	return result;
}
// 14010C59D: conditional instruction was optimized away because rdi.8!=0
// 14010C625: conditional instruction was optimized away because rdi.8!=0
// 14010C6AD: conditional instruction was optimized away because rdi.8!=0
// 14010C735: conditional instruction was optimized away because rdi.8!=0
// 14010C7E6: conditional instruction was optimized away because rdi.8!=0
// 14010C896: conditional instruction was optimized away because rdi.8!=0
// 14010C946: conditional instruction was optimized away because rdi.8!=0
// 14010C9F6: conditional instruction was optimized away because rdi.8!=0
// 14010CAA7: conditional instruction was optimized away because rdi.8!=0
// 14010CB4F: conditional instruction was optimized away because rdi.8!=0
// 14010CBE7: conditional instruction was optimized away because rdi.8!=0
// 14010CC7F: conditional instruction was optimized away because rdi.8!=0
// 14010CD17: conditional instruction was optimized away because rdi.8!=0
// 14010CEB2: conditional instruction was optimized away because rdi.8!=0
// 1409D5204: using guessed type __m128i stru_1409D5204[10];
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A31820: using guessed type wchar_t aWindowsoundtem[20];
// 140A31DE0: using guessed type wchar_t aUsemargins[11];
// 140A31E30: using guessed type wchar_t aLeftmargin[11];
// 140A31E48: using guessed type wchar_t aTopmargin[10];
// 140A31FA8: using guessed type wchar_t aBottommargin[13];
// 140A31FC8: using guessed type wchar_t aRightmargin[12];
// 140A32000: using guessed type wchar_t aAdornment[10];
// 140A32958: using guessed type wchar_t aSingleborderfr[18];
// 140A32980: using guessed type wchar_t aClientframe[12];
// 140A329A8: using guessed type wchar_t aImebg[6];
// 140A32A78: using guessed type wchar_t aRadiobutton[12];
// 140A32A90: using guessed type wchar_t aCheckbutton[12];
// 140A32AA8: using guessed type wchar_t aDefaultcursor[14];
// 140A32AC8: using guessed type wchar_t aClosebutton[12];
// 140A32AE0: using guessed type wchar_t aVscroll[8];
// 140A32B00: using guessed type wchar_t aBlankbutton[12];
// 140A32B18: using guessed type wchar_t aHscroll[8];
// 140A32B88: using guessed type wchar_t aResizeewcursor[15];
// 140A32BA8: using guessed type wchar_t aResizenscursor[15];
// 140A32BC8: using guessed type wchar_t aResizenwsecurs[17];
// 140A32BF0: using guessed type wchar_t aResizeneswcurs[17];
// 140A33250: using guessed type wchar_t *off_140A33250[18];
// 140A33290: using guessed type wchar_t *off_140A33290[10];

