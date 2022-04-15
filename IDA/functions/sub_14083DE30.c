//----- (000000014083DE30) ----------------------------------------------------
__int64 __fastcall sub_14083DE30(__int64 a1)
{
	__int64 result; // rax

	sub_14083C3A0(a1);
	*(_BYTE*)(a1 + 72) = 0;
	InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
	InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_DWORD*)(a1 + 192) = 0;
	*(_BYTE*)(a1 + 208) = 0;
	*(_DWORD*)(a1 + 216) = -1;
	*(_DWORD*)(a1 + 1768) = 0;
	*(_DWORD*)(a1 + 2024) = 0;
	*(_DWORD*)(a1 + 2032) = -1;
	*(_DWORD*)(a1 + 2288) = 0;
	*(_BYTE*)(a1 + 2296) = 0;
	sub_14083CCA0(a1 + 2304);
	*(_QWORD*)(a1 + 2376) = 0i64;
	*(_QWORD*)(a1 + 2384) = 0i64;
	*(_DWORD*)(a1 + 2392) = 0;
	*(_BYTE*)(a1 + 2400) = 0;
	*(_QWORD*)(a1 + 64) = 0i64;
	result = a1;
	hHandle = 0i64;
	return result;
}

