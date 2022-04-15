//----- (00000001404A9BB0) ----------------------------------------------------
__int64 __fastcall sub_1404A9BB0(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // rdx
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v8; // [rsp+20h] [rbp+20h]

	if (!a3 || !a2)
		return 0i64;
	if (a2 == 166)
	{
		v3 = a1 + 104;
	}
	else
	{
		if (a2 != 167)
			return 0i64;
		v3 = a1 + 136;
	}
	if (v3)
	{
		v4 = *(_QWORD*)(v3 + 8);
		v5 = v4;
		v6 = *(_QWORD*)(v4 + 8);
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < a3)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v5 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v5 == v4 || (v8 = v5, a3 < *(_DWORD*)(v5 + 32)))
			v8 = v4;
		if (v8 != v4)
			return *(_QWORD*)(v8 + 40);
	}
	return 0i64;
}

