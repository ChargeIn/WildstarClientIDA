//----- (000000014049F210) ----------------------------------------------------
__int64 __fastcall sub_14049F210(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v7; // rax
	unsigned int v8; // ecx
	int v9; // edx
	int v10; // ebx

	if (!a2)
		return 0i64;
	v7 = sub_140245C00(*(_DWORD*)(a2 + 460));
	v8 = 0;
	if (v7)
		v9 = *(_DWORD*)(v7 + 8);
	else
		v9 = 0;
	v10 = a3 - 1;
	if (v10)
	{
		if (v10 == 1)
		{
			LOBYTE(v8) = a4 != v9;
			return v8;
		}
	}
	else
	{
		LOBYTE(v8) = a4 == v9;
	}
	return v8;
}

