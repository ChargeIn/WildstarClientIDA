//----- (000000014089C710) ----------------------------------------------------
__int64 __fastcall sub_14089C710(__int64 a1, __int64 a2)
{
	unsigned int v4; // esi
	__int64 result; // rax

	if (*(_BYTE*)(a1 + 60))
	{
		v4 = *(_DWORD*)(a1 + 24) - *(_DWORD*)(a1 + 16);
		if (*(unsigned __int16*)(a2 + 16) < v4)
			v4 = *(unsigned __int16*)(a2 + 16);
	}
	else
	{
		v4 = *(unsigned __int16*)(a2 + 16);
	}
	if (v4)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(a1 + 128))(a1, *(_QWORD*)a2, v4);
		*(_WORD*)(a2 + 18) = v4;
	}
	result = *(unsigned int*)(a1 + 24);
	if (*(_DWORD*)(a1 + 16) >= (unsigned int)result && *(_BYTE*)(a1 + 60))
		*(_DWORD*)(a2 + 12) = 17;
	else
		*(_DWORD*)(a2 + 12) = 45;
	return result;
}

