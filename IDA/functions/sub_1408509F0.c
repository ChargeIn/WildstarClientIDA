//----- (00000001408509F0) ----------------------------------------------------
_QWORD** __fastcall sub_1408509F0(__int64 a1, __int64 a2)
{
	_QWORD** result; // rax
	_QWORD* i; // rbx
	__int64 v6; // rsi
	int v7; // edi
	__int64 v8; // rax
	unsigned __int64 v9; // rcx

	result = *(_QWORD***)(a1 + 112);
	if (result)
	{
		for (i = *result; i != result[1]; result = *(_QWORD***)(a1 + 112))
		{
			if (*i == a2)
			{
				v6 = i[1];
				if (v6)
				{
					v7 = dword_140C10F20;
					sub_140873940((_QWORD*)i[1]);
					sub_140881720(v7, v6);
				}
				v8 = *(_QWORD*)(a1 + 112);
				v9 = *(_QWORD*)(v8 + 8) - 16i64;
				if ((unsigned __int64)i < v9)
					qmemcpy(
						i,
						i + 2,
						8 * (((((v9 - (unsigned __int64)i - 1) >> 3) & 0xFFFFFFFFFFFFFFFEui64) + 2) & 0x1FFFFFFFFFFFFFFEi64));
				*(_QWORD*)(v8 + 8) -= 16i64;
			}
			else
			{
				i += 2;
			}
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

