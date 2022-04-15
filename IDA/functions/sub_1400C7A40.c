//----- (00000001400C7A40) ----------------------------------------------------
_QWORD* __fastcall sub_1400C7A40(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	_QWORD* result; // rax
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a1 + 592);
	result = sub_14018B280(24i64, 0);
	if (result != (_QWORD*)-16i64)
		result[2] = a2;
	*result = v2;
	result[1] = *(_QWORD*)(v2 + 8);
	**(_QWORD**)(v2 + 8) = result;
	*(_QWORD*)(v2 + 8) = result;
	v6 = *(_QWORD*)(a1 + 16);
	*(_BYTE*)(a1 + 29) |= 1u;
	if (v6)
		result = (_QWORD*)sub_1400C8870(v6);
	--* (_DWORD*)(a1 + 40);
	return result;
}

