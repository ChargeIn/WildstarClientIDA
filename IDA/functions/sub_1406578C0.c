//----- (00000001406578C0) ----------------------------------------------------
__int64 __fastcall sub_1406578C0(_QWORD* a1)
{
	int* v2; // rax
	int v3; // edi
	__int64 v4; // rsi
	int* v5; // rax
	__int64 v6; // rbp
	__int64 v7; // rcx
	_DWORD* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rsi
	__int64 v11; // rax
	__int64 v12; // r8
	int v13; // eax
	int v14; // ecx
	_DWORD* v15; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	v3 = 0;
	if (!v2 || (v4 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v5 = (int*)sub_1406622C0((__int64)a1, 2);
	if (!v5 || (v6 = sub_1403D90D0(qword_140C65898, *v5)) == 0)
		sub_140056570(a1, 2u, "invalid unit");
	v7 = *(_QWORD*)(v4 + 24);
	if (v7)
	{
		if (*(_DWORD*)(v4 + 128) == 5)
		{
			v9 = sub_140244B00(*(_DWORD*)(v7 + 168));
			v10 = v9;
			if (v9)
			{
				v11 = sub_140246480(*(_DWORD*)(v9 + 4));
				if (v11)
				{
					if (sub_140242D40(*(_DWORD*)(v11 + 4)))
					{
						v12 = *(unsigned int*)(v10 + 8);
						if (!(_DWORD)v12
							|| (v13 = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
								qword_140C659A0,
								v6,
								v12,
								0i64,
								0i64,
								0),
								v14 = 0,
								v13))
						{
							v14 = 1;
						}
						LOBYTE(v3) = v14 != 0;
					}
				}
			}
		}
		v15 = (_DWORD*)a1[2];
		v15[2] = 1;
		*v15 = v3;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

