//----- (000000014092D610) ----------------------------------------------------
_QWORD* __fastcall sub_14092D610(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rax
	_QWORD* result; // rax

	v3 = *(_QWORD*)(a1 + 56);
	v5 = *(_QWORD*)(v3 + 8);
	if ((unsigned __int64)(v5 + a2) > 0xFF0)
	{
		result = (_QWORD*)off_140C1B1E0(4096i64);
		if (result)
		{
			*result = *(_QWORD*)(a1 + 56);
			*(_QWORD*)(a1 + 56) = result;
			result[1] = a2;
			result += 2;
		}
		else
		{
			*(_DWORD*)a1 = 2;
		}
	}
	else
	{
		*(_QWORD*)(v3 + 8) = v5 + a2;
		return (_QWORD*)(v3 + v5 + 16);
	}
	return result;
}
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);

