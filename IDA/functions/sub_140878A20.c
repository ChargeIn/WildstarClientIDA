//----- (0000000140878A20) ----------------------------------------------------
__int64 __fastcall sub_140878A20(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	unsigned __int16 v3; // r8
	unsigned int v6; // ecx
	int v7; // edx

	v2 = *(_QWORD*)(a1 + 24);
	v3 = *(_WORD*)(a2 + 16);
	if (*(_WORD*)(a1 + 84) == 1)
		v6 = *(_DWORD*)(a1 + 40);
	else
		v6 = *(_DWORD*)(a1 + 60) + 1;
	v7 = *(_DWORD*)(a1 + 44);
	if (v7 + (unsigned int)v3 > v6)
		v3 = v6 - v7;
	return sub_1408803E0(
		a1,
		*(_QWORD*)(a1 + 88) + (HIBYTE(*(_DWORD*)(v2 + 196)) & 0x1Fu) * v7,
		v3,
		*(_DWORD*)(v2 + 192),
		*(_DWORD*)(v2 + 196) & 0x3FFFF,
		a2);
}

