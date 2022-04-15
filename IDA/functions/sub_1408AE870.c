#include "../winhttp.h"

//----- (00000001408AE870) ----------------------------------------------------
__int64 __fastcall sub_1408AE870(__int64 a1, __int64 a2, __m128* a3)
{
	__int64 result; // rax
	int v7; // r13d
	unsigned int v8; // r14d
	int* v9; // r9
	unsigned int v10; // ebp
	unsigned int v11; // r12d
	__int64 v12; // rax
	int v13; // edi
	unsigned __int64 v14; // rcx
	__int128* v15; // rsi
	unsigned __int64 v16; // rax
	double v17; // xmm2_8
	double v18; // xmm1_8
	__m128* v19; // [rsp+50h] [rbp-58h]
	unsigned int v20; // [rsp+B0h] [rbp+8h]
	__m128* v21; // [rsp+B8h] [rbp+10h]
	__int64 v23; // [rsp+C8h] [rbp+20h]

	sub_1408A1640((unsigned int*)(a2 + 2416), a1, 12 * *(_DWORD*)(a2 + 2332));
	result = *(unsigned __int16*)(a1 + 18);
	if ((_WORD)result)
	{
		v7 = *(_DWORD*)(a1 + 8);
		v8 = (unsigned __int16)result;
		v9 = &a3->m128_i32[(unsigned __int16)result];
		v10 = 0;
		v21 = (__m128*)v9;
		v11 = 0;
		v19 = (__m128*)((char*)a3 + 8 * (unsigned __int16)result);
		v12 = 6i64;
		v20 = 0;
		v13 = 1;
		v23 = 6i64;
		do
		{
			if ((v13 & v7) != 0)
			{
				if ((v13 & 8) != 0)
				{
					v16 = sub_1408A1610(a1);
					v9 = (int*)v21;
					v15 = (__int128*)v16;
				}
				else
				{
					v14 = v10++ * (unsigned __int64)*(unsigned __int16*)(a1 + 16);
					v15 = (__int128*)(*(_QWORD*)a1 + 4 * v14);
				}
				if (*(_BYTE*)(a2 + 2440) && (v13 & *(_DWORD*)(a2 + 2428)) != 0)
				{
					sub_1407E4830(v9, 0i64, 4 * v8);
					sub_1408AE760((__int64)v15, a2, v20, 0, a3, v21, v8, *(_DWORD*)(a1 + 12) == 17, *(float*)(a2 + 2280), v19);
					sub_1408AE760(
						(__int64)v15,
						a2,
						v20++,
						1u,
						a3,
						v21,
						v8,
						*(_DWORD*)(a1 + 12) == 17,
						*(float*)(a2 + 2308),
						v19);
				}
				if (*(_BYTE*)(a2 + 2337))
				{
					sub_1408ADCB0((int*)(a2 + 8 * (v11 + 2i64 * v11 + 265)), v15, v8);
					++v11;
				}
				if (*(_BYTE*)(a2 + 2440) && (v13 & *(_DWORD*)(a2 + 2428)) != 0
					|| *(_DWORD*)(a2 + 2320) == 6 && v13 == 2 && (v7 & 2) != 0)
				{
					sub_1408A6050(
						v15,
						v21,
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 2400)),
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 2324)),
						*(float*)(a2 + 2404),
						*(float*)(a2 + 2328),
						v8);
				}
				else
				{
					*(_QWORD*)&v17 = *(unsigned int*)(a2 + 2324);
					*(_QWORD*)&v18 = *(unsigned int*)(a2 + 2400);
					if (*(float*)&v17 == *(float*)&v18)
						sub_1408AED80((__m128*)v15, v18, v8);
					else
						sub_1408AEC30((__m128*)v15, *(float*)&v18, v17, v8);
				}
				v12 = v23;
				v9 = (int*)v21;
			}
			v13 = __ROL4__(v13, 1);
			v23 = --v12;
		} while (v12);
		*(_DWORD*)(a2 + 2340) = *(_DWORD*)(a2 + 2264);
		*(_DWORD*)(a2 + 2344) = *(_DWORD*)(a2 + 2268);
		*(_DWORD*)(a2 + 2348) = *(_DWORD*)(a2 + 2272);
		*(_DWORD*)(a2 + 2352) = *(_DWORD*)(a2 + 2276);
		*(_DWORD*)(a2 + 2356) = *(_DWORD*)(a2 + 2280);
		*(_DWORD*)(a2 + 2360) = *(_DWORD*)(a2 + 2284);
		*(_DWORD*)(a2 + 2364) = *(_DWORD*)(a2 + 2288);
		*(_DWORD*)(a2 + 2368) = *(_DWORD*)(a2 + 2292);
		*(_DWORD*)(a2 + 2372) = *(_DWORD*)(a2 + 2296);
		*(_DWORD*)(a2 + 2376) = *(_DWORD*)(a2 + 2300);
		*(_DWORD*)(a2 + 2380) = *(_DWORD*)(a2 + 2304);
		*(_DWORD*)(a2 + 2384) = *(_DWORD*)(a2 + 2308);
		*(_DWORD*)(a2 + 2388) = *(_DWORD*)(a2 + 2312);
		*(_DWORD*)(a2 + 2392) = *(_DWORD*)(a2 + 2316);
		*(_DWORD*)(a2 + 2396) = *(_DWORD*)(a2 + 2320);
		*(_DWORD*)(a2 + 2400) = *(_DWORD*)(a2 + 2324);
		*(_DWORD*)(a2 + 2404) = *(_DWORD*)(a2 + 2328);
		*(_DWORD*)(a2 + 2408) = *(_DWORD*)(a2 + 2332);
		result = *(unsigned int*)(a2 + 2336);
		*(_DWORD*)(a2 + 2412) = result;
	}
	return result;
}

