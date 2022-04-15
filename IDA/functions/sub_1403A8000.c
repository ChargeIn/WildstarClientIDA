//----- (00000001403A8000) ----------------------------------------------------
__int64 __fastcall sub_1403A8000(__int64 a1, int a2)
{
	__int64 v2; // r8
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 i; // rcx
	__int64 j; // rcx

	v2 = *(_QWORD*)(qword_140C65898 + 28584);
	v3 = *(_QWORD*)(v2 + 16);
	if (v3 == v2)
		return 0i64;
	while (**(_DWORD**)(v3 + 40) != a2)
	{
		v4 = *(_QWORD*)(v3 + 24);
		if (v4)
		{
			v3 = *(_QWORD*)(v3 + 24);
			for (i = *(_QWORD*)(v4 + 16); i; i = *(_QWORD*)(i + 16))
				v3 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v3 = j;
			if (*(_QWORD*)(v3 + 24) != j)
				v3 = j;
		}
		if (v3 == v2)
			return 0i64;
	}
	return *(unsigned int*)(v3 + 32);
}
// 140C65898: using guessed type __int64 qword_140C65898;

