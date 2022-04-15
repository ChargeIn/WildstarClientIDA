//----- (0000000140691B20) ----------------------------------------------------
__int64 __fastcall sub_140691B20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	int v5; // eax
	__int64 v6; // rdx
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		return 0i64;
	v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
	if (!v4)
		return 0i64;
	v5 = sub_140056D60(a1, 2u);
	if ((unsigned __int64)v5 >= 2)
		return 0i64;
	v6 = v4 + 32i64 * v5 + 184;
	if (!v6)
		return 0i64;
	v7 = (unsigned __int64*)sub_14018F0E0(&v10, *(unsigned __int16**)(v6 + 8))[1];
	if (v7)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)v7 + v8));
		sub_140058710((__int64)a1, v7, v8);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v11)
		sub_14018B900(v11, 0);
	return 1i64;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

