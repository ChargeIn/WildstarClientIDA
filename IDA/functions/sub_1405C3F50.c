//----- (00000001405C3F50) ----------------------------------------------------
__int64 __fastcall sub_1405C3F50(__int64 a1, unsigned int* a2)
{
	int* v3; // rsi
	__int64 v4; // rax
	bool v5; // zf
	__int64 v6; // r14
	_WORD* v7; // rax
	_QWORD* v8; // rax
	unsigned int v9; // ebx
	const wchar_t* v10; // rcx
	__int64 v11; // r9
	int v12; // eax
	__int64 v13; // r9
	_QWORD* v14; // rax
	__int64 v15; // rax
	int* v16; // rbx
	__int64 v18; // [rsp+20h] [rbp-78h]
	__int64 v19; // [rsp+30h] [rbp-68h]
	__int64 v20; // [rsp+40h] [rbp-58h] BYREF
	int* v21; // [rsp+48h] [rbp-50h]
	_WORD* v22; // [rsp+50h] [rbp-48h]
	__int64 v23; // [rsp+58h] [rbp-40h]
	__int64 v24; // [rsp+60h] [rbp-38h] BYREF
	__int64 v25; // [rsp+68h] [rbp-30h]

	v3 = 0i64;
	v21 = 0i64;
	v23 = 0i64;
	v4 = 0i64;
	do
		v5 = asc_140B21E60[++v4] == 0;
	while (!v5);
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v6 + 1), 0);
		v21 = v3;
		v23 = (__int64)v3 + 2 * v6 + 2;
	}
	sub_1407DB590(
		v3,
		(int*)L" \n----------------------------------------------------------------------------------",
		2 * v6);
	v7 = (_WORD*)v3 + v6;
	v22 = v7;
	if (v7)
		*v7 = 0;
	v8 = sub_14018EFA0(&v24, (__int64)L"\n%d players are queued for map %d:\n", a2[1], *a2);
	sub_14001C310(&v20, (int*)v8[1], (int*)v8[2]);
	if (v25)
		sub_14018B900(v25, 0);
	v9 = 0;
	while (v9 < a2[1])
	{
		v10 = L"Dominion";
		v11 = *((_QWORD*)a2 + 1) + 96i64 * v9++;
		v5 = *(_DWORD*)(v11 + 24) == 167;
		LODWORD(v19) = *(_DWORD*)v11;
		v12 = *(_DWORD*)(v11 + 40);
		v13 = *(_QWORD*)(v11 + 16);
		if (v5)
			v10 = L"Exiles";
		LODWORD(v18) = v12;
		v14 = sub_14018EFA0(&v24, (__int64)L"\n%d.   %s   lvl:%d   Faction:%s   Realm:%d\n", v9, v13, v18, v10, v19);
		sub_14001C310(&v20, (int*)v14[1], (int*)v14[2]);
		if (v25)
			sub_14018B900(v25, 0);
	}
	v15 = 0i64;
	do
		v5 = asc_140B21F80[++v15] == 0;
	while (!v5);
	sub_14001C310(
		&v20,
		(int*)L"\n----------------------------------------------------------------------------------",
		(int*)&asc_140B21F80[v15]);
	v16 = v21;
	sub_140003890((__int64*)qword_140C658A0, 3u, 0i64, v21, 0, 0i64);
	if (v16)
		sub_14018B900((__int64)v16, 0);
	return 0i64;
}
// 1405C409A: variable 'v18' is possibly undefined
// 1405C409A: variable 'v19' is possibly undefined
// 140B21D68: using guessed type wchar_t aDominion_0[9];
// 140B21D80: using guessed type wchar_t aDSLvlDFactionS[44];
// 140B21DF0: using guessed type wchar_t aDPlayersAreQue[36];
// 140B21E38: using guessed type wchar_t aExiles[7];
// 140B21E60: using guessed type wchar_t asc_140B21E60[85];
// 140B21F80: using guessed type wchar_t asc_140B21F80[84];
// 140C658A0: using guessed type __int64 qword_140C658A0;

