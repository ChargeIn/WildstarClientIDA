//----- (00000001403C9180) ----------------------------------------------------
__int64 __fastcall sub_1403C9180(__int64 a1)
{
	int v2; // ecx
	__int64 v3; // rax
	__int64(__fastcall * *v5)(); // [rsp+20h] [rbp-18h] BYREF
	int v6; // [rsp+28h] [rbp-10h]
	int v7; // [rsp+2Ch] [rbp-Ch]

	sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ElderPointsLimitReached", &unk_1409D0F0D);
	v2 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
	v7 = 34;
	v6 = v2;
	v5 = off_140B6F580;
	if (sub_14060AF20((__int64)&v5))
	{
		v3 = sub_1403D90D0(qword_140C65898, v6);
		if (v3)
		{
			if (sub_14047DCA0(v3))
				sub_14060AFE0((int*)&v5, v6);
		}
	}
	return 0i64;
}
// 140B6F580: using guessed type __int64 (__fastcall *off_140B6F580[189])();
// 140C65898: using guessed type __int64 qword_140C65898;

