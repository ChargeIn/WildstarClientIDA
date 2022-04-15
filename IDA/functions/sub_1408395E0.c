#include "../winhttp.h"

//----- (00000001408395E0) ----------------------------------------------------
void __fastcall sub_1408395E0(__int64 a1, _QWORD* a2)
{
	int v2; // r8d
	__int64 v5; // rbx
	float v6; // xmm6_4
	unsigned __int64 v7; // rbp
	unsigned int v8; // edi
	__int64 v9; // rcx
	__int64 v10; // rcx
	float v11; // xmm1_4
	float v12; // xmm0_4
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64* v15; // rsi
	__int64 v16; // rax
	__int64 v17; // rax
	unsigned __int32 v18; // xmm0_4
	__int16 v19; // dx
	__int64 v20; // rcx
	float v21; // [rsp+68h] [rbp+10h] BYREF
	int v22; // [rsp+70h] [rbp+18h] BYREF

	v2 = *((_DWORD*)a2 + 8);
	if ((unsigned int)(v2 - 1) <= 1)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 408i64))(*a2);
	}
	else if (v2)
	{
		if (v2 == 4)
		{
			v18 = sub_1408364E0(a1, (__int64)a2, a2[3], 0).m128_u32[0];
			v19 = *((_WORD*)a2 + 4);
			v20 = *a2;
			v21 = *(float*)&v18;
			sub_1408600D0(v20, v19, (int*)&v21);
		}
		else
		{
			sub_140865550(*a2);
		}
	}
	else
	{
		v5 = a2[5];
		v6 = 0.0;
		v7 = a2[3];
		if (v5 != a2[6])
		{
			while (1)
			{
				v8 = *(_DWORD*)(v5 + 4);
				v9 = *(_QWORD*)(a1 + 8i64 * (v8 % 0xC1));
				if (!v9)
					break;
				while (*(_DWORD*)v9 != v8)
				{
					v9 = *(_QWORD*)(v9 + 8);
					if (!v9)
						goto LABEL_7;
				}
				v15 = (__int64*)(v9 + 24);
				v16 = sub_140834F40((__int64*)(v9 + 24), v7);
				if (v16)
				{
					v11 = *(float*)(v16 + 8);
				}
				else
				{
					if (!v7)
						break;
					v17 = sub_140834F40(v15, 0i64);
					if (!v17)
						break;
					v11 = *(float*)(v17 + 8);
				}
			LABEL_11:
				v12 = sub_140835CA0((_DWORD*)(v5 + 8), v11, 0, &v22);
				v5 += 24i64;
				v6 = v6 + v12;
				if (v5 == a2[6])
					goto LABEL_12;
			}
		LABEL_7:
			v10 = *(_QWORD*)(a1 + 8i64 * (v8 % 0xC1));
			if (v10)
			{
				while (*(_DWORD*)v10 != v8)
				{
					v10 = *(_QWORD*)(v10 + 8);
					if (!v10)
						goto LABEL_10;
				}
				v11 = *(float*)(v10 + 16);
			}
			else
			{
			LABEL_10:
				v11 = 0.0;
			}
			goto LABEL_11;
		}
	LABEL_12:
		v13 = *a2;
		v14 = *((unsigned __int16*)a2 + 4);
		v21 = v6;
		(*(void(__fastcall**)(__int64, __int64, float*, __int64))(*(_QWORD*)v13 + 8i64))(v13, v14, &v21, 4i64);
	}
}
// 14083970B: conditional instruction was optimized away because rcx.8!=0
// 140839758: conditional instruction was optimized away because rcx.8!=0

