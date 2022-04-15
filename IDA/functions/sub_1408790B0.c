//----- (00000001408790B0) ----------------------------------------------------
__int64 __fastcall sub_1408790B0(__int64 a1, int a2)
{
	__int64 result; // rax
	unsigned int v5; // eax
	int v6; // [rsp+30h] [rbp+8h] BYREF

	result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 72i64))(a1, &v6);
	if ((unsigned int)(result - 45) <= 1)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
		return (unsigned int)(a2 + v6 < v5) + 45;
	}
	else if ((_DWORD)result == 17)
	{
		return 45i64;
	}
	return result;
}

