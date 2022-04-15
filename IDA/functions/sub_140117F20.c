//----- (0000000140117F20) ----------------------------------------------------
int* __fastcall sub_140117F20(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	int* v9; // rbx
	__int64 v10; // rdx
	__int64 v11; // rax
	_WORD* v12; // rax
	int* result; // rax
	int v14[4]; // [rsp+40h] [rbp-B8h] BYREF
	_OWORD v15[6]; // [rsp+50h] [rbp-A8h] BYREF

	sub_1400D45E0((__int64)v15, a1, a2, a5, 0i64);
	v9 = sub_14018B280(1904i64, 0);
	if (v9)
	{
		sub_1400C5920((__int64)v9, a1, a2, a3, v15, a4, 0i64);
		v10 = *((_QWORD*)v9 + 4);
		*(_QWORD*)v9 = off_140B56F40;
		sub_14013FEB0((__int64)(v9 + 256), v10);
		*((_QWORD*)v9 + 54) |= 0x100000ui64;
		*((_WORD*)v9 + 944) = 0;
		v9[473] = 0;
		v9[474] = 1112014848;
	}
	else
	{
		v9 = 0i64;
	}
	v14[0] = 0;
	v11 = sub_1401A6B80(a5, L"IgnoreLinks");
	if (!v11)
		return v9;
	v12 = (_WORD*)sub_1401A4F40(v11 + 32);
	if ((unsigned int)sub_1407DF428(v12, (__int64)L"%d", v14) != 1)
		return v9;
	result = v9;
	if (v14[0])
		*((_BYTE*)v9 + 1850) = 1;
	return result;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A32C58: using guessed type wchar_t aIgnorelinks[12];
// 140B56F40: using guessed type __int64 (__fastcall *off_140B56F40[25])();
// 140117F20: using guessed type _OWORD var_A8[6];
// 140117F20: using guessed type int var_B8[4];

