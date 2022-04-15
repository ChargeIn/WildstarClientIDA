//----- (000000014012C5B0) ----------------------------------------------------
__int64 __fastcall sub_14012C5B0(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // rbp
	__int64 v4; // rbx
	__int64 v5; // rax
	_QWORD* v6; // rdi
	unsigned int v7; // ecx
	unsigned __int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rax
	__int64 v11; // rdi
	_QWORD* v12; // r14
	_WORD* v13; // r8
	int v14; // edx
	int v15; // eax
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
	__int64 v30; // [rsp+20h] [rbp-98h] BYREF
	int* v31; // [rsp+28h] [rbp-90h]
	__int64 v32; // [rsp+30h] [rbp-88h]
	__int64 v33; // [rsp+40h] [rbp-78h] BYREF
	int* v34; // [rsp+48h] [rbp-70h]
	__int64 v35; // [rsp+50h] [rbp-68h]
	__int64 v36; // [rsp+60h] [rbp-58h] BYREF
	int* v37; // [rsp+68h] [rbp-50h]
	__int64 v38; // [rsp+70h] [rbp-48h]
	__int64 v39; // [rsp+80h] [rbp-38h] BYREF
	__int64 v40; // [rsp+88h] [rbp-30h]

	result = sub_14012AAF0(a1, 1u);
	v3 = (_QWORD*)result;
	if (result)
	{
		LODWORD(v30) = -1;
		sub_14012A290(result);
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
			v11 = *(_QWORD*)(v9 + 8i64 * v7);
		}
		else
		{
		LABEL_11:
			v11 = 0i64;
		}
		v12 = *(_QWORD**)(v3[82] + 56i64);
		if (!v12
			|| (!(*(__int64(__fastcall**)(_QWORD*))(*v12 + 48i64))(v12)
				? (v13 = (_WORD*)sub_1401A4F40((__int64)(v12 + 3)))
				: (v13 = 0i64),
				*v13 != 84))
		{
		LABEL_21:
			sub_140056830(a1, (unsigned __int64*)"Need to add a table before you can add a table row!");
		}
		LOWORD(v14) = *v13;
		while ((_WORD)v14)
		{
			v14 = (unsigned __int16)v13[v4 + 1];
			v15 = (unsigned __int16)word_140A31D40[++v4];
			if (v14 != v15)
				goto LABEL_21;
		}
		sub_14012B580(&v30, (__int64)a1, 2u, word_1409D8504);
		v16 = *(_QWORD**)(v11 + 400);
		v17 = (char*)sub_14018F0E0(&v36, word_1409D851C)[1];
		v18 = (_DWORD*)(v16[3] + 32i64);
		if ((unsigned __int64)v18 < v16[2] && v18 != dword_140A12138 && *(int*)(v16[3] + 40i64) > 0)
			v17 = (char*)sub_140056BB0(v16, 3u, 0i64);
		sub_14018F2D0(&v33, v17);
		if (v37)
			sub_14018B900((__int64)v37, 0);
		v19 = *(_QWORD**)(v11 + 400);
		v20 = (char*)sub_14018F0E0(&v39, word_1409D8474)[1];
		v21 = (_DWORD*)(v19[3] + 48i64);
		if ((unsigned __int64)v21 < v19[2] && v21 != dword_140A12138 && *(int*)(v19[3] + 56i64) > 0)
			v20 = (char*)sub_140056BB0(v19, 4u, 0i64);
		sub_14018F2D0(&v36, v20);
		if (v40)
			sub_14018B900(v40, 0);
		v22 = sub_1401A7740((__int64)(v3 + 2), (int*)&word_1409DB514);
		v23 = v31;
		v24 = (_QWORD*)v22;
		if (((v32 - (_QWORD)v31) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v25 = sub_1401A6C70(v22, (int*)&word_140A31AB8);
			sub_1401A4C50(v25 + 32, v23);
		}
		v26 = v34;
		if (((v35 - (_QWORD)v34) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v27 = sub_1401A6C70((__int64)v24, (int*)L"Font");
			sub_1401A4C50(v27 + 32, v26);
		}
		v28 = v37;
		if (((v38 - (_QWORD)v37) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v29 = sub_1401A6C70((__int64)v24, (int*)L"Align");
			sub_1401A4C50(v29 + 32, v28);
		}
		sub_1401A5A70(v12, v24);
		if (v28)
			sub_14018B900((__int64)v28, 0);
		if (v26)
			sub_14018B900((__int64)v26, 0);
		if (v23)
			sub_14018B900((__int64)v23, 0);
		return 0i64;
	}
	return result;
}
// 1409D8474: using guessed type unsigned __int16 word_1409D8474[72];
// 1409D8504: using guessed type unsigned __int16 word_1409D8504[12];
// 1409D851C: using guessed type unsigned __int16 word_1409D851C[12];
// 1409DB514: using guessed type __int16 word_1409DB514;
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A20908: using guessed type wchar_t aRoot_5[5];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31D40: using guessed type __int16 word_140A31D40[];
// 140A31DB0: using guessed type wchar_t aAlign[6];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140C63650: using guessed type __int64 qword_140C63650;

