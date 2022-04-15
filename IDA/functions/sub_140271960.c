//----- (0000000140271960) ----------------------------------------------------
__int64 __fastcall sub_140271960(__int64 a1, int a2)
{
	__int64 result; // rax
	int v3; // r8d

	result = a2;
	v3 = dword_140AE7CA8[a2];
	if (*(_DWORD*)(a1 + 7840) != v3)
	{
		*(_DWORD*)(a1 + 7840) = v3;
		return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			23i64);
	}
	return result;
}
// 140AE7CA8: using guessed type int dword_140AE7CA8[8];

