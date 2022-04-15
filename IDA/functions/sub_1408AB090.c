//----- (00000001408AB090) ----------------------------------------------------
__int64 __fastcall sub_1408AB090(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	char v6; // si
	int v7; // edx
	int i; // ecx
	_DWORD* v9; // rcx
	int v10; // edi
	__int64 result; // rax
	__int64 v12; // rcx

	*(_QWORD*)(a1 + 8) = a4;
	*(_QWORD*)(a1 + 16) = a2;
	v6 = 0;
	*(_BYTE*)(a1 + 2465) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	v7 = 0;
	for (i = a5[1] & 0x3FFFF; i; i &= i - 1)
		++v7;
	v9 = *(_DWORD**)(a1 + 8);
	*(_DWORD*)(a1 + 2456) = v7;
	sub_1408AC580(v9, (_DWORD*)(a1 + 2288));
	if (*(_BYTE*)(a1 + 2465))
		*(_DWORD*)(a1 + 2348) = 0;
	*(_DWORD*)(a1 + 2364) = *(_DWORD*)(a1 + 2288);
	*(_DWORD*)(a1 + 2368) = *(_DWORD*)(a1 + 2292);
	*(_DWORD*)(a1 + 2372) = *(_DWORD*)(a1 + 2296);
	*(_DWORD*)(a1 + 2376) = *(_DWORD*)(a1 + 2300);
	*(_DWORD*)(a1 + 2380) = *(_DWORD*)(a1 + 2304);
	*(_DWORD*)(a1 + 2384) = *(_DWORD*)(a1 + 2308);
	*(_DWORD*)(a1 + 2388) = *(_DWORD*)(a1 + 2312);
	*(_DWORD*)(a1 + 2392) = *(_DWORD*)(a1 + 2316);
	*(_DWORD*)(a1 + 2396) = *(_DWORD*)(a1 + 2320);
	*(_DWORD*)(a1 + 2400) = *(_DWORD*)(a1 + 2324);
	*(_DWORD*)(a1 + 2404) = *(_DWORD*)(a1 + 2328);
	*(_DWORD*)(a1 + 2408) = *(_DWORD*)(a1 + 2332);
	*(_DWORD*)(a1 + 2412) = *(_DWORD*)(a1 + 2336);
	*(_DWORD*)(a1 + 2416) = *(_DWORD*)(a1 + 2340);
	*(_DWORD*)(a1 + 2420) = *(_DWORD*)(a1 + 2344);
	*(_DWORD*)(a1 + 2424) = *(_DWORD*)(a1 + 2348);
	*(_DWORD*)(a1 + 2428) = *(_DWORD*)(a1 + 2352);
	*(_DWORD*)(a1 + 2432) = *(_DWORD*)(a1 + 2356);
	*(_DWORD*)(a1 + 2436) = *(_DWORD*)(a1 + 2360);
	*(_DWORD*)(a1 + 2460) = *a5;
	v10 = a5[1] & 0x3FFFF;
	sub_1408AB6A0(a1, v10);
	if ((*(_BYTE*)(a1 + 2340) || *(_BYTE*)(a1 + 2312)) && (v10 & *(_DWORD*)(a1 + 2452)) != 0)
		v6 = 1;
	*(_BYTE*)(a1 + 2464) = v6;
	result = sub_1408AB860(a1);
	if ((_DWORD)result == 1)
	{
		result = sub_1408ABA10(a1);
		if ((_DWORD)result == 1)
		{
			v12 = *(_QWORD*)(a1 + 8);
			result = 1i64;
			*(_WORD*)(v12 + 8) = 0;
			*(_BYTE*)(v12 + 10) = 0;
		}
	}
	return result;
}

