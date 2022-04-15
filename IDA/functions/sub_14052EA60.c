//----- (000000014052EA60) ----------------------------------------------------
__int64 __fastcall sub_14052EA60(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	unsigned int v4; // ebx
	unsigned int(__fastcall * **v5)(_QWORD); // rcx
	__int64 v6; // rax

	v2 = sub_14052E9B0(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = -1;
		else
			v4 = sub_140056D60(a1, 2u);
		v5 = *(unsigned int(__fastcall****)(_QWORD))(v2 + 1152);
		if (!v5 || v4 != (**v5)(v5))
		{
			if (qword_140C658F8)
				v6 = sub_140448420((__int64)v5, v4);
			else
				v6 = 0i64;
			sub_140529B60(v2, v6);
		}
	}
	return 0i64;
}
// 14052EACF: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658F8: using guessed type __int64 qword_140C658F8;

