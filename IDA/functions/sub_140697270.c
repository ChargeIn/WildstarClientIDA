//----- (0000000140697270) ----------------------------------------------------
__int64 __fastcall sub_140697270(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rdi
	_DWORD* v6; // rcx
	int v7; // eax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = (_DWORD*)a1[3];
				if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || (int)v6[2] <= 0)
					v7 = 0;
				else
					v7 = sub_140056D60(a1, 1u);
				sub_14057ED50(v5, v7);
			}
		}
	}
	return 0i64;
}
// 1406972A0: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

