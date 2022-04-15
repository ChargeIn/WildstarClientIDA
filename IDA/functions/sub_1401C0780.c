//----- (00000001401C0780) ----------------------------------------------------
int __fastcall sub_1401C0780(__int64 a1, int* a2, __int64 a3, __int64 a4)
{
	int result; // eax
	HINTERNET v8; // rax
	bool v9; // sf

	result = sub_1401C3640(a1 + 8, a2);
	if (result >= 0)
	{
		result = sub_1401C37F0((HINTERNET*)(a1 + 120), (const WCHAR*)a2, 1);
		if (result >= 0)
		{
			v8 = WinHttpConnect(*(HINTERNET*)(a1 + 120), *(LPCWSTR*)(a1 + 40), *(_WORD*)(a1 + 52), 0);
			*(_QWORD*)(a1 + 128) = v8;
			if (v8)
			{
				*(_QWORD*)(a1 + 136) = a4;
				return 0;
			}
			result = GetLastError();
			v9 = result < 0;
			if (result > 0)
			{
				result = (unsigned __int16)result | 0x80070000;
				v9 = result < 0;
			}
			if (!v9)
				return 0;
		}
	}
	return result;
}

