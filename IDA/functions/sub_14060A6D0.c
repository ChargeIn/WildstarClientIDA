//----- (000000014060A6D0) ----------------------------------------------------
__int64 __fastcall sub_14060A6D0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx

	v4 = *a1;
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 176i64))(v4);
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 112i64))(*a1);
	}
	v7 = a1[1];
	if (v7)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 176i64))(v7, a3);
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[1] + 112i64))(a1[1]);
	}
	v8 = a1[2];
	if (v8)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 176i64))(v8, a3);
		return (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[2] + 112i64))(a1[2]);
	}
	return result;
}

