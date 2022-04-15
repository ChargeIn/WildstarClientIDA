//----- (000000014056C050) ----------------------------------------------------
void __fastcall sub_14056C050(__int64 a1, int a2)
{
	__int64* v2; // rax
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax

	if (!a2)
		return;
	v2 = *(__int64**)(a1 + 48);
	v4 = *v2;
	if (*(_DWORD*)(*v2 + 12) == 2)
	{
		v8 = sub_14021FC40(*(_DWORD*)(v4 + 20));
		if (v8)
			sub_140572B10(a1, v8);
	}
	else
	{
		if (*(_DWORD*)(*v2 + 12) == 3)
		{
		LABEL_11:
			v7 = sub_140721EF0(a1, *(_DWORD*)(v4 + 20));
			if (v7)
				sub_140572D00(a1, v7);
			return;
		}
		if (*(_DWORD*)(*v2 + 12) != 13)
		{
			if (*(_DWORD*)(*v2 + 12) != 15)
			{
				if (*(_DWORD*)(*v2 + 12) == 18)
				{
					v5 = sub_14021E2C0(*(_DWORD*)(v4 + 20));
					if (v5)
						sub_140572C30(a1, v5);
				}
				return;
			}
			goto LABEL_11;
		}
		v6 = sub_14021EB40(*(_DWORD*)(v4 + 20));
		if (v6)
			sub_140572BA0(a1, v6);
	}
}

