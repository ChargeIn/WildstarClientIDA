//----- (0000000140853640) ----------------------------------------------------
bool __fastcall sub_140853640(__int64 a1, __int64* a2)
{
	char v2; // al
	int v3; // r8d
	__int64 v4; // rcx
	__int64 v5; // rdx
	char i; // al
	__int64 v7; // r8

	v2 = *(_BYTE*)(a1 + 91);
	v3 = *(_DWORD*)(a1 + 24);
	v4 = *a2;
	v5 = a2[1];
	for (i = (v2 & 2) != 0; v4 != v5; v4 += 8i64)
	{
		if (v3 == *(_DWORD*)v4 && i == *(_BYTE*)(v4 + 4))
			break;
	}
	v7 = 0i64;
	if (v4 != v5)
		v7 = v4;
	return v7 != 0;
}

