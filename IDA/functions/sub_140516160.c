//----- (0000000140516160) ----------------------------------------------------
char __fastcall sub_140516160(__int64 a1)
{
	int v1; // eax
	unsigned int v3; // edx
	int v4; // eax
	unsigned __int64 v5; // rdx

	v1 = *(_DWORD*)(a1 + 16);
	if (v1 < 300)
	{
		v3 = *(_DWORD*)(a1 + 20);
		if (v3 != -1 && (v1 || (LOBYTE(v1) = v3 < 0x1F) != 0))
		{
			sub_1403C1360(a1, (int*)(a1 + 16));
			v4 = *(_DWORD*)(a1 + 16);
			if (v4 < 300)
				v5 = *(unsigned __int8*)(a1 + 20) | ((unsigned __int64)(unsigned __int8)v4 << 8);
			else
				v5 = -1i64;
			LOBYTE(v1) = sub_1400D4040(*(_QWORD*)(a1 + 8), "DeleteItemRequested", *(char**)(a1 + 8), L"i", v5);
		}
	}
	return v1;
}
// 140B6B8F8: using guessed type wchar_t aI_12[2];

