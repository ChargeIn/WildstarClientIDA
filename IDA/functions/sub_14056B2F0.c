//----- (000000014056B2F0) ----------------------------------------------------
_QWORD* __fastcall sub_14056B2F0(_QWORD* a1, int a2)
{
	_QWORD* result; // rax
	_QWORD* v4; // rbx
	_QWORD* v5; // rax
	_QWORD* v6; // rbx

	if (a2)
	{
		(*(void(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1);
		result = (_QWORD*)a1[2];
		v4 = (_QWORD*)*result;
		if ((_QWORD*)*result != result)
		{
			do
			{
				result = (_QWORD*)(*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)v4[2] + 64i64))(v4[2], 1i64);
				v4 = (_QWORD*)*v4;
			} while (v4 != (_QWORD*)a1[2]);
		}
	}
	else
	{
		v5 = (_QWORD*)a1[2];
		v6 = (_QWORD*)*v5;
		if ((_QWORD*)*v5 != v5)
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v6[2] + 64i64))(v6[2], 0i64);
				v6 = (_QWORD*)*v6;
			} while (v6 != (_QWORD*)a1[2]);
		}
		return (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 32i64))(a1);
	}
	return result;
}

