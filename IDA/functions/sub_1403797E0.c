//----- (00000001403797E0) ----------------------------------------------------
_OWORD* __fastcall sub_1403797E0(__int64* a1, _OWORD* a2, int a3)
{
	__int64 v3; // rax
	__int64 v5; // rbx
	_OWORD* result; // rax
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v5 = a3;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(a1, v8);
	*a2 = *(_OWORD*)&a1[8 * v5 + 78];
	result = a2;
	a2[1] = *(_OWORD*)&a1[8 * v5 + 80];
	return result;
}
// 1403797E0: using guessed type int var_18[6];

