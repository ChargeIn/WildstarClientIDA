//----- (0000000140884E50) ----------------------------------------------------
void __fastcall sub_140884E50(__int64 a1)
{
	char v2; // al
	__int64 v3; // rcx
	char v4; // al
	__int64 v5; // rcx

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	*(_DWORD*)(a1 + 176) &= 0xFFFFFFF4;
	*(_DWORD*)(a1 + 176) |= 4u;
	if ((*(_BYTE*)(a1 + 117) & 8) != 0 && (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1))
	{
		v2 = *(_BYTE*)(a1 + 117);
		if ((v2 & 0x20) == 0)
		{
			v3 = *(_QWORD*)(a1 + 96);
			*(_BYTE*)(a1 + 117) = v2 | 0x20;
			sub_1408894A0(v3);
		}
	}
	else
	{
		*(_BYTE*)(a1 + 117) &= ~0x40u;
		v4 = *(_BYTE*)(a1 + 117);
		if ((v4 & 0x20) != 0)
		{
			v5 = *(_QWORD*)(a1 + 96);
			*(_BYTE*)(a1 + 117) = v4 & 0xDF;
			sub_140889460(v5);
		}
	}
	if (*(_BYTE*)(a1 + 16) && (((int)(*(_DWORD*)(a1 + 176) << 28) >> 28) & 0xFFFFFFFD) != 0)
		sub_140889450(*(_QWORD*)(a1 + 96), a1);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
}

