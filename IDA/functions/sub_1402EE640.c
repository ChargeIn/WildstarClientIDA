//----- (00000001402EE640) ----------------------------------------------------
__int64 __fastcall sub_1402EE640(__int64 a1)
{
	__int64 v1; // rsi
	__int64* v2; // rbx
	int i; // edi

	v1 = a1 - 8;
	v2 = (__int64*)(a1 + 296i64 * *(int*)(a1 - 8));
	for (i = *(_DWORD*)(a1 - 8) - 1; i >= 0; --i)
	{
		v2 -= 37;
		sub_1402EEFD0(v2);
	}
	sub_14018B900(v1, 0);
	return v1;
}

