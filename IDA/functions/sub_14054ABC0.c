//----- (000000014054ABC0) ----------------------------------------------------
__int64 __fastcall sub_14054ABC0(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // r8
	int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // r8
	unsigned int v9; // esi
	int v10; // eax
	BOOL v11; // eax
	__int64 v12; // r8
	__int64 v13; // r9
	int v14; // eax
	int v15; // eax
	int v16; // eax
	int v17; // eax
	int v18; // eax

	result = sub_1403E9720(a1, a2);
	if (!(_DWORD)result)
		return result;
	if (a2 == 2 || (!a2 || (unsigned int)(a2 - 3) <= 1) && (*(_BYTE*)(v4 + 140) & 2) != 0)
		return 1i64;
	v5 = *(_DWORD*)(*(_QWORD*)(v4 + 48) + 4i64);
	v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 116));
	v8 = v6;
	if (v6)
		v8 = sub_14047DCA0(v6);
	if (v8 == *(_QWORD*)(qword_140C65898 + 120))
		return 1i64;
	v9 = 0;
	v11 = 0;
	if (v8)
	{
		if (*(_DWORD*)(v8 + 3408) || (v10 = *(_DWORD*)(v8 + 128), v10 == 20) || v10 == 23)
			v11 = 1;
	}
	if (a2 != 1)
	{
		if (v11)
		{
			if (!(unsigned int)sub_1403E9870(v7, v5, v8))
				return 0i64;
			v17 = dword_140C452F0;
			if (*(_DWORD*)qword_140C63750 < dword_140C452F0)
				v17 = *(_DWORD*)qword_140C63750;
			result = *((unsigned __int8*)&dword_140C45300 + v17);
			if (!(_DWORD)result)
				return result;
		}
		else
		{
			if (!(unsigned int)sub_1403E97E0(v7, v5))
				return 0i64;
			v18 = dword_140C45230;
			if (*(_DWORD*)qword_140C63750 < dword_140C45230)
				v18 = *(_DWORD*)qword_140C63750;
			if (!*((_BYTE*)&dword_140C45240 + v18))
				return 0i64;
		}
		return 1i64;
	}
	if (v11)
	{
		if ((unsigned int)sub_1403E9A10(v7, v5))
		{
			v14 = dword_140C454F0;
			if (*(_DWORD*)qword_140C63750 < dword_140C454F0)
				v14 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C45500 + v14))
			{
				v15 = dword_140C455B0;
				if (*(_DWORD*)qword_140C63750 < dword_140C455B0)
					v15 = *(_DWORD*)qword_140C63750;
				if (*((_BYTE*)&dword_140C455C0 + v15))
				{
					if (*(_QWORD*)(v13 + 27728))
					{
						LOBYTE(v9) = sub_140605340(v13 + 27664, v12 + 416) != 0;
						return v9;
					}
					return 0i64;
				}
				return 1i64;
			}
		}
		return 0i64;
	}
	if (!(unsigned int)sub_1403E9980(v7, v5))
		return 0i64;
	v16 = dword_140C45430;
	if (*(_DWORD*)qword_140C63750 < dword_140C45430)
		v16 = *(_DWORD*)qword_140C63750;
	result = *((unsigned __int8*)&dword_140C45440 + v16);
	if ((_DWORD)result)
		return 1i64;
	return result;
}
// 14054ABF6: variable 'v4' is possibly undefined
// 14054AC8E: variable 'v7' is possibly undefined
// 14054ACE3: variable 'v13' is possibly undefined
// 14054ACF0: variable 'v12' is possibly undefined
// 140C45230: using guessed type int dword_140C45230;
// 140C45240: using guessed type int dword_140C45240;
// 140C452F0: using guessed type int dword_140C452F0;
// 140C45300: using guessed type int dword_140C45300;
// 140C45430: using guessed type int dword_140C45430;
// 140C45440: using guessed type int dword_140C45440;
// 140C454F0: using guessed type int dword_140C454F0;
// 140C45500: using guessed type int dword_140C45500;
// 140C455B0: using guessed type int dword_140C455B0;
// 140C455C0: using guessed type int dword_140C455C0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

