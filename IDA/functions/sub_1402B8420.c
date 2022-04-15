//----- (00000001402B8420) ----------------------------------------------------
_BOOL8 __fastcall sub_1402B8420(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	unsigned __int64* v3; // rcx
	__int64 v4; // rdx
	_BOOL8 result; // rax

	result = 0;
	if (*(_QWORD*)a1 == *(_QWORD*)a2)
	{
		v2 = *(_QWORD*)(a1 + 16);
		if (v2 == *(_QWORD*)(a2 + 16) && *(_DWORD*)(a1 + 24) == *(_DWORD*)(a2 + 24))
		{
			v3 = *(unsigned __int64**)(a1 + 8);
			v4 = *(_QWORD*)(a2 + 8);
			if (v3 == (unsigned __int64*)v4 || !(unsigned int)sub_1407E6AF0(v3, v4, 2 * v2))
				return 1;
		}
	}
	return result;
}

