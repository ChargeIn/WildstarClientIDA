//----- (000000014077EFF0) ----------------------------------------------------
int* __fastcall sub_14077EFF0(__int64 a1, int a2)
{
	int* result; // rax

	result = *(int**)(qword_140C65898 + 120);
	if (result)
	{
		result = (int*)sub_1403D90D0(qword_140C65898, result[48]);
		if (result)
		{
			result = (int*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)result + 32i64))(result);
			if ((_DWORD)result)
			{
				if (!a2)
					return (int*)sub_14039E400(qword_140C65898);
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

