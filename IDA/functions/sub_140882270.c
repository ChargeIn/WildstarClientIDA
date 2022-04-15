//----- (0000000140882270) ----------------------------------------------------
char* __fastcall sub_140882270(__int64 a1, _QWORD* a2, __int64 a3)
{
	unsigned __int64 v3; // r9
	char* v4; // rbx
	unsigned __int64 v5; // rax

	v3 = a2[1] & 0xFFFFFFFFFFFFFFFCui64;
	if (v3 < a3 + 32)
		return (char*)a2;
	v4 = (char*)a2 + a3;
	*((_QWORD*)v4 + 1) &= 3ui64;
	*((_QWORD*)v4 + 1) |= v3 - a3;
	a2[1] &= 3ui64;
	a2[1] |= a3 - 8;
	v5 = *(_QWORD*)((char*)a2 + a3 + 8) & 0xFFFFFFFFFFFFFFFCui64;
	*(_QWORD*)&v4[v5 + 16] |= 2ui64;
	*(_QWORD*)&v4[v5 + 8] = v4;
	*((_QWORD*)v4 + 1) |= 3ui64;
	*(_QWORD*)((char*)a2 + (a2[1] & 0xFFFFFFFFFFFFFFFCui64) + 8) = a2;
	sub_140881EC0(a1, a2);
	return v4;
}

