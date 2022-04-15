//----- (000000014083B840) ----------------------------------------------------
void __fastcall sub_14083B840(__int64 a1, unsigned int a2, float a3, float a4, int a5)
{
	__int64 v7; // rbx
	__int64 v8; // rax
	void* v9; // rcx
	__int64 v10; // rax
	void(__fastcall * v11)(__int64, __int64*); // rbx
	__int64 v12[2]; // [rsp+20h] [rbp-58h] BYREF
	unsigned int v13; // [rsp+30h] [rbp-48h]
	int v14; // [rsp+34h] [rbp-44h]
	float v15; // [rsp+38h] [rbp-40h]
	float v16; // [rsp+3Ch] [rbp-3Ch]
	int v17; // [rsp+40h] [rbp-38h]

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v7 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
	if (!v7)
		goto LABEL_4;
	while (*(_DWORD*)(v7 + 48) != a2)
	{
		v7 = *(_QWORD*)(v7 + 80);
		if (!v7)
			goto LABEL_4;
	}
	if ((*(_BYTE*)(v7 + 72) & 8) != 0)
	{
		v8 = *(_QWORD*)(v7 + 64);
		v9 = *(void**)(a1 + 296);
		v15 = a3;
		v12[0] = v8;
		v10 = *(_QWORD*)(v7 + 16);
		v16 = a4;
		v12[1] = v10;
		LODWORD(v10) = *(_DWORD*)(v7 + 8);
		v11 = *(void(__fastcall**)(__int64, __int64*))(v7 + 56);
		v14 = v10;
		v13 = a2;
		v17 = a5;
		ResetEvent(v9);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
		v11(8i64, v12);
		SetEvent(*(HANDLE*)(a1 + 296));
	}
	else
	{
	LABEL_4:
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
}
// 14083B8DF: conditional instruction was optimized away because rbx.8!=0

