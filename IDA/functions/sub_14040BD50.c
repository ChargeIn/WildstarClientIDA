//----- (000000014040BD50) ----------------------------------------------------
__int64 __fastcall sub_14040BD50(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	__int64 result; // rax
	unsigned __int64 v4; // rdx

	if (a2)
	{
		*(_BYTE*)a1 = a2;
		v4 = a2 >> 8;
		*(_BYTE*)(a1 + 1) = v4;
		v4 >>= 8;
		*(_BYTE*)(a1 + 2) = v4;
		v4 >>= 8;
		*(_BYTE*)(a1 + 3) = v4;
		v4 >>= 8;
		*(_BYTE*)(a1 + 4) = v4;
		v4 >>= 8;
		*(_BYTE*)(a1 + 5) = v4;
		v4 >>= 8;
		*(_BYTE*)(a1 + 6) = v4;
		result = BYTE1(v4);
		*(_DWORD*)(a1 + 8) = BYTE1(v4);
	}
	else
	{
		result = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_DWORD*)(a1 + 8) = 1;
		if (a3)
		{
			result = (unsigned int)(*(_DWORD*)(a3 + 320) - 1);
			if ((unsigned int)result <= 1)
				*(_DWORD*)(a1 + 8) = 0;
		}
	}
	return result;
}

