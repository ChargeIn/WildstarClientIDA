//----- (0000000140731BE0) ----------------------------------------------------
__int64 __fastcall sub_140731BE0(__int64 a1)
{
	int v1; // r11d
	int v3; // r10d
	__int64 v4; // rdx
	int v5; // r9d
	unsigned int v6; // eax
	__int64 v7; // r8
	int v8; // eax
	_DWORD* v9; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = 0;
	v4 = (__int64)(*((_QWORD*)&xmmword_140C7DFC0 + 1) - xmmword_140C7DFC0) >> 3;
	v5 = 0;
	v6 = 0;
	if (!(_DWORD)v4)
		goto LABEL_10;
	do
	{
		v7 = *(_QWORD*)(xmmword_140C7DFC0 + 8i64 * v6);
		if (v7)
		{
			if (*(_QWORD*)(v7 + 32) == *(_QWORD*)(qword_140C635F0 + 5792))
				v5 = 1;
			if (*(_DWORD*)(v7 + 48) == 5)
				v3 = 1;
		}
		++v6;
	} while (v6 < (unsigned int)v4);
	if (!v3 || (v8 = 1, !v5))
		LABEL_10:
	v8 = 0;
	v9 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v8 != 0;
	v9[2] = 1;
	result = 1i64;
	*v9 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140731C25: conditional instruction was optimized away because edx.4!=0
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

