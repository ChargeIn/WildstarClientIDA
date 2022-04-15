//----- (0000000140336860) ----------------------------------------------------
__int64 __fastcall sub_140336860(__int64 a1, _QWORD* a2, unsigned __int64 a3, unsigned __int64 a4)
{
	__int16 v5; // ax
	_WORD* v6; // rdx
	__int64 result; // rax

	if (a4 >= 0x10)
		v5 = -1;
	else
		v5 = (1 << a4) - 1;
	v6 = *(_WORD**)a1;
	*v6 &= (1 << *a2) - 1;
	*v6 |= (a3 & (unsigned __int16)v5) << *a2;
	if (((*a2 + a4 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x10)
		*(_BYTE*)(*(_QWORD*)a1 + 2i64) = a3 >> (16 - (unsigned __int8)*a2);
	*(_QWORD*)a1 += (a4 + *a2) >> 3;
	result = ((_BYTE)a4 + (unsigned __int8)*a2) & 7;
	*a2 = result;
	return result;
}

