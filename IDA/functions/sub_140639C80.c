//----- (0000000140639C80) ----------------------------------------------------
__int64 __fastcall sub_140639C80(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // rcx
	unsigned int v6; // eax
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	unsigned __int16* v14; // r11
	__int64 v15; // rax
	_QWORD* v16; // rdi
	_QWORD* v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // r9
	__int64 result; // rax
	__int64 v22; // [rsp+20h] [rbp-28h] BYREF
	__int64 v23; // [rsp+28h] [rbp-20h]
	__int64 v24; // [rsp+30h] [rbp-18h]

	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
		v6 = *(_DWORD*)(v4 + 56);
	else
		v6 = 0;
	if (*(_DWORD*)(a1 + 8) > v6)
		return 0i64;
	if (a3 ? (*(_BYTE*)(a1 + 12) & 2) == 0 : (*(_BYTE*)(a1 + 12) & 1) == 0)
		return 0i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v10, L"nRewardType", 2);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_1401E87E0(*(_DWORD*)(a1 + 4));
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v13, L"strIcon", v14);
	v15 = *(_QWORD*)(a2 + 16);
	LODWORD(v24) = 0;
	*(_QWORD*)(v15 + 16) -= 16i64;
	v16 = *(_QWORD**)(a2 + 16);
	LODWORD(v15) = *(_DWORD*)(a1 + 4);
	v23 = 15i64;
	HIDWORD(v24) = v15;
	v17 = (_QWORD*)sub_140059170(v16, 0x18ui64);
	*v17 = 1i64;
	v17[1] = 15i64;
	v17[2] = v24;
	v18 = v16[4];
	v19 = sub_140062650((__int64)v16, (unsigned __int64*)"Game.Money", 0xAui64);
	v20 = v16[2];
	v22 = v19;
	LODWORD(v23) = 4;
	sub_14005E8E0((__int64)v16, v18 + 160, (int*)&v22, v20);
	v16[2] += 16i64;
	sub_140058BF0((__int64)v16, -2);
	sub_1400FB540(a2);
	result = 1i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	return result;
}
// 140639CE3: variable 'v9' is possibly undefined
// 140639D5C: variable 'v12' is possibly undefined
// 140639D7F: variable 'v14' is possibly undefined
// 140B28B00: using guessed type wchar_t aNrewardtype_2[12];
// 140B28B18: using guessed type wchar_t aStricon_6[8];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;

