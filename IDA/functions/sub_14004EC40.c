//----- (000000014004EC40) ----------------------------------------------------
__int64 __fastcall sub_14004EC40(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64* v3; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rax
	int v6; // eax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v3 = (__int64*)sub_140056AB0(a1, 1u);
		if (v3)
		{
			v4 = *v3;
			if (*v3)
			{
				v5 = (_DWORD*)(a1[3] + 16i64);
				if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
					v6 = 0;
				else
					v6 = sub_140056D60(a1, 2u);
				*(_DWORD*)(v4 + 368) = v6;
				sub_14004CF30(v4);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

