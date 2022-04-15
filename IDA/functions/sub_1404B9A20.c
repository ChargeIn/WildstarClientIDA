//----- (00000001404B9A20) ----------------------------------------------------
_BOOL8 sub_1404B9A20()
{
	__int64 v0; // rax
	__int64 v1; // r8
	__int64* v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v7; // rax
	int v8; // ecx

	v0 = sub_1405B1510(&qword_140C7DFB0);
	v1 = v0;
	if (!v0)
		return 0i64;
	if (v0 != qword_140C7DFD8)
	{
		v2 = (__int64*)xmmword_140C7DFC0;
		if ((_QWORD)xmmword_140C7DFC0 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
		{
		LABEL_6:
			v3 = 0i64;
		}
		else
		{
			while (1)
			{
				v3 = *v2;
				if (*(_DWORD*)(*v2 + 48) == 5)
					break;
				if (++v2 == *((__int64**)&xmmword_140C7DFC0 + 1))
					goto LABEL_6;
			}
		}
		if (v1 != v3)
			return 0i64;
		v4 = 0i64;
		if (!qword_140C7DE20)
			return 0i64;
		while (1)
		{
			v5 = *(_QWORD*)(qword_140C7DE18 + 8 * v4);
			if (*(_DWORD*)(v5 + 16) == 7)
				break;
			if (++v4 >= (unsigned __int64)qword_140C7DE20)
				return 0i64;
		}
		if (!v5 || *(int*)(v5 + 772) > 0)
			return 0i64;
	}
	v7 = *(_QWORD*)(v1 + 232);
	if (!v7 || !*(_DWORD*)(v1 + 272))
		v7 = 0i64;
	v8 = *(_DWORD*)(v7 + 184);
	return (v8 & 0xFFFFFFFA) == 0 && v8 != 4;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 140C7DFD8: using guessed type __int64 qword_140C7DFD8;

