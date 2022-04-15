//----- (0000000140794950) ----------------------------------------------------
__int64 __fastcall sub_140794950(__int64 a1, __int64 a2, int a3)
{
	int v6; // edi
	int v7; // eax
	__int64 v9; // rdi

	if (a1 == a2)
	{
		v6 = 0;
	}
	else if (*(_BYTE*)(a2 + 10))
	{
		if (*(_BYTE*)(a2 + 10) == 1)
			v6 = 1;
		else
			v6 = 3;
	}
	else if (*(_QWORD*)(a2 + 40) <= *(_QWORD*)(a2 + 80))
	{
		v7 = 1;
		if (!(unsigned int)((__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 24)) >> 4))
			v7 = 3;
		v6 = v7;
	}
	else
	{
		v6 = 2;
	}
	if (!(unsigned int)sub_140058190(a2, a3))
		sub_140056830((_QWORD*)a1, (unsigned __int64*)aTooManyArgumen);
	if (v6 == 1)
	{
		sub_140058240(a1, a2, a3);
		*(_WORD*)(a2 + 96) = *(_WORD*)(a1 + 96);
		if ((unsigned int)sub_140061E60(a2, a3) <= 1)
		{
			v9 = (__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 24)) >> 4;
			if (!(unsigned int)sub_140058190(a1, (int)v9 + 1))
				sub_140056830((_QWORD*)a1, (unsigned __int64*)aTooManyResults_0);
			sub_140058240(a2, a1, v9);
			return (unsigned int)v9;
		}
		else
		{
			sub_140058240(a2, a1, 1);
			return 0xFFFFFFFFi64;
		}
	}
	else
	{
		sub_140058780(a1, (unsigned __int64*)"cannot resume %s coroutine", off_140B50BC0[v6]);
		return 0xFFFFFFFFi64;
	}
}
// 140B50BC0: using guessed type char *off_140B50BC0[5];

