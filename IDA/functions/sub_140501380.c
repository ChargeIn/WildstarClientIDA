//----- (0000000140501380) ----------------------------------------------------
__int64 __fastcall sub_140501380(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // r9
	_QWORD* v4; // r13
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rdi
	_DWORD* v9; // rax
	_QWORD* v10; // rbx
	char* v11; // rdx
	int v12; // esi
	_DWORD* v13; // rax
	_QWORD* v14; // rbx
	char* v15; // rdx
	_DWORD* v16; // rax
	_QWORD* v17; // rbx
	char* v18; // rdx
	_DWORD* v19; // rax
	_QWORD* v20; // rbx
	char* v21; // rdx
	_DWORD* v22; // rax
	__int64 v23; // r14
	__int64 v24; // rbx
	int* v25; // r12
	__int64 v26; // rax
	int* v27; // r14
	__int64 v28; // rax
	int* v29; // r15
	__int64 v30; // rax
	__int64 v31; // rdx
	__int64 v32; // rax
	_QWORD* v33; // rdi
	__int64 v34; // rax
	_QWORD* v35; // rax
	__int64 v36; // rax
	__int64 v37; // rax
	__int64 v38; // rax
	__int64* v39; // rbx
	__int64 v40; // rcx
	__int64 v42; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v43; // [rsp+28h] [rbp-D8h]
	__int64 v44; // [rsp+30h] [rbp-D0h]
	__int64 v45; // [rsp+40h] [rbp-C0h] BYREF
	int* v46; // [rsp+48h] [rbp-B8h]
	__int64 v47; // [rsp+50h] [rbp-B0h]
	__int64* v48; // [rsp+60h] [rbp-A0h]
	__int64 v49; // [rsp+68h] [rbp-98h]
	__int64 v50; // [rsp+70h] [rbp-90h]
	__int64 v51; // [rsp+78h] [rbp-88h] BYREF
	int* v52; // [rsp+80h] [rbp-80h]
	__int64 v53; // [rsp+88h] [rbp-78h]
	__int64 v54; // [rsp+98h] [rbp-68h] BYREF
	int* v55; // [rsp+A0h] [rbp-60h]
	__int64 v56; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v57; // [rsp+C0h] [rbp-40h]
	__int64 v58; // [rsp+C8h] [rbp-38h]
	__int64 v59; // [rsp+D0h] [rbp-30h]
	__int64 v60; // [rsp+D8h] [rbp-28h]
	__int64 v61; // [rsp+E0h] [rbp-20h]
	__int64 v62[50]; // [rsp+F0h] [rbp-10h] BYREF
	char v63; // [rsp+288h] [rbp+188h] BYREF

	v48 = (__int64*)sub_140056AB0(a1, 1u);
	v2 = sub_14012AAF0(a1, 2u);
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = (_QWORD*)v2;
	v5 = 0;
	if (v3)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
		{
			v7 = ++v5;
			if (v5 >= v3)
				goto LABEL_5;
		}
		v8 = *(_QWORD*)(v6 + 8i64 * v5);
	}
	else
	{
	LABEL_5:
		v8 = 0i64;
	}
	v9 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(_DWORD*)(a1[3] + 40i64))
	{
		v10 = *(_QWORD**)(v8 + 400);
		v11 = (char*)sub_14018F0E0(&v45, word_1409F0F4C)[1];
		v12 = 3;
		v13 = (_DWORD*)(v10[3] + 32i64);
		if ((unsigned __int64)v13 < v10[2] && v13 != dword_140A12138 && *(int*)(v10[3] + 40i64) > 0)
			v11 = (char*)sub_140056BB0(v10, 3u, 0i64);
		sub_14018F2D0(&v54, v11);
		if (v46)
			sub_14018B900((__int64)v46, 0);
		v14 = *(_QWORD**)(v8 + 400);
		v15 = (char*)sub_14018F0E0(&v45, L"FFFFFFFF")[1];
		v16 = (_DWORD*)(v14[3] + 48i64);
		if ((unsigned __int64)v16 < v14[2] && v16 != dword_140A12138 && *(int*)(v14[3] + 56i64) > 0)
			v15 = (char*)sub_140056BB0(v14, 4u, 0i64);
		sub_14018F2D0(&v42, v15);
		if (v46)
			sub_14018B900((__int64)v46, 0);
		v17 = *(_QWORD**)(v8 + 400);
		v18 = (char*)sub_14018F0E0(&v45, L"Default")[1];
		v19 = (_DWORD*)(v17[3] + 64i64);
		if ((unsigned __int64)v19 < v17[2] && v19 != dword_140A12138 && *(int*)(v17[3] + 72i64) > 0)
			v18 = (char*)sub_140056BB0(v17, 5u, 0i64);
		sub_14018F2D0(&v51, v18);
		if (v46)
			sub_14018B900((__int64)v46, 0);
		v20 = *(_QWORD**)(v8 + 400);
		v21 = (char*)sub_14018F0E0(&v56, L"Left")[1];
		v22 = (_DWORD*)(v20[3] + 80i64);
		if ((unsigned __int64)v22 < v20[2] && v22 != dword_140A12138 && *(int*)(v20[3] + 88i64) > 0)
			v21 = (char*)sub_140056BB0(v20, 6u, 0i64);
		sub_14018F2D0(&v45, v21);
		if (v57)
			sub_14018B900(v57, 0);
		v23 = (*(__int64(__fastcall**)(_QWORD*))(*v4 + 16i64))(v4);
		v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v23 + 128) + 16i64))(v23 + 128);
		if (v24)
		{
			*(_QWORD*)(v24 + 8) = v23;
			*(_QWORD*)(v24 + 16) = 0i64;
			*(_DWORD*)(v24 + 24) = 0;
			*(_QWORD*)(v24 + 32) = 0i64;
			*(_QWORD*)(v24 + 40) = 0i64;
			*(_QWORD*)(v24 + 48) = 0i64;
			*(_QWORD*)(v24 + 56) = 0i64;
			*(_QWORD*)(v24 + 64) = 0i64;
			*(_QWORD*)(v24 + 72) = 0i64;
			*(_QWORD*)(v24 + 80) = 0i64;
			*(_QWORD*)v24 = off_140B5EBA0;
			*(_DWORD*)(v24 + 88) = 0;
			*(_QWORD*)(v24 + 96) = 0i64;
		}
		else
		{
			v24 = 0i64;
		}
		*(_QWORD*)(v24 + 80) = v23 + 128;
		sub_1401A4C50(v24 + 24, (int*)word_1409DB474);
		v25 = (int*)v43;
		if (((v44 - v43) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v26 = sub_1401A6C70(v24, (int*)&word_140A31AB8);
			sub_1401A4C50(v26 + 32, v25);
		}
		v27 = v52;
		if (((v53 - (_QWORD)v52) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v28 = sub_1401A6C70(v24, (int*)L"Font");
			sub_1401A4C50(v28 + 32, v27);
		}
		v29 = v46;
		if (((v47 - (_QWORD)v46) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v30 = sub_1401A6C70(v24, (int*)L"Align");
			sub_1401A4C50(v30 + 32, v29);
		}
		v50 = (*(__int64(__fastcall**)(_QWORD*))(*v4 + 16i64))(v4);
		v31 = *(_QWORD*)(v50 + 128);
		v49 = v50 + 128;
		v32 = (*(__int64(__fastcall**)(__int64))(v31 + 16))(v50 + 128);
		v33 = (_QWORD*)v32;
		if (v32)
		{
			*(_QWORD*)(v32 + 8) = v50;
			*(_QWORD*)(v32 + 16) = 0i64;
			*(_DWORD*)(v32 + 24) = 0;
			*(_QWORD*)(v32 + 32) = 0i64;
			*(_QWORD*)(v32 + 40) = 0i64;
			*(_QWORD*)(v32 + 48) = 0i64;
			*(_QWORD*)(v32 + 56) = 0i64;
			*(_QWORD*)(v32 + 64) = 0i64;
			*(_QWORD*)(v32 + 72) = 0i64;
			*(_QWORD*)(v32 + 80) = 0i64;
			*(_QWORD*)v32 = off_140B5EBA0;
			*(_DWORD*)(v32 + 88) = 0;
			*(_QWORD*)(v32 + 96) = 0i64;
		}
		else
		{
			v33 = 0i64;
		}
		v33[10] = v49;
		sub_1401A4C50((__int64)(v33 + 3), (int*)L"Text");
		v34 = (*(__int64(__fastcall**)(_QWORD*))(*v4 + 16i64))(v4);
		v35 = (_QWORD*)sub_1401A7880(v34, v55);
		sub_1401A5A70(v33, v35);
		sub_1401A5A70((_QWORD*)v24, v33);
		sub_140503450((__int64)v62);
		v36 = *v48;
		v44 = 0i64;
		v59 = 0i64;
		v56 = v36;
		v37 = v48[1];
		v61 = 0i64;
		v57 = v37;
		v38 = v48[2];
		v43 = 1i64;
		v58 = v38;
		v60 = 1i64;
		sub_1405042B0(v62, (_QWORD*)v24, (__int64)&v56);
		sub_14012B490(v4, (_QWORD*)v24);
		v39 = (__int64*)&v63;
		v62[0] = (__int64)off_140B6A420;
		do
		{
			v40 = *(v39 - 6);
			v39 -= 11;
			if (v40)
				sub_14018B900(v40, 0);
			if (*v39)
				sub_14018B900(*v39, 0);
			--v12;
		} while (v12 >= 0);
		if (v29)
			sub_14018B900((__int64)v29, 0);
		if (v27)
			sub_14018B900((__int64)v27, 0);
		if (v25)
			sub_14018B900((__int64)v25, 0);
		if (v55)
			sub_14018B900((__int64)v55, 0);
	}
	return 0i64;
}
// 1409DB474: using guessed type __int16 word_1409DB474[];
// 1409F0F4C: using guessed type unsigned __int16 word_1409F0F4C[52];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31D20: using guessed type wchar_t aText_3[5];
// 140A31DB0: using guessed type wchar_t aAlign[6];
// 140B0FE68: using guessed type wchar_t aDefault_12[8];
// 140B0FE78: using guessed type wchar_t aFfffffff_2[9];
// 140B0FEA0: using guessed type wchar_t aLeft_2[5];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 140C63650: using guessed type __int64 qword_140C63650;

