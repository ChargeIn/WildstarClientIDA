//----- (00000001406920A0) ----------------------------------------------------
__int64 __fastcall sub_1406920A0(_QWORD* a1)
{
	int v1; // ebx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	_DWORD* v6; // rdx
	int v7; // ecx
	int v8; // r8d

	v1 = 1;
	v3 = sub_140056AB0(a1, 1u);
	if (v3)
	{
		v4 = *(_QWORD*)(v3 + 8);
		if (v4)
		{
			v5 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v4 + 8), *(_QWORD*)(v4 + 16));
			if (v5)
			{
				v6 = dword_140A12138;
				if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
					v6 = (_DWORD*)(a1[3] + 16i64);
				v7 = 0;
				v8 = v6[2];
				if (!v8 || v8 == 1 && !*v6)
					v1 = 0;
				*(_DWORD*)(v5 + 4) &= ~1u;
				LOBYTE(v7) = v1 != 0;
				*(_DWORD*)(v5 + 4) |= v7;
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658A0: using guessed type __int64 qword_140C658A0;

