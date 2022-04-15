//----- (0000000140379780) ----------------------------------------------------
_OWORD* __fastcall sub_140379780(__int64* a1, _OWORD* a2, int a3)
{
	__int64 v3; // rax
	__int64 v5; // rbx
	_OWORD* result; // rax
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v5 = a3;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(a1, v8);
	*a2 = *(_OWORD*)&a1[8 * v5 + 46];
	result = a2;
	a2[1] = *(_OWORD*)&a1[8 * v5 + 48];
	return result;
}
// 140379780: using guessed type int var_18[6];

