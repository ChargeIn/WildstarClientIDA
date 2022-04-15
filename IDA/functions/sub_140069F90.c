//----- (0000000140069F90) ----------------------------------------------------
__int64 __fastcall sub_140069F90(__int64 a1, int a2, int a3)
{
	int v3; // eax
	__int64 result; // rax
	unsigned int* v7; // r11
	unsigned int v8; // ecx
	int v9; // edx

	v3 = *(_DWORD*)(a1 + 48);
	if (v3 <= *(_DWORD*)(a1 + 52))
		return sub_14006BBF0(a1, ((a2 | ((a2 + a3 - 1) << 17)) << 6) | 3u, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	if (v3)
	{
		v7 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)a1 + 24i64) + 4i64 * (v3 - 1));
		v8 = *v7;
		if ((*(_BYTE*)v7 & 0x3F) != 3)
			return sub_14006BBF0(a1, ((a2 | ((a2 + a3 - 1) << 17)) << 6) | 3u, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
		v9 = v8 >> 23;
		if ((unsigned __int8)(v8 >> 6) > a2 || a2 > v9 + 1)
			return sub_14006BBF0(a1, ((a2 | ((a2 + a3 - 1) << 17)) << 6) | 3u, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
		result = (unsigned int)(a2 + a3 - 1);
		if ((int)result > v9)
		{
			result = v8 & 0x7FFFFF | ((a2 + a3 - 1) << 23);
			*v7 = result;
		}
	}
	else
	{
		result = *(unsigned __int8*)(a1 + 74);
		if (a2 < (int)result)
			return sub_14006BBF0(a1, ((a2 | ((a2 + a3 - 1) << 17)) << 6) | 3u, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	}
	return result;
}

