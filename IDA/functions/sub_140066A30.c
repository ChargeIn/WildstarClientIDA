//----- (0000000140066A30) ----------------------------------------------------
__int64 __fastcall sub_140066A30(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // ebp
	__int64 v6; // rcx
	int v7; // r8d
	signed int v8; // esi

	if ((unsigned int)(*(_DWORD*)a2 - 13) <= 1)
	{
		sub_14006A5E0(a1, (unsigned int*)a2, -1);
		v5 = *(_DWORD*)(*(_QWORD*)(a2 + 24) + 8i64);
		v6 = a1;
		v7 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64);
		v8 = ((int)((unsigned __int64)(1374389535i64 * (*(_DWORD*)(a2 + 36) - 1)) >> 32) >> 4)
			+ ((unsigned int)((unsigned __int64)(1374389535i64 * (*(_DWORD*)(a2 + 36) - 1)) >> 32) >> 31)
			+ 1;
		if (v8 > 511)
		{
			sub_14006BBF0(a1, (v5 << 6) | 0x22, v7);
			v6 = a1;
			v7 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64);
		}
		else
		{
			v8 = ((v5 | (v8 << 8)) << 6) | 0x22;
		}
		sub_14006BBF0(v6, v8, v7);
		result = (unsigned int)(v5 + 1);
		*(_DWORD*)(a1 + 60) = result;
		--* (_DWORD*)(a2 + 36);
	}
	else
	{
		if (*(_DWORD*)a2)
			sub_14006AAE0(a1, (int*)a2);
		return sub_14006BCE0(a1, *(_DWORD*)(*(_QWORD*)(a2 + 24) + 8i64), *(_DWORD*)(a2 + 36), *(_DWORD*)(a2 + 40));
	}
	return result;
}

