//----- (0000000140379200) ----------------------------------------------------
__int64 __fastcall sub_140379200(_DWORD* a1, __int16 a2)
{
	int v2; // esi
	unsigned int v3; // ebx
	int v6; // ecx

	v2 = 0;
	v3 = 0;
	if ((a2 & 8) != 0)
		v3 = 1;
	if ((a2 & 0x10) != 0 && (*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 272i64))(a1) || (a2 & 0x20) != 0)
		v3 |= 2u;
	if ((a2 & 0x7C0) != 0 && (*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 288i64))(a1))
	{
		if ((a2 & 0x40) != 0)
			goto LABEL_19;
		v6 = 0;
		if ((a2 & 0x80u) != 0)
			v6 = 2;
		if ((a2 & 0x180) != 0)
			v2 = 2;
		if ((a2 & 0x200) != 0)
			v6 |= 0x400u;
		if ((a2 & 0x600) != 0)
			v2 |= 0x400u;
		if ((v2 & a1[90]) == v6)
			LABEL_19:
		v3 |= 4u;
	}
	return v3;
}

