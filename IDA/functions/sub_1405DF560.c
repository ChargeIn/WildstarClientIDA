//----- (00000001405DF560) ----------------------------------------------------
__int64 __fastcall sub_1405DF560(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	int* v6; // rax
	__int64 v7; // rdx
	int* v8; // rax
	__int64 v9; // rdx
	__int64 v10; // r9
	int v11; // ecx
	__int64 result; // rax
	__int64 v13; // rcx
	int v14; // eax
	int v15; // edx
	__int16* v16; // rax
	__int64 v17; // [rsp+30h] [rbp-18h] BYREF
	__int64 v18; // [rsp+38h] [rbp-10h]

	v4 = *(_QWORD*)(a1 + 704);
	v5 = 0i64;
	if (*(_QWORD*)(a1 + 696) == v4)
	{
		v6 = (int*)sub_14034BDD0(0i64, 552510);
		v7 = 0i64;
		if (*(_WORD*)v6)
		{
			do
				++v7;
			while (*((_WORD*)v6 + v7));
		}
		sub_14001C480(a1 + 688, v6, (int*)((char*)v6 + 2 * v7));
		v5 = 1i64;
	}
	if (*(_QWORD*)(a1 + 728) == *(_QWORD*)(a1 + 736))
	{
		v8 = (int*)sub_14034BDD0(v5, 552512);
		v9 = 0i64;
		if (*(_WORD*)v8)
		{
			do
				++v9;
			while (*((_WORD*)v8 + v9));
		}
		sub_14001C480(a1 + 720, v8, (int*)((char*)v8 + 2 * v9));
		LODWORD(v5) = 1;
	}
	v10 = qword_140C65898;
	if (*(_DWORD*)(qword_140C65898 + 31560) == 127)
	{
		v11 = *(_DWORD*)(a1 + 832) | v5;
		*(_DWORD*)(a1 + 832) = 0;
		if (v11)
		{
			v17 = 0i64;
			v18 = 0i64;
			v17 = *(_QWORD*)(a1 + 696);
			v18 = *(_QWORD*)(a1 + 728);
			sub_1403F4740(v10, 0x3B7u, (__int64)&v17);
			v10 = qword_140C65898;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 832) |= v5;
	}
	result = *(unsigned int*)(a1 + 752);
	if (a2 != (_DWORD)result && (_DWORD)result != 4)
	{
		*(_DWORD*)(a1 + 752) = a2;
		sub_1400EA3E0(*(_QWORD*)(v10 + 29504), "FriendshipAccountPersonalStatusUpdate", &unk_1409D0EFD);
		v14 = *(_DWORD*)(a1 + 752);
		if (v14 == 1)
		{
			v15 = 552503;
		}
		else
		{
			if (v14 != 2)
			{
			LABEL_20:
				if (*(_DWORD*)(a1 + 752))
					sub_140195D70(a1 + 840);
				else
					sub_1405DF430(a1);
				sub_1405DF720(a1);
				return a2;
			}
			v15 = 552505;
		}
		v16 = sub_14034BDD0(v13, v15);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v16, 0, 0i64);
		goto LABEL_20;
	}
	return result;
}
// 1405DF6BB: variable 'v13' is possibly undefined
// 1405DF430: using guessed type __int64 __fastcall sub_1405DF430(_QWORD);
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

