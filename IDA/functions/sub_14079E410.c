#include "../winhttp.h"

//----- (000000014079E410) ----------------------------------------------------
void __fastcall sub_14079E410(int* a1, int a2, int a3, int a4)
{
	float v4; // r11d
	float v7; // xmm0_4
	float v8; // xmm1_4
	__int64 v9; // rbx
	unsigned __int64 v10; // rsi
	__int64 v11; // rax
	unsigned __int64 v12; // rdx
	int v13; // ecx
	int v14; // ecx
	float v15; // xmm1_4
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	float v19; // xmm1_4
	int v20; // ecx
	int v21; // ecx
	int v22; // ecx
	float v23; // xmm1_4
	int v24; // ecx
	int v25; // ecx
	int v26; // ecx
	float v27; // xmm1_4
	unsigned __int64 v28; // rbx
	__int64 v29; // rdx
	int v30; // eax
	int v31; // eax
	float v32; // xmm1_4

	v4 = *(float*)a1;
	if (*a1 == 2)
	{
		v7 = 0.0;
	}
	else
	{
		v7 = 1.0;
		if (LODWORD(v4) != 3)
			return;
	}
	if (!a2 && !a3 && !a4)
	{
		v8 = *((float*)a1 + 1);
		if (LODWORD(v4) == 3)
			v7 = v7 * v8;
		else
			v7 = v7 + v8;
	}
	v9 = *((_QWORD*)a1 + 3);
	v10 = 0i64;
	if (v9 >= 4)
	{
		v11 = *((_QWORD*)a1 + 2) + 8i64;
		v12 = ((unsigned __int64)(v9 - 4) >> 2) + 1;
		v10 = 4 * v12;
		do
		{
			if ((!a2 || (v13 = *(_DWORD*)(v11 - 8)) == 0 || v13 == a2)
				&& (!a3 || (v14 = *(_DWORD*)(v11 - 4)) == 0 || v14 == a3)
				&& (!a4 || !*(_DWORD*)v11 || *(_DWORD*)v11 == a4))
			{
				v15 = *(float*)(v11 + 4);
				if (LODWORD(v4) == 3)
					v7 = v7 * v15;
				else
					v7 = v7 + v15;
			}
			if ((!a2 || (v16 = *(_DWORD*)(v11 + 12)) == 0 || v16 == a2)
				&& (!a3 || (v17 = *(_DWORD*)(v11 + 16)) == 0 || v17 == a3)
				&& (!a4 || (v18 = *(_DWORD*)(v11 + 20)) == 0 || v18 == a4))
			{
				v19 = *(float*)(v11 + 24);
				if (LODWORD(v4) == 3)
					v7 = v7 * v19;
				else
					v7 = v7 + v19;
			}
			if ((!a2 || (v20 = *(_DWORD*)(v11 + 32)) == 0 || v20 == a2)
				&& (!a3 || (v21 = *(_DWORD*)(v11 + 36)) == 0 || v21 == a3)
				&& (!a4 || (v22 = *(_DWORD*)(v11 + 40)) == 0 || v22 == a4))
			{
				v23 = *(float*)(v11 + 44);
				if (LODWORD(v4) == 3)
					v7 = v7 * v23;
				else
					v7 = v7 + v23;
			}
			if ((!a2 || (v24 = *(_DWORD*)(v11 + 52)) == 0 || v24 == a2)
				&& (!a3 || (v25 = *(_DWORD*)(v11 + 56)) == 0 || v25 == a3)
				&& (!a4 || (v26 = *(_DWORD*)(v11 + 60)) == 0 || v26 == a4))
			{
				v27 = *(float*)(v11 + 64);
				if (LODWORD(v4) == 3)
					v7 = v7 * v27;
				else
					v7 = v7 + v27;
			}
			v11 += 80i64;
			--v12;
		} while (v12);
	}
	if (v10 < v9)
	{
		v28 = v9 - v10;
		v29 = *((_QWORD*)a1 + 2) + 20 * v10;
		do
		{
			if ((!a2 || !*(_DWORD*)v29 || *(_DWORD*)v29 == a2)
				&& (!a3 || (v30 = *(_DWORD*)(v29 + 4)) == 0 || v30 == a3)
				&& (!a4 || (v31 = *(_DWORD*)(v29 + 8)) == 0 || v31 == a4))
			{
				v32 = *(float*)(v29 + 12);
				if (LODWORD(v4) == 3)
					v7 = v7 * v32;
				else
					v7 = v7 + v32;
			}
			v29 += 20i64;
			--v28;
		} while (v28);
	}
}

