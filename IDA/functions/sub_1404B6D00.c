//----- (00000001404B6D00) ----------------------------------------------------
void __fastcall sub_1404B6D00(__int64 a1, _WORD* a2)
{
	__int64 v3; // r9
	__int64 v4; // r8
	__int64* v5; // rax
	__int64* v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // [rsp+30h] [rbp-28h] BYREF
	__int64 v12; // [rsp+38h] [rbp-20h]
	_WORD* v13; // [rsp+40h] [rbp-18h]

	v3 = *(_QWORD*)(qword_140C65898 + 29960);
	v4 = *(_QWORD*)(qword_140C659F0 + 824);
	if (v3)
	{
		v5 = *(__int64**)(v4 + 16);
		v6 = *(__int64**)(v4 + 24);
		if (v5 != v6)
		{
			while (1)
			{
				v7 = *v5;
				if (*(_DWORD*)(*v5 + 8) == *(_DWORD*)(qword_140C65898 + 29952) && *(_QWORD*)(v7 + 16) == v3)
					break;
				if (++v5 == v6)
					return;
			}
			v8 = *v5;
			if (v7)
			{
				if ((unsigned int)sub_1403E1170(a2, 6u))
				{
					if (!(*(unsigned int(__fastcall**)(__int64, _WORD*, __int64))(*(_QWORD*)qword_140C65890 + 8i64))(
						qword_140C65890,
						a2,
						1i64))
					{
						v9 = *(_QWORD*)(qword_140C65898 + 120);
						if (v9)
						{
							if (*(_DWORD*)(v9 + 128) == 20)
							{
								v11 = 0i64;
								v12 = 0i64;
								v13 = 0i64;
								v10 = *(_QWORD*)(v8 + 8);
								v13 = a2;
								v11 = v10;
								v12 = *(_QWORD*)(v8 + 16);
								sub_1403F4900(qword_140C65898, 0x529u, (__int64)&v11);
							}
						}
					}
				}
			}
		}
	}
}
// 140C65890: using guessed type __int64 qword_140C65890;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

