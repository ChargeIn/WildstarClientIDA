//----- (00000001405DF340) ----------------------------------------------------
void __fastcall sub_1405DF340(__int64 a1)
{
	if ((dword_140DC3514 & 1) == 0)
	{
		dword_140DC351C = 0;
		dword_140DC3514 |= 1u;
		dword_140DC3520 = 1000;
		dword_140DC3524 = 1;
		dword_140DC3528 = 1000;
		dword_140DC3518 = dword_140C636A8 - 1000;
		sub_1407DD89C(nullsub_9);
	}
	if (dword_140C636A8 - dword_140DC3518 >= (unsigned int)dword_140DC3528)
	{
		if (dword_140C636A8 - dword_140DC3518 < (unsigned int)dword_140DC3520)
		{
			dword_140DC3518 += dword_140DC3528;
		}
		else
		{
			dword_140DC3518 = dword_140C636A8;
			dword_140DC351C = 1;
		}
	}
	else
	{
		if (dword_140DC351C == dword_140DC3524)
			return;
		++dword_140DC351C;
	}
	sub_140195D70(a1 + 840);
	if (*(_DWORD*)(a1 + 752) == 1)
		sub_1405DF560(a1, 0);
	sub_1405DF430(a1);
}
// 140954FC0: using guessed type __int64 __fastcall nullsub_9();
// 140C636A8: using guessed type int dword_140C636A8;
// 140DC3514: using guessed type int dword_140DC3514;
// 140DC3518: using guessed type int dword_140DC3518;
// 140DC351C: using guessed type int dword_140DC351C;
// 140DC3520: using guessed type int dword_140DC3520;
// 140DC3524: using guessed type int dword_140DC3524;
// 140DC3528: using guessed type int dword_140DC3528;

