//----- (0000000140591CD0) ----------------------------------------------------
__int64 __fastcall sub_140591CD0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // ebx
	__int64* v3; // rax
	__int64 v4; // rax
	__int64 v6; // r9
	__int64 v7; // r10
	__int64 v8; // rcx

	v2 = 0;
	if ((dword_140C8AF48 & 1) == 0)
	{
		qword_140C8AF50 = 0i64;
		dword_140C8AF48 |= 1u;
	}
	if (*(_DWORD*)(a1 + 212) <= a2)
		v3 = &qword_140C8AF50;
	else
		v3 = (__int64*)(a1 + 8 * (a2 + 36i64));
	v4 = *v3;
	if ((_DWORD)v4 != 1)
		return 1i64;
	v6 = *(_QWORD*)(a1 + 784);
	if (v6)
	{
		if (a2 < *(_DWORD*)(a1 + 212) && a2 < 5)
		{
			v7 = 4i64 * a2;
			if (*(_DWORD*)(v7 + v6 + 4) == 4)
			{
				v8 = *(_QWORD*)(a1 + 368);
				if (!v8 || !sub_14040F160(*(_DWORD*)(v8 + v7 + 4), HIDWORD(v4)))
					return 1;
			}
		}
	}
	return v2;
}
// 140C8AF48: using guessed type int dword_140C8AF48;
// 140C8AF50: using guessed type __int64 qword_140C8AF50;

