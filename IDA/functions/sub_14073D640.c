//----- (000000014073D640) ----------------------------------------------------
__int64 __fastcall sub_14073D640(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rbp
	unsigned __int64 v5; // rdi
	_DWORD* v6; // rax
	__int64 v7; // rax
	int* v8; // rsi
	unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v5 = 0i64;
	v6 = (_DWORD*)(a1[3] + 16i64);
	v9 = 0i64;
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || (int)v6[2] <= 0)
	{
		v8 = (int*)&unk_1409D160E;
	}
	else
	{
		v7 = sub_140056BB0(a1, 2u, &v9);
		v5 = v9;
		v8 = (int*)v7;
	}
	sub_1407E4830((int*)(v3 + 24), 0i64, 0x400ui64);
	if (v5 >= 0x400)
		v5 = 1023i64;
	sub_1407DB590((int*)(v3 + 24), v8, v5);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

