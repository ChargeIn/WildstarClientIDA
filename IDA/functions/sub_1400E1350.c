//----- (00000001400E1350) ----------------------------------------------------
bool __fastcall sub_1400E1350(__int64 a1, _WORD* a2, __int64 a3)
{
	__int64 v4; // rax
	_WORD* v6; // rax
	int v7; // eax
	int v8; // ecx

	v4 = sub_1401A6B80(a1, a2);
	if (!v4)
		return 0;
	v6 = (_WORD*)sub_1401A4F40(v4 + 32);
	v7 = sub_1407DF428(v6, (__int64)L"%d", a3);
	v8 = -1603862526;
	if (v7 == 1)
		v8 = 0;
	return v8 == 0;
}
// 1409E4114: using guessed type wchar_t aD_16[3];

