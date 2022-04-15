//----- (0000000140104190) ----------------------------------------------------
__int64 __fastcall sub_140104190(__int64 a1, unsigned __int16* a2)
{
	__int64 result; // rax
	__int64 v4; // rbx
	__int64 v5; // rsi
	__int64 v6; // rdi
	__int64* v7; // rax

	if (!a2)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 64);
	v5 = *(_QWORD*)(a1 + 72);
	if (v4 == v5)
		return 0i64;
	while (1)
	{
		v6 = *(_QWORD*)(*(_QWORD*)v4 + 40i64);
		v7 = sub_14010A540(*(_QWORD**)(*(_QWORD*)v4 + 32i64), v6, a2);
		if (v7 != (__int64*)v6)
		{
			result = *v7;
			if (result)
				break;
		}
		v4 += 8i64;
		if (v4 == v5)
			return 0i64;
	}
	return result;
}

