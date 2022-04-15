//----- (00000001401C9400) ----------------------------------------------------
signed int __fastcall sub_1401C9400(__int64 a1, const WCHAR* a2, int** a3)
{
	signed int result; // eax
	int* v5; // rax
	HKEY v6; // rcx
	HKEY phkResult; // [rsp+70h] [rbp+18h] BYREF

	if (!a3)
		return -2147024809;
	result = RegCreateKeyExW(*(HKEY*)(a1 + 16), a2, 0, 0i64, 0, 0xF003Fu, 0i64, &phkResult, 0i64);
	if (result)
	{
		*a3 = 0i64;
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	else
	{
		v5 = sub_14018B280(24i64, 0);
		if (v5)
		{
			v6 = phkResult;
			v5[2] = 1;
			*((_QWORD*)v5 + 2) = v6;
			*(_QWORD*)v5 = off_140B5F8E0;
			*a3 = v5;
		}
		else
		{
			*a3 = 0i64;
		}
		return 0;
	}
	return result;
}
// 140B5F8E0: using guessed type __int64 (__fastcall *off_140B5F8E0[2])();

