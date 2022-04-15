//----- (00000001407177B0) ----------------------------------------------------
const void**** __fastcall sub_1407177B0(const void*** a1)
{
	const void** v2; // rcx
	int v3; // edx
	_QWORD* v4; // rax
	const void** v5; // rcx
	const void** v6; // rcx
	const void** v7; // rcx
	const void** v8; // rcx
	const void** v9; // rax
	__int64 v10; // rax
	__int64 i; // rdi
	int v12; // eax
	const void**** result; // rax
	const void** v14; // rcx
	const void** v15; // rcx
	const void** v16; // rcx
	const void** v17; // rcx

	(*((void(__fastcall**)(const void**)) * a1[7] + 1))(a1[7]);
	while (*a1)
	{
		if (*a1)
			(*(void(__fastcall**)(const void**, __int64)) * *a1)(*a1, 1i64);
	}
	sub_140717DF0((__int64)a1, 0);
	sub_140717FA0((__int64)a1);
	v2 = a1[7];
	v3 = *((_DWORD*)a1 + 16);
	if (*((_DWORD*)v2 + 85) != v3 || (v4 = v2[39], !v4[10]) && *(_DWORD*)(v4[14] + 24i64) != 8)
		sub_140540070((const void***)v2, v3, 0);
	v5 = a1[2];
	if (v5)
		*v5 = a1[3];
	v6 = a1[3];
	if (v6)
		v6[2] = a1[2];
	v7 = a1[4];
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (v7)
		*v7 = a1[5];
	v8 = a1[5];
	if (v8)
		v8[4] = a1[4];
	v9 = a1[7];
	a1[4] = 0i64;
	a1[5] = 0i64;
	if (*(_DWORD*)(*((_QWORD*)v9[39] + 1) + 28i64))
	{
		v10 = sub_1403D90D0(qword_140C65898, *((_DWORD*)a1 + 16));
		if (v10)
		{
			for (i = *(_QWORD*)(v10 + 5560); i; i = *(_QWORD*)(i + 1032))
			{
				v12 = (*((__int64(__fastcall**)(const void**)) * a1[7] + 1))(a1[7]);
				sub_1404FEDC0(i, v12);
			}
		}
	}
	result = *(const void*****)(qword_140C65898 + 25744);
	if (result)
	{
		result = (const void****)*((unsigned int*)result + 2);
		if (*((_DWORD*)a1 + 16) == (_DWORD)result)
			*(_DWORD*)(qword_140C65898 + 28568) = 1;
	}
	v14 = a1[4];
	if (v14)
	{
		result = (const void****)a1[5];
		*v14 = result;
	}
	v15 = a1[5];
	if (v15)
	{
		result = (const void****)a1[4];
		v15[4] = result;
	}
	a1[4] = 0i64;
	a1[5] = 0i64;
	v16 = a1[2];
	if (v16)
	{
		result = (const void****)a1[3];
		*v16 = result;
	}
	v17 = a1[3];
	if (v17)
	{
		result = (const void****)a1[2];
		v17[2] = result;
	}
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (a1[1])
		result = sub_1401A4A00(a1 + 1);
	if (*a1)
		return sub_1401A4A00(a1);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

