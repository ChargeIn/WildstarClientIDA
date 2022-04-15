//----- (000000014049F370) ----------------------------------------------------
__int64 __fastcall sub_14049F370(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v4; // edx
	unsigned __int64 v5; // r11
	unsigned int v6; // ecx
	__int64 v7; // r10
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 result; // rax
	int v11; // r8d

	v4 = 0;
	v5 = *(_QWORD*)(qword_140C65898 + 5792);
	v6 = 0;
	if (!v5)
		goto LABEL_8;
	v7 = *(_QWORD*)(qword_140C65898 + 5784);
	v8 = 0i64;
	while (*(_DWORD*)(*(_QWORD*)(v7 + 8 * v8) + 8i64) != a4)
	{
		v8 = ++v6;
		if (v6 >= v5)
			goto LABEL_8;
	}
	v9 = *(_QWORD*)(v7 + 8i64 * v6);
	if (!v9 || (result = 1i64, !*(_DWORD*)(v9 + 12)))
		LABEL_8:
	result = 0i64;
	v11 = a3 - 1;
	if (v11)
	{
		if (v11 == 1)
			LOBYTE(v4) = (_DWORD)result == 0;
		return v4;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

