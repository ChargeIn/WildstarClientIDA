//----- (00000001404B8440) ----------------------------------------------------
unsigned int* __fastcall sub_1404B8440(__int64 a1, unsigned int a2, int a3)
{
	unsigned int* result; // rax
	__int64 v6; // rcx
	unsigned int* v8; // [rsp+48h] [rbp+20h] BYREF

	result = (unsigned int*)sub_1405B1510(&qword_140C7DFB0);
	if (result)
	{
		result = (unsigned int*)sub_1404C9B90(v6, a2);
		if (result)
		{
			result = (unsigned int*)(*(__int64(__fastcall**)(unsigned int*, unsigned int**))(*(_QWORD*)result + 208i64))(
				result,
				&v8);
			if ((int)result >= 0)
			{
				for (result = v8; result; v8 = result)
				{
					sub_1404B8280(a1, result[124], a3);
					result = (unsigned int*)*((_QWORD*)v8 + 5);
				}
			}
		}
	}
	return result;
}
// 1404B8469: variable 'v6' is possibly undefined
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

