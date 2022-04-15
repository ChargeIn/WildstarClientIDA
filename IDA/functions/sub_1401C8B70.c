//----- (00000001401C8B70) ----------------------------------------------------
__int64 __fastcall sub_1401C8B70(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 result; // rax
	int v5; // ebx
	__int64 v6; // rdx
	char v7; // al
	char v8; // cl
	unsigned int v9; // eax

	v2 = a2;
	if (!a2)
		return 1i64;
	result = *(unsigned int*)(a1 + 100);
	if (!(_DWORD)result)
	{
		v5 = 0;
		if (!*(_DWORD*)(a1 + 96))
		{
			sub_1401C8F20(a1);
			*(_QWORD*)(a1 + 30) = 0i64;
			*(_QWORD*)(a1 + 38) = 0i64;
			*(_QWORD*)(a1 + 46) = 0i64;
			*(_QWORD*)(a1 + 54) = 0i64;
			*(_QWORD*)(a1 + 62) = 0i64;
			*(_QWORD*)(a1 + 70) = 0i64;
			*(_QWORD*)(a1 + 78) = 0i64;
			*(_QWORD*)(a1 + 86) = 0i64;
			*(_QWORD*)(a1 + 20) = 0i64;
			*(_DWORD*)(a1 + 96) = 1;
		}
		v6 = 0i64;
		do
		{
			v7 = v5++;
			++v2;
			v8 = 3 - (v7 & 3);
			v9 = *(_DWORD*)(a1 + 4 * (v6 >> 2));
			v6 = v5;
			*(_BYTE*)(v2 - 1) = v9 >> (8 * v8);
		} while ((unsigned __int64)v5 < 0x14);
		return 0i64;
	}
	return result;
}

