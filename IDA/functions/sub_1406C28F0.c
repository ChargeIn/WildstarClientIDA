//----- (00000001406C28F0) ----------------------------------------------------
__int64 __fastcall sub_1406C28F0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // r8
	__int64 v10; // [rsp+38h] [rbp+10h]

	v2 = sub_1406C01C0(a1);
	if (!v2)
		return 0i64;
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = 0;
	else
		v4 = sub_140056D60(a1, 2u);
	v5 = *(_QWORD*)(v2 + 1848);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v10 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v10 = *(_QWORD*)(v2 + 1848);
	if (v10 != v5 && (v8 = *(_QWORD*)(v10 + 40)) != 0)
		return sub_140774A40(v6, a1, v8);
	else
		return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

