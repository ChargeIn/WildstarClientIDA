//----- (0000000140107DE0) ----------------------------------------------------
char __fastcall sub_140107DE0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	int* v6; // r15
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	int* v10; // rdi
	int* v11; // r14
	__int64 v12; // rax
	__int64 v13; // rbx
	unsigned __int64 v14; // rbx
	int** v15; // rax
	__int64* v16; // r13
	_QWORD* v17; // r12
	int* v18; // rdi
	__int64 v19; // rax
	__int64 v20; // rbx
	unsigned __int64 v21; // rbx
	int* v22; // r14
	__int64 v23; // rdi
	__int64 v24; // rbx
	__int64 v25; // rbx
	__int64 v26; // rsi
	unsigned __int64 v27; // rbx
	__int64 v28; // rbx
	int* v29; // rax
	__int64 v30; // rdi
	unsigned __int64 v31; // rbx
	__int64 v32; // rbx
	int* v33; // rax
	__int64 v34; // rdi
	unsigned __int64 v35; // rbx
	__int64 v36; // rbx
	int* v37; // rax
	__int64 i; // rdi
	unsigned __int64 v39; // rbx
	__int64 v40; // rbx
	int* v41; // rax
	int* v42; // rsi
	__int64 v43; // rax
	__int64 v44; // rax
	int* v45; // rdx
	__int64 v46; // rax
	int* v47; // rdi
	__int64 v48; // rax
	__int64 v49; // rax
	int* v50; // rdx
	__int64 v51; // rax
	int* v52; // rbx
	__int64 v53; // rax
	int* v54; // rdx
	__int64 v55; // rax
	bool v56; // zf
	__int64 v58; // [rsp+20h] [rbp-79h]
	__int64 v59; // [rsp+28h] [rbp-71h] BYREF
	int* v60; // [rsp+30h] [rbp-69h]
	int* v61; // [rsp+38h] [rbp-61h]
	__int64 v62; // [rsp+40h] [rbp-59h]
	__int64 v63; // [rsp+48h] [rbp-51h] BYREF
	int* v64; // [rsp+50h] [rbp-49h]
	int* v65; // [rsp+58h] [rbp-41h]
	__int64 v66; // [rsp+60h] [rbp-39h]
	__int64 v67; // [rsp+68h] [rbp-31h] BYREF
	int* v68; // [rsp+70h] [rbp-29h]
	int* v69; // [rsp+78h] [rbp-21h]
	__int64 v70; // [rsp+80h] [rbp-19h]
	__int64 v71; // [rsp+88h] [rbp-11h] BYREF
	int* v72; // [rsp+90h] [rbp-9h]
	int* v73; // [rsp+98h] [rbp-1h]
	__int64 v74; // [rsp+A0h] [rbp+7h]
	int* v75; // [rsp+A8h] [rbp+Fh]
	__int64 v76; // [rsp+B0h] [rbp+17h]
	int* v78; // [rsp+110h] [rbp+77h]
	wchar_t** v79; // [rsp+118h] [rbp+7Fh]

	v4 = sub_1401A6B80(a2, L"Name");
	if (!v4)
		return 0;
	v5 = (int*)sub_1401A4F40(v4 + 32);
	if (!v5)
		return 0;
	v6 = 0i64;
	v7 = 0i64;
	if (*(_WORD*)v5)
	{
		do
			++v7;
		while (*((_WORD*)v5 + v7));
	}
	v76 = a1 + 56;
	sub_14001C480(a1 + 56, v5, (int*)((char*)v5 + 2 * v7));
	v8 = sub_1401A6B80(a2, L"Icon");
	if (v8)
		v9 = sub_1401A4F40(v8 + 32);
	else
		v9 = 0i64;
	v10 = (int*)&unk_1409D5174;
	v11 = 0i64;
	if (v9)
		v10 = (int*)v9;
	v12 = 0i64;
	v78 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v12;
		while (*((_WORD*)v10 + v12));
	}
	v13 = (2 * v12) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v11 = sub_14018B280(2 * (v13 + 1), 0);
		v78 = v11;
	}
	v14 = 2 * v13;
	sub_1407DB590(v11, v10, v14);
	v75 = (int*)((char*)v11 + v14);
	if ((int*)((char*)v11 + v14))
		*(_WORD*)((char*)v11 + v14) = 0;
	v15 = (int**)off_140A33098;
	v16 = (__int64*)(a1 + 88);
	v17 = (_QWORD*)(a1 + 96);
	v79 = off_140A33098;
	v58 = 6i64;
	do
	{
		v18 = *v15;
		v19 = 0i64;
		if (*(_WORD*)v18)
		{
			do
				++v19;
			while (*((_WORD*)v18 + v19));
		}
		v20 = (2 * v19) >> 1;
		if ((unsigned __int64)(v20 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v6 = sub_14018B280(2 * (v20 + 1), 0);
		v21 = 2 * v20;
		sub_1407DB590(v6, v18, v21);
		v22 = (int*)((char*)v6 + v21);
		if ((int*)((char*)v6 + v21))
			*(_WORD*)v22 = 0;
		v23 = v76;
		v24 = *(_QWORD*)(v76 + 16);
		v72 = 0i64;
		v25 = v24 - *(_QWORD*)(v76 + 8);
		v26 = ((char*)v22 - (char*)v6) >> 1;
		v73 = 0i64;
		v74 = 0i64;
		v27 = v26 + (v25 >> 1) + 1;
		if (v27 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v28 = 2 * v27;
			v29 = sub_14018B280(v28, 0);
			v72 = v29;
			v73 = v29;
			v74 = (__int64)v29 + v28;
			if (v29)
				*(_WORD*)v29 = 0;
		}
		sub_14001C310(&v71, *(int**)(v23 + 8), *(int**)(v23 + 16));
		sub_14001C310(&v71, v6, v22);
		v30 = 0i64;
		do
			++v30;
		while (word_140A1A928[v30]);
		v64 = 0i64;
		v65 = 0i64;
		v66 = 0i64;
		v31 = v30 + v26 + 1;
		if (v31 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v32 = 2 * v31;
			v33 = sub_14018B280(v32, 0);
			v64 = v33;
			v65 = v33;
			v66 = (__int64)v33 + v32;
			if (v33)
				*(_WORD*)v33 = 0;
		}
		sub_14001C310(&v63, v6, v22);
		sub_14001C310(&v63, (int*)word_140A1A928, (int*)&word_140A1A928[v30]);
		v34 = 0i64;
		do
			++v34;
		while (word_140A1A950[v34]);
		v68 = 0i64;
		v69 = 0i64;
		v70 = 0i64;
		v35 = v34 + v26 + 1;
		if (v35 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v36 = 2 * v35;
			v37 = sub_14018B280(v36, 0);
			v68 = v37;
			v69 = v37;
			v70 = (__int64)v37 + v36;
			if (v37)
				*(_WORD*)v37 = 0;
		}
		sub_14001C310(&v67, v6, v22);
		sub_14001C310(&v67, (int*)word_140A1A950, (int*)&word_140A1A950[v34]);
		for (i = 0i64; aIcon[i]; ++i)
			;
		v60 = 0i64;
		v61 = 0i64;
		v62 = 0i64;
		v39 = i + v26 + 1;
		if (v39 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v40 = 2 * v39;
			v41 = sub_14018B280(v40, 0);
			v60 = v41;
			v61 = v41;
			v62 = (__int64)v41 + v40;
			if (v41)
				*(_WORD*)v41 = 0;
		}
		sub_14001C310(&v59, v6, v22);
		sub_14001C310(&v59, (int*)L"Icon", (int*)&aIcon[i]);
		v42 = v64;
		v43 = sub_1401A6B80(a2, v64);
		if (v43)
			v44 = sub_1401A4F40(v43 + 32);
		else
			v44 = 0i64;
		v45 = (int*)&unk_1409D518C;
		if (v44)
			v45 = (int*)v44;
		v46 = 0i64;
		if (*(_WORD*)v45)
		{
			do
				++v46;
			while (*((_WORD*)v45 + v46));
		}
		sub_14001C480((__int64)(v16 + 24), v45, (int*)((char*)v45 + 2 * v46));
		v47 = v68;
		v48 = sub_1401A6B80(a2, v68);
		if (v48)
			v49 = sub_1401A4F40(v48 + 32);
		else
			v49 = 0i64;
		v50 = (int*)&unk_1409D5004;
		if (v49)
			v50 = (int*)v49;
		v51 = 0i64;
		if (*(_WORD*)v50)
		{
			do
				++v51;
			while (*((_WORD*)v50 + v51));
		}
		sub_14001C480((__int64)(v16 + 48), v50, (int*)((char*)v50 + 2 * v51));
		v52 = v60;
		v53 = sub_1401A6B80(a2, v60);
		if (v53)
			v53 = sub_1401A4F40(v53 + 32);
		v54 = (int*)&unk_1409D5044;
		if (v53)
			v54 = (int*)v53;
		v55 = 0i64;
		if (*(_WORD*)v54)
		{
			do
				++v55;
			while (*((_WORD*)v54 + v55));
		}
		sub_14001C480((__int64)v16, v54, (int*)((char*)v54 + 2 * v55));
		if (*v17 == v17[1] && &v59 != v16)
			sub_14001C480((__int64)v16, v78, v75);
		if (v52)
			sub_14018B900((__int64)v52, 0);
		if (v47)
			sub_14018B900((__int64)v47, 0);
		if (v42)
			sub_14018B900((__int64)v42, 0);
		if (v72)
			sub_14018B900((__int64)v72, 0);
		if (v6)
			sub_14018B900((__int64)v6, 0);
		v16 += 4;
		v17 += 4;
		v15 = (int**)(v79 + 1);
		v56 = v58-- == 1;
		v6 = 0i64;
		++v79;
	} while (!v56);
	if (v78)
		sub_14018B900((__int64)v78, 0);
	return 1;
}
// 140A1A928: using guessed type __int16 word_140A1A928[];
// 140A1A940: using guessed type wchar_t aIcon[5];
// 140A1A950: using guessed type __int16 word_140A1A950[];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A33098: using guessed type wchar_t *off_140A33098[25];

