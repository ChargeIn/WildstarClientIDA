#include "../winhttp.h"

//----- (000000014012AC90) ----------------------------------------------------
__int64 __fastcall sub_14012AC90(_QWORD* a1)
{
	char v2; // r15
	__int64 v3; // rax
	_QWORD* v4; // r13
	__int64 v5; // rax
	_QWORD* v6; // rbx
	unsigned int v7; // ecx
	unsigned __int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rax
	unsigned __int64 v11; // rcx
	_DWORD* v12; // rax
	char* v13; // rax
	void* v14; // r9
	int* v15; // rsi
	__int64 v16; // rax
	__int64 v18; // r14
	_WORD* v19; // r12
	_DWORD* v20; // rax
	__int64 v21; // rdi
	_QWORD* v22; // rbx
	char* v23; // rdx
	_DWORD* v24; // rax
	int* v25; // r15
	__int64 v26; // r14
	__int64 v27; // rbx
	unsigned int* v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // rcx
	_QWORD* v31; // rbx
	char* v32; // rdx
	_DWORD* v33; // rax
	_QWORD* v34; // rbx
	char* v35; // rdx
	_DWORD* v36; // rax
	__int64 v37; // rax
	_QWORD* v38; // rdi
	__int64 v39; // rax
	int* v40; // rsi
	__int64 v41; // rax
	int* v42; // r14
	__int64 v43; // rax
	__int64 v44; // rbx
	_QWORD* v45; // rax
	__int64 v46; // rax
	_QWORD* v47; // rax
	__int64 v49; // [rsp+30h] [rbp-D0h] BYREF
	int* v50; // [rsp+38h] [rbp-C8h]
	__int64 v51; // [rsp+40h] [rbp-C0h]
	__int128 v52; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v53; // [rsp+60h] [rbp-A0h]
	__int64 v54; // [rsp+70h] [rbp-90h] BYREF
	int* v55; // [rsp+78h] [rbp-88h]
	__int64 v56; // [rsp+80h] [rbp-80h]
	__int64 v57; // [rsp+90h] [rbp-70h] BYREF
	__int64 v58; // [rsp+98h] [rbp-68h]
	char v59[48]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v60; // [rsp+E0h] [rbp-20h]
	unsigned int v61; // [rsp+378h] [rbp+278h] BYREF
	__int64 v62; // [rsp+380h] [rbp+280h]
	__int64 v63; // [rsp+388h] [rbp+288h]

	v2 = 0;
	v61 = 0;
	v3 = sub_14012AAF0(a1, 1u);
	v4 = (_QWORD*)v3;
	if (!v3)
		return 0i64;
	LODWORD(v52) = -1;
	sub_14012A290(v3);
	if (!v4[82])
	{
		v5 = (*(__int64(__fastcall**)(_QWORD*))(v4[18] + 16i64))(v4 + 18);
		v6 = (_QWORD*)v5;
		if (v5)
		{
			*(_QWORD*)(v5 + 8) = v4 + 2;
			*(_QWORD*)(v5 + 16) = 0i64;
			*(_DWORD*)(v5 + 24) = 0;
			*(_QWORD*)(v5 + 32) = 0i64;
			*(_QWORD*)(v5 + 40) = 0i64;
			*(_QWORD*)(v5 + 48) = 0i64;
			*(_QWORD*)(v5 + 56) = 0i64;
			*(_QWORD*)(v5 + 64) = 0i64;
			*(_QWORD*)(v5 + 72) = 0i64;
			*(_QWORD*)(v5 + 80) = 0i64;
			*(_DWORD*)(v5 + 88) = 0;
			*(_QWORD*)v5 = off_140B5EBA0;
			*(_QWORD*)(v5 + 96) = 0i64;
		}
		else
		{
			v6 = 0i64;
		}
		v6[10] = v4 + 18;
		sub_1401A4C50((__int64)(v6 + 3), (int*)L"Root");
		v4[82] = v6;
		sub_1401A5A70(v4 + 2, v6);
	}
	v7 = 0;
	v8 = *(_QWORD*)(qword_140C63650 + 768);
	if (v8)
	{
		v9 = *(_QWORD*)(qword_140C63650 + 760);
		v10 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v9 + 8 * v10) + 400i64) != a1)
		{
			v10 = ++v7;
			if (v7 >= v8)
				goto LABEL_11;
		}
		v62 = *(_QWORD*)(v9 + 8i64 * v7);
	}
	else
	{
	LABEL_11:
		v62 = 0i64;
	}
	v11 = a1[2];
	v12 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v12 >= v11)
		goto LABEL_21;
	if (v12 != dword_140A12138 && !*(_DWORD*)(a1[3] + 24i64))
		return 0i64;
	if ((unsigned __int64)v12 >= v11 || v12 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
	{
	LABEL_21:
		v13 = (char*)&unk_1409D053A;
	}
	else
	{
		v13 = (char*)sub_140056BB0(a1, 2u, 0i64);
		if (!v13)
		{
			v14 = &unk_1409D836C;
			goto LABEL_23;
		}
	}
	v2 = 1;
	v14 = (void*)sub_14018F2D0(&v49, v13)[1];
LABEL_23:
	sub_14018EFA0(&v54, (__int64)L"<%s>%s</%s>", L"Text", v14, L"Text");
	if ((v2 & 1) != 0 && v50)
		sub_14018B900((__int64)v50, 0);
	sub_1401A72E0((__int64)v59);
	if ((int)sub_1401A7A60((__int64)v59, v55, (v56 - (__int64)v55) >> 1) < 0)
		sub_140056570(a1, 2u, "invalid xml string");
	v15 = 0i64;
	v63 = 0i64;
	v16 = 0i64;
	while (aFfffffff[++v16] != 0)
		;
	v18 = (2 * v16) >> 1;
	if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v15 = sub_14018B280(2 * (v18 + 1), 0);
		v63 = (__int64)v15 + 2 * v18 + 2;
	}
	sub_1407DB590(v15, (int*)L"FFFFFFFF", 2 * v18);
	v19 = (_WORD*)v15 + v18;
	if (v19)
		*v19 = 0;
	v20 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v20 >= a1[2] || v20 == dword_140A12138 || (unsigned int)(*(_DWORD*)(a1[3] + 40i64) - 3) > 1)
	{
		v27 = qword_140C63678;
		v52 = xmmword_140B7B240;
		v28 = sub_140143880(&v61, a1, 3u, (__m128*) & v52);
		v29 = sub_140142E30(v27, &v49, v28);
		v30 = v63;
		v25 = (int*)v29[1];
		v29[1] = v15;
		v26 = v29[2];
		v29[2] = v19;
		v29[3] = v30;
		if (v50)
			sub_14018B900((__int64)v50, 0);
		sub_1401429A0(qword_140C63678, v61);
		v21 = v62;
	}
	else
	{
		v21 = v62;
		v22 = *(_QWORD**)(v62 + 400);
		v23 = (char*)sub_14018F0E0(&v49, L"FFFFFFFF")[1];
		v24 = (_DWORD*)(v22[3] + 32i64);
		if ((unsigned __int64)v24 < v22[2] && v24 != dword_140A12138 && *(int*)(v22[3] + 40i64) > 0)
			v23 = (char*)sub_140056BB0(v22, 3u, 0i64);
		sub_14018F2D0(&v52, v23);
		if (v50)
			sub_14018B900((__int64)v50, 0);
		v25 = (int*)*((_QWORD*)&v52 + 1);
		v26 = v53;
		if (v15)
			sub_14018B900((__int64)v15, 0);
	}
	v31 = *(_QWORD**)(v21 + 400);
	v32 = (char*)sub_14018F0E0(&v49, L"Default")[1];
	v33 = (_DWORD*)(v31[3] + 48i64);
	if ((unsigned __int64)v33 < v31[2] && v33 != dword_140A12138 && *(int*)(v31[3] + 56i64) > 0)
		v32 = (char*)sub_140056BB0(v31, 4u, 0i64);
	sub_14018F2D0(&v52, v32);
	if (v50)
		sub_14018B900((__int64)v50, 0);
	v34 = *(_QWORD**)(v21 + 400);
	v35 = (char*)sub_14018F0E0(&v57, L"Left")[1];
	v36 = (_DWORD*)(v34[3] + 64i64);
	if ((unsigned __int64)v36 < v34[2] && v36 != dword_140A12138 && *(int*)(v34[3] + 72i64) > 0)
		v35 = (char*)sub_140056BB0(v34, 5u, 0i64);
	sub_14018F2D0(&v49, v35);
	if (v58)
		sub_14018B900(v58, 0);
	v37 = sub_1401A7740((__int64)(v4 + 2), (int*)word_1409DB474);
	v38 = (_QWORD*)v37;
	if (((v26 - (_QWORD)v25) & 0xFFFFFFFFFFFFFFFEui64) != 0)
	{
		v39 = sub_1401A6C70(v37, (int*)&word_140A31AB8);
		sub_1401A4C50(v39 + 32, v25);
	}
	v40 = (int*)*((_QWORD*)&v52 + 1);
	if (((v53 - *((_QWORD*)&v52 + 1)) & 0xFFFFFFFFFFFFFFFEui64) != 0)
	{
		v41 = sub_1401A6C70((__int64)v38, (int*)L"Font");
		sub_1401A4C50(v41 + 32, v40);
	}
	v42 = v50;
	if (((v51 - (_QWORD)v50) & 0xFFFFFFFFFFFFFFFEui64) != 0)
	{
		v43 = sub_1401A6C70((__int64)v38, (int*)L"Align");
		sub_1401A4C50(v43 + 32, v42);
	}
	v44 = v60;
	if (v60)
	{
		while (1)
		{
			v45 = (_QWORD*)(**(__int64(__fastcall***)(__int64))v44)(v44);
			if (v45)
				break;
			v44 = *(_QWORD*)(v44 + 72);
			if (!v44)
				goto LABEL_71;
		}
		v46 = sub_1401A5CA0(v45, (__int64)(v4 + 2));
		v47 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
		sub_1401A5A70(v38, v47);
	}
LABEL_71:
	sub_1401A5A70((_QWORD*)v4[82], v38);
	if (v42)
		sub_14018B900((__int64)v42, 0);
	if (v40)
		sub_14018B900((__int64)v40, 0);
	if (v25)
		sub_14018B900((__int64)v25, 0);
	sub_1401A76A0((__int64)v59);
	if (v55)
		sub_14018B900((__int64)v55, 0);
	return 0i64;
}
// 1409DB474: using guessed type __int16 word_1409DB474[];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A20660: using guessed type wchar_t aRoot[5];
// 140A206A8: using guessed type wchar_t aDefault_6[8];
// 140A206B8: using guessed type wchar_t aLeft_0[5];
// 140A20730: using guessed type wchar_t aSSS_0[12];
// 140A20760: using guessed type wchar_t aFfffffff[9];
// 140A20778: using guessed type wchar_t aFfffffff_0[9];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31D20: using guessed type wchar_t aText_3[5];
// 140A31DB0: using guessed type wchar_t aAlign[6];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63678: using guessed type __int64 qword_140C63678;

