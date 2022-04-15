//----- (00000001405DEE20) ----------------------------------------------------
void __fastcall sub_1405DEE20(__int64 a1, int a2, _WORD* a3)
{
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // [rsp+20h] [rbp-38h]
	__int64 v8; // [rsp+20h] [rbp-38h]
	__int64 v9; // [rsp+30h] [rbp-28h] BYREF
	__int64 v10; // [rsp+38h] [rbp-20h]
	_WORD* v11; // [rsp+40h] [rbp-18h]

	if ((unsigned int)sub_1405DF7C0(a1))
	{
		v5 = sub_1405E2300(qword_140C65898 + 26680, a2);
		if (v5)
		{
			if ((unsigned int)sub_1403E1170(a3, 0x16u))
			{
				if ((*(unsigned int(__fastcall**)(__int64, _WORD*, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C65890
					+ 8i64))(
						qword_140C65890,
						a3,
						1i64,
						0i64,
						0))
				{
					LODWORD(v8) = 31;
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v8);
				}
				else
				{
					v9 = 0i64;
					v10 = 0i64;
					v11 = 0i64;
					v9 = *(_QWORD*)(v5 + 184);
					v6 = *(_QWORD*)(v5 + 192);
					v11 = a3;
					v10 = v6;
					sub_1403F4740(qword_140C65898, 0x398u, (__int64)&v9);
				}
			}
			else
			{
				v7 = 10;
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v7);
			}
		}
	}
}
// 1405DEEEE: variable 'v8' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65890: using guessed type __int64 qword_140C65890;
// 140C65898: using guessed type __int64 qword_140C65898;

