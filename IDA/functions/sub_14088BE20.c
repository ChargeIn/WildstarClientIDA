//----- (000000014088BE20) ----------------------------------------------------
__int64 __fastcall sub_14088BE20(__int64 a1)
{
	int v1; // r8d
	__int64 result; // rax
	int v4; // ecx

	v1 = *(_DWORD*)(a1 + 408);
	result = v1 & 0x800003FF;
	if (v1 < 0)
		result = ((unsigned __int16)((v1 & 0x3FF) - 1) | 0xFFFFFC00) + 1;
	if ((int)result > 512 || (v4 = *(_DWORD*)(a1 + 372), (int)result > v4))
	{
		*(_BYTE*)(a1 + 383) &= 0xF3u;
		*(_BYTE*)(a1 + 383) |= 0x82u;
		*(_DWORD*)(a1 + 372) += 1024 - result;
		result = (unsigned int)(v1 + 1024 - result);
		*(_DWORD*)(a1 + 408) = result;
	}
	else if ((int)result <= 0)
	{
		*(_BYTE*)(a1 + 383) |= 0x80u;
	}
	else
	{
		*(_BYTE*)(a1 + 383) &= 0xF3u;
		*(_BYTE*)(a1 + 383) |= 0x82u;
		*(_DWORD*)(a1 + 408) = v1 - result;
		*(_DWORD*)(a1 + 372) = v4 - result;
	}
	return result;
}

