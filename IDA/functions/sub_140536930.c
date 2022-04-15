//----- (0000000140536930) ----------------------------------------------------
__int64 __fastcall sub_140536930(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rdx
	char* v4; // rdx
	__int64 v5; // rdx
	__m128i* v6; // rbx
	__int64 v8; // [rsp+30h] [rbp-28h] BYREF
	__m128i* v9; // [rsp+38h] [rbp-20h]

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	if (v3[2] == 4)
		goto LABEL_11;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v3))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
	LABEL_11:
		v4 = (char*)(*(_QWORD*)v3 + 32i64);
		goto LABEL_12;
	}
	v4 = 0i64;
LABEL_12:
	sub_14018F2D0(&v8, v4);
	v5 = *(_QWORD*)(v2 + 32);
	v6 = v9;
	if (v5)
		sub_140109710((__int64*)(v2 + 1080), v5 + 240, v9, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

