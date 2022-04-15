//----- (00000001401BA600) ----------------------------------------------------
__int64 __fastcall sub_1401BA600(_QWORD* a1)
{
	unsigned __int64 v1; // r11
	unsigned __int64 v2; // r10
	unsigned __int64* v4; // rdx
	unsigned __int64 v5; // r9
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rcx

	v1 = a1[78];
	v2 = 0i64;
	if (v1)
	{
		v4 = (unsigned __int64*)a1[77];
		do
		{
			v5 = v4[1];
			if (v5)
			{
				v6 = *v4;
				if ((*v4 & 0xF) != 0)
					return 2684551169i64;
				if (v6 < 0x240)
					return 2684551169i64;
				v7 = a1[72];
				if (v6 + 24 > v7 || v5 > v7 || v6 > v7 - v5)
					return 2684551169i64;
			}
			else if (*v4 >= v1)
			{
				return 2684551169i64;
			}
			++v2;
			v4 += 2;
		} while (v2 < v1);
	}
	return 0i64;
}

