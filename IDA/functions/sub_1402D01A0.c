//----- (00000001402D01A0) ----------------------------------------------------
__int64 __fastcall sub_1402D01A0(__int64 a1, __int64 a2)
{
	int v4; // edx
	int v5; // ecx
	__int64 result; // rax
	unsigned __int64 v7; // rsi
	__int64 v8; // r14

	if (*(_DWORD*)(a1 + 344) != *(_DWORD*)a2 || *(float*)(a2 + 4) != *(float*)(a1 + 348))
		goto LABEL_6;
	v4 = *(_DWORD*)(a2 + 8);
	v5 = *(_DWORD*)(a1 + 352);
	if ((v5 ^ v4) < 0)
		v5 = 0x80000000 - v5;
	result = abs32(v5 - v4);
	if ((int)result > 84)
	{
	LABEL_6:
		v7 = 0i64;
		if ((*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) / 192i64)
		{
			v8 = 0i64;
			do
			{
				sub_1402D7D40((__int64*)(v8 + *(_QWORD*)(a1 + 304)), (unsigned int*)a2);
				++v7;
				v8 += 192i64;
			} while (v7 < (*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) / 192i64);
		}
		*(_DWORD*)(a1 + 344) = *(_DWORD*)a2;
		*(_DWORD*)(a1 + 348) = *(_DWORD*)(a2 + 4);
		result = *(unsigned int*)(a2 + 8);
		*(_DWORD*)(a1 + 352) = result;
	}
	return result;
}

