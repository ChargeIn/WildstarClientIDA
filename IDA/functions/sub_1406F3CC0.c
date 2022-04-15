//----- (00000001406F3CC0) ----------------------------------------------------
__int64 __fastcall sub_1406F3CC0(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v3; // eax
	__int64(__fastcall * *v5)(); // [rsp+20h] [rbp-18h] BYREF
	int v6; // [rsp+28h] [rbp-10h]
	int v7; // [rsp+2Ch] [rbp-Ch]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2])
		return 0i64;
	if (v1 == dword_140A12138)
		return 0i64;
	if ((int)v1[2] <= 0)
		return 0i64;
	v3 = sub_140056D60(a1, 1u);
	if (v3 == 3)
		return 0i64;
	v6 = v3;
	v5 = off_140B6FE30;
	v7 = sub_140056D60(a1, 2u);
	sub_1406B7660(a1, (__int64)&v5);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();

