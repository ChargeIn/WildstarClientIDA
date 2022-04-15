//----- (000000014039F590) ----------------------------------------------------
__int64 __fastcall sub_14039F590(__int64 a1, int a2)
{
	int v3; // edx
	int v4; // edx
	int v5; // edx
	unsigned int v7; // ecx
	__int64 v8; // rax
	unsigned int v9; // edx

	v3 = a2 - 1;
	if (v3)
	{
		v4 = v3 - 1;
		if (v4)
		{
			v5 = v4 - 1;
			if (v5)
			{
				if (v5 != 1)
					return 0i64;
				v7 = 478;
			}
			else
			{
				v7 = 477;
			}
		}
		else
		{
			v7 = 480;
		}
	}
	else
	{
		v7 = 479;
	}
	v8 = sub_140200220(v7);
	if (v8)
		v9 = *(_DWORD*)(v8 + 4);
	else
		v9 = 0;
	return sub_1403ACD90(qword_140C65B70, v9, *(_QWORD*)(a1 + 120));
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

