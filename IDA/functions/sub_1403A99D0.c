//----- (00000001403A99D0) ----------------------------------------------------
__int64 __fastcall sub_1403A99D0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // r9
	__int64 v6; // r8
	int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // r8
	__int64 v11; // rdx
	_DWORD* i; // rcx
	__int64 v14; // r8
	__int64 v15; // [rsp+50h] [rbp+18h]

	v4 = sub_140224D00(a2);
	v5 = v4;
	if (!v4)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 32368);
	v7 = *(_DWORD*)(v4 + 12);
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v6;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v7)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v9 == v6 || (v15 = v9, v7 < *(_DWORD*)(v9 + 32)))
		v15 = *(_QWORD*)(a1 + 32368);
	if (v15 == v6)
		return 0i64;
	v10 = *(_QWORD*)(v15 + 48);
	v11 = 0i64;
	if (!v10)
		return 0i64;
	for (i = *(_DWORD**)(v15 + 40); *i != a2; ++i)
	{
		if (++v11 >= v10)
			return 0i64;
	}
	v14 = *(unsigned int*)(v5 + 32);
	if ((_DWORD)v14)
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(a1 + 120),
				v14,
				0i64,
				0i64,
				0);
	else
		return 1i64;
}
// 140C659A0: using guessed type __int64 qword_140C659A0;

