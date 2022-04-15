//----- (00000001404CE430) ----------------------------------------------------
_BOOL8 __fastcall sub_1404CE430(__int64 a1, int a2, int a3)
{
	__int64 v3; // rax
	unsigned int v4; // edx
	unsigned int v5; // ecx
	__int64 v6; // r8
	_DWORD* i; // rax
	__int64 v9; // rax
	__int64 v10; // rax

	if (!a2)
		return 1i64;
	if ((unsigned int)(a2 - 1) <= 1)
	{
		if (a3)
		{
			v3 = sub_1407A0FD0(qword_140C65B70, a3);
			if (v3)
			{
				v4 = *(_DWORD*)(v3 + 40);
				v5 = 0;
				if (v4)
				{
					v6 = *(_QWORD*)(v3 + 48);
					for (i = (_DWORD*)(v6 + 16); *i != 36; i += 42)
					{
						if (++v5 >= v4)
							return 0i64;
					}
					v9 = sub_1404835C0(qword_140C65918, *(_DWORD*)(168i64 * v5 + v6 + 64));
					if (v9)
					{
						v10 = sub_140248240(*(_DWORD*)(v9 + 372));
						if (v10)
							return (*(_DWORD*)(v10 + 96) & 0x4000) == 0;
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B70: using guessed type __int64 qword_140C65B70;

