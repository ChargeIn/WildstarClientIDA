//----- (000000014045BD30) ----------------------------------------------------
__int64 __fastcall sub_14045BD30(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	int v4; // eax
	__int64 v5; // rcx
	int v6; // edx

	result = *(_QWORD*)(a1 + 24);
	if (result)
	{
		if ((*(_DWORD*)(result + 144) & 0x400) != 0)
			return 1i64;
		if ((dword_140DC2908 & 1) != 0)
		{
			v4 = dword_140DC290C;
		}
		else
		{
			dword_140DC2908 |= 1u;
			v3 = sub_140200220(0x3BDu);
			if (v3)
			{
				v4 = *(_DWORD*)(v3 + 4);
				dword_140DC290C = v4;
			}
			else
			{
				v4 = 6;
				dword_140DC290C = 6;
			}
		}
		v5 = *(_QWORD*)(a1 + 24);
		v6 = *(_DWORD*)(v5 + 20);
		return v6 < 25 && v6 > v4 || *(_DWORD*)(v5 + 4) == 5;
	}
	return result;
}
// 140DC2908: using guessed type int dword_140DC2908;
// 140DC290C: using guessed type int dword_140DC290C;

