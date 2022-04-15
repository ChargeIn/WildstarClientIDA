//----- (000000014041C7A0) ----------------------------------------------------
__int64 __fastcall sub_14041C7A0(_QWORD* a1)
{
	int* v2; // rsi
	int* v3; // rax
	int* v4; // rbx
	int* v5; // rax
	__int64 v6; // rax
	int v8; // eax
	__int16* v9; // rax
	char* v10; // rax
	int* v11; // rax
	_QWORD* v12; // rax
	int* v13; // rax
	__int64 v14; // rax
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	char v18[8]; // [rsp+20h] [rbp-128h] BYREF
	int* v19; // [rsp+28h] [rbp-120h]
	int* v20; // [rsp+30h] [rbp-118h]
	int* v21; // [rsp+38h] [rbp-110h]
	__int64 v22; // [rsp+40h] [rbp-108h] BYREF
	__int64 v23; // [rsp+48h] [rbp-100h]
	__int64(__fastcall * *v24)(); // [rsp+60h] [rbp-E8h] BYREF
	char v25[184]; // [rsp+68h] [rbp-E0h] BYREF
	__int128 v26; // [rsp+120h] [rbp-28h]
	int* v27; // [rsp+130h] [rbp-18h]

	v2 = sub_140417BF0(a1, 1u);
	if (!v2)
	{
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D08F7, 0i64);
		return 1i64;
	}
	v3 = sub_14018B280(16i64, 0);
	v4 = v3;
	v19 = v3;
	v20 = v3;
	v21 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	sub_1400B6F30((__int64)&v24);
	v24 = off_140B69230;
	v27 = 0i64;
	v26 = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v26 = v5;
	*((_QWORD*)&v26 + 1) = v5;
	v27 = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	v6 = 0i64;
	while (a1n[++v6] != 0)
		;
	sub_14001C480((__int64)v25, (int*)L"$1n", (int*)&a1n[v6]);
	v8 = dword_140C45FC0;
	if (*(_DWORD*)qword_140C63750 < dword_140C45FC0)
		v8 = *(_DWORD*)qword_140C63750;
	if (!byte_140C45FD0[v8])
	{
		v13 = sub_14018B280(96i64, 0);
		if (v13)
		{
			v12 = (_QWORD*)sub_1404DDAF0((__int64)v13, v2[119]);
			goto LABEL_21;
		}
	LABEL_20:
		v12 = 0i64;
		goto LABEL_21;
	}
	v9 = sub_14034BDD0((__int64)byte_140C45FD0, v2[119]);
	v10 = (char*)sub_14018EFA0(&v22, (__int64)L"%s - [%d]", v9, (unsigned int)*v2);
	if (v10 != v18)
	{
		sub_14001C480((__int64)v18, *((int**)v10 + 1), *((int**)v10 + 2));
		v4 = v19;
	}
	if (v23)
		sub_14018B900(v23, 0);
	v11 = sub_14018B280(96i64, 0);
	if (!v11)
		goto LABEL_20;
	v12 = (_QWORD*)sub_1404DDB40((__int64)v11, v4);
LABEL_21:
	sub_1400B7480((__int64)&v24, v12);
	v14 = sub_1400B7660(&v24);
	v15 = (unsigned __int64*)sub_14018F0E0(&v22, *(unsigned __int16**)(v14 + 8))[1];
	if (v15)
	{
		v16 = -1i64;
		do
			++v16;
		while (*((_BYTE*)v15 + v16));
		sub_140058710((__int64)a1, v15, v16);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v23)
		sub_14018B900(v23, 0);
	if ((_QWORD)v26)
		sub_14018B900(v26, 0);
	sub_1400B7390(&v24);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 1i64;
}
// 140AFA1D8: using guessed type wchar_t aSD_5[10];
// 140AFA2B0: using guessed type wchar_t a1n[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C45FC0: using guessed type int dword_140C45FC0;
// 140C45FD0: using guessed type _BYTE byte_140C45FD0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 14041C7A0: using guessed type char var_E0[184];
// 14041C7A0: using guessed type char var_128[8];

