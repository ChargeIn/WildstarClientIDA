//----- (0000000140737C70) ----------------------------------------------------
__int64 __fastcall sub_140737C70(__int64 a1)
{
	int v1; // r10d
	__int64 v3; // rdx
	__int64 v4; // rax
	bool v5; // zf
	int v6; // eax
	_DWORD* v7; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_7;
	while (1)
	{
		v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
		if (*(_DWORD*)(v4 + 16) == 7)
			break;
		if (++v3 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_7;
	}
	if (!v4 || (v5 = *(_DWORD*)(v4 + 772) == 0, v6 = 1, !v5))
		LABEL_7:
	v6 = 0;
	v7 = *(_DWORD**)(a1 + 16);
	v5 = v6 == 0;
	result = 1i64;
	LOBYTE(v1) = !v5;
	v7[2] = 1;
	*v7 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

