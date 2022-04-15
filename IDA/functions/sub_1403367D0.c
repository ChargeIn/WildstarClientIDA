//----- (00000001403367D0) ----------------------------------------------------
__int64 __fastcall sub_1403367D0(__int64 a1, _QWORD* a2, unsigned __int64 a3, unsigned __int64 a4)
{
	char v5; // al
	_BYTE* v6; // rdx
	__int64 result; // rax

	if (a4 >= 8)
		v5 = -1;
	else
		v5 = (1 << a4) - 1;
	v6 = *(_BYTE**)a1;
	*v6 &= (1 << *a2) - 1;
	*v6 |= (a3 & (unsigned __int8)v5) << *a2;
	if (((*a2 + a4 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 8)
		*(_BYTE*)(*(_QWORD*)a1 + 1i64) = a3 >> (8 - (unsigned __int8)*a2);
	*(_QWORD*)a1 += (a4 + *a2) >> 3;
	result = ((_BYTE)a4 + (unsigned __int8)*a2) & 7;
	*a2 = result;
	return result;
}

