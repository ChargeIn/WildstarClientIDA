//----- (0000000140880920) ----------------------------------------------------
__int64 __fastcall sub_140880920(__int64 a1, bool* a2)
{
	__int64 v3; // rcx
	__int64 v4; // rdi
	int v5; // eax
	bool v6; // al
	__int64 result; // rax
	__int64 v8; // rdx

	*a2 = 0;
	v3 = *(_QWORD*)(a1 + 24);
	if ((*(_DWORD*)(*(_QWORD*)(v3 + 168) + 16i64) & 2) == 0 || (*(_BYTE*)(v3 + 383) & 2) != 0)
		return 1i64;
	v4 = *(_QWORD*)(v3 + 416);
	v5 = *(_DWORD*)(v3 + 424);
	*(_DWORD*)(a1 + 104) = v5;
	v6 = v4 && v5;
	*a2 = v6;
	*(_BYTE*)(a1 + 126) &= ~2u;
	*(_BYTE*)(a1 + 126) |= 2 * v6;
	if (!*a2)
		return 1i64;
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 168i64))(a1, v4);
	if ((_DWORD)result == 1)
	{
		result = sub_140880B20(a1, v4, 1);
		if ((_DWORD)result == 1)
		{
			if (*(_WORD*)(a1 + 124) || (result = sub_140880E10(a1, *(_DWORD*)(a1 + 104)), (_DWORD)result == 1))
			{
				v8 = *(unsigned int*)(a1 + 52);
				*(_QWORD*)(a1 + 96) += v8;
				*(_DWORD*)(a1 + 104) -= v8;
				return 1i64;
			}
		}
	}
	return result;
}

