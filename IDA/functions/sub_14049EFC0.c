//----- (000000014049EFC0) ----------------------------------------------------
__int64 __fastcall sub_14049EFC0(__int64 a1, int a2, unsigned int a3)
{
	__int64 result; // rax
	unsigned int v5; // ecx
	int v6; // ebx

	result = sub_14024DFC0(a3);
	if (result)
	{
		v5 = 0;
		v6 = a2 - 1;
		if (v6)
		{
			if (v6 == 1)
			{
				LOBYTE(v5) = *(_DWORD*)(result + 12) == 0;
				return v5;
			}
		}
		else
		{
			return *(_DWORD*)(result + 12) != 0;
		}
		return v5;
	}
	return result;
}

