//----- (00000001408D81A0) ----------------------------------------------------
__int64 __fastcall sub_1408D81A0(__int64 a1, int a2, char a3)
{
	unsigned int v3; // edi
	int v5; // esi
	__int64 result; // rax

	v3 = 0;
	v5 = 0;
	if (!a3)
	{
		v5 = a2;
		if (*(_DWORD*)a1 > 0xBB80u)
			v5 = 2 * a2;
	}
	if (*(_DWORD*)(a1 + 4))
	{
		do
			result = sub_1408D8CC0(a1, v5, *(_QWORD*)(a1 + 8) + 100i64 * v3++, 3);
		while (v3 < *(_DWORD*)(a1 + 4));
	}
	return result;
}

