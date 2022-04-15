//----- (0000000140062A20) ----------------------------------------------------
__int64 __fastcall sub_140062A20(__int64 a1, __int64* a2, unsigned __int64 a3)
{
	unsigned __int64 v4; // r8
	__int64 result; // rax

	v4 = a2[2];
	if (a3 <= v4)
		return *a2;
	if (a3 < 0x20)
		a3 = 32i64;
	if (a3 + 1 > 0xFFFFFFFFFFFFFFFDui64)
		sub_14005ABE0(a1, aMemoryAllocati);
	result = sub_140064780(a1, *a2, v4, a3);
	a2[2] = a3;
	*a2 = result;
	return result;
}

