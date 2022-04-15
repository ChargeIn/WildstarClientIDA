//----- (0000000140130020) ----------------------------------------------------
char __fastcall sub_140130020(__int64 a1, char a2)
{
	char v3; // di
	char result; // al
	__int64 v5; // rcx

	*(_BYTE*)(a1 + 28) &= ~8u;
	v3 = a2 & 1;
	result = 8 * (a2 & 1);
	*(_BYTE*)(a1 + 28) |= result;
	v5 = *(_QWORD*)(a1 + 32);
	if (v5 && *(_QWORD*)(v5 + 2880) == a1)
		result = sub_1400E8BF0(v5);
	*(_BYTE*)(a1 + 1436) &= ~0x10u;
	*(_BYTE*)(a1 + 1436) |= 16 * v3;
	return result;
}

