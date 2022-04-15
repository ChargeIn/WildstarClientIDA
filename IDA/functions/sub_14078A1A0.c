//----- (000000014078A1A0) ----------------------------------------------------
__int64 __fastcall sub_14078A1A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v5; // rcx
	__int64 v9; // rcx
	__int64 v10; // rsi
	int* v11; // rax
	__int64 v12; // rdi
	int v13; // esi
	__int64 v14; // rax
	char v16[240]; // [rsp+20h] [rbp-118h] BYREF

	v5 = *(_QWORD*)(a1 + 136);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 936i64))(v5);
		*(_QWORD*)(a1 + 136) = 0i64;
	}
	sub_1401DAB50((__int64)v16, a2, 1.0);
	v9 = *(_QWORD*)(a1 + 128);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 128) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 32);
	v11 = sub_14018B280(3200i64, 0);
	if (v11)
		v12 = sub_1401DF340((__int64)v11);
	else
		v12 = 0i64;
	v13 = (*(__int64(__fastcall**)(__int64, __int64, char*))(*(_QWORD*)v12 + 24i64))(v12, v10, v16);
	if (v13 >= 0)
	{
		*(_QWORD*)(a1 + 128) = v12;
		v13 = 0;
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 360i64))(v12, 1i64);
	}
	*(_DWORD*)(a1 + 96) = a4;
	*(_DWORD*)(a1 + 92) = 1;
	*(_QWORD*)(a1 + 104) = a3;
	v14 = sub_14020CE20(*(_DWORD*)(a3 + 344));
	if (v14)
		*(_DWORD*)(a1 + 144) = *(_DWORD*)(v14 + 56);
	else
		*(_DWORD*)(a1 + 144) = 0;
	return (unsigned int)v13;
}

