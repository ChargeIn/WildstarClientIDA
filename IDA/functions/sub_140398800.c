//----- (0000000140398800) ----------------------------------------------------
__int64 __fastcall sub_140398800(
	__int64 a1,
	unsigned int* a2,
	__int64 a3,
	__int64 a4,
	unsigned int* a5,
	__int64 a6,
	__int64 a7,
	int a8)
{
	unsigned int v9; // edx
	__int64 v11; // rcx

	v9 = *a2;
	if (!v9)
		return 4i64;
	if (!a3)
		goto LABEL_19;
	v11 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120) == a3 || *(_QWORD*)(qword_140C65898 + 25744) == a3)
		v11 = qword_140C65898;
	if (!v11 || !sub_1405A5B90(v11, v9))
	{
	LABEL_19:
		if (!sub_1407A0FD0(qword_140C65B70, v9))
			return 4i64;
	}
	if (a4)
		a2[9] = *(_DWORD*)(a4 + 8);
	if (a5)
	{
		a2[13] = *a5;
		a2[14] = a5[1];
		a2[15] = a5[2];
	}
	return sub_1403ACE00((__int64)a5, (__int64)a2, a6, a7, (int)a5, a8);
}
// 14039885F: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

