//----- (000000014006B020) ----------------------------------------------------
void __fastcall sub_14006B020(__int64 a1, int* a2)
{
	int v4; // eax
	int v5; // eax
	int v6; // r8d

	sub_14006A700(a1, a2);
	v4 = *a2;
	if (*a2 != 2)
	{
		if (v4 == 3)
		{
			v5 = sub_14006A030((__int64*)a1);
		}
		else
		{
			if (v4 <= 3)
				goto LABEL_7;
			if (v4 <= 5)
				goto LABEL_11;
			if (v4 == 10)
			{
				sub_14006AED0(a1, (__int64)a2);
				v5 = a2[2];
			}
			else
			{
			LABEL_7:
				v5 = sub_14006AF20((__int64*)a1, a2, 0);
			}
		}
		if (v5 != -1)
			sub_14006A3C0((__int64*)a1, a2 + 5, v5);
	}
LABEL_11:
	v6 = a2[4];
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 48);
	if (v6 != -1)
		sub_14006A3C0((__int64*)a1, (int*)(a1 + 56), v6);
	a2[4] = -1;
}

