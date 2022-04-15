//----- (00000001403275E0) ----------------------------------------------------
__int64 __fastcall sub_1403275E0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1008i64))(*(_QWORD*)(a1 + 16));
	if (!(_DWORD)result)
	{
		v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 16i64) + 24i64))(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64));
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v3 + 264i64))(
			v3,
			*(unsigned int*)(a1 + 64),
			a1 + 80);
	}
	return result;
}

