//----- (000000014049C5B0) ----------------------------------------------------
__int64 __fastcall sub_14049C5B0(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 result; // rax
	unsigned int v5; // ecx
	BOOL v6; // edx
	int v7; // r8d

	result = a2;
	if (a2)
	{
		v5 = 0;
		v6 = *(_DWORD*)(a2 + 128) == a4;
		v7 = a3 - 1;
		if (v7)
		{
			if (v7 == 1)
			{
				LOBYTE(v5) = !v6;
				return v5;
			}
		}
		else
		{
			return v6;
		}
		return v5;
	}
	return result;
}

