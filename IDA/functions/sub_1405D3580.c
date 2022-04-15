#include "../winhttp.h"

//----- (00000001405D3580) ----------------------------------------------------
void __fastcall sub_1405D3580(__int64 a1, unsigned int a2, int a3, float a4, int a5)
{
	int v6; // eax
	int v7; // eax
	__int64 v8; // rbx
	double v9; // xmm0_8
	__int64 v10; // [rsp+40h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 688))
	{
		v6 = a5;
		*(_DWORD*)(a1 + 868) = a3;
		*(_DWORD*)(a1 + 848) = 2;
		*(_DWORD*)(a1 + 864) = a2;
		*(_DWORD*)(a1 + 872) = v6;
		v10 = 0i64;
		v7 = sub_140633CB0(a1, a2, &v10);
		v8 = v10;
		if (v7 < 0)
		{
			*(_QWORD*)(a1 + 876) = 0i64;
		}
		else
		{
			v9 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v10 + 120i64))(v10);
			*(float*)(a1 + 876) = *(float*)&v9 * a4;
			*(float*)(a1 + 880) = (*(float(__fastcall**)(__int64))(*(_QWORD*)v8 + 112i64))(v8) * a4;
		}
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	}
}

