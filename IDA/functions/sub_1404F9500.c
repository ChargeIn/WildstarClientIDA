//----- (00000001404F9500) ----------------------------------------------------
__int64 __fastcall sub_1404F9500(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdx

	v2 = sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
		{
			v4 = sub_140056AB0(a1, 2u);
			if (v4)
			{
				v5 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
				if (v5)
					sub_1404F73E0(v2, v5);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

