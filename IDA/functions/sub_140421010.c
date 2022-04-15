//----- (0000000140421010) ----------------------------------------------------
__int64 __fastcall sub_140421010(__int64 a1, _QWORD* a2, unsigned int a3, _QWORD* a4)
{
	__int64* v4; // rbx
	__int64 result; // rax

	*a4 += 8i64;
	v4 = *(__int64**)(*a4 - 8i64);
	result = sub_140056AB0(a2, a3);
	if (result)
	{
		result = *(_QWORD*)(result + 8);
		*v4 = result;
	}
	else
	{
		*v4 = 0i64;
	}
	return result;
}

