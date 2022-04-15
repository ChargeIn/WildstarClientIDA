//----- (0000000140830760) ----------------------------------------------------
_QWORD* __fastcall sub_140830760(_QWORD* a1, int a2, __int64 a3)
{
	_DWORD* v3; // rax
	_DWORD* v4; // r9
	_QWORD* v6; // rbx
	_QWORD* result; // rax
	_DWORD* v8; // rax

	v3 = (_DWORD*)*a1;
	v4 = (_DWORD*)a1[1];
	if ((_DWORD*)*a1 != v4)
	{
		do
		{
			if (*v3 == a2)
				break;
			v3 += 3;
		} while (v3 != v4);
	}
	if (v3 == v4)
	{
		v6 = 0i64;
	}
	else
	{
		v6 = v3 + 1;
		if (v3 != (_DWORD*)-4i64)
		{
			*v6 = a3;
			return v6;
		}
	}
	v8 = (_DWORD*)sub_140829D40((__int64)a1);
	if (!v8)
		return v6;
	*v8 = a2;
	result = v8 + 1;
	*result = a3;
	return result;
}

