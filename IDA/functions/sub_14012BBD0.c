//----- (000000014012BBD0) ----------------------------------------------------
__int64 __fastcall sub_14012BBD0(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rbp
	__int64 v4; // rdi
	__int64 v5; // rax
	_QWORD* v6; // rbx
	_QWORD* v7; // r14
	unsigned int v8; // ecx
	unsigned __int64 v9; // rdx
	__int64 v10; // r8
	__int64 v11; // rax
	_DWORD* v12; // rax
	_QWORD* v13; // rbx
	char* v14; // rdx
	_DWORD* v15; // rax
	_QWORD* v16; // rbx
	char* v17; // rdx
	_DWORD* v18; // rax
	_QWORD* v19; // rbx
	char* v20; // rdx
	_DWORD* v21; // rax
	__int64 v22; // rax
	int* v23; // rsi
	_QWORD* v24; // rbp
	__int64 v25; // rax
	int* v26; // rbx
	__int64 v27; // rax
	int* v28; // rdi
	__int64 v29; // rax
	__int64 v31; // [rsp+20h] [rbp-98h] BYREF
	int* v32; // [rsp+28h] [rbp-90h]
	__int64 v33; // [rsp+30h] [rbp-88h]
	__int64 v34; // [rsp+40h] [rbp-78h] BYREF
	int* v35; // [rsp+48h] [rbp-70h]
	__int64 v36; // [rsp+50h] [rbp-68h]
	__int64 v37; // [rsp+60h] [rbp-58h] BYREF
	int* v38; // [rsp+68h] [rbp-50h]
	__int64 v39; // [rsp+70h] [rbp-48h]
	__int64 v40; // [rsp+80h] [rbp-38h] BYREF
	__int64 v41; // [rsp+88h] [rbp-30h]

	v2 = sub_14012AAF0(a1, 1u);
	v3 = (_QWORD*)v2;
	if (v2)
	{
		LODWORD(v31) = -1;
		sub_14012A290(v2);
		v4 = 0i64;
		if (!v3[82])
		{
			v5 = (*(__int64(__fastcall**)(_QWORD*))(v3[18] + 16i64))(v3 + 18);
			v6 = (_QWORD*)v5;
			if (v5)
			{
				*(_QWORD*)(v5 + 8) = v3 + 2;
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
			v6[10] = v3 + 18;
			sub_1401A4C50((__int64)(v6 + 3), (int*)L"Root");
			v3[82] = v6;
			sub_1401A5A70(v3 + 2, v6);
		}
		v7 = (_QWORD*)sub_14012B2B0((__int64)v3, a1);
		if (v7)
		{
			v8 = 0;
			v9 = *(_QWORD*)(qword_140C63650 + 768);
			if (v9)
			{
				v10 = *(_QWORD*)(qword_140C63650 + 760);
				v11 = 0i64;
				while (*(_QWORD**)(*(_QWORD*)(v10 + 8 * v11) + 400i64) != a1)
				{
					v11 = ++v8;
					if (v8 >= v9)
						goto LABEL_14;
				}
				v4 = *(_QWORD*)(v10 + 8i64 * v8);
			}
		LABEL_14:
			v12 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
			{
				v13 = *(_QWORD**)(v4 + 400);
				v14 = (char*)sub_14018F0E0(&v37, word_1409D8414)[1];
				v15 = (_DWORD*)(v13[3] + 16i64);
				if ((unsigned __int64)v15 < v13[2] && v15 != dword_140A12138 && *(int*)(v13[3] + 24i64) > 0)
					v14 = (char*)sub_140056BB0(v13, 2u, 0i64);
				sub_14018F2D0(&v31, v14);
				if (v38)
					sub_14018B900((__int64)v38, 0);
				v16 = *(_QWORD**)(v4 + 400);
				v17 = (char*)sub_14018F0E0(&v37, word_1409D8434)[1];
				v18 = (_DWORD*)(v16[3] + 32i64);
				if ((unsigned __int64)v18 < v16[2] && v18 != dword_140A12138 && *(int*)(v16[3] + 40i64) > 0)
					v17 = (char*)sub_140056BB0(v16, 3u, 0i64);
				sub_14018F2D0(&v34, v17);
				if (v38)
					sub_14018B900((__int64)v38, 0);
				v19 = *(_QWORD**)(v4 + 400);
				v20 = (char*)sub_14018F0E0(&v40, word_1409D844C)[1];
				v21 = (_DWORD*)(v19[3] + 48i64);
				if ((unsigned __int64)v21 < v19[2] && v21 != dword_140A12138 && *(int*)(v19[3] + 56i64) > 0)
					v20 = (char*)sub_140056BB0(v19, 4u, 0i64);
				sub_14018F2D0(&v37, v20);
				if (v41)
					sub_14018B900(v41, 0);
				v22 = sub_1401A7740((__int64)(v3 + 2), (int*)L"IMG");
				v23 = v32;
				v24 = (_QWORD*)v22;
				if (((v33 - (_QWORD)v32) & 0xFFFFFFFFFFFFFFFEui64) != 0)
				{
					v25 = sub_1401A6C70(v22, (int*)L"Image");
					sub_1401A4C50(v25 + 32, v23);
				}
				v26 = v35;
				if (((v36 - (_QWORD)v35) & 0xFFFFFFFFFFFFFFFEui64) != 0)
				{
					v27 = sub_1401A6C70((__int64)v24, (int*)L"Width");
					sub_1401A4C50(v27 + 32, v26);
				}
				v28 = v38;
				if (((v39 - (_QWORD)v38) & 0xFFFFFFFFFFFFFFFEui64) != 0)
				{
					v29 = sub_1401A6C70((__int64)v24, (int*)L"Height");
					sub_1401A4C50(v29 + 32, v28);
				}
				sub_1401A5A70(v7, v24);
				if (v28)
					sub_14018B900((__int64)v28, 0);
				if (v26)
					sub_14018B900((__int64)v26, 0);
				if (v23)
					sub_14018B900((__int64)v23, 0);
			}
		}
	}
	return 0i64;
}
// 1409D8414: using guessed type unsigned __int16 word_1409D8414[16];
// 1409D8434: using guessed type unsigned __int16 word_1409D8434[12];
// 1409D844C: using guessed type unsigned __int16 word_1409D844C[16];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A207A0: using guessed type wchar_t aRoot_2[5];
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A31AD0: using guessed type wchar_t aImage_0[6];
// 140A31D70: using guessed type wchar_t aImg[4];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140C63650: using guessed type __int64 qword_140C63650;

