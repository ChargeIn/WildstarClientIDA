//----- (00000001405115B0) ----------------------------------------------------
__int64 __fastcall sub_1405115B0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	_DWORD* i; // rdx
	__int16* v6; // rax
	unsigned __int64* v7; // rbp
	unsigned __int64 v8; // rdi
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rcx
	_QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

	v2 = (unsigned int)sub_140056D60(a1, 1u);
	v3 = 0i64;
	for (i = dword_140C38A60; *i != (_DWORD)v2; i += 2)
	{
		v3 = (unsigned int)(v3 + 1);
		if ((unsigned int)v3 >= 0xB)
			return 0i64;
	}
	v6 = sub_14034BDD0(v2, dword_140C38A60[2 * v3 + 1]);
	v7 = (unsigned __int64*)sub_14018F0E0(v12, (unsigned __int16*)v6)[1];
	if (v7)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)v7 + v8));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_140062650((__int64)a1, v7, v8);
		*(_DWORD*)(v9 + 8) = 4;
		*(_QWORD*)v9 = v10;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	v11 = v12[1];
	a1[2] += 16i64;
	if (v11)
		sub_14018B900(v11, 0);
	return 1i64;
}
// 140C38A60: using guessed type _DWORD dword_140C38A60[22];

