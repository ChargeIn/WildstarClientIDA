//----- (000000014063F210) ----------------------------------------------------
void __fastcall sub_14063F210(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	const char* v4; // rdi
	int* v5; // rbx
	char v6; // al
	int* v7; // [rsp+30h] [rbp-38h] BYREF
	__int64 v8; // [rsp+38h] [rbp-30h] BYREF
	const char* v9; // [rsp+40h] [rbp-28h]

	sub_14018F0E0(&v8, *(unsigned __int16**)(a1 + 8));
	v3 = a2 + 384;
	v4 = v9;
	v5 = 0i64;
	v7 = 0i64;
	if (!*(_QWORD*)(v3 + 16) || (v6 = sub_1400F2000(v3, v9, &v7), v5 = v7, !v6))
		sub_140003890((__int64*)qword_140C658A0, 3u, 0i64, v5, 0, 0i64);
	if (v5)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
	if (v4)
		sub_14018B900((__int64)v4, 0);
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

