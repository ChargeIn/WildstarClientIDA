//----- (000000014049CA70) ----------------------------------------------------
__int64 __fastcall sub_14049CA70(__int64 a1, __int64 a2, int a3)
{
	int v4; // eax
	__int64 v5; // rax
	unsigned int v6; // ecx
	int v7; // ebx

	if (!a2)
		return 0i64;
	v4 = *(_DWORD*)(a2 + 128);
	if (v4 != 20 && v4 != 23)
		return 0i64;
	v5 = sub_1401ED460(*(_DWORD*)(qword_140C65898 + 5780));
	v6 = 0;
	v7 = a3 - 1;
	if (v7)
	{
		if (v7 == 1)
		{
			LOBYTE(v6) = v5 == 0;
			return v6;
		}
	}
	else
	{
		return v5 != 0;
	}
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;
