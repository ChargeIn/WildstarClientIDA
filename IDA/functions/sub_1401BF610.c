//----- (00000001401BF610) ----------------------------------------------------
__int64 __fastcall sub_1401BF610(__int64 a1)
{
	int* v2; // rax
	int v3; // ecx

	if ((*(int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 120i64))(*(_QWORD*)(a1 + 40), a1 + 52) < 0
		|| (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 40) + 88i64))(
			*(_QWORD*)(a1 + 40),
			*(unsigned int*)(a1 + 52),
			0i64,
			a1 + 56,
			16i64) < 0
		|| *(_DWORD*)(a1 + 56) != 1095320664
		|| *(_DWORD*)(a1 + 60) != 1)
	{
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 64) = 0i64;
		*(_DWORD*)(a1 + 56) = 1095320664;
		*(_DWORD*)(a1 + 60) = 1;
		*(_DWORD*)(a1 + 52) = 0;
	}
	v2 = sub_14018B280(56i64, 0);
	if (v2)
	{
		v3 = *(_DWORD*)(a1 + 68);
		*((_QWORD*)v2 + 1) = 0i64;
		*((_QWORD*)v2 + 2) = 0i64;
		*((_QWORD*)v2 + 3) = 0i64;
		*((_QWORD*)v2 + 4) = 0i64;
		*((_QWORD*)v2 + 5) = 0i64;
		*v2 = v3;
		*((_QWORD*)v2 + 6) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	*(_QWORD*)(a1 + 72) = v2;
	sub_1401BCEA0(v2, a1);
	return 0i64;
}

