//----- (00000001401C0FD0) ----------------------------------------------------
signed int __fastcall sub_1401C0FD0(__int64 a1, __int64 a2, __int64 a3)
{
	signed int result; // eax
	int FileName[132]; // [rsp+20h] [rbp-228h] BYREF

	result = sub_1401C0D10(a1, FileName, a3, a2);
	if (result >= 0)
	{
		if (DeleteFileW((LPCWSTR)FileName))
		{
			return 0;
		}
		else if (GetLastError() == 2)
		{
			return 1;
		}
		else
		{
			result = GetLastError();
			if (result > 0)
				return (unsigned __int16)result | 0x80070000;
		}
	}
	return result;
}
// 1401C0FD0: using guessed type int FileName[132];

