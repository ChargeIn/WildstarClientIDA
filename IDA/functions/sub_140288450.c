//----- (0000000140288450) ----------------------------------------------------
_BOOL8 __fastcall sub_140288450(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	unsigned __int16* v5; // rdx
	_BOOL8 result; // rax

	result = 0;
	if (*(_DWORD*)a1 == *(_DWORD*)a2
		&& *(_DWORD*)(a1 + 4) == *(_DWORD*)(a2 + 4)
		&& *(_DWORD*)(a1 + 8) == *(_DWORD*)(a2 + 8)
		&& *(_DWORD*)(a1 + 12) == *(_DWORD*)(a2 + 12)
		&& *(_DWORD*)(a1 + 16) == *(_DWORD*)(a2 + 16))
	{
		v4 = *(_QWORD*)(a1 + 24);
		v5 = *(unsigned __int16**)(a2 + 24);
		if ((unsigned __int16*)v4 == v5
			|| !(unsigned int)sub_14018E2C0(v4, v5) && *(_DWORD*)(a1 + 20) == *(_DWORD*)(a2 + 20))
		{
			return 1;
		}
	}
	return result;
}

