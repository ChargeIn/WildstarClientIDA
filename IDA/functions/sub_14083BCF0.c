#include "../winhttp.h"

//----- (000000014083BCF0) ----------------------------------------------------
void __fastcall sub_14083BCF0(__int64 a1, unsigned int a2, unsigned int a3, int* a4)
{
	__int64 v8; // rcx
	void(__fastcall * v9)(_QWORD, __int64*); // rdi
	__int64 v10; // rax
	void* v11; // rcx
	float v12; // xmm2_4
	float v13; // xmm1_4
	float v14; // xmm0_4
	__int64 v15[2]; // [rsp+20h] [rbp-48h] BYREF
	unsigned int v16; // [rsp+30h] [rbp-38h]
	unsigned int v17; // [rsp+34h] [rbp-34h]
	float v18; // [rsp+38h] [rbp-30h]
	float v19; // [rsp+3Ch] [rbp-2Ch]
	float v20; // [rsp+40h] [rbp-28h]
	float v21; // [rsp+44h] [rbp-24h]
	__int64 v22; // [rsp+48h] [rbp-20h]

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v8 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
	if (v8)
	{
		while (*(_DWORD*)(v8 + 48) != a2)
		{
			v8 = *(_QWORD*)(v8 + 80);
			if (!v8)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		v8 = 0i64;
	}
	v9 = *(void(__fastcall**)(_QWORD, __int64*))(v8 + 56);
	if (v9 && (a3 & *(_DWORD*)(v8 + 72)) != 0)
	{
		v15[0] = *(_QWORD*)(v8 + 64);
		v10 = *(_QWORD*)(v8 + 16);
		v11 = *(void**)(a1 + 296);
		v15[1] = v10;
		v16 = a2;
		v17 = a3;
		v22 = 0i64;
		v12 = 1.0 / (float)dword_140C110B4;
		v13 = (float)*a4;
		LODWORD(v10) = a4[2];
		v19 = (float)a4[1] * v12;
		v14 = (float)(int)v10;
		LODWORD(v10) = a4[3];
		v18 = v13 * v12;
		v20 = v14 * v12;
		v21 = (float)(int)v10 * v12;
		ResetEvent(v11);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
		v9(a3, v15);
		SetEvent(*(HANDLE*)(a1 + 296));
	}
	else
	{
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
}
// 140C110B4: using guessed type int dword_140C110B4;

