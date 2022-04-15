//----- (0000000140877C60) ----------------------------------------------------
__int64 __fastcall sub_140877C60(__int64 a1, _DWORD* a2)
{
	_DWORD* v2; // rbx
	__int64 result; // rax

	v2 = (_DWORD*)(a1 + 52);
	result = sub_140877A60(a1, (unsigned int*)(a1 + 52));
	if ((_DWORD)result == 1)
	{
		*a2 = *v2 >> 10;
		return 1i64;
	}
	return result;
}

