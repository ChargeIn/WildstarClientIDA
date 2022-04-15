//----- (00000001406F7A40) ----------------------------------------------------
__int64 __fastcall sub_1406F7A40(_QWORD* a1)
{
	__int64* v1; // rdx
	int v3; // eax
	unsigned int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned __int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int128 v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+50h] [rbp+8h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (a1[3] < a1[2])
		v1 = (__int64*)a1[3];
	v3 = *((_DWORD*)v1 + 2);
	if (v3 != 3)
	{
		if (v3 != 4 || !sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v15))
		{
			v4 = 0;
			goto LABEL_8;
		}
		LODWORD(v14) = 3;
		v1 = &v13;
		v13 = v15;
	}
	v4 = (int)*(double*)v1;
LABEL_8:
	v5 = sub_1403B59F0((__int64)a1, v4);
	LODWORD(v14) = v4;
	*(_QWORD*)((char*)&v14 + 4) = 0i64;
	HIDWORD(v14) = 0;
	v6 = v5;
	v7 = sub_140059170(a1, 0x18ui64);
	v8 = v14;
	*(_QWORD*)v7 = v6;
	*(_OWORD*)(v7 + 8) = __PAIR128__(*((unsigned __int64*)&v14 + 1), v8);
	v9 = a1[4];
	v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v11 = a1[2];
	v13 = v10;
	LODWORD(v14) = 4;
	sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v13, v11);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 1406F7AAE: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

