#include "../winhttp.h"

//----- (00000001408C3BE0) ----------------------------------------------------
__int64 __fastcall sub_1408C3BE0(__int64 a1, __int64 a2, __m128* a3)
{
	__int64 result; // rax
	unsigned int v6; // r12d
	unsigned int v7; // ebp
	int v8; // eax
	int v9; // edi
	unsigned int v10; // r15d
	__int64 v11; // r13
	unsigned __int64 v12; // rcx
	__int128* v13; // rsi
	double v14; // xmm2_8
	double v15; // xmm1_8
	unsigned int v16; // [rsp+80h] [rbp+8h]
	int v17; // [rsp+88h] [rbp+10h]

	sub_1408A1640((unsigned int*)(a2 + 448), a1, *(_DWORD*)(a2 + 552));
	result = *(unsigned __int16*)(a1 + 18);
	if ((_WORD)result)
	{
		v6 = 0;
		v7 = (unsigned __int16)result;
		v8 = *(_DWORD*)(a1 + 8);
		v9 = 1;
		v16 = 0;
		v10 = 0;
		v11 = 6i64;
		v17 = v8;
		do
		{
			if ((v9 & v8) != 0)
			{
				if ((v9 & 8) != 0)
				{
					v13 = (__int128*)sub_1408A1610(a1);
				}
				else
				{
					v12 = v6++ * (unsigned __int64)*(unsigned __int16*)(a1 + 16);
					v13 = (__int128*)(*(_QWORD*)a1 + 4 * v12);
				}
				if (*(_DWORD*)(a2 + 536) && (v9 & *(_DWORD*)(a2 + 540)) != 0)
				{
					sub_1408C37C0(a2, (__int64)v13, (__int64)a3, v7, v10);
					if (*(_DWORD*)(a2 + 456))
						sub_1408AE4A0((float*)(a2 + 184), a3->m128_f32, v7, v10);
					++v10;
				}
				if (*(_BYTE*)(a2 + 493))
				{
					sub_1408ADCB0((int*)(a2 + 8 * (v16 + 2 * (v16 + 19i64))), v13, v7);
					++v16;
				}
				if (*(_DWORD*)(a2 + 536) && (v9 & *(_DWORD*)(a2 + 540)) != 0)
				{
					sub_1408A6050(
						v13,
						a3,
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 520)),
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 480)),
						*(float*)(a2 + 524),
						*(float*)(a2 + 484),
						v7);
				}
				else
				{
					*(_QWORD*)&v14 = *(unsigned int*)(a2 + 480);
					*(_QWORD*)&v15 = *(unsigned int*)(a2 + 520);
					if (*(float*)&v14 == *(float*)&v15)
						sub_1408C3FA0((__m128*)v13, v15, v7);
					else
						sub_1408C3E50((__m128*)v13, *(float*)&v15, v14, v7);
				}
				v8 = v17;
			}
			v9 = __ROL4__(v9, 1);
			--v11;
		} while (v11);
		*(_DWORD*)(a2 + 496) = *(_DWORD*)(a2 + 456);
		*(_DWORD*)(a2 + 500) = *(_DWORD*)(a2 + 460);
		*(_DWORD*)(a2 + 504) = *(_DWORD*)(a2 + 464);
		*(_DWORD*)(a2 + 508) = *(_DWORD*)(a2 + 468);
		*(_DWORD*)(a2 + 512) = *(_DWORD*)(a2 + 472);
		*(_DWORD*)(a2 + 516) = *(_DWORD*)(a2 + 476);
		*(_DWORD*)(a2 + 520) = *(_DWORD*)(a2 + 480);
		*(_DWORD*)(a2 + 524) = *(_DWORD*)(a2 + 484);
		*(_DWORD*)(a2 + 528) = *(_DWORD*)(a2 + 488);
		result = *(unsigned int*)(a2 + 492);
		*(_DWORD*)(a2 + 532) = result;
	}
	return result;
}

