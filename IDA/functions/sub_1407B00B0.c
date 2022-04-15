//----- (00000001407B00B0) ----------------------------------------------------
signed int __fastcall sub_1407B00B0(__int64 a1)
{
	__int64 v2; // rcx
	signed int result; // eax
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	if (v2 == -232)
		return -2147024809;
	result = sub_1401C39A0((HINTERNET*)(v2 + 216), (const WCHAR*)(v2 + 232), (DWORD_PTR)v6);
	if (result >= 0)
	{
		if (v6[0] <= 0xFFFFFFFF)
		{
			sub_140033620(*(_QWORD*)(a1 + 8) + 80i64, v6[0]);
			v4 = *(_QWORD*)(a1 + 8);
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
			result = sub_1401C3DC0(v4 + 216, (const WCHAR*)(v4 + 232), v5, v6[0], (_QWORD*)(v4 + 16));
			if (result >= 0)
			{
				if (WaitForSingleObject(*(HANDLE*)(*(_QWORD*)(a1 + 8) + 40i64), 0xFFFFFFFF))
					return -2147467259;
				else
					return *(_DWORD*)(*(_QWORD*)(a1 + 8) + 76i64);
			}
		}
		else
		{
			return -2147024882;
		}
	}
	return result;
}
// 1407B00B0: using guessed type unsigned __int64 var_18[3];

