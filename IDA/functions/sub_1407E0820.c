//----- (00000001407E0820) ----------------------------------------------------
__int64 __fastcall sub_1407E0820(__int64 a1)
{
	unsigned int v1; // edi
	int v4; // eax
	void* v5; // rcx

	v1 = -1;
	if (a1)
	{
		if ((*(_BYTE*)(a1 + 24) & 0x83) != 0)
		{
			v1 = sub_1407E1164((_DWORD*)a1);
			sub_1407EEF14(a1);
			v4 = sub_1407EA35C(a1);
			if ((int)sub_1407EED94(v4) >= 0)
			{
				v5 = *(void**)(a1 + 40);
				if (v5)
				{
					sub_1407E14C0(v5);
					*(_QWORD*)(a1 + 40) = 0i64;
				}
			}
			else
			{
				v1 = -1;
			}
		}
		*(_DWORD*)(a1 + 24) = 0;
		return v1;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}

