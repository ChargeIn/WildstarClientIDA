//----- (00000001403D98F0) ----------------------------------------------------
__int64 __fastcall sub_1403D98F0(__int64 a1, int* a2, double a3, double a4)
{
	__int64 result; // rax

	result = sub_1403D90D0(a1, *a2);
	if (result)
	{
		if (*(_DWORD*)(result + 128) == 1)
		{
			if (a2[1])
				*(_DWORD*)(result + 4944) = 1;
		}
		return sub_1403D9590(a1, result, a3, a4);
	}
	return result;
}

