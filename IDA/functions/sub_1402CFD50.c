//----- (00000001402CFD50) ----------------------------------------------------
__int64 __fastcall sub_1402CFD50(__int64 a1)
{
	int v1; // edi
	__int64 v3; // rbx
	int i; // esi
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rbx
	__int64 v8; // rcx

	v1 = 3;
	v3 = a1 + 104;
	for (i = 3; i >= 0; --i)
	{
		v5 = *(_QWORD*)(v3 - 8);
		v3 -= 8i64;
		if (v5)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	}
	v7 = a1 + 72;
	do
	{
		v8 = *(_QWORD*)(v7 - 8);
		v7 -= 8i64;
		if (v8)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		--v1;
	} while (v1 >= 0);
	return result;
}

