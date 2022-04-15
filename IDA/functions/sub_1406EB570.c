//----- (00000001406EB570) ----------------------------------------------------
__int64 __fastcall sub_1406EB570(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r11d
	int v4; // edx
	unsigned __int64 i; // r8
	_BYTE* v6; // rcx
	_DWORD* v7; // rcx
	__int64 result; // rax

	v2 = sub_1406E8880(a1, 1u);
	v3 = 0;
	if (*(_DWORD*)(v2 + 2704) || *(_DWORD*)(v2 + 2708) || *(_DWORD*)(v2 + 2712) || (v4 = 0, *(_DWORD*)(v2 + 2716)))
		v4 = 1;
	for (i = 0i64; !v4; ++i)
	{
		if (i >= *(_QWORD*)(v2 + 2464))
			break;
		v6 = *(_BYTE**)(*(_QWORD*)(v2 + 2456) + 8 * i);
		if (v6[68] > *(_BYTE*)(*(_QWORD*)v6 + 64i64))
			v4 = 1;
	}
	v7 = (_DWORD*)a1[2];
	result = 1i64;
	LOBYTE(v3) = v4 != 0;
	v7[2] = 1;
	*v7 = v3;
	a1[2] += 16i64;
	return result;
}

