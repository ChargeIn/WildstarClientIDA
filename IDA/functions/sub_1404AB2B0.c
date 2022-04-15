//----- (00000001404AB2B0) ----------------------------------------------------
__int64 __fastcall sub_1404AB2B0(__int64* a1)
{
	__int64 v1; // r10
	unsigned int v3; // eax
	unsigned int v4; // eax
	unsigned int v6; // r8d
	__int64 v7; // r9
	int v8; // eax
	__int64 v9; // rcx
	unsigned int v10; // r8d
	__int64 v11; // r9
	__int64 v12; // r9
	unsigned int v13; // eax

	v1 = *a1;
	v3 = *(_DWORD*)(*a1 + 4);
	if (v3 > 1)
	{
		if (v3 == 3)
		{
			v6 = 0;
			if (*(_DWORD*)(v1 + 8) > 0x12u)
				LODWORD(v7) = 0;
			else
				v7 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 8i64 * *(int*)(v1 + 8) + 208);
			v8 = -1;
			if ((_DWORD)v7 != -1)
				v8 = v7;
			if (v8)
				v6 = v8;
			return v6 - v6 % *(_DWORD*)(v1 + 12);
		}
		else if (v3 == 4)
		{
			v9 = *(int*)(v1 + 8);
			v10 = 0;
			if ((unsigned int)(v9 - 1) > 0xD)
				v11 = 0i64;
			else
				v11 = *(_QWORD*)(qword_140C65898 + 8 * v9 + 5616);
			v12 = v11 - v11 % *(unsigned int*)(v1 + 12);
			if (v12 > 0)
			{
				v13 = -1;
				if ((_DWORD)v12 != -1)
					v13 = v12;
				if (v13)
					return v13;
			}
			return v10;
		}
		else
		{
			return 0i64;
		}
	}
	else
	{
		v4 = sub_1403AC840(qword_140C65898 + 160, 2, *(_DWORD*)(v1 + 8));
		return v4 - v4 % *(_DWORD*)(*a1 + 12);
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

