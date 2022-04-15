//----- (00000001408BE240) ----------------------------------------------------
__int64 __fastcall sub_1408BE240(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 52) = 0;
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(v1 + 16);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(v1 + 16);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(v1 + 16);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	result = 1i64;
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	return result;
}

