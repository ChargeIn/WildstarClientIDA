//----- (000000014027FC00) ----------------------------------------------------
int* __fastcall sub_14027FC00(__int64 a1, __int64 a2, int* a3, unsigned int a4, unsigned int a5, int a6)
{
	unsigned int v7; // edi
	int* result; // rax

	v7 = a2;
	result = (int*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD*)a1 + 272i64))(
		a1,
		a2,
		a4,
		a5,
		a6);
	if (result)
	{
		sub_1407DB590(result, a3, v7);
		return (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 280i64))(a1);
	}
	return result;
}

