//----- (0000000140890430) ----------------------------------------------------
__int64 __fastcall sub_140890430(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64* v3; // rsi
	__int64 v6; // rbx
	__int64 v7; // rbx

	v3 = (__int64*)(a1 + 264);
	if (*(_QWORD*)(a1 + 264))
	{
		v6 = sub_1408904A0(a1, 0);
		v7 = sub_14088FDA0(v3) + v6;
	}
	else
	{
		v7 = 0x7FFFFFFFFFFFFFFFi64;
	}
	return sub_14088D620(*v3, a2, a3 - v7);
}

