//----- (0000000140699D40) ----------------------------------------------------
__int64 __fastcall sub_140699D40(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rbx
	unsigned int v6; // eax
	unsigned __int64 v7; // rdx
	__int64 v8; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = sub_140056D60(a1, 2u);
				v7 = 0i64;
				while (v7 < *(_QWORD*)(v5 + 656))
				{
					v8 = *(_QWORD*)(v5 + 648);
					if (*(_DWORD*)(v8 + 8 * v7++) == v6)
					{
						sub_140399D40(v8, v6);
						return 0i64;
					}
				}
			}
		}
	}
	return 0i64;
}
// 140699DB9: conditional instruction was optimized away because r8d.4==0
// 140699D70: variable 'v3' is possibly undefined

