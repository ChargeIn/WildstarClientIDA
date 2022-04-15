//----- (00000001400A7540) ----------------------------------------------------
__int64 __fastcall sub_1400A7540(__int64 a1, _QWORD* a2, unsigned __int64 a3, unsigned __int64 a4)
{
	__int64 v4; // r10
	_QWORD* v5; // rax
	__int64 result; // rax

	if (a4 >= 0x40)
		v4 = -1i64;
	else
		v4 = (1i64 << a4) - 1;
	v5 = *(_QWORD**)a1;
	*v5 &= (1i64 << *a2) - 1;
	*v5 |= (a3 & v4) << *a2;
	if (((*a2 + a4 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
		*(_BYTE*)(*(_QWORD*)a1 + 8i64) = a3 >> (64 - (unsigned __int8)*a2);
	*(_QWORD*)a1 += (a4 + *a2) >> 3;
	result = ((_BYTE)a4 + (unsigned __int8)*a2) & 7;
	*a2 = result;
	return result;
}

