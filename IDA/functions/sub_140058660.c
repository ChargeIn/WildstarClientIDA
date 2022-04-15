//----- (0000000140058660) ----------------------------------------------------
__int64 __fastcall sub_140058660(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	int v3; // ecx

	v2 = sub_1400580E0(a1, a2);
	v3 = v2[2];
	if (v3 == 2)
		return *(_QWORD*)v2;
	if (v3 == 7)
		return *(_QWORD*)v2 + 48i64;
	return 0i64;
}

