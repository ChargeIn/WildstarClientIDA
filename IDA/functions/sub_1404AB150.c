//----- (00000001404AB150) ----------------------------------------------------
__int64 __fastcall sub_1404AB150(__int64* a1, unsigned int a2)
{
	__int64 v3; // r9
	__int64 v4; // r8
	int v5; // ebx
	unsigned int v7; // eax
	unsigned int v8; // edi
	__int64 v9; // rdx
	int v10; // ecx
	unsigned int v11; // eax
	__int64 v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // r8
	unsigned int v15; // eax
	int v16; // r10d
	__int64 v17; // rdx
	int v18; // ecx

	if (!a2)
		return 0i64;
	if (!qword_140C65898)
		return 0i64;
	v3 = qword_140C635F0;
	if (!qword_140C635F0)
		return 0i64;
	v4 = *a1;
	v5 = a2 - a2 % *(_DWORD*)(*a1 + 12);
	if (v5 <= 0)
		return 0i64;
	v7 = *(_DWORD*)(v4 + 4);
	v8 = 0;
	if (v7 <= 1)
	{
		if ((int)(sub_1403AC840(qword_140C65898 + 160, 2, *(_DWORD*)(v4 + 8)) - v5) >= 0)
		{
			v3 = qword_140C635F0;
			goto LABEL_24;
		}
		return 0i64;
	}
	if (v7 != 3)
	{
		if (v7 != 4)
			goto LABEL_24;
		v12 = *(int*)(v4 + 8);
		v13 = (unsigned int)(v12 - 1) > 0xD ? 0i64 : *(_QWORD*)(qword_140C65898 + 8 * v12 + 5616);
		if (v13 - v5 >= 0)
			goto LABEL_24;
		return 0i64;
	}
	if (*(_DWORD*)(v4 + 8) > 0x12u)
		LODWORD(v9) = 0;
	else
		v9 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 8i64 * *(int*)(v4 + 8) + 208);
	v10 = 0x7FFFFFFF;
	v11 = 0x80000000;
	if ((_DWORD)v9 != 0x7FFFFFFF)
		v10 = v9;
	if (v10 != 0x80000000)
		v11 = v10;
	if ((int)(v11 - v5) < 0)
		return 0i64;
LABEL_24:
	v14 = *a1;
	v15 = *(_DWORD*)(*a1 + 24);
	if (v15)
	{
		v16 = *(_DWORD*)(v14 + 28);
		if (v16)
		{
			if (v15 > 0x12)
				LODWORD(v17) = 0;
			else
				v17 = *(_QWORD*)(*(_QWORD*)(v3 + 5584) + 8i64 * *(int*)(*a1 + 24) + 208);
			v18 = -1;
			if ((_DWORD)v17 != -1)
				v18 = v17;
			if (v18)
				v8 = v18;
			if (v16 * ((unsigned int)v5 / *(_DWORD*)(v14 + 12)) > v8)
				return 0i64;
		}
	}
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

