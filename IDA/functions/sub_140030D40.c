//----- (0000000140030D40) ----------------------------------------------------
int* __fastcall sub_140030D40(__int64 a1, unsigned __int64 a2)
{
	int* result; // rax
	int* v4; // rdi

	if (*(_QWORD*)(a1 + 8) > a2)
		*(_QWORD*)(a1 + 8) = a2;
	result = sub_14018DBC0(*(_QWORD*)a1, a2, 1i64);
	v4 = result;
	if (*(int**)a1 != result)
	{
		result = sub_1407DB590(result, *(int**)a1, *(_QWORD*)(a1 + 8));
		if (*(_QWORD*)a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
		*(_QWORD*)a1 = v4;
	}
	return result;
}

