//----- (00000001408B35C0) ----------------------------------------------------
void __fastcall sub_1408B35C0(__int64 a1, __int64 a2)
{
	int v4; // ecx
	int i; // edx
	__int64 v6; // rcx
	double v7; // xmm4_8
	float v8; // xmm0_4
	float v9; // xmm0_4
	__int64 v10; // rcx

	if (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 104i64))
	{
		if ((unsigned int)sub_1408B3760(a1, *(_DWORD*)(a2 + 8)) != 1)
			return;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	}
	if (*(_BYTE*)(a1 + 600))
	{
		v4 = *(_DWORD*)(a2 + 8);
		if ((v4 & 8) != 0 && !*(_DWORD*)(*(_QWORD*)(a1 + 16) + 32i64))
		{
			for (i = 0; v4; v4 &= v4 - 1)
				++i;
			sub_1407E4830(
				(int*)(*(_QWORD*)a2 + 4 * *(unsigned __int16*)(a2 + 16) * (unsigned __int64)(unsigned int)(i - 1)),
				0i64,
				4 * (unsigned int)*(unsigned __int16*)(a2 + 18));
		}
	}
	if (*(_DWORD*)(a1 + 596))
	{
		v6 = *(_QWORD*)(a1 + 16);
		if (*(float*)(a1 + 32) != *(float*)(v6 + 8) || *(float*)(a1 + 36) != *(float*)(v6 + 12))
		{
			sub_1408BDA90(a1);
			v6 = *(_QWORD*)(a1 + 16);
			v7 = (1.0 - 1.0 / *(float*)(v6 + 12)) / (1.0 / *(float*)(v6 + 12) + 1.0);
			v8 = 1.0 / (1.0 - v7);
			*(float*)(a1 + 68) = v8;
			v9 = -1.0 / (1.0 - v7) * v7;
			*(float*)(a1 + 72) = v9;
			*(_DWORD*)(a1 + 32) = *(_DWORD*)(v6 + 8);
			*(_DWORD*)(a1 + 36) = *(_DWORD*)(v6 + 12);
			*(_DWORD*)(a1 + 592) = (int)(float)((float)*(int*)(a1 + 588) * *(float*)(v6 + 8));
		}
		if (*(_BYTE*)(a1 + 600))
		{
			*(_DWORD*)(a1 + 572) = 0;
			*(_DWORD*)(v6 + 16) = 0;
		}
		sub_1408A1640((unsigned int*)(a1 + 580), a2, *(_DWORD*)(a1 + 592));
		if (*(_WORD*)(a2 + 18))
		{
			(*(void(__fastcall**)(__int64, __int64))(a1 + 8))(a1, a2);
			v10 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 572) = *(_DWORD*)(v10 + 16);
			*(_DWORD*)(a1 + 576) = *(_DWORD*)(v10 + 20);
		}
	}
}

