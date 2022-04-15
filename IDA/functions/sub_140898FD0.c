//----- (0000000140898FD0) ----------------------------------------------------
_QWORD* __fastcall sub_140898FD0(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v2; // rdi
	_QWORD* v3; // rbx
	char v4; // cl

	result = *(_QWORD**)(a1 + 176);
	v2 = result;
	v3 = (_QWORD*)*result;
	if (*result)
	{
		do
		{
			if (!(*(unsigned __int8(__fastcall**)(_QWORD))(*(_QWORD*)result[1] + 128i64))(result[1])
				|| (v4 = *(_BYTE*)(v3[1] + 98i64), (v4 & 3) != 0) && (v4 & 0x10) == 0)
			{
				v2 = v3;
			}
			result = v3;
			v3 = (_QWORD*)*v3;
		} while (v3);
		return v2;
	}
	return result;
}

