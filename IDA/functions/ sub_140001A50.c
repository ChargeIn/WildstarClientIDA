//----- (0000000140001A50) ----------------------------------------------------
int* __fastcall sub_140001A50(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	int* result; // rax
	int* v10; // rbx
	_OWORD v11[6]; // [rsp+40h] [rbp-98h] BYREF

	sub_1400D45E0((__int64)v11, a1, a2, a5, 0i64);
	result = sub_14018B280(1072i64, 0);
	v10 = result;
	if (result)
	{
		sub_1400C5920((__int64)result, a1, a2, a3, v11, a4, 0i64);
		*((_QWORD*)v10 + 54) |= 0x2000000ui64;
		*((_QWORD*)v10 + 128) = a1;
		*(_QWORD*)v10 = off_140B54E10;
		*((_QWORD*)v10 + 132) = 0i64;
		*((_WORD*)v10 + 534) = 1;
		return v10;
	}
	return result;
}
// 140B54E10: using guessed type __int64 (__fastcall *off_140B54E10[25])();
// 140001A50: using guessed type _OWORD var_98[6];

