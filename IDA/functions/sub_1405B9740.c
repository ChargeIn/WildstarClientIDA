//----- (00000001405B9740) ----------------------------------------------------
_BYTE* __fastcall sub_1405B9740(_DWORD* a1, _BYTE* a2, __int64 a3, int a4)
{
	__int64 v6; // rcx
	unsigned int v7; // edi
	unsigned __int64 v9; // rbx
	__int16* v10; // r8
	__int16* v11; // r8
	__int64 v12; // [rsp+20h] [rbp-48h]
	__int64 v13; // [rsp+28h] [rbp-40h]
	__int64 v14; // [rsp+30h] [rbp-38h]
	__int64 v15; // [rsp+38h] [rbp-30h]
	__int64 v16; // [rsp+40h] [rbp-28h]

	v7 = sub_140453EE0(a1);
	if (!v7)
		return 0i64;
	v12 = 0x78724240C8400i64;
	v13 = 0x7872505265C00i64;
	v9 = 0i64;
	v14 = 0x787260036EE80i64;
	v15 = 0x787290000EA60i64;
	v16 = 0x7872A000003E8i64;
	do
	{
		if (v7 >= *((_DWORD*)&v12 + 2 * v9))
			break;
		++v9;
	} while (v9 < 5);
	if (a4 || v7 >= 0x3E8)
	{
		if (v9 == 5)
		{
			v11 = sub_14034BDD0(v6, 493355);
			if (!v11
				|| (int)sub_14034BF80(
					a2,
					16i64,
					(unsigned __int16*)v11,
					(float)((float)(int)v7 * 0.001),
					v12,
					v13,
					v14,
					v15,
					v16) < 0)
			{
				return 0i64;
			}
			return a2 + 2;
		}
	}
	else
	{
		v9 = 4i64;
	}
	v10 = sub_14034BDD0(v6, *((_DWORD*)&v12 + 2 * v9 + 1));
	if (!v10)
		return 0i64;
	if ((int)sub_14034BF80(a2, 16i64, (unsigned __int16*)v10, v7 / *((_DWORD*)&v12 + 2 * v9), v12, v13, v14, v15, v16) < 0)
		return 0i64;
	return a2;
}
// 1405B97F9: variable 'v6' is possibly undefined

