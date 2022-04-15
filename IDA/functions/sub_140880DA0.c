//----- (0000000140880DA0) ----------------------------------------------------
__int64 __fastcall sub_140880DA0(__int64 a1)
{
	unsigned int v2; // ebx
	__int64 v4; // rax
	unsigned int v5; // ebx

	v2 = sub_1408801C0(a1);
	if ((unsigned int)sub_140880D10(a1, v2, a1 + 44) != 1)
		return 2i64;
	v4 = *(_QWORD*)(a1 + 24);
	v5 = v2 - *(_DWORD*)(a1 + 44);
	*(_BYTE*)(v4 + 383) &= 0xF1u;
	*(_DWORD*)(v4 + 372) = v5;
	return 1i64;
}

