//----- (0000000140182EC0) ----------------------------------------------------
__int64 __fastcall sub_140182EC0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v9; // rbx
	int* v10; // rax
	_OWORD v12[6]; // [rsp+40h] [rbp-A8h] BYREF

	v9 = 0i64;
	sub_1400D45E0((__int64)v12, a1, a2, a5, 0i64);
	v10 = sub_14018B280(1152i64, 0);
	if (v10)
		v9 = sub_140182490((__int64)v10, a1, a2, a3, v12, a4);
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 712i64))(v9, a5);
}
// 140182EC0: using guessed type _OWORD var_A8[6];

