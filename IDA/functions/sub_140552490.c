//----- (0000000140552490) ----------------------------------------------------
_BOOL8 __fastcall sub_140552490(__int64 a1)
{
	int v2; // edi
	unsigned int* v3; // r10
	unsigned int v4; // r9d
	__int64 v5; // rcx
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v9; // [rsp+30h] [rbp+8h]

	v2 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8));
	if (!v2)
		return 1i64;
	v3 = *(unsigned int**)(a1 + 8);
	v4 = *v3;
	v5 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v9 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v9 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
	return v9 != v5 || v2 == 3 && ((v3[3] & 0x20) != 0 || v3[109]);
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

