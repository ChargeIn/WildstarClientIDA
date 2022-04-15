//----- (00000001403A9770) ----------------------------------------------------
_BOOL8 __fastcall sub_1403A9770(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
	__int64 v8; // rax
	bool v9; // zf
	int* v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rax
	int v14; // ecx
	int* v15; // rax
	unsigned int v16; // r8d
	int v17; // ecx
	unsigned __int16* i; // rdx

	if (a5 && !(unsigned int)sub_1403A99D0(a1, a5)
		|| !(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65A18 + 40i64))(
			qword_140C65A18,
			a2,
			a3))
	{
		return 0i64;
	}
	if (a2)
	{
		if (a2 - 1 <= 1)
		{
			v8 = sub_140224D00(a5);
			if (a5)
			{
				if (!v8)
					return 0i64;
			}
			else if (!v8)
			{
				return 1i64;
			}
			switch (*(_DWORD*)(v8 + 12))
			{
			case 2:
			case 5:
				v9 = a4 == 0;
				break;
			case 3:
			case 6:
				v9 = a4 == 1;
				break;
			case 4:
			case 7:
				if (a4 - 2 > 1)
					return 0i64;
				v11 = sub_1403A8810(qword_140C65898, a2, a3);
				if (v11)
				{
					if (*((unsigned __int16*)v11 + (a4 == 2) + 38) == a5
						&& (unsigned int)sub_1403A9C40(qword_140C65898, a5) < 2)
					{
						return 0i64;
					}
				}
				return 1i64;
			default:
				return 0i64;
			}
			return v9;
		}
		return 0i64;
	}
	v12 = sub_1402215C0(a3);
	if (!v12)
		return 0i64;
	v13 = sub_140224D00(a5);
	if (a5)
	{
		if (!v13)
			return 0i64;
	}
	else if (!v13)
	{
		return a4 <= *(_DWORD*)(v12 + 64) && a4 < 4;
	}
	v14 = *(_DWORD*)(v13 + 12);
	if (v14 == 1 && a4)
		return 0i64;
	if (!v14 && a4 - 1 <= 2)
	{
		v15 = sub_1403A8810(qword_140C65898, 0, a3);
		v16 = 4;
		if ((unsigned int)(*(_DWORD*)(v12 + 64) + 1) < 4)
			v16 = *(_DWORD*)(v12 + 64) + 1;
		v17 = 1;
		if (v16 > 1)
		{
			for (i = (unsigned __int16*)v15 + 37; *i != a5 || a4 == v17; ++i)
			{
				if (++v17 >= v16)
					return 1i64;
			}
			return 0i64;
		}
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A18: using guessed type __int64 qword_140C65A18;

