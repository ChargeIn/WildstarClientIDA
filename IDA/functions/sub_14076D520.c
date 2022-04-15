//----- (000000014076D520) ----------------------------------------------------
__int64 __fastcall sub_14076D520(__int64 a1)
{
	_DWORD* v2; // rax
	int v3; // ecx
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // rbx
	__int64 v13; // rax
	char v14; // al
	_DWORD* v15; // rax
	int v16; // ecx
	__int64 v18; // [rsp+20h] [rbp-18h] BYREF
	int v19; // [rsp+28h] [rbp-10h]

	v2 = sub_1400580E0(a1, 2);
	v3 = v2[2];
	if (v3 == 2)
	{
		v4 = *(_QWORD*)v2;
	}
	else
	{
		if (v3 != 7)
			return 0i64;
		v4 = *(_QWORD*)v2 + 48i64;
	}
	if (v4)
	{
		v5 = (int*)sub_1400580E0(a1, 2);
		v6 = v5[2];
		if ((_DWORD)v6 == 5 || (_DWORD)v6 == 7)
			v7 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
		else
			v7 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v6 + 224);
		if (v7)
		{
			v8 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v8 = v7;
			*(_DWORD*)(v8 + 8) = 5;
			*(_QWORD*)(a1 + 16) += 16i64;
			v9 = *(_QWORD*)(a1 + 32);
			v10 = sub_140062650(a1, (unsigned __int64*)"Game.MatchMakingEntry", 0x15ui64);
			v11 = *(_QWORD*)(a1 + 16);
			v18 = v10;
			v19 = 4;
			sub_14005E8E0(a1, v9 + 160, (int*)&v18, v11);
			*(_QWORD*)(a1 + 16) += 16i64;
			v12 = sub_1400586A0(a1, -1);
			v13 = sub_1400586A0(a1, -2);
			v14 = sub_1400E2100(qword_140C63650, v13, v12);
			*(_QWORD*)(a1 + 16) -= 32i64;
			if (v14)
			{
				v15 = sub_1400580E0(a1, 2);
				v16 = v15[2];
				if (v16 == 2)
					return *(_QWORD*)v15;
				if (v16 == 7)
					return *(_QWORD*)v15 + 48i64;
			}
		}
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

