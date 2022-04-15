//----- (00000001403F7640) ----------------------------------------------------
void __fastcall sub_1403F7640(__int64 a1, char a2)
{
	__int64 v2; // rcx
	int v3; // [rsp+40h] [rbp+18h] BYREF

	v2 = qword_140C65898;
	if (qword_140C65898)
	{
		if (a2)
			*(_DWORD*)(qword_140C65898 + 31652) |= 1u;
		else
			*(_DWORD*)(qword_140C65898 + 31652) &= ~1u;
		v3 = *(_DWORD*)(v2 + 31652);
		sub_1403F4900(v2, 0x248u, (__int64)&v3);
		if (qword_140C63620)
		{
			if (*(_QWORD*)(qword_140C63620 + 24))
				sub_1400EA3E0(*(_QWORD*)(qword_140C63620 + 88), "OpenOptions", &unk_1409D0202);
		}
	}
}
// 140C63620: using guessed type __int64 qword_140C63620;
// 140C65898: using guessed type __int64 qword_140C65898;

