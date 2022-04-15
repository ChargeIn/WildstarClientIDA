//----- (0000000140425530) ----------------------------------------------------
__int64 sub_140425530()
{
	_BYTE* v0; // rcx
	__int64 result; // rax

	v0 = (_BYTE*)qword_140C65B10;
	if (qword_140C65B10)
	{
		result = 0i64;
		if ((*(_BYTE*)(qword_140C65B10 + 28) & 1) == 0)
			v0 = 0i64;
		qword_140C65B10 = (__int64)v0;
		if (v0)
		{
			if ((v0[28] & 1) != 0)
				return (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)v0 + 568i64))(v0);
		}
	}
	return result;
}
// 140C65B10: using guessed type __int64 qword_140C65B10;

