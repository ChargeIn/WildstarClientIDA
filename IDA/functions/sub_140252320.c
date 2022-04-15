//----- (0000000140252320) ----------------------------------------------------
__int64 __fastcall sub_140252320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	__int64 v5; // rbx
	__int64 v6; // rdi
	int* v7; // rax
	__int64 v8; // r9
	__int64 v9; // rbx
	int v10; // edi

	v5 = qword_140C65680;
	v6 = qword_140C65670;
	v7 = sub_14018B280(2496i64, 0);
	if (v7)
		v9 = sub_140253490((__int64)v7, v6, v5, v8, a5);
	else
		v9 = 0i64;
	v10 = sub_140253A90(v9);
	if (v10 >= 0)
	{
		qword_140C65688 = v9;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		return (unsigned int)v10;
	}
}
// 14025235C: variable 'v8' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65688: using guessed type __int64 qword_140C65688;

