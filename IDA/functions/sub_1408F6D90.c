#include "../winhttp.h"

//----- (00000001408F6D90) ----------------------------------------------------
__int64 __fastcall sub_1408F6D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	unsigned __int16 v6; // ax
	__int64 v7; // rdx
	__int64 v8; // rcx
	int v9; // eax
	__int64 result; // rax
	unsigned int v11; // esi
	int* v12; // rax
	__int64 v13; // rax
	__int64 v14; // r10
	__int64 v15; // rcx
	__int64 v16; // r9
	__int64 v17; // r8
	__int64 v18; // rdx

	*(_QWORD*)(a1 + 24) = a4;
	*(_QWORD*)(a1 + 32) = a2;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	v7 = *(_QWORD*)(a1 + 24) + 72i64;
	*(_DWORD*)(a1 + 68) = v6;
	*(_DWORD*)(a1 + 572) = *(_DWORD*)(v7 + 96);
	sub_1408F9360(a1 + 96, v7, a5);
	v8 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 572) &= ~8u;
	*(_DWORD*)(a1 + 596) = *(_DWORD*)(v8 + 200);
	v9 = *(_DWORD*)(v8 + 184);
	*(_DWORD*)(a1 + 572) &= ~4u;
	*(_DWORD*)(a1 + 564) = v9;
	result = sub_1408F7670(a1);
	if ((_DWORD)result == 1)
	{
		sub_1408F7920(a1);
		result = sub_140837E30(
			a1 + 8,
			*(int**)(*(_QWORD*)(a1 + 24) + 8i64),
			*(_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64),
			*(_DWORD*)(*(_QWORD*)(a1 + 24) + 20i64));
		if ((_DWORD)result != 52)
		{
			if ((unsigned int)sub_1408F79A0(a1) == 1)
			{
				sub_1408F81A0(a1);
				v11 = 16 * *(_DWORD*)(a1 + 168);
				v12 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 8i64))(
					*(_QWORD*)(a1 + 32),
					v11);
				*(_QWORD*)(a1 + 56) = v12;
				if (v12)
				{
					sub_1407E4830(v12, 0i64, v11);
					v13 = *(_QWORD*)(a1 + 24);
					v14 = *(_QWORD*)(a1 + 56);
					v15 = *(_QWORD*)(v13 + 176);
					v16 = *(_QWORD*)(v13 + 192);
					v17 = *(_QWORD*)(a1 + 48);
					v18 = *(_QWORD*)(a1 + 40);
					*(_QWORD*)(a1 + 120) = v13 + 72;
					*(_QWORD*)(a1 + 128) = v15;
					*(_QWORD*)(a1 + 152) = v16;
					*(_QWORD*)(a1 + 136) = v18;
					*(_QWORD*)(a1 + 144) = v17;
					*(_QWORD*)(a1 + 160) = v14;
					*(_DWORD*)(*(_QWORD*)(a1 + 24) + 168i64) = *(_DWORD*)(a1 + 572);
					return 1i64;
				}
				else
				{
					return 52i64;
				}
			}
			else
			{
				return 2i64;
			}
		}
	}
	return result;
}

