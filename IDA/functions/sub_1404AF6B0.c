//----- (00000001404AF6B0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404AF6B0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
	__int64 v6; // rax
	unsigned int v7; // ecx
	int v8; // edx

	return a2
		&& (v6 = sub_1402413C0(a2)) != 0
		&& (v7 = *(_DWORD*)(v6 + 32)) != 0
		&& ((v8 = *(_DWORD*)(v6 + 8)) == 0 || a4 == v8)
		&& v7 <= a3;
}

