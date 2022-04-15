//----- (0000000140289190) ----------------------------------------------------
void __fastcall sub_140289190(__int64 a1, int a2, float a3, float a4)
{
	bool v4; // zf
	unsigned int v6; // eax
	unsigned int v7; // edi

	v4 = (*(_BYTE*)(a1 + 36) & 1) == 0;
	*(float*)(a1 + 24) = a3;
	*(float*)(a1 + 28) = a4;
	*(_DWORD*)(a1 + 20) = a2;
	if (!v4)
	{
		v6 = sub_1402887A0(*(_QWORD*)(a1 + 8), a2, a3, a4);
		v7 = v6;
		if (*(_DWORD*)(a1 + 32) != v6)
		{
			sub_140288840(*(_QWORD*)(a1 + 8), v6);
			sub_140288980(*(_QWORD*)(a1 + 8), *(_DWORD*)(a1 + 32));
			*(_DWORD*)(a1 + 36) &= ~2u;
			*(_DWORD*)(a1 + 32) = v7;
		}
	}
}

