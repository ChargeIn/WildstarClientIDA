//----- (000000014083BE70) ----------------------------------------------------
void __fastcall sub_14083BE70(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	void(__fastcall * v5)(__int64, __int64*); // rdi
	__int64 v6; // rdx
	void* v7; // rcx
	__int64 v8[2]; // [rsp+20h] [rbp-28h] BYREF
	unsigned int v9; // [rsp+30h] [rbp-18h]
	int v10; // [rsp+34h] [rbp-14h]

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v4 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
	if (!v4)
		goto LABEL_4;
	while (*(_DWORD*)(v4 + 48) != a2)
	{
		v4 = *(_QWORD*)(v4 + 80);
		if (!v4)
			goto LABEL_4;
	}
	if (*(char*)(v4 + 72) < 0 && (v5 = *(void(__fastcall**)(__int64, __int64*))(v4 + 56)) != 0i64)
	{
		v6 = *(_QWORD*)(v4 + 64);
		v7 = *(void**)(a1 + 296);
		v9 = a2;
		v8[0] = v6;
		v8[1] = *(_QWORD*)(v4 + 16);
		v10 = *(_DWORD*)(v4 + 8);
		ResetEvent(v7);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
		v5(128i64, v8);
		SetEvent(*(HANDLE*)(a1 + 296));
	}
	else
	{
	LABEL_4:
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
}
// 14083BEF4: conditional instruction was optimized away because rax.8!=0

