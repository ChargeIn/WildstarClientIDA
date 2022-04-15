//----- (000000014082F9A0) ----------------------------------------------------
__int64 __fastcall sub_14082F9A0(__int64 a1, int a2, __int64 a3, char a4)
{
	__int64 v4; // rbx
	__int64 result; // rax

	v4 = *(_QWORD*)(a1 + 8);
	result = 1283i64;
	if (*(_WORD*)(v4 + 60) == 1283)
	{
		result = (unsigned int)(a2 - 0x1000000);
		if ((result & 0xFEFFFFFF) != 0)
		{
			result = (unsigned int)(a2 - 0x4000000);
			if ((result & 0xFBFFFFFF) == 0 && a4)
			{
				*(_BYTE*)(v4 + 88) &= ~2u;
				*(_QWORD*)(v4 + 80) = 0i64;
				if (a2 == 0x4000000)
					result = sub_14082C2B0((__int64)qword_140C61B68, a1);
				*(_DWORD*)(v4 + 240) = 0;
			}
		}
		else if (a4)
		{
			*(_BYTE*)(v4 + 88) &= ~1u;
			*(_QWORD*)(v4 + 72) = 0i64;
			if (a2 == 0x2000000)
				return sub_14082F160((__int64)qword_140C61B68, a1);
		}
	}
	return result;
}

