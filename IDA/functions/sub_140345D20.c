//----- (0000000140345D20) ----------------------------------------------------
__int64 __fastcall sub_140345D20(__int64 a1, _DWORD* a2, const WCHAR* a3, __int64 a4)
{
	unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

	v7 = 0;
	if (a4 && *(_QWORD*)a4)
	{
		if ((unsigned int)sub_140827AD0(a3, (__int64)sub_1403451B0, a4, 0xFFFFFFFF, &v7) != 1)
		{
			if (a2)
				*a2 = 0;
			sub_1400035B0();
			(*(void(__fastcall**)(__int64, _QWORD))a4)(2147500037i64, *(_QWORD*)(a4 + 8));
			return 2147500037i64;
		}
		goto LABEL_11;
	}
	if ((unsigned int)sub_1408279E0(a3, 0xFFFFFFFF, &v7) == 1)
	{
	LABEL_11:
		if (a2)
			*a2 = v7;
		return 0i64;
	}
	if (a2)
		*a2 = 0;
	sub_1400035B0();
	return 2147500037i64;
}

