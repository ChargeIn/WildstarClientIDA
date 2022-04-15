//----- (0000000140616CF0) ----------------------------------------------------
__int64 __fastcall sub_140616CF0(__int64 a1)
{
	__int64 v1; // r10
	unsigned int v2; // edx
	int v3; // r9d
	__int64 v4; // rax
	unsigned int v5; // r8d
	unsigned int v6; // ecx
	__int64 v7; // rcx
	__int64 i; // rcx
	__int64 j; // rcx

	v1 = *(_QWORD*)(a1 + 120);
	v2 = 0;
	v3 = -1;
	v4 = *(_QWORD*)(v1 + 16);
	if (v4 != v1)
	{
		v5 = *(_DWORD*)(a1 + 16);
		do
		{
			v6 = *(_DWORD*)(v4 + 32);
			if (v6 > v5)
				break;
			if (v6 != v3)
			{
				++v2;
				v3 = *(_DWORD*)(v4 + 32);
				if (v6 == v5)
					break;
			}
			v7 = *(_QWORD*)(v4 + 24);
			if (v7)
			{
				v4 = *(_QWORD*)(v4 + 24);
				for (i = *(_QWORD*)(v7 + 16); i; i = *(_QWORD*)(i + 16))
					v4 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = j;
				if (*(_QWORD*)(v4 + 24) != j)
					v4 = j;
			}
		} while (v4 != v1);
	}
	return v2;
}

