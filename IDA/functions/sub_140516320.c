//----- (0000000140516320) ----------------------------------------------------
char __fastcall sub_140516320(__int64 a1)
{
	int v1; // eax
	unsigned int v3; // ecx
	int v4; // eax
	unsigned __int64 v5; // rdx

	v1 = *(_DWORD*)(a1 + 16);
	if (v1 < 300)
	{
		v3 = *(_DWORD*)(a1 + 20);
		if (v3 != -1 && (v1 || (LOBYTE(v1) = v3 < 0x1F) != 0))
		{
			sub_140399DE0(qword_140C65898, (int*)(a1 + 16), (int*)(a1 + 56), 1, 0);
			v4 = *(_DWORD*)(a1 + 16);
			if (v4 < 300)
				v5 = *(unsigned __int8*)(a1 + 20) | ((unsigned __int64)(unsigned __int8)v4 << 8);
			else
				v5 = -1i64;
			LOBYTE(v1) = sub_1400D4040(*(_QWORD*)(a1 + 8), "EquipItemRequested", *(char**)(a1 + 8), L"i", v5);
		}
	}
	return v1;
}
// 140B6B8F8: using guessed type wchar_t aI_12[2];
// 140C65898: using guessed type __int64 qword_140C65898;

