//----- (000000014087C150) ----------------------------------------------------
char __fastcall sub_14087C150(__int64 a1, unsigned __int16 a2)
{
	_BYTE* v2; // r9
	char result; // al

	v2 = (_BYTE*)(*(_QWORD*)(a1 + 72) + ((unsigned __int64)a2 >> 3));
	result = ~(1 << (a2 & 7));
	*v2 &= result;
	return result;
}

