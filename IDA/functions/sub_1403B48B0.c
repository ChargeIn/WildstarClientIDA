//----- (00000001403B48B0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403B48B0(__int64 a1)
{
	__int64 v2; // rax
	_BOOL8 result; // rax

	result = 1;
	if ((*(_BYTE*)(a1 + 5544) & 1) == 0)
	{
		if (((*(_DWORD*)(a1 + 128) - 3) & 0xFFFFFFFB) != 0)
			return 0;
		if (!sub_14047B670(a1))
			return 0;
		v2 = sub_14047B670(a1);
		if (!(unsigned int)sub_1403B48B0(v2))
			return 0;
	}
	return result;
}

