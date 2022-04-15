//----- (00000001402D15F0) ----------------------------------------------------
void __fastcall sub_1402D15F0(__int64* a1, unsigned __int64 a2, __int64 a3)
{
	_DWORD* v3; // rsi
	__int64 v5; // rcx
	unsigned __int64 v8; // rdx
	__int64 v9; // rbx
	__int64 v10; // rax

	v3 = (_DWORD*)a1[2];
	v5 = a1[1];
	v8 = ((__int64)v3 - v5) / 192;
	if (a2 >= v8)
	{
		sub_1402D18D0(a1, v3, a2 - v8, a3);
	}
	else
	{
		v9 = v5 + 192 * a2;
		v10 = sub_1402D2110((__int64)v3, (__int64)v3, v9);
		sub_1402D2070(v10, a1[2]);
		a1[2] += 192 * (((__int64)v3 - v9) / -192);
	}
}

