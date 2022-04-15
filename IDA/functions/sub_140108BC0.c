//----- (0000000140108BC0) ----------------------------------------------------
_QWORD* __fastcall sub_140108BC0(_QWORD* a1)
{
	__int64 v2; // rsi
	_QWORD* v3; // rcx
	int* v4; // rax
	int* v5; // rdx
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v2 = 0i64;
	v3 = a1 + 1;
	*(v3 - 1) = 0i64;
	sub_140109D90(v3);
	sub_140109E90(a1 + 6);
	a1[12] = 0i64;
	a1[13] = 0i64;
	a1[14] = 0i64;
	if (sub_140108D20((__int64)a1, L"System"))
		return a1;
	v4 = sub_14018B280(88i64, 0);
	if (v4)
	{
		v2 = sub_140103FD0((__int64)v4, (__int64)a1, (int*)L"System");
		v7 = v2;
	}
	else
	{
		v7 = 0i64;
	}
	v5 = (int*)a1[13];
	if (v5 == (int*)a1[14])
	{
		sub_14010A1C0(a1 + 11, v5, &v7);
		return a1;
	}
	if (v5)
		*(_QWORD*)v5 = v2;
	a1[13] += 8i64;
	return a1;
}
// 140A1AB28: using guessed type wchar_t aSystem[7];

