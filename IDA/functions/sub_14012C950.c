//----- (000000014012C950) ----------------------------------------------------
__int64 __fastcall sub_14012C950(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // r15
	__int64 v4; // rbx
	__int64 v5; // rax
	_QWORD* v6; // rdi
	unsigned int v7; // ecx
	unsigned __int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rax
	__int64 v11; // rbp
	_DWORD* v12; // rax
	__int64* v13; // rdi
	_WORD* v14; // r9
	__int64 v15; // r8
	int v16; // edx
	int v17; // eax
	_QWORD* v18; // r13
	int v19; // edx
	int v20; // eax
	_QWORD* v21; // rbx
	char* v22; // rdx
	_DWORD* v23; // rax
	unsigned int v24; // edi
	_QWORD* v25; // rbx
	char* v26; // rax
	_DWORD* v27; // rdx
	_QWORD* v28; // rbx
	char* v29; // rdx
	_DWORD* v30; // rax
	__int64 v31; // rbx
	_QWORD* v32; // rbp
	__int64 v33; // rax
	int* v34; // r15
	_QWORD* v35; // r14
	_QWORD* v36; // r12
	int* v37; // rbx
	__int64 v38; // rax
	int* v39; // rdi
	__int64 v40; // rax
	int* v41; // rsi
	__int64 v42; // rax
	__int64 v43; // [rsp+20h] [rbp-C8h] BYREF
	int* v44; // [rsp+28h] [rbp-C0h]
	__int64 v45; // [rsp+30h] [rbp-B8h]
	__int64 v46; // [rsp+40h] [rbp-A8h] BYREF
	int* v47; // [rsp+48h] [rbp-A0h]
	__int64 v48; // [rsp+50h] [rbp-98h]
	__int64 v49; // [rsp+60h] [rbp-88h] BYREF
	int* v50; // [rsp+68h] [rbp-80h]
	__int64 v51; // [rsp+70h] [rbp-78h]
	__int64 v52; // [rsp+80h] [rbp-68h] BYREF
	__int64 v53; // [rsp+88h] [rbp-60h]
	__int64 v54; // [rsp+A0h] [rbp-48h] BYREF
	int* v55; // [rsp+A8h] [rbp-40h]

	result = sub_14012AAF0(a1, 1u);
	v3 = (_QWORD*)result;
	if (result)
	{
		LODWORD(v46) = -1;
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
		v12 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
		{
			v13 = *(__int64**)(v3[82] + 56i64);
			if (!v13
				|| (!(*(__int64(__fastcall**)(__int64*))(*v13 + 48))(v13)
					? (v14 = (_WORD*)sub_1401A4F40((__int64)(v13 + 3)))
					: (v14 = 0i64),
					v15 = 0i64,
					*v14 != 84))
			{
			LABEL_25:
				sub_140056830(a1, (unsigned __int64*)"Need to add a table before you can add a table row!");
			}
			LOWORD(v16) = *v14;
			while ((_WORD)v16)
			{
				v16 = (unsigned __int16)v14[v15 + 1];
				v17 = (unsigned __int16)word_140A31D42[v15++];
				if (v16 != v17)
					goto LABEL_25;
			}
			v18 = (_QWORD*)v13[7];
			if (!v18 || (v15 = sub_1400F9B40(v13[7]), *(_WORD*)v15 != 116))
				LABEL_31:
			sub_140056830(a1, (unsigned __int64*)"Need to add a table row before you can add a table data!", v15);
			LOWORD(v19) = 116;
			while ((_WORD)v19)
			{
				v19 = *(unsigned __int16*)(v15 + 2 * v4 + 2);
				v20 = (unsigned __int16)word_1409DB516[v4++];
				if (v19 != v20)
					goto LABEL_31;
			}
			v21 = *(_QWORD**)(v11 + 400);
			v22 = (char*)sub_14018F0E0(&v43, word_1409D853C)[1];
			v23 = (_DWORD*)(v21[3] + 16i64);
			if ((unsigned __int64)v23 < v21[2] && v23 != dword_140A12138 && *(int*)(v21[3] + 24i64) > 0)
				v22 = (char*)sub_140056BB0(v21, 2u, 0i64);
			sub_14018F2D0(&v54, v22);
			if (v44)
				sub_14018B900((__int64)v44, 0);
			v24 = sub_140056E70(a1, 3);
			sub_14012B580(&v46, (__int64)a1, 4u, word_1409D855C);
			v25 = *(_QWORD**)(v11 + 400);
			v26 = (char*)sub_14018F0E0(&v43, word_1409D85A4)[1];
			v27 = (_DWORD*)(v25[3] + 64i64);
			if ((unsigned __int64)v27 < v25[2] && v27 != dword_140A12138 && *(int*)(v25[3] + 72i64) > 0)
				v26 = (char*)sub_140056BB0(v25, 5u, 0i64);
			sub_14018F2D0(&v49, v26);
			if (v44)
				sub_14018B900((__int64)v44, 0);
			v28 = *(_QWORD**)(v11 + 400);
			v29 = (char*)sub_14018F0E0(&v52, word_1409D85D4)[1];
			v30 = (_DWORD*)(v28[3] + 80i64);
			if ((unsigned __int64)v30 < v28[2] && v30 != dword_140A12138 && *(int*)(v28[3] + 88i64) > 0)
				v29 = (char*)sub_140056BB0(v28, 6u, 0i64);
			sub_14018F2D0(&v43, v29);
			if (v53)
				sub_14018B900(v53, 0);
			v31 = (__int64)(v3 + 2);
			v32 = (_QWORD*)sub_1401A7740((__int64)(v3 + 2), (int*)&word_1409DB584);
			v33 = sub_1401A7740((__int64)(v3 + 2), (int*)L"Text");
			v34 = v55;
			v35 = (_QWORD*)v33;
			v36 = (_QWORD*)sub_1401A7880(v31, v55);
			if (v24)
				sub_14010ADB0((__int64)v32, (int*)L"Width", v24);
			v37 = v47;
			if (((v48 - (_QWORD)v47) & 0xFFFFFFFFFFFFFFFEui64) != 0)
			{
				v38 = sub_1401A6C70((__int64)v35, (int*)&word_140A31AB8);
				sub_1401A4C50(v38 + 32, v37);
			}
			v39 = v50;
			if (((v51 - (_QWORD)v50) & 0xFFFFFFFFFFFFFFFEui64) != 0)
			{
				v40 = sub_1401A6C70((__int64)v35, (int*)L"Font");
				sub_1401A4C50(v40 + 32, v39);
			}
			v41 = v44;
			if (((v45 - (_QWORD)v44) & 0xFFFFFFFFFFFFFFFEui64) != 0)
			{
				v42 = sub_1401A6C70((__int64)v32, (int*)L"Align");
				sub_1401A4C50(v42 + 32, v41);
			}
			sub_1401A5A70(v35, v36);
			sub_1401A5A70(v32, v35);
			sub_1401A5A70(v18, v32);
			if (v41)
				sub_14018B900((__int64)v41, 0);
			if (v39)
				sub_14018B900((__int64)v39, 0);
			if (v37)
				sub_14018B900((__int64)v37, 0);
			if (v34)
				sub_14018B900((__int64)v34, 0);
			return 0i64;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 1409D853C: using guessed type unsigned __int16 word_1409D853C[12];
// 1409D855C: using guessed type unsigned __int16 word_1409D855C[36];
// 1409D85A4: using guessed type unsigned __int16 word_1409D85A4[20];
// 1409D85D4: using guessed type unsigned __int16 word_1409D85D4[24];
// 1409DB514: using guessed type __int16 word_1409DB514;
// 1409DB516: using guessed type __int16 word_1409DB516[55];
// 1409DB584: using guessed type __int16 word_1409DB584;
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A20880: using guessed type wchar_t aRoot_6[5];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31D20: using guessed type wchar_t aText_3[5];
// 140A31D40: using guessed type __int16 word_140A31D40[];
// 140A31D42: using guessed type __int16 word_140A31D42[];
// 140A31DB0: using guessed type wchar_t aAlign[6];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140C63650: using guessed type __int64 qword_140C63650;

