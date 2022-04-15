//----- (0000000140112560) ----------------------------------------------------
__int64 __fastcall sub_140112560(__int64 a1, int* a2)
{
	unsigned __int64 v3; // rax
	unsigned __int64 v4; // rdx
	unsigned __int64 v5; // rcx

	if (!*(_BYTE*)(a1 + 1075))
		return sub_1400D23B0(a1, a2);
	v3 = sub_140112240(a1, (__int64)a2);
	if (*(_QWORD*)(a1 + 1032) == -1i64)
		*(_QWORD*)(a1 + 1032) = *(_QWORD*)(a1 + 1024);
	v4 = *(_QWORD*)(a1 + 1032);
	*(_QWORD*)(a1 + 1024) = v3;
	v5 = v4;
	if (v3 < v4)
		v5 = v3;
	if (v4 < v3)
		v4 = v3;
	*(_QWORD*)(a1 + 1040) = v5;
	*(_QWORD*)(a1 + 1048) = v4;
	if (v5 == v4)
		*(_QWORD*)(a1 + 1032) = -1i64;
	return 0i64;
}

