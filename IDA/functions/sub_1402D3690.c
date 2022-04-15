//----- (00000001402D3690) ----------------------------------------------------
__int64 __fastcall sub_1402D3690(__int64 a1, unsigned __int64 a2)
{
	__int64 v5; // rbx
	__int64 v6; // rax

	if ((__int64)(*(_QWORD*)(a1 + 120) - *(_QWORD*)(a1 + 112)) >> 3 <= a2)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 112) + 8 * a2;
	if (!*(_QWORD*)v5)
	{
		v6 = (__int64)sub_14018B280(136i64, 0);
		if (v6)
			v6 = sub_1402D9150(v6, a2, *(_QWORD*)(a1 + 16), *(void(__fastcall****)(_QWORD))(a1 + 96), v5);
		*(_QWORD*)v5 = v6;
	}
	return *(_QWORD*)v5;
}

