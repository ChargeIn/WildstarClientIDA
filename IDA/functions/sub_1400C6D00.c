//----- (00000001400C6D00) ----------------------------------------------------
__int64 __fastcall sub_1400C6D00(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx

	result = *(_QWORD*)(a1 + 560);
	v3 = *(_QWORD**)result;
	if (*(_QWORD*)result != result)
	{
		do
		{
			result = sub_1400C6B20(v3[2]);
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 560));
	}
	v4 = *(_QWORD*)(a1 + 16);
	*(_BYTE*)(a1 + 28) |= 2u;
	if (v4)
	{
		if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4))
			sub_1400C88A0(*(_QWORD*)(a1 + 16));
		result = *(_QWORD*)(a1 + 16);
		v5 = *(_QWORD*)(result + 16);
		*(_BYTE*)(result + 29) |= 1u;
		if (v5)
			result = sub_1400C8870(v5);
	}
	*(_QWORD*)(a1 + 600) = 0i64;
	return result;
}
// 1400C6B20: using guessed type __int64 __fastcall sub_1400C6B20(_QWORD);

