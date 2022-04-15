#include "../winhttp.h"

//----- (00000001405D3640) ----------------------------------------------------
void __fastcall sub_1405D3640(__int64 a1, unsigned int a2, int a3, float a4)
{
	int v5; // eax
	__int64 v6; // rbx
	double v7; // xmm0_8
	__int64 v8; // [rsp+40h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 688))
	{
		*(_DWORD*)(a1 + 916) = a3;
		*(_DWORD*)(a1 + 896) = 2;
		*(_DWORD*)(a1 + 912) = a2;
		v8 = 0i64;
		v5 = sub_140633CB0(a1, a2, &v8);
		v6 = v8;
		if (v5 < 0)
		{
			*(_QWORD*)(a1 + 924) = 0i64;
		}
		else
		{
			v7 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v8 + 120i64))(v8);
			*(float*)(a1 + 924) = *(float*)&v7 * a4;
			*(float*)(a1 + 928) = (*(float(__fastcall**)(__int64))(*(_QWORD*)v6 + 112i64))(v6) * a4;
		}
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	}
}

