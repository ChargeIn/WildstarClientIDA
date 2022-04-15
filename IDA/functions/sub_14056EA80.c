//----- (000000014056EA80) ----------------------------------------------------
void __fastcall sub_14056EA80(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rsi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rbx
	unsigned int v7; // edx
	__int64 v8; // rbp
	__int64 v9; // r9
	__int64 v10; // rcx
	__int64 v11; // rdx
	int* v12; // rbx
	int* v13; // rax
	__int64 v14; // rcx
	bool v15; // zf
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v22; // rcx
	int v23; // [rsp+20h] [rbp-38h] BYREF
	_QWORD* v24; // [rsp+28h] [rbp-30h]
	void(__fastcall * v25)(__int64); // [rsp+30h] [rbp-28h]
	__int64 v26; // [rsp+38h] [rbp-20h]
	__int64 v27; // [rsp+60h] [rbp+8h]

	v2 = (_QWORD*)qword_140C65970;
	sub_1405728B0(qword_140C65970);
	v4 = v2[11];
	if (v4)
	{
		sub_140572FC0(v4);
		v2[11] = 0i64;
	}
	v5 = *(_QWORD*)(qword_140C65920 + 8);
	if (v5)
	{
		do
		{
			v6 = *(_QWORD*)(v5 + 32);
			if (!*(_DWORD*)(v5 + 56))
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			v5 = v6;
		} while (v6);
	}
	v7 = *(_DWORD*)(a2 + 4);
	if (v7)
	{
		v8 = sub_140491BD0(qword_140C65968, v7);
		if (v8)
		{
			v9 = v2[8];
			v10 = *(_QWORD*)(v9 + 8);
			v11 = v9;
			while (v10)
			{
				if (*(_DWORD*)(v10 + 32) < *(_DWORD*)(a2 + 4))
				{
					v10 = *(_QWORD*)(v10 + 24);
				}
				else
				{
					v11 = v10;
					v10 = *(_QWORD*)(v10 + 16);
				}
			}
			if (v11 == v9 || (v27 = v11, *(_DWORD*)(a2 + 4) < *(_DWORD*)(v11 + 32)))
				v27 = v2[8];
			if (v27 == v9)
			{
				v13 = sub_14018B280(88i64, 0);
				v12 = v13;
				if (v13)
				{
					sub_1405729B0((__int64)v13, v8);
					v14 = qword_140C65898;
					*(_QWORD*)v12 = off_140B6C8F8;
					if (v14)
					{
						v15 = qword_140C65B78 == 0;
						*(_DWORD*)(v14 + 28568) = 1;
						if (!v15)
						{
							sub_140575DD0();
							v14 = qword_140C65898;
						}
						sub_1400EA3E0(*(_QWORD*)(v14 + 29504), "PlayerPathRefresh", byte_1409D10FF);
					}
				}
				else
				{
					v12 = 0i64;
				}
				*(_QWORD*)sub_140055BE0((__int64)(v2 + 7), (_DWORD*)(a2 + 4)) = v12;
			}
			else
			{
				v12 = *(int**)(v27 + 40);
			}
			v2[11] = v12;
			sub_140572F10((__int64)v12);
			v16 = v2[11];
			v17 = *(_QWORD*)(v16 + 16);
			v18 = *(_QWORD*)(v17 + 16);
			if (v18 != v17)
			{
				do
				{
					sub_140570340((__int64)v2, *(_QWORD***)(v18 + 40));
					v19 = *(_QWORD*)(v18 + 24);
					if (v19)
					{
						v18 = *(_QWORD*)(v18 + 24);
						for (i = *(_QWORD*)(v19 + 16); i; i = *(_QWORD*)(i + 16))
							v18 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v18 + 8); v18 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v18 = j;
						if (*(_QWORD*)(v18 + 24) != j)
							v18 = j;
					}
				} while (v18 != *(_QWORD*)(v16 + 16));
			}
			if (v2[26])
			{
				v23 = 0;
				v25 = sub_1405727E0;
				v24 = v2;
				v26 = 0i64;
				sub_140195960((__int64)(v2 + 27), 1000, (__int64)&v23, 4);
			}
			v22 = qword_140C65898;
			if (qword_140C65898)
			{
				v15 = qword_140C65B78 == 0;
				*(_DWORD*)(qword_140C65898 + 28568) = 1;
				if (!v15)
				{
					sub_140575DD0();
					v22 = qword_140C65898;
				}
				sub_1400EA3E0(*(_QWORD*)(v22 + 29504), "PlayerPathRefresh", byte_1409D10FF);
			}
		}
	}
	else
	{
		sub_14056B5A0();
	}
}
// 1409D10FF: using guessed type _BYTE byte_1409D10FF[67];
// 140B6C8F8: using guessed type __int64 (__fastcall *off_140B6C8F8[10])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B78: using guessed type __int64 qword_140C65B78;

