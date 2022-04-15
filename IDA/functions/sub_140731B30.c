//----- (0000000140731B30) ----------------------------------------------------
__int64 __fastcall sub_140731B30(__int64 a1)
{
	int v1; // r10d
	__int64 v3; // rdx
	__int64 v4; // rax
	_DWORD* v5; // rax
	__int64 result; // rax
	__int64* v7; // rcx
	__int64 v8; // rax
	_DWORD* v9; // rcx
	bool v10; // zf

	v1 = 0;
	v3 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
		if (*(_DWORD*)(v4 + 16) == 7)
			break;
		if (++v3 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	if (!v4)
		goto LABEL_4;
	v7 = (__int64*)xmmword_140C7DFC0;
	if ((_QWORD)xmmword_140C7DFC0 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
		goto LABEL_4;
	while (1)
	{
		v8 = *v7;
		if (*(_DWORD*)(*v7 + 48) == 5)
			break;
		if (++v7 == *((__int64**)&xmmword_140C7DFC0 + 1))
			goto LABEL_4;
	}
	if (v8)
	{
		v9 = *(_DWORD**)(a1 + 16);
		v10 = *(_QWORD*)(v8 + 40) == **(_QWORD**)(qword_140C7DE18 + 8 * v3);
		v9[2] = 1;
		result = 1i64;
		LOBYTE(v1) = v10;
		*v9 = v1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
	LABEL_4:
		v5 = *(_DWORD**)(a1 + 16);
		v5[2] = 1;
		*v5 = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

