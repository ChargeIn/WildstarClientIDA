//----- (0000000140878210) ----------------------------------------------------
__int64 __fastcall sub_140878210(__int64 a1, __int64 a2)
{
	int v5; // ebx
	int v6; // eax
	int v7; // eax
	int i; // ecx
	char v9[1030]; // [rsp+40h] [rbp-438h] BYREF
	unsigned __int16 v10; // [rsp+446h] [rbp-32h]

	if (sub_140878910((LPVOID*)(a1 + 40), 0, 0xFFFFFFFF))
		return 2i64;
	v5 = 0;
	if ((*(int(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 80i64))(
		*(_QWORD*)(a1 + 40),
		a1 + 48,
		0i64,
		(unsigned int)dword_140C110B4,
		0,
		0,
		0i64) < 0)
		return 2i64;
	v6 = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 16) = v6;
	if (!v6)
	{
		if ((*(int(__fastcall**)(_QWORD, _QWORD, char*))(**(_QWORD**)(a1 + 40) + 32i64))(
			*(_QWORD*)(a1 + 40),
			0i64,
			v9) < 0)
			return 2i64;
		v7 = 3;
		if (v10 >= 4u)
			v7 = 63;
		*(_DWORD*)(a1 + 16) = v7;
	}
	for (i = *(_DWORD*)(a1 + 16); i; i &= i - 1)
		++v5;
	*(_DWORD*)(a1 + 32) = v5;
	return 1i64;
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140878210: using guessed type char var_438[1030];

