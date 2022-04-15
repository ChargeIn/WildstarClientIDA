//----- (0000000140691F90) ----------------------------------------------------
__int64 __fastcall sub_140691F90(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	unsigned __int64 v5; // r8
	_DWORD* v6; // rdx

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
			if (v4)
			{
				v5 = a1[2];
				v6 = dword_140A12138;
				if (a1[3] + 16i64 < v5)
					v6 = (_DWORD*)(a1[3] + 16i64);
				*(_QWORD*)v5 = *(_QWORD*)v6;
				*(_DWORD*)(v5 + 8) = v6[2];
				a1[2] += 16i64;
				*(_DWORD*)(v4 + 280) = sub_1400578C0((__int64)a1);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658A0: using guessed type __int64 qword_140C658A0;

