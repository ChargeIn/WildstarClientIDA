//----- (000000014078EA30) ----------------------------------------------------
__int64 __fastcall sub_14078EA30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	unsigned __int64 v4; // rbx
	unsigned __int64 v5; // r8
	__int64 v6; // rax
	unsigned int* v7; // r9
	__int64 v8; // xmm0_8
	__int64 v9; // rax
	unsigned __int64 v10; // r8
	__int64 v11; // rsi
	__int64 v12; // rax
	unsigned int* v13; // r9
	__int64 v14; // rsi
	unsigned __int64 v15; // r8
	__int64 v16; // rax
	__int64 v17; // r9
	__int64 v18; // rsi
	__int64 v19; // rax
	unsigned int* v20; // r9
	__int64 v22; // [rsp+20h] [rbp-18h] BYREF
	int v23; // [rsp+28h] [rbp-10h]

	sub_140057020(a1, aMath, &off_140B50880);
	v2 = a1[2];
	*(_QWORD*)v2 = 0x400921FB54442D18i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = -1i64;
	v5 = -1i64;
	do
		++v5;
	while (aPi_0[v5]);
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)aPi_0, v5);
	v7 = (unsigned int*)(a1[2] - 16i64);
	v22 = v6;
	v23 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v22, v7);
	v8 = qword_140C104A0;
	a1[2] -= 16i64;
	v9 = a1[2];
	*(_DWORD*)(v9 + 8) = 3;
	v10 = -1i64;
	*(_QWORD*)v9 = v8;
	a1[2] += 16i64;
	v11 = a1[2];
	do
		++v10;
	while (aHuge[v10]);
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)aHuge, v10);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v22 = v12;
	v23 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v22, v13);
	a1[2] -= 16i64;
	v14 = a1[2];
	v15 = -1i64;
	do
		++v15;
	while (aFmod[v15]);
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)aFmod, v15);
	v17 = a1[2];
	v22 = v16;
	v23 = 4;
	sub_14005E8E0((__int64)a1, v14 - 16, (int*)&v22, v17);
	a1[2] += 16i64;
	v18 = a1[2];
	do
		++v4;
	while (aMod_5[v4]);
	v19 = sub_140062650((__int64)a1, (unsigned __int64*)aMod_5, v4);
	v20 = (unsigned int*)(a1[2] - 16i64);
	v22 = v19;
	v23 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v18 - 32), (int*)&v22, v20);
	a1[2] -= 16i64;
	return 1i64;
}
// 140B50880: using guessed type char *off_140B50880;
// 140C104A0: using guessed type __int64 qword_140C104A0;

