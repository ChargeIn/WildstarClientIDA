//----- (00000001408701F0) ----------------------------------------------------
__int64 __fastcall sub_1408701F0(__int64 a1, char a2, __int16 a3)
{
	char v3; // r9
	__int16 v4; // dx
	unsigned __int16 v6; // r8
	int v7; // ecx
	__int64 result; // rax

	v3 = 0;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 32) = 0x3F8000003F800000i64;
	*(_QWORD*)(a1 + 40) = 0x3F8000003F800000i64;
	*(_WORD*)(a1 + 54) &= 0xFFC7u;
	*(_WORD*)(a1 + 54) |= 8 * (a2 & 7);
	v4 = *(_WORD*)(a1 + 54);
	v6 = a3 & 0xFFF7;
	v7 = v6;
	*(_WORD*)(a1 + 52) = v6;
	if (v6)
	{
		do
		{
			++v3;
			v7 &= v7 - 1;
		} while (v7);
	}
	result = a1;
	*(_WORD*)(a1 + 54) = v3 & 7 | v4 & 0xFFF8 | 0x40;
	return result;
}

