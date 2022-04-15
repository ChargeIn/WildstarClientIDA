#include "../winhttp.h"

//----- (00000001401AB5B0) ----------------------------------------------------
__int64 __fastcall sub_1401AB5B0(__int64* a1)
{
	int v1; // r15d
	unsigned int v3; // r8d
	__int64 v4; // rax
	unsigned __int8* v5; // r9
	unsigned __int8* v6; // rax
	int v7; // edx
	int v8; // ecx
	unsigned __int8* v9; // rax
	unsigned __int8* v10; // r9
	int v11; // ecx
	int v12; // ecx
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	unsigned int v19; // ecx
	unsigned __int8 v20; // dl
	bool v21; // zf
	int v22; // eax
	BOOL v23; // ecx
	__int64 v24; // rdx
	int v25; // eax
	unsigned __int8* v26; // rdx
	__int64 v27; // rbp
	__int64 v28; // rsi
	unsigned int v29; // r14d
	int v31; // eax
	unsigned __int8* v32; // rdx

	v1 = 0;
	while (1)
	{
		v3 = *((_DWORD*)a1 + 39);
		if (v3 <= 0x102)
		{
			sub_1401AA730((__int64)a1);
			v3 = *((_DWORD*)a1 + 39);
			if (!v3)
				break;
		}
		*((_DWORD*)a1 + 34) = 0;
		if (v3 >= 3)
		{
			v4 = *((unsigned int*)a1 + 37);
			if ((_DWORD)v4)
			{
				v5 = (unsigned __int8*)(v4 + a1[10]);
				v6 = v5 - 1;
				v7 = *(v5 - 1);
				if (v7 == *v5 && v7 == v6[2])
				{
					v8 = v6[3];
					v9 = v6 + 3;
					if (v7 == v8)
					{
						v10 = v5 + 258;
						do
						{
							v11 = *++v9;
							if (v7 != v11)
								break;
							v12 = *++v9;
							if (v7 != v12)
								break;
							v13 = *++v9;
							if (v7 != v13)
								break;
							v14 = *++v9;
							if (v7 != v14)
								break;
							v15 = *++v9;
							if (v7 != v15)
								break;
							v16 = *++v9;
							if (v7 != v16)
								break;
							v17 = *++v9;
							if (v7 != v17)
								break;
							v18 = *++v9;
							if (v7 != v18)
								break;
						} while (v9 < v10);
						v19 = (_DWORD)v9 - (_DWORD)v10 + 258;
						*((_DWORD*)a1 + 34) = v19;
						if (v19 > v3)
							*((_DWORD*)a1 + 34) = v3;
					}
				}
			}
		}
		if (*((_DWORD*)a1 + 34) < 3u)
		{
			v24 = *(unsigned __int8*)(*((unsigned int*)a1 + 37) + a1[10]);
			*(_WORD*)(a1[735] + 2i64 * *((unsigned int*)a1 + 1469)) = 0;
			*(_BYTE*)((unsigned int)(*((_DWORD*)a1 + 1469))++ + a1[733]) = v24;
			++* ((_WORD*)a1 + 2 * v24 + 94);
			v23 = *((_DWORD*)a1 + 1469) == *((_DWORD*)a1 + 1468) - 1;
			--* ((_DWORD*)a1 + 39);
			++* ((_DWORD*)a1 + 37);
		}
		else
		{
			v20 = *((_BYTE*)a1 + 136);
			*(_WORD*)(a1[735] + 2i64 * *((unsigned int*)a1 + 1469)) = 1;
			v20 -= 3;
			*(_BYTE*)((unsigned int)(*((_DWORD*)a1 + 1469))++ + a1[733]) = v20;
			++* ((_WORD*)a1 + 2 * byte_140A47F70[v20] + 608);
			++* ((_WORD*)a1 + 1240);
			v21 = *((_DWORD*)a1 + 1469) == *((_DWORD*)a1 + 1468) - 1;
			v22 = *((_DWORD*)a1 + 34);
			*((_DWORD*)a1 + 34) = 0;
			v23 = v21;
			*((_DWORD*)a1 + 39) -= v22;
			*((_DWORD*)a1 + 37) += v22;
		}
		if (v23)
		{
			v25 = *((_DWORD*)a1 + 33);
			if (v25 < 0)
				v26 = 0i64;
			else
				v26 = (unsigned __int8*)(a1[10] + (unsigned int)v25);
			sub_1401CCB30((__int64)a1, v26, *((_DWORD*)a1 + 37) - v25, 0);
			v27 = *a1;
			*((_DWORD*)a1 + 33) = *((_DWORD*)a1 + 37);
			v28 = *(_QWORD*)(v27 + 40);
			sub_1401CD200(v28);
			v29 = *(_DWORD*)(v28 + 40);
			if (v29 > *(_DWORD*)(v27 + 24))
				v29 = *(_DWORD*)(v27 + 24);
			if (v29)
			{
				sub_1407DB590(*(int**)(v27 + 16), *(int**)(v28 + 32), v29);
				*(_QWORD*)(v27 + 16) += v29;
				*(_QWORD*)(v28 + 32) += v29;
				*(_DWORD*)(v27 + 28) += v29;
				*(_DWORD*)(v27 + 24) -= v29;
				v21 = *(_DWORD*)(v28 + 40) == v29;
				*(_DWORD*)(v28 + 40) -= v29;
				if (v21)
					*(_QWORD*)(v28 + 32) = *(_QWORD*)(v28 + 16);
			}
			if (!*(_DWORD*)(*a1 + 24))
				return 0i64;
		}
	}
	v31 = *((_DWORD*)a1 + 33);
	*((_DWORD*)a1 + 1475) = 0;
	if (v31 < 0)
		v32 = 0i64;
	else
		v32 = (unsigned __int8*)(a1[10] + (unsigned int)v31);
	sub_1401CCB30((__int64)a1, v32, *((_DWORD*)a1 + 37) - v31, 1);
	*((_DWORD*)a1 + 33) = *((_DWORD*)a1 + 37);
	sub_1401A9A10(*a1);
	LOBYTE(v1) = *(_DWORD*)(*a1 + 24) != 0;
	return (unsigned int)(v1 + 2);
}
// 140A47F70: using guessed type unsigned __int8 byte_140A47F70[256];

