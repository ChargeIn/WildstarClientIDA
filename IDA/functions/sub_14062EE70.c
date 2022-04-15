//----- (000000014062EE70) ----------------------------------------------------
__int64 __fastcall sub_14062EE70(_QWORD* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rsi
	__int64 result; // rax

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			result = sub_14062EDA0((_QWORD*)(v3 + *a1));
			++v1;
			v3 += 152i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
	return result;
}

