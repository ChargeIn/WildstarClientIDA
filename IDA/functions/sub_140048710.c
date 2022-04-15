#include "../winhttp.h"

//----- (0000000140048710) ----------------------------------------------------
void __fastcall sub_140048710(__int64* a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
	float v9; // xmm6_4
	__int64 v10; // rsi
	int v11; // r12d
	int v12; // ebx
	int v13; // eax
	int v14; // ecx
	__int64 v15; // rax
	int v16; // ebx
	__int64 v17; // rax
	int v18; // [rsp+20h] [rbp-48h] BYREF
	int v19; // [rsp+24h] [rbp-44h]
	int v20; // [rsp+28h] [rbp-40h]
	int v21; // [rsp+2Ch] [rbp-3Ch]
	__int128 v22; // [rsp+30h] [rbp-38h]

	if (!a4)
	{
		v9 = *(float*)(a3 + 8);
		v10 = 3i64 * a2;
		v11 = *(_DWORD*)(a6 + 24i64 * a2 + 5116);
		if (v9 != 0.0)
		{
			if (*(_DWORD*)(a6 + 24i64 * a2 + 5112))
			{
				v12 = *(_DWORD*)(a3 + 16);
				v13 = sub_1401AE6A0(0, 0xFFFF);
				v14 = *(_DWORD*)a3;
				v20 = LODWORD(v9);
				v19 = v13;
				v18 = v14;
				v21 = 0;
				*(_QWORD*)((char*)&v22 + 4) = 0i64;
				HIDWORD(v22) = 0;
				v15 = *a1;
				LODWORD(v22) = v12;
				(*(void(__fastcall**)(__int64*, _QWORD, int*))(v15 + 584))(a1, a2, &v18);
			}
			else
			{
				if (!a2)
				{
					v16 = sub_1401AE6A0(0, 0xFFFF);
					v20 = 1065353216;
					v18 = sub_140048880(a6);
					v21 = 0;
					v17 = *a1;
					v19 = v16;
					v22 = 1ui64;
					(*(void(__fastcall**)(__int64*, _QWORD, int*))(v17 + 584))(a1, 0i64, &v18);
				}
				*(_QWORD*)(a6 + 8 * v10 + 5104) = 0i64;
				*(_QWORD*)(a6 + 8 * v10 + 5112) = 0i64;
				*(_QWORD*)(a6 + 8 * v10 + 5120) = 0i64;
			}
			if (v11)
				*(_DWORD*)(a6 + 8 * v10 + 5124) = *(_DWORD*)a3;
		}
	}
}

