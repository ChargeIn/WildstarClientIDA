//----- (00000001403CB8E0) ----------------------------------------------------
__int64 __fastcall sub_1403CB8E0(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rbx
	unsigned int v4; // xmm6_4
	unsigned int v5; // ecx
	char v7[16]; // [rsp+20h] [rbp-28h] BYREF
	unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
	unsigned int v9; // [rsp+54h] [rbp+Ch]

	if (*(_QWORD*)(a1 + 120))
	{
		v3 = sub_140617410(a1, *a2);
		if (v3)
		{
			v4 = a2[3];
			v8 = a2[1];
			v9 = a2[2];
			sub_140617D30(v3 + 40, (__int64)v7, &v8);
			v5 = a2[2];
			if (v5)
			{
				if (v5 == 1)
					*(_DWORD*)(v3 + 32) = v4;
			}
			else
			{
				*(_DWORD*)(v3 + 28) = v4;
			}
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "UpdateSoldierBuild", L"#", *(_QWORD*)(v3 + 152));
		}
	}
	return 0i64;
}
// 1409ED804: using guessed type wchar_t asc_1409ED804[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403CB8E0: using guessed type char var_28[16];

