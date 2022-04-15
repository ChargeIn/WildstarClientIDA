//----- (00000001405A9D10) ----------------------------------------------------
void __fastcall sub_1405A9D10(__int64 a1, float a2, float a3)
{
	__int64 v3; // rdi
	FILETIME v5; // [rsp+40h] [rbp+8h] BYREF

	v3 = a1 + 32;
	if (a1 == -32)
	{
		MEMORY[0x10] = LODWORD(a3);
	}
	else
	{
		if ((int)sub_1401E82F0((__int64*)&v5, a2) >= 0)
			sub_1401E8230(v3, v5);
		*(float*)(a1 + 48) = a3;
	}
}

