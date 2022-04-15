//----- (00000001400F1220) ----------------------------------------------------
_OWORD* __fastcall sub_1400F1220(__int64 a1, _QWORD* a2, int a3, _QWORD* a4)
{
	unsigned int v5; // r10d
	__int128 v6; // xmm0
	_OWORD* result; // rax

	v5 = a3;
	if (a3 < 0)
		v5 = ((__int64)(a2[2] - a2[3]) >> 4) + a3 + 1;
	v6 = *(_OWORD*)sub_140056AB0(a2, v5);
	*a4 += 8i64;
	result = *(_OWORD**)(*a4 - 8i64);
	*result = v6;
	return result;
}

