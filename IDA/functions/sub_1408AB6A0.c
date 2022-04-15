//----- (00000001408AB6A0) ----------------------------------------------------
__int64 __fastcall sub_1408AB6A0(__int64 a1, int a2)
{
	__int64 result; // rax
	char v3; // r10
	bool v4; // zf
	unsigned int v5; // r8d
	unsigned int v6; // edx
	int i; // edx
	int j; // edx
	int k; // edx
	int m; // edx
	int n; // edx
	int ii; // edx

	result = *(int*)(a1 + 2344);
	v3 = a2;
	switch ((int)result)
	{
	case 0:
		result = 0i64;
		v4 = (a2 & 0xFFFFFFF7) == 0;
		v5 = a2 & 0xFFFFFFF7;
		v6 = a2 & 0xFFFFFFF7;
		if (!v4)
		{
			do
			{
				result = (unsigned int)(result + 1);
				v6 &= v6 - 1;
			} while (v6);
		}
		*(_DWORD*)(a1 + 2452) = v5;
		goto LABEL_23;
	case 1:
		result = 0i64;
		for (i = a2 & 4; i; i &= i - 1)
			result = (unsigned int)(result + 1);
		*(_DWORD*)(a1 + 2452) = 4;
		goto LABEL_23;
	case 2:
		result = 0i64;
		for (j = a2 & 3; j; j &= j - 1)
			result = (unsigned int)(result + 1);
		*(_DWORD*)(a1 + 2452) = 3;
		goto LABEL_23;
	case 3:
		result = 0i64;
		for (k = a2 & 7; k; k &= k - 1)
			result = (unsigned int)(result + 1);
		*(_DWORD*)(a1 + 2452) = 7;
		goto LABEL_23;
	case 4:
		result = 0i64;
		for (m = a2 & 0x33; m; m &= m - 1)
			result = (unsigned int)(result + 1);
		*(_DWORD*)(a1 + 2452) = 51;
		goto LABEL_23;
	case 5:
		result = 0i64;
		for (n = a2 & 0x37; n; n &= n - 1)
			result = (unsigned int)(result + 1);
		*(_DWORD*)(a1 + 2452) = 55;
		goto LABEL_23;
	case 6:
		result = 0i64;
		for (ii = a2 & 1; ii; ii &= ii - 1)
			result = (unsigned int)(result + 1);
		*(_DWORD*)(a1 + 2452) = 1;
	LABEL_23:
		*(_DWORD*)(a1 + 2448) = result;
		break;
	default:
		break;
	}
	if (*(_BYTE*)(a1 + 2360))
	{
		if ((v3 & 8) != 0)
		{
			++* (_DWORD*)(a1 + 2448);
			*(_DWORD*)(a1 + 2452) |= 8u;
		}
	}
	return result;
}

