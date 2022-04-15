//----- (0000000140865B50) ----------------------------------------------------
unsigned __int64 __fastcall sub_140865B50(__int64 a1, int a2)
{
	_DWORD* v2; // rdi
	unsigned __int64 result; // rax
	unsigned __int64 v5; // rcx

	v2 = *(_DWORD**)a1;
	result = *(_QWORD*)(a1 + 8);
	if (*(_QWORD*)a1 != result)
	{
		do
		{
			if (*v2 == a2)
				break;
			v2 += 10;
		} while (v2 != (_DWORD*)result);
		if (v2 != (_DWORD*)result)
		{
			if ((unsigned __int64)v2 < result - 40)
			{
				v5 = result - 40 - (_QWORD)v2;
				result = 0xCCCCCCCCCCCCCCCDui64 * (v5 - 1);
				qmemcpy(v2, v2 + 10, 40 * ((v5 - 1) / 0x28 + 1));
			}
			*(_QWORD*)(a1 + 8) -= 40i64;
		}
	}
	return result;
}

