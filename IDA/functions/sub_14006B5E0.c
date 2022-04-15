//----- (000000014006B5E0) ----------------------------------------------------
void __fastcall sub_14006B5E0(__int64 a1, int a2, __int64 a3)
{
	int v5; // edx
	int v6; // edx
	int v7; // eax
	bool v8; // cc
	int v9; // ecx
	int v10; // edx
	int v11; // edx
	int v12; // eax
	bool v13; // cc
	int v14; // ecx
	int v15; // eax

	if (!a2)
	{
		if (*(_DWORD*)a3 != 5 || *(_DWORD*)(a3 + 16) != -1 || *(_DWORD*)(a3 + 20) != -1)
			sub_14006AB60(a1, (int*)a3);
		if (*(_DWORD*)a3 == 5 && *(_DWORD*)(a3 + 16) == -1 && *(_DWORD*)(a3 + 20) == -1)
		{
			*(double*)(a3 + 8) = -*(double*)(a3 + 8);
			return;
		}
		v11 = sub_14006ABD0(a1, a3);
		if (v11 <= 0)
		{
			if (*(_DWORD*)a3 == 12)
			{
				v14 = *(_DWORD*)(a3 + 8);
				if ((v14 & 0x100) == 0)
				{
					v13 = v14 < *(unsigned __int8*)(a1 + 74);
				LABEL_30:
					if (!v13)
						--* (_DWORD*)(a1 + 60);
				}
			}
		}
		else if (*(_DWORD*)a3 == 12)
		{
			v12 = *(_DWORD*)(a3 + 8);
			if ((v12 & 0x100) == 0)
			{
				v13 = v12 < *(unsigned __int8*)(a1 + 74);
				goto LABEL_30;
			}
		}
		v10 = (v11 << 23) | 0x12;
		goto LABEL_33;
	}
	v5 = a2 - 1;
	if (!v5)
	{
		sub_14006B150(a1, (int*)a3);
		return;
	}
	if (v5 != 1)
		return;
	sub_14006AB60(a1, (int*)a3);
	v6 = sub_14006ABD0(a1, a3);
	if (v6 <= 0)
	{
		if (*(_DWORD*)a3 != 12)
			goto LABEL_13;
		v9 = *(_DWORD*)(a3 + 8);
		if ((v9 & 0x100) != 0)
			goto LABEL_13;
		v8 = v9 < *(unsigned __int8*)(a1 + 74);
	}
	else
	{
		if (*(_DWORD*)a3 != 12)
			goto LABEL_13;
		v7 = *(_DWORD*)(a3 + 8);
		if ((v7 & 0x100) != 0)
			goto LABEL_13;
		v8 = v7 < *(unsigned __int8*)(a1 + 74);
	}
	if (!v8)
		--* (_DWORD*)(a1 + 60);
LABEL_13:
	v10 = (v6 << 23) | 0x14;
LABEL_33:
	v15 = sub_14006BBF0(a1, v10, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	*(_DWORD*)a3 = 11;
	*(_DWORD*)(a3 + 8) = v15;
}

