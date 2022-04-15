//----- (0000000140460250) ----------------------------------------------------
__int64 __fastcall sub_140460250(__int64 a1)
{
	__int64 v1; // r9
	unsigned int v3; // edx
	__int64 v4; // rcx
	unsigned int v5; // r8d
	unsigned int v6; // r8d

	v1 = *(_QWORD*)(a1 + 24);
	if (!v1)
		return 0i64;
	v3 = 0;
	if ((*(_BYTE*)(v1 + 144) & 8) != 0)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 120);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 60);
			if (!v5)
				v5 = *(_DWORD*)(v4 + 56);
		}
		else
		{
			v5 = 0;
		}
		if (v5 >= *(unsigned __int16*)(v1 + 176))
		{
			if (v4)
			{
				v6 = *(_DWORD*)(v4 + 60);
				if (!v6)
					v6 = *(_DWORD*)(v4 + 56);
			}
			else
			{
				v6 = 0;
			}
			if (v6 <= *(unsigned __int16*)(v1 + 178))
				return 1;
		}
	}
	return v3;
}
// 140C65898: using guessed type __int64 qword_140C65898;

