//----- (0000000140862410) ----------------------------------------------------
__int64 __fastcall sub_140862410(__int64 a1, char a2, _DWORD* a3)
{
	unsigned int v3; // edx
	unsigned __int8 i; // al
	unsigned __int64 v5; // rax

	v3 = (unsigned __int8)(*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176i64) + 18i64) & a2);
	if (!v3)
		return 2i64;
	for (i = 0; (v3 & 1) == 0; ++i)
		v3 >>= 1;
	v5 = (unsigned __int64)i << 7;
	*a3 = *(_DWORD*)&byte_140C62000[v5];
	a3[1] = *(_DWORD*)&byte_140C62000[v5 + 4];
	a3[2] = *(_DWORD*)&byte_140C62000[v5 + 8];
	a3[3] = *(_DWORD*)&byte_140C62000[v5 + 12];
	a3[4] = *(_DWORD*)&byte_140C62000[v5 + 16];
	a3[5] = *(_DWORD*)&byte_140C62000[v5 + 20];
	a3[6] = *(_DWORD*)&byte_140C62000[v5 + 24];
	a3[7] = *(_DWORD*)&byte_140C62000[v5 + 28];
	a3[8] = *(_DWORD*)&byte_140C62000[v5 + 32];
	a3[9] = *(_DWORD*)&byte_140C62000[v5 + 36];
	a3[10] = *(_DWORD*)&byte_140C62000[v5 + 40];
	return 1i64;
}
// 140C62000: using guessed type _BYTE byte_140C62000[80];

