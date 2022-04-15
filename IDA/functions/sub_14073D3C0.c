//----- (000000014073D3C0) ----------------------------------------------------
__int64 __fastcall sub_14073D3C0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	_QWORD* v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // [rsp+20h] [rbp-48h] BYREF
	__int64 v9; // [rsp+28h] [rbp-40h]
	__int64 v10; // [rsp+40h] [rbp-28h] BYREF
	__int64 v11; // [rsp+48h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v5 = sub_14018F2D0(&v10, (char*)(v3 + 24));
	v6 = (unsigned __int64*)sub_14018F0E0(&v8, (unsigned __int16*)v5[1])[1];
	if (v6)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)v6 + v7));
		sub_140058710((__int64)a1, v6, v7);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v9)
		sub_14018B900(v9, 0);
	if (v11)
		sub_14018B900(v11, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

