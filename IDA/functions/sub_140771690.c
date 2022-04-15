//----- (0000000140771690) ----------------------------------------------------
_OWORD* __fastcall sub_140771690(__int64 a1, _OWORD* a2)
{
	__int64 v2; // rax
	_OWORD* result; // rax
	__int128 v4; // xmm0

	v2 = *(_QWORD*)(a1 + 384);
	if (v2)
		v2 = *(_QWORD*)(v2 + 16);
	if (v2)
	{
		v4 = *(_OWORD*)(v2 + 4576);
		result = a2;
		*a2 = v4;
	}
	else
	{
		result = a2;
		*a2 = 0i64;
	}
	return result;
}

