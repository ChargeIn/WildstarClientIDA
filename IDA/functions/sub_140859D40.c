//----- (0000000140859D40) ----------------------------------------------------
__int64* __fastcall sub_140859D40(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
	__int64** v7; // rcx
	__int64* v9; // rax
	__int64 v10; // rbx
	__int64* result; // rax

	v7 = 0i64;
	if (a6)
	{
		if (a6 == 4)
			v7 = (__int64**)(a1 + 272);
	}
	else
	{
		v7 = (__int64**)(a1 + 224);
	}
	v9 = *v7;
	if (!*v7)
		goto LABEL_10;
	while (*((_DWORD*)v9 + 2) != a2)
	{
		v9 = (__int64*)*v9;
		if (!v9)
			goto LABEL_10;
	}
	v10 = (__int64)(v9 + 2);
	if (v9 == (__int64*)-16i64)
	{
	LABEL_10:
		result = sub_14085BD50(v7, a2);
		v10 = (__int64)result;
		if (!result)
			return result;
		sub_140877030((__int64)result, a1);
	}
	return (__int64*)sub_14085C450(a1, v10, a3, 2i64, a5, a4, a6);
}
// 140859DE2: variable 'a3' is possibly undefined

