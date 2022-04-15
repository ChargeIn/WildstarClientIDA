//----- (000000014085EF10) ----------------------------------------------------
__int64 __fastcall sub_14085EF10(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 496);
	if (v2)
	{
		result = sub_1408707F0(v2);
		*(_BYTE*)(a1 + 380) &= ~0x20u;
		*(_BYTE*)(a1 + 382) &= ~0x40u;
		*(_QWORD*)(a1 + 496) = 0i64;
	}
	return result;
}

