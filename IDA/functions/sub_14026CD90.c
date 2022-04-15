//----- (000000014026CD90) ----------------------------------------------------
_BOOL8 __fastcall sub_14026CD90(__int64 a1, int a2, int a3, int a4)
{
	__int64 v4; // rdi
	int v5; // r11d

	v4 = a2;
	if (dword_140AE64C0[v4])
	{
		v5 = 2;
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 7032) + 4i64 * a3) & 1) == 0)
			return 0i64;
	}
	else
	{
		v5 = *(_DWORD*)(*(_QWORD*)(a1 + 7032) + 4i64 * a3);
		if (((a3 - 3) & 0xFFFFFFFD) == 0)
			v5 |= 0x80000u;
	}
	return (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, int))(**(_QWORD**)(a1 + 6592) + 80i64))(
		*(_QWORD*)(a1 + 6592),
		*(unsigned int*)(a1 + 6548),
		*(unsigned int*)(a1 + 6556),
		*(unsigned int*)(a1 + 6576),
		v5,
		dword_140AE7C10[a4],
		dword_140AE7B30[v4]) >= 0;
}
// 140AE64C0: using guessed type int dword_140AE64C0[];
// 140AE7B30: using guessed type int dword_140AE7B30[28];
// 140AE7C10: using guessed type int dword_140AE7C10[4];

