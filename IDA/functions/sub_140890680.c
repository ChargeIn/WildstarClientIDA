//----- (0000000140890680) ----------------------------------------------------
_QWORD* __fastcall sub_140890680(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rax
	_QWORD* result; // rax
	__int64 v4; // rcx

	v2 = (unsigned int)(*(_DWORD*)(a1 + 280) - 1);
	if ((_DWORD)v2 == *(_DWORD*)(a1 + 256))
	{
		*a2 = 0i64;
		return a2;
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 8 * v2);
		result = a2;
		*a2 = v4;
	}
	return result;
}

