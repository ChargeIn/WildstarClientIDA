#include "../winhttp.h"

//----- (00000001403B3BB0) ----------------------------------------------------
__int64 __fastcall sub_1403B3BB0(__int64 a1, __int64 a2, int a3)
{
	unsigned int v3; // eax
	int v4; // ebx
	int v7; // edi
	__int64* v8; // r9
	__int64 v9; // r10
	__int64 v10; // rdx
	int v11; // ecx
	unsigned int v12; // eax
	int v13; // r9d
	__int64* v14; // rdx
	__int64 v15; // r8
	__int64 v16; // rcx
	int v17; // eax
	int v18; // ecx
	unsigned int v19; // eax
	int v20; // r10d
	int v21; // r9d
	__int64* v22; // rdx
	__int64 v23; // r8
	__int64 v24; // rcx
	int v25; // eax
	int v26; // ecx
	unsigned int v27; // eax
	int v28; // r10d
	__int64* v29; // r8
	__int64 v30; // r9
	__int64 v31; // rcx
	int v32; // ecx
	int v33; // edx

	v3 = *(_DWORD*)(a1 + 4);
	v4 = 0;
	v7 = 0;
	if (v3)
	{
		v8 = *(__int64**)(a1 + 16);
		v9 = v3;
		do
		{
			v10 = *v8;
			if (*v8 && *(_DWORD*)(*(_QWORD*)(v10 + 64) + 320i64) == a3)
			{
				v11 = 1;
				if (*(_DWORD*)(v10 + 120))
					v11 = *(_DWORD*)(v10 + 120);
				v7 += v11;
			}
			++v8;
			--v9;
		} while (v9);
	}
	v12 = *(_DWORD*)(a1 + 28);
	v13 = 0;
	if (v12)
	{
		v14 = *(__int64**)(a1 + 40);
		v15 = v12;
		do
		{
			v16 = *v14;
			if (*v14 && *(_DWORD*)(*(_QWORD*)(v16 + 64) + 320i64) == a3)
			{
				v17 = *(_DWORD*)(v16 + 120);
				v18 = 1;
				if (v17)
					v18 = v17;
				v13 += v18;
			}
			++v14;
			--v15;
		} while (v15);
	}
	v19 = *(_DWORD*)(a1 + 124);
	v20 = v13 + v7;
	v21 = 0;
	if (v19)
	{
		v22 = *(__int64**)(a1 + 136);
		v23 = v19;
		do
		{
			v24 = *v22;
			if (*v22 && *(_DWORD*)(*(_QWORD*)(v24 + 64) + 320i64) == a3)
			{
				v25 = *(_DWORD*)(v24 + 120);
				v26 = 1;
				if (v25)
					v26 = v25;
				v21 += v26;
			}
			++v22;
			--v23;
		} while (v23);
	}
	v27 = *(_DWORD*)(a1 + 148);
	v28 = v21 + v20;
	if (v27)
	{
		v29 = *(__int64**)(a1 + 160);
		v30 = v27;
		do
		{
			v31 = *v29;
			if (*v29 && *(_DWORD*)(*(_QWORD*)(v31 + 64) + 320i64) == a3)
			{
				v32 = *(_DWORD*)(v31 + 120);
				v33 = 1;
				if (v32)
					v33 = v32;
				v4 += v33;
			}
			++v29;
			--v30;
		} while (v30);
	}
	return (unsigned int)(v4 + v28);
}

