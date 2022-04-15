//----- (00000001408935B0) ----------------------------------------------------
__int64 __fastcall sub_1408935B0(__int64 a1, unsigned int a2, char a3)
{
	unsigned int v4; // eax
	unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

	v6 = a2;
	if (*(_DWORD*)(a1 + 16))
	{
		if (*(_DWORD*)(a1 + 24) == 1)
		{
			v4 = sub_140834990(a1 + 24, *(_DWORD*)(a1 - 224), &v6, 1, 0);
			if (v4)
			{
				if (a3)
					return sub_140853B00(v4);
				sub_1408552B0(v4);
			}
		}
	}
	return 1i64;
}

