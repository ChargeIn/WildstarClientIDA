#include "../winhttp.h"

//----- (000000014077B860) ----------------------------------------------------
void __fastcall sub_14077B860(__int64 a1)
{
	unsigned int v2; // edx
	__int64 v3; // r8
	unsigned int v4; // ecx
	unsigned int v5; // ebp
	double v6; // xmm0_8
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // r14
	int* v10; // rdx
	__int64 v11; // rcx
	int v12; // [rsp+20h] [rbp-48h] BYREF
	__int64 v13; // [rsp+28h] [rbp-40h]
	void(__fastcall * v14)(__int64); // [rsp+30h] [rbp-38h]
	__int64 v15; // [rsp+38h] [rbp-30h]

	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "AcceptProgressInput", byte_1409EC27C, 0i64);
	v2 = *(_DWORD*)(a1 + 208);
	v3 = *(_QWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 296) = 0;
	v4 = *(_DWORD*)(v3 + 8);
	*(_DWORD*)(a1 + 208) = v2 + 1;
	if (v2 < v4)
	{
		v5 = 0;
		if (*(_DWORD*)(v3 + 16))
		{
			do
			{
				v6 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
				v7 = *(_QWORD*)(a1 + 184);
				v8 = sub_14018DB00(*(_QWORD*)(a1 + 176), v7 + 1, 4i64);
				v9 = v8;
				v8[v7] = 1 - (int)(v6 * -4.0);
				v10 = *(int**)(a1 + 176);
				if (v10 != v8)
				{
					sub_1407DB590(v8, v10, 4i64 * *(_QWORD*)(a1 + 184));
					v11 = *(_QWORD*)(a1 + 176);
					if (v11)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
					*(_QWORD*)(a1 + 176) = v9;
				}
				*(_QWORD*)(a1 + 184) = v7 + 1;
				++v5;
			} while (v5 < *(_DWORD*)(*(_QWORD*)(a1 + 144) + 16i64));
		}
		*(_DWORD*)(a1 + 212) = 0;
		v14 = sub_14077BA30;
		v12 = 0;
		v13 = a1;
		v15 = 0i64;
		sub_140195960(a1 + 224, 500, (__int64)&v12, 4);
	}
	else
	{
		sub_1407797A0(a1, 1, 0);
		sub_140779660(a1, 1i64);
	}
}
// 1409EC27C: using guessed type _BYTE byte_1409EC27C[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77890: using guessed type __int64 qword_140C77890;

