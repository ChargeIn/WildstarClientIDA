//----- (0000000140855300) ----------------------------------------------------
unsigned __int64 __fastcall sub_140855300(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	unsigned __int64 result; // rax
	unsigned __int64 v5; // rcx

	v2 = *(_QWORD**)a1;
	result = *(_QWORD*)(a1 + 8);
	if (*(_QWORD*)a1 != result)
	{
		do
		{
			if (*v2 == a2)
				break;
			v2 += 3;
		} while (v2 != (_QWORD*)result);
		if (v2 != (_QWORD*)result)
		{
			if ((unsigned __int64)v2 < result - 24)
			{
				v5 = result - 24 - (_QWORD)v2;
				result = 0xAAAAAAAAAAAAAAABui64 * (v5 - 1);
				qmemcpy(v2, v2 + 3, 24 * ((v5 - 1) / 0x18 + 1));
			}
			*(_QWORD*)(a1 + 8) -= 24i64;
		}
	}
	return result;
}

