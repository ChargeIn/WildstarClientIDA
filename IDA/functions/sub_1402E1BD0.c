//----- (00000001402E1BD0) ----------------------------------------------------
__int64 __fastcall sub_1402E1BD0(__int64 a1, unsigned int a2, __int64 a3)
{
	_DWORD* v5; // rax
	__int64 result; // rax
	__int64(__fastcall * v7)(__int64, _QWORD, _QWORD); // r9

	v5 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	result = sub_1402E16D0(a3, v5);
	if (result)
	{
		*(_QWORD*)(result + 48) &= ~(1i64 << a2);
		v7 = *(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(a3 + 152);
		if (v7)
			return v7(result, a2, *(_QWORD*)(a3 + 224));
	}
	return result;
}

