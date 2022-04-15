//----- (0000000140842DF0) ----------------------------------------------------
void __fastcall sub_140842DF0(__int64 a1)
{
	char v2; // al
	_QWORD* v3; // rdx
	int v4; // ecx
	bool v5; // zf

	if (*(_QWORD*)(a1 + 32))
	{
		v2 = sub_1408817F0(*(_DWORD*)(a1 + 44));
		v3 = *(_QWORD**)(a1 + 32);
		v4 = *(_DWORD*)(a1 + 44);
		if ((v2 & 8) != 0)
			sub_140881A80(v4, v3);
		else
			sub_140881720(v4, (__int64)v3);
		v5 = *(_BYTE*)(a1 + 48) == 0;
		*(_QWORD*)(a1 + 32) = 0i64;
		if (!v5)
		{
			sub_140881DD0(*(_DWORD*)(a1 + 44));
			*(_DWORD*)(a1 + 44) = -1;
		}
	}
}

