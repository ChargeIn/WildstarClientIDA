#include "../winhttp.h"

//----- (00000001400EA7B0) ----------------------------------------------------
void __fastcall sub_1400EA7B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
	BOOL v7; // r15d
	__int64 v8; // rdi
	__int64 v9; // rdx
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rdx
	int v14; // esi
	__int64 v15; // rbp
	__int64 v16; // rax
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	unsigned int v19; // ebx
	int v20; // ecx
	__int64 v21; // rdx
	__int64 v22; // [rsp+30h] [rbp-48h] BYREF
	__int64 v23; // [rsp+38h] [rbp-40h]

	if (!*(_BYTE*)(a1 + 104) && !*(_BYTE*)(a1 + 105))
	{
		*(_BYTE*)(a1 + 104) = 1;
		v7 = a4 != 0;
		if ((int)((__int64)(*(_QWORD*)(a2 + 520) - *(_QWORD*)(a2 + 512)) >> 5) > 10 || *(int*)(a2 + 536) < 6)
			v7 = 0;
		v8 = *(_QWORD*)(a1 + 400);
		sub_140058900(v8, a2, 0);
		sub_1400EFF50(v8, v9, (unsigned __int64*)"eStatus", *(_DWORD*)(a2 + 536));
		sub_1400F0090(v8, v10, (unsigned __int64*)"strName", *(unsigned __int16**)(a2 + 24));
		sub_1400EFEB0(v8, v11, (unsigned __int64*)"bCarbine", *(unsigned __int8*)(a2 + 264));
		sub_1400F0090(v8, v12, (unsigned __int64*)"strAuthor", *(unsigned __int16**)(a2 + 192));
		sub_140058710(v8, (unsigned __int64*)"arErrors", 8ui64);
		sub_140058900(v8, v13, 0);
		v14 = 0;
		if ((int)((__int64)(*(_QWORD*)(a2 + 520) - *(_QWORD*)(a2 + 512)) >> 5) > 0)
		{
			v15 = 0i64;
			do
			{
				v16 = *(_QWORD*)(v8 + 16);
				++v14;
				*(_DWORD*)(v16 + 8) = 3;
				*(double*)v16 = (double)v14;
				*(_QWORD*)(v8 + 16) += 16i64;
				v17 = (unsigned __int64*)sub_14018F0E0(&v22, *(unsigned __int16**)(*(_QWORD*)(a2 + 512) + v15 + 8))[1];
				if (v17)
				{
					v18 = -1i64;
					do
						++v18;
					while (*((_BYTE*)v17 + v18));
					sub_140058710(v8, v17, v18);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
					*(_QWORD*)(v8 + 16) += 16i64;
				}
				if (v23)
					sub_14018B900(v23, 0);
				sub_14005EA50(
					v8,
					(__int64*)(*(_QWORD*)(v8 + 16) - 48i64),
					(int*)(*(_QWORD*)(v8 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
				*(_QWORD*)(v8 + 16) -= 32i64;
				v15 += 32i64;
			} while (v14 < (int)((__int64)(*(_QWORD*)(a2 + 520) - *(_QWORD*)(a2 + 512)) >> 5));
		}
		sub_14005EA50(
			v8,
			(__int64*)(*(_QWORD*)(v8 + 16) - 48i64),
			(int*)(*(_QWORD*)(v8 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
		*(_QWORD*)(v8 + 16) -= 32i64;
		v19 = sub_1400578C0(v8);
		sub_1400035B0();
		sub_1400EAA10(a1, v20 + 50, (__int64)"TSb", v19, a3, v7);
		sub_1400579E0(v8, v21, v19);
		*(_BYTE*)(a1 + 104) = 0;
	}
}
// 1400EA840: variable 'v9' is possibly undefined
// 1400EA853: variable 'v10' is possibly undefined
// 1400EA86A: variable 'v11' is possibly undefined
// 1400EA880: variable 'v12' is possibly undefined
// 1400EA8A0: variable 'v13' is possibly undefined
// 1400EA9BE: variable 'v20' is possibly undefined
// 1400EA9E3: variable 'v21' is possibly undefined

