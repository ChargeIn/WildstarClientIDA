//----- (000000014009B2E0) ----------------------------------------------------
__int64 __fastcall sub_14009B2E0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = sub_140336040(a1, *(unsigned __int16**)a2);
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, *(unsigned __int16**)(a2 + 8));
		if ((int)result >= 0)
		{
			result = sub_1400A73C0(a1, *(_DWORD*)(a2 + 16));
			if ((int)result >= 0)
				return sub_140336040(a1, *(unsigned __int16**)(a2 + 24));
		}
	}
	return result;
}

