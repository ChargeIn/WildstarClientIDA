#include "../winhttp.h"

//----- (00000001401E3130) ----------------------------------------------------
void __fastcall sub_1401E3130(__int64 a1, __int64 a2, float a3, __int64 a4)
{
	__int64 v6; // r14
	__int64** v7; // rdi
	__int64* i; // rbx
	__int64 v9; // rax
	float* v10; // rsi
	int* v11; // rax
	float v12; // xmm1_4
	float v13; // xmm1_4
	float v14; // xmm1_4
	float v15; // xmm0_4
	float v16; // xmm0_4
	float v17; // xmm0_4
	float v18; // xmm0_4
	float v19; // xmm0_4
	float v20; // xmm0_4
	__int64 v21; // r9
	int v22; // esi
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-A8h] BYREF
	__int64 v24; // [rsp+38h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-98h]
	__int64 v26[4]; // [rsp+50h] [rbp-88h] BYREF
	__int64 v27; // [rsp+E0h] [rbp+8h] BYREF
	int v28; // [rsp+F0h] [rbp+18h] BYREF

	v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 25i64);
	if (v6)
	{
		v7 = *(__int64***)(a4 + 8);
		for (i = *v7; i != (__int64*)v7; i = (__int64*)*i)
		{
			if (*((_DWORD*)i + 7) == 1
				&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 464i64))(v6, *((unsigned int*)i + 4))
				&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 520i64))(v6, *((unsigned int*)i + 4)))
			{
				v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 528i64))(v6, *((unsigned int*)i + 4));
				v28 = *((_DWORD*)i + 4);
				v10 = (float*)v9;
				v11 = sub_1401E4360(a2, &v28);
				switch (*((_DWORD*)i + 6))
				{
				case 0:
					*v11 = 1;
					if (a3 >= 0.0)
						v12 = (float)((float)((float)(v10[16] - 1.0) * a3) + 1.0) - 1.0;
					else
						v12 = (float)(1.0 - (float)((float)(v10[13] - 1.0) * a3)) - 1.0;
					*((float*)v11 + 4) = v12;
					break;
				case 1:
					*v11 = 1;
					if (a3 >= 0.0)
						v13 = (float)((float)((float)(v10[17] - 1.0) * a3) + 1.0) - 1.0;
					else
						v13 = (float)(1.0 - (float)((float)(v10[14] - 1.0) * a3)) - 1.0;
					*((float*)v11 + 5) = v13;
					break;
				case 2:
					*v11 = 1;
					if (a3 >= 0.0)
						v14 = (float)((float)((float)(v10[18] - 1.0) * a3) + 1.0) - 1.0;
					else
						v14 = (float)(1.0 - (float)((float)(v10[15] - 1.0) * a3)) - 1.0;
					*((float*)v11 + 6) = v14;
					break;
				case 3:
					v11[1] = 1;
					if (a3 >= 0.0)
						v15 = a3 * v10[10];
					else
						v15 = -(float)(a3 * v10[7]);
					*((float*)v11 + 9) = v15;
					break;
				case 4:
					v11[1] = 1;
					if (a3 >= 0.0)
						v16 = a3 * v10[11];
					else
						v16 = -(float)(a3 * v10[8]);
					*((float*)v11 + 8) = v16;
					break;
				case 5:
					v11[1] = 1;
					if (a3 >= 0.0)
						v17 = a3 * v10[12];
					else
						v17 = -(float)(a3 * v10[9]);
					*((float*)v11 + 10) = v17;
					break;
				case 6:
					v11[2] = 1;
					if (a3 >= 0.0)
						v18 = a3 * v10[4];
					else
						v18 = -(float)(a3 * v10[1]);
					*((float*)v11 + 12) = v18;
					break;
				case 7:
					v11[2] = 1;
					if (a3 >= 0.0)
						v19 = a3 * v10[5];
					else
						v19 = -(float)(a3 * v10[2]);
					*((float*)v11 + 13) = v19;
					break;
				case 8:
					v11[2] = 1;
					if (a3 >= 0.0)
						v20 = a3 * v10[6];
					else
						v20 = -(float)(a3 * v10[3]);
					*((float*)v11 + 14) = v20;
					break;
				default:
					TlsValue = &off_140B5E648;
					v24 = 0i64;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v21 = *((unsigned int*)i + 6);
					v26[0] = (__int64)TlsValue;
					v26[1] = v24;
					v26[2] = (__int64)lpTlsValue;
					v27 = 0x141D454C0i64;
					v22 = sub_1401971E0(&dword_140C8A27C, 5, &v27, v21, v26);
					TlsValue = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v22)
						DebugBreak();
					break;
				}
			}
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C8A27C: using guessed type _DWORD dword_140C8A27C;

