//----- (0000000140850B30) ----------------------------------------------------
char __fastcall sub_140850B30(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v6; // rbx
	char result; // al
	char v8; // al

	do
	{
		v6 = a1;
		a1 = *(_QWORD*)(a1 + 64);
	} while ((*(_BYTE*)(v6 + 91) & 0x10) == 0 && a1);
	result = sub_1408524D0(v6, a2, a3);
	if (a4)
	{
		v8 = sub_1408526A0((_QWORD*)v6, a2, a4 + 24);
		*(_BYTE*)(a4 + 76) &= ~4u;
		result = 4 * (v8 & 1);
		*(_BYTE*)(a4 + 76) |= result;
	}
	return result;
}

