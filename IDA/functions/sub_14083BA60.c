#include "../winhttp.h"

//----- (000000014083BA60) ----------------------------------------------------
void __fastcall sub_14083BA60(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v6; // r10d
	__int64 v7; // rax
	void(__fastcall * v8)(__int64, __int64*); // rbx
	__int64 v9; // rdx
	__int64 v10; // rcx
	int v11; // eax
	void* v12; // rcx
	__int64 v13[2]; // [rsp+20h] [rbp-38h] BYREF
	unsigned int v14; // [rsp+30h] [rbp-28h]
	int v15; // [rsp+34h] [rbp-24h]
	int v16; // [rsp+38h] [rbp-20h]
	int v17; // [rsp+3Ch] [rbp-1Ch]
	__int64 v18; // [rsp+40h] [rbp-18h]

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v6 = *(_DWORD*)(a2 + 120);
	v7 = *(_QWORD*)(a1 + 8i64 * (v6 % 0x1F));
	if (v7)
	{
		while (*(_DWORD*)(v7 + 48) != v6)
		{
			v7 = *(_QWORD*)(v7 + 80);
			if (!v7)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		v7 = 0i64;
	}
	if ((*(_BYTE*)(v7 + 72) & 4) != 0 && (v8 = *(void(__fastcall**)(__int64, __int64*))(v7 + 56)) != 0i64)
	{
		v9 = *(_QWORD*)(v7 + 16);
		v10 = *(_QWORD*)(v7 + 64);
		v14 = v6;
		v13[1] = v9;
		LODWORD(v9) = *(_DWORD*)(v7 + 8);
		v16 = *(_DWORD*)a3;
		v11 = *(_DWORD*)(a3 + 4);
		v13[0] = v10;
		v12 = *(void**)(a1 + 296);
		v17 = v11;
		v18 = *(_QWORD*)(a3 + 8);
		v15 = v9;
		ResetEvent(v12);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
		v8(4i64, v13);
		SetEvent(*(HANDLE*)(a1 + 296));
	}
	else
	{
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
}

