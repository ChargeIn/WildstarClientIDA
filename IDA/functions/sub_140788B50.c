//----- (0000000140788B50) ----------------------------------------------------
__int64 __fastcall sub_140788B50(__int64 a1)
{
	__int64 v1; // r8
	unsigned int v2; // edx
	__int64 v3; // rax
	int v4; // r9d
	int v5; // ecx
	__int64 v6; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 80);
	v2 = 0;
	v3 = *(_QWORD*)(v1 + 16);
	v4 = 1;
	if (v3 == v1)
		return 3i64;
	do
	{
		v5 = *(_DWORD*)(v3 + 36);
		if (v5 != 3)
		{
			if (v5 > (int)v2)
				v2 = *(_DWORD*)(v3 + 36);
			v4 = 0;
		}
		v6 = *(_QWORD*)(v3 + 24);
		if (v6)
		{
			v3 = *(_QWORD*)(v3 + 24);
			for (i = *(_QWORD*)(v6 + 16); i; i = *(_QWORD*)(i + 16))
				v3 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v3 = j;
			if (*(_QWORD*)(v3 + 24) != j)
				v3 = j;
		}
	} while (v3 != v1);
	result = v2;
	if (v4)
		return 3i64;
	return result;
}

