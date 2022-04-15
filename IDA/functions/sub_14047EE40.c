//----- (000000014047EE40) ----------------------------------------------------
__int64 __fastcall sub_14047EE40(__int64 a1, _DWORD* a2, int a3)
{
	__int64 result; // rax
	char v5[72]; // [rsp+20h] [rbp-48h] BYREF

	if (!a3 && !a2[24])
	{
		sub_14047ECF0(a1, (__int64)v5);
		return (*(__int64(__fastcall**)(_DWORD*, char*))(*(_QWORD*)a2 + 24i64))(a2, v5);
	}
	return result;
}

