//----- (000000014040B680) ----------------------------------------------------
_QWORD* __fastcall sub_14040B680(_QWORD* a1, __int64 a2, int a3)
{
	int* v6; // rax
	int* v7; // rax
	int* v8; // rax
	int* v9; // rax
	int* v10; // rdi
	__int64 v11; // rax
	bool v12; // zf
	__int64 v13; // r15
	_WORD* v14; // rax
	int* v15; // rax
	int* v16; // rax
	int* v17; // rdi
	__int64 v18; // rax
	__int64 v19; // r15
	_WORD* v20; // rax
	int* v21; // rdi
	__int64 v22; // rax
	__int64 v23; // r15
	_WORD* v24; // rax
	int* v25; // rdi
	__int64 v26; // rax
	__int64 v27; // rsi
	_WORD* v28; // rax
	__int64 v29; // rbx
	_QWORD* v30; // rax
	char v32[8]; // [rsp+20h] [rbp-60h] BYREF
	int* v33; // [rsp+28h] [rbp-58h]
	_WORD* v34; // [rsp+30h] [rbp-50h]
	__int64 v35; // [rsp+38h] [rbp-48h]
	__int64 v36; // [rsp+40h] [rbp-40h] BYREF
	int* v37; // [rsp+48h] [rbp-38h]
	int* v38; // [rsp+50h] [rbp-30h]
	int* v39; // [rsp+58h] [rbp-28h]
	__int64 v40; // [rsp+60h] [rbp-20h] BYREF
	int* v41; // [rsp+68h] [rbp-18h]
	int* v42; // [rsp+70h] [rbp-10h]
	int* v43; // [rsp+78h] [rbp-8h]

	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v6 = sub_14018B280(16i64, 0);
	a1[1] = v6;
	a1[2] = v6;
	a1[3] = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	a1[5] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	v7 = sub_14018B280(16i64, 0);
	a1[5] = v7;
	a1[6] = v7;
	a1[7] = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	a1[9] = 0i64;
	a1[10] = 0i64;
	a1[11] = 0i64;
	v8 = sub_14018B280(16i64, 0);
	a1[9] = v8;
	a1[10] = v8;
	a1[11] = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	a1[13] = 0i64;
	a1[14] = 0i64;
	a1[15] = 0i64;
	v9 = sub_14018B280(16i64, 0);
	a1[13] = v9;
	a1[14] = v9;
	a1[15] = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	if (a3)
	{
		v10 = 0i64;
		v33 = 0i64;
		v35 = 0i64;
		v11 = 0i64;
		do
			v12 = asc_140B66940[++v11] == 0;
		while (!v12);
		v13 = (2 * v11) >> 1;
		if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v10 = sub_14018B280(2 * (v13 + 1), 0);
			v33 = v10;
			v35 = (__int64)v10 + 2 * v13 + 2;
		}
		sub_1407DB590(v10, (int*)L" \t\r\n", 2 * v13);
		v14 = (_WORD*)v10 + v13;
		v34 = v14;
		if (v14)
			*v14 = 0;
		sub_14018FBD0(a2, a1, a1 + 12, (__int64)v32);
		if (v10)
			sub_14018B900((__int64)v10, 0);
	}
	else if ((_QWORD*)a2 != a1 + 12)
	{
		sub_14001C480((__int64)(a1 + 12), *(int**)(a2 + 8), *(int**)(a2 + 16));
	}
	v15 = sub_14018B280(16i64, 0);
	v41 = v15;
	v42 = v15;
	v43 = v15 + 4;
	if (v15)
		*(_WORD*)v15 = 0;
	v16 = sub_14018B280(16i64, 0);
	v37 = v16;
	v38 = v16;
	v39 = v16 + 4;
	if (v16)
		*(_WORD*)v16 = 0;
	v17 = 0i64;
	v33 = 0i64;
	v35 = 0i64;
	v18 = 0i64;
	do
		v12 = asc_140B66940[++v18] == 0;
	while (!v12);
	v19 = (2 * v18) >> 1;
	if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v17 = sub_14018B280(2 * (v19 + 1), 0);
		v33 = v17;
		v35 = (__int64)v17 + 2 * v19 + 2;
	}
	sub_1407DB590(v17, (int*)L" \t\r\n", 2 * v19);
	v20 = (_WORD*)v17 + v19;
	v34 = v20;
	if (v20)
		*v20 = 0;
	sub_14018FBD0((__int64)(a1 + 12), a1 + 4, a1 + 12, (__int64)v32);
	if (v17)
		sub_14018B900((__int64)v17, 0);
	v21 = 0i64;
	v33 = 0i64;
	v35 = 0i64;
	v22 = 0i64;
	do
		v12 = asc_140B66940[++v22] == 0;
	while (!v12);
	v23 = (2 * v22) >> 1;
	if ((unsigned __int64)(v23 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v21 = sub_14018B280(2 * (v23 + 1), 0);
		v33 = v21;
		v35 = (__int64)v21 + 2 * v23 + 2;
	}
	sub_1407DB590(v21, (int*)L" \t\r\n", 2 * v23);
	v24 = (_WORD*)v21 + v23;
	v34 = v24;
	if (v24)
		*v24 = 0;
	sub_14018FBD0((__int64)(a1 + 12), &v40, a1 + 12, (__int64)v32);
	if (v21)
		sub_14018B900((__int64)v21, 0);
	v25 = 0i64;
	v33 = 0i64;
	v35 = 0i64;
	v26 = 0i64;
	do
		v12 = asc_140B66960[++v26] == 0;
	while (!v12);
	v27 = (2 * v26) >> 1;
	if ((unsigned __int64)(v27 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v25 = sub_14018B280(2 * (v27 + 1), 0);
		v33 = v25;
		v35 = (__int64)v25 + 2 * v27 + 2;
	}
	sub_1407DB590(v25, (int*)L"@-.", 2 * v27);
	v28 = (_WORD*)v25 + v27;
	v34 = v28;
	if (v28)
		*v28 = 0;
	sub_14018FBD0((__int64)&v40, &v36, a1 + 8, (__int64)v32);
	if (v25)
		sub_14018B900((__int64)v25, 0);
	v29 = (__int64)v37;
	if (v37 != v38)
	{
		v30 = sub_14018EFA0(&v36, (__int64)L"%s %s", a1[5], v37);
		if (v30 != a1 + 4)
			sub_14001C480((__int64)(a1 + 4), (int*)v30[1], (int*)v30[2]);
		if (v37)
			sub_14018B900((__int64)v37, 0);
	}
	if (v29)
		sub_14018B900(v29, 0);
	if (v41)
		sub_14018B900((__int64)v41, 0);
	return a1;
}
// 140B66940: using guessed type wchar_t asc_140B66940[5];
// 140B66950: using guessed type wchar_t aSS_16[6];
// 140B66960: using guessed type wchar_t asc_140B66960[4];
// 14040B680: using guessed type char var_60[8];

