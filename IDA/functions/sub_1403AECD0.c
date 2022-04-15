#include "../winhttp.h"

//----- (00000001403AECD0) ----------------------------------------------------
__int64 __fastcall sub_1403AECD0(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
	__int64 v8; // r9
	__int64 v9; // rax
	_QWORD* v10; // rax
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // rcx
	_QWORD* v13; // rax
	__int64 v14; // rax
	unsigned int v15; // r8d
	__int64 result; // rax
	__int64 v17; // rcx
	unsigned __int8 v18; // al
	unsigned __int8 v19; // al
	__int64 v20; // rdx
	unsigned int v21; // ecx
	unsigned int v22; // r9d
	_QWORD* v23; // rax
	__int64 v24; // rax
	unsigned int v25; // edx
	__int64 v26; // rcx
	unsigned __int8 v27; // al
	unsigned __int8 v28; // al
	unsigned int v29; // r8d
	__int64 v30; // rdx
	unsigned int v31; // ecx
	_QWORD* v32; // rax
	int v33; // eax
	__int64 v34; // rax
	int v35; // [rsp+20h] [rbp-18h] BYREF
	__int64 v36; // [rsp+28h] [rbp-10h]

	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2);
	v9 = *(_QWORD*)(a1 + 26392);
	if (!v9 || (v10 = (_QWORD*)(v9 + 24)) == 0i64 || (v11 = v10[1], v12 = 0i64, !v11))
	{
	LABEL_7:
		if (!*(_DWORD*)(a2 + 32))
		{
			if ((unsigned int)(*(_DWORD*)(a2 + 36) - 17) <= 3 && (*a4 || (unsigned int)(a4[1] - 17) > 3))
			{
				if (a3)
				{
					v14 = *(_QWORD*)(a3 + 64);
					v15 = (*(_DWORD*)(v14 + 340) & 0x100) != 0 ? *(unsigned __int8*)(v14 + 416) : 0;
				}
				else
				{
					v15 = 0;
				}
				v17 = *(_QWORD*)(a2 + 64);
				v18 = (*(_DWORD*)(v17 + 340) & 0x100) != 0 ? *(_BYTE*)(v17 + 416) : 0;
				if (v18 > v15)
				{
					v19 = (*(_DWORD*)(v17 + 340) & 0x100) != 0 ? *(_BYTE*)(v17 + 416) : 0;
					v20 = *(unsigned int*)(a1 + 196);
					v21 = 0;
					v22 = v19 - v15;
					if (!(_DWORD)v20)
						return 35i64;
					v23 = *(_QWORD**)(a1 + 200);
					do
					{
						if (!*v23)
							++v21;
						++v23;
						--v20;
					} while (v20);
					if (v22 >= v21)
						return 35i64;
				}
			}
			if ((unsigned int)(*(_DWORD*)(a2 + 36) - 21) <= 9 && (*a4 || (unsigned int)(a4[1] - 21) > 9))
			{
				if (a3)
				{
					v24 = *(_QWORD*)(a3 + 64);
					v25 = (*(_DWORD*)(v24 + 340) & 0x100) != 0 ? *(unsigned __int8*)(v24 + 416) : 0;
				}
				else
				{
					v25 = 0;
				}
				v26 = *(_QWORD*)(a2 + 64);
				v27 = (*(_DWORD*)(v26 + 340) & 0x100) != 0 ? *(_BYTE*)(v26 + 416) : 0;
				if (v27 > v25)
				{
					if ((*(_DWORD*)(v26 + 340) & 0x100) != 0)
						v28 = *(_BYTE*)(v26 + 416);
					else
						v28 = 0;
					v29 = v28 - v25;
					if (!a3 && *a4 == 2)
						++v29;
					v30 = *(unsigned int*)(a1 + 220);
					v31 = 0;
					if ((_DWORD)v30)
					{
						v32 = *(_QWORD**)(a1 + 224);
						do
						{
							if (!*v32)
								++v31;
							++v32;
							--v30;
						} while (v30);
					}
					if (v29 > v31)
						return 35i64;
				}
			}
		}
		v33 = *a4;
		if ((*a4 & 0xFFFFFFF6) != 0)
		{
			if (v33 != 1)
			{
				if (v33 == 2)
				{
					if ((unsigned int)a4[1] > *(_DWORD*)(a1 + 220))
						return 37i64;
				}
				else if (v33 == 10 && (unsigned int)a4[1] > *(_DWORD*)(a1 + 244))
				{
					return 37i64;
				}
				goto LABEL_58;
			}
		}
		else if (v33 != 1)
		{
			result = sub_1403B11B0(a1, a2, a4);
			if ((_DWORD)result)
				return result;
		LABEL_58:
			if (((unsigned int)(*a4 - 100) > 0xC7 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 96i64))(a2))
				&& (*a4 != 10
					|| (v34 = *(_QWORD*)a2,
						v35 = 0,
						v36 = 0i64,
						(*(unsigned int(__fastcall**)(__int64, int*, __int64))(v34 + 104))(a2, &v35, 1i64))))
			{
				return 0i64;
			}
			else
			{
				return 32i64;
			}
		}
		if ((unsigned int)a4[1] > *(_DWORD*)(a1 + 196))
			return 37i64;
		goto LABEL_58;
	}
	v13 = (_QWORD*)(*v10 + 16i64);
	while (*v13 != v8)
	{
		++v12;
		v13 += 10;
		if (v12 >= v11)
			goto LABEL_7;
	}
	return 2i64;
}
// 1403AEE09: conditional instruction was optimized away because r10d.4==0

