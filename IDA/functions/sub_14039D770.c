//----- (000000014039D770) ----------------------------------------------------
__int64 __fastcall sub_14039D770(__int64 a1)
{
	int v1; // r10d
	__int64 v2; // rcx
	__int64* v3; // rax
	__int64* v4; // rdx
	__int64 v5; // rcx
	unsigned int v7; // edx
	__int64 v8; // rbx
	__int64 v9; // r8
	__int64 v10; // rax

	v1 = *(_DWORD*)(a1 + 6124);
	if (!v1)
		return 0i64;
	v2 = *(_QWORD*)(qword_140C659F0 + 824);
	v3 = *(__int64**)(v2 + 16);
	v4 = *(__int64**)(v2 + 24);
	if (v3 == v4)
		return 2147500037i64;
	while (1)
	{
		v5 = *v3;
		if (*(_DWORD*)(*v3 + 48) == 2)
			break;
		if (++v3 == v4)
			return 2147500037i64;
	}
	if (!v5)
		return 2147500037i64;
	v7 = *(_DWORD*)(v5 + 272);
	v8 = 0i64;
	if (!v7)
		return 0i64;
	v9 = *(_QWORD*)(v5 + 232);
	while (1)
	{
		if (v9)
		{
			if ((unsigned int)v8 < v7)
			{
				v10 = v9 + 192 * v8;
				if (v10)
				{
					if (*(_DWORD*)(v10 + 4) == v1)
						break;
				}
			}
		}
		v8 = (unsigned int)(v8 + 1);
		if ((unsigned int)v8 >= v7)
			return 0i64;
	}
	sub_1404B6B30(v5, v5);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingPropertyUpkeepOpen", byte_1409EBFC4, (unsigned int)v8);
	return 0i64;
}
// 1409EBFC4: using guessed type _BYTE byte_1409EBFC4[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

