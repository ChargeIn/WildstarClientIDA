#include "../winhttp.h"

//----- (0000000140781D90) ----------------------------------------------------
void __fastcall sub_140781D90(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
	__int64 v8; // rsi
	double v9; // xmm7_8
	int v10; // ebp
	float v11; // xmm0_4
	int v12; // r14d
	unsigned __int64 v13; // rax
	int v14; // ecx
	int v15; // edx
	int v16; // edx
	int v17; // ecx
	int v18; // ecx
	unsigned int v19; // eax
	int v20; // ecx
	unsigned __int64 v21; // [rsp+70h] [rbp-48h] BYREF
	float v22; // [rsp+C8h] [rbp+10h] BYREF

	if (!*(_QWORD*)(a2 + 5864) && *(float*)(a1 + 68) == 0.0 && (*(_BYTE*)(a1 + 100) & 1) != 0)
	{
		*(_DWORD*)(a1 + 112) = a3;
	}
	else
	{
		v8 = a6;
		v9 = (double)(a3 + *(_DWORD*)(a1 + 104) - *(_DWORD*)(a1 + 112)) * 0.001 * *(float*)(a1 + 108)
			+ *(float*)(a1 + 68);
		(*(void(__fastcall**)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64, unsigned __int64*, float*, _QWORD, _DWORD, __int64, _DWORD))(**(_QWORD**)(a1 + 56) + 144i64))(
			*(_QWORD*)(a1 + 56),
			**(_QWORD**)(a1 + 56),
			a4,
			a5,
			0i64,
			0i64,
			a6,
			&v21,
			&v22,
			0i64,
			*(_DWORD*)(a1 + 96),
			a1 + 80,
			*(_DWORD*)(a1 + 64));
		v10 = *(_DWORD*)(a1 + 160);
		v11 = v22;
		v12 = *(_DWORD*)(a1 + 164);
		v13 = v21;
		v14 = 1;
		if (*(_DWORD*)(a1 + 116))
		{
			if (v22 <= 0.0)
			{
				if (v22 < 0.0)
				{
					if (v21 < *(_QWORD*)(a1 + 128) || (v16 = 1, v21 >= *(_QWORD*)(a1 + 136)))
						v16 = 0;
					*(_DWORD*)(a1 + 164) = v16;
				}
			}
			else
			{
				if (v21 < *(_QWORD*)(a1 + 128) || (v15 = 1, v21 >= *(_QWORD*)(a1 + 136)))
					v15 = 0;
				*(_DWORD*)(a1 + 160) = v15;
			}
		}
		if (*(_DWORD*)(a1 + 120))
		{
			if (v11 >= 0.0)
			{
				if (v11 > 0.0)
				{
					if (v13 < *(_QWORD*)(a1 + 144) || v13 >= *(_QWORD*)(a1 + 152))
						v14 = 0;
					*(_DWORD*)(a1 + 164) = v14;
				}
			}
			else
			{
				if (v13 < *(_QWORD*)(a1 + 144) || v13 >= *(_QWORD*)(a1 + 152))
					v14 = 0;
				*(_DWORD*)(a1 + 160) = v14;
			}
		}
		if (v13 >= *(_QWORD*)(a1 + 136)
			&& v13 < *(_QWORD*)(a1 + 144)
			&& *(_QWORD*)(a2 + 184)
			&& *(_DWORD*)(*(_QWORD*)(a2 + 184) + 4i64) == 5)
		{
			sub_14045BF30(a2, 4, 0);
		}
		if (*(_DWORD*)(a1 + 160) || *(_DWORD*)(a1 + 164))
		{
			*(_OWORD*)v8 = *(_OWORD*)(a2 + 4416);
			*(_DWORD*)(v8 + 4) = 0;
		}
		v17 = *(_DWORD*)(a1 + 160);
		if (v17 != v10 && *(_QWORD*)(a2 + 184) && *(_DWORD*)(*(_QWORD*)(a2 + 184) + 4i64) == 5 && v17)
			sub_14045BF30(a2, 4, 0);
		v18 = *(_DWORD*)(a1 + 164);
		if (v18 != v12 && *(_QWORD*)(a2 + 184) && *(_DWORD*)(*(_QWORD*)(a2 + 184) + 4i64) == 5 && v18)
			sub_14045BF30(a2, 3, 0);
		v19 = *(_DWORD*)(a1 + 96);
		if (v19 <= 0xA)
		{
			v20 = 1545;
			if (_bittest(&v20, v19))
			{
				if (v9 >= 1.0)
				{
					if (*(_DWORD*)(a1 + 160))
						*(_DWORD*)(a1 + 160) = 0;
					if (*(_DWORD*)(a1 + 164))
						*(_DWORD*)(a1 + 164) = 0;
					if (*(_QWORD*)(a1 + 24))
						sub_14079AB20(*(_QWORD*)(a1 + 16), a1);
				}
			}
		}
	}
}

