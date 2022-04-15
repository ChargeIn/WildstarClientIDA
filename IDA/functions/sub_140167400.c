//----- (0000000140167400) ----------------------------------------------------
__int64 __fastcall sub_140167400(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // eax
	_DWORD* v4; // rcx
	int v5; // edi
	int v6; // eax
	int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rcx
	unsigned __int16* v11; // rax
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+28h] [rbp-20h]

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = (_DWORD*)(a1[3] + 32i64);
	v5 = v3 - 1;
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v6 = 1;
	else
		v6 = sub_140056D60(a1, 3u);
	v7 = v6 - 1;
	if (v6 - 1 < 0 || v7 >= *(_DWORD*)(v2 + 1144) || v5 < 0 || v5 >= *(_DWORD*)(v2 + 1160))
		return 0i64;
	v8 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v5);
	v9 = v7 >= *(_DWORD*)(v8 + 24) ? 0i64 : *(_QWORD*)(*(_QWORD*)(v8 + 16) + 8i64 * v7);
	if (!v9)
		return 0i64;
	v10 = *(_QWORD*)(v9 + 192);
	if (v10)
	{
		v11 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 64i64))(v10);
		if (!v11)
			return 0i64;
	}
	else
	{
		v11 = (unsigned __int16*)&unk_1409DC2EC;
	}
	v13 = (unsigned __int64*)sub_14018F0E0(&v15, v11)[1];
	if (v13)
	{
		v14 = -1i64;
		do
			++v14;
		while (*((_BYTE*)v13 + v14));
		sub_140058710((__int64)a1, v13, v14);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v16)
		sub_14018B900(v16, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

