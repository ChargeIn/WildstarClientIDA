#include "../winhttp.h"

//----- (000000014040EC60) ----------------------------------------------------
__int64 __fastcall sub_14040EC60(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned __int8* v3; // r14
	__int64 v7; // rbx
	__int64 v8; // rax
	char* v9; // r10
	char* v10; // r11
	_DWORD* v11; // rdx
	int* v12; // rcx
	__int64 v13; // r9
	int v14; // r8d
	int v15; // eax
	unsigned int v16; // esi
	__int64* v17; // rdi
	__int64 v18; // r15
	int v19; // edx
	__int64 v20; // rax
	__int64 v21; // rdx
	__int64 v22; // r9
	__int64 v23; // rbx
	unsigned __int8 v24; // al
	__int64 v25; // r8
	int v26; // r9d
	unsigned int v27; // ebx
	__int64 v28; // rax
	int v29; // ecx
	int v30; // [rsp+20h] [rbp-69h]
	int v31; // [rsp+28h] [rbp-61h]
	unsigned int v32; // [rsp+40h] [rbp-49h] BYREF
	int v33; // [rsp+44h] [rbp-45h] BYREF
	__int64 v34[2]; // [rsp+48h] [rbp-41h] BYREF
	int v35; // [rsp+58h] [rbp-31h]
	__int64 v36[2]; // [rsp+60h] [rbp-29h] BYREF
	int v37; // [rsp+70h] [rbp-19h]
	__int64 v38[5]; // [rsp+78h] [rbp-11h] BYREF

	v3 = (unsigned __int8*)a3;
	if (!a3)
		return 2147500037i64;
	*(_QWORD*)a3 = 0i64;
	*(_DWORD*)(a3 + 8) = 1;
	v7 = sub_14020A7E0(*(_DWORD*)(a2 + 360));
	v8 = sub_14020AC20(*(_DWORD*)(a2 + 364));
	if (v7 && v8)
	{
		v9 = (char*)v36 - v8;
		v34[0] = 0i64;
		v10 = (char*)v34 - v8;
		v34[1] = 0i64;
		v35 = 0;
		v36[0] = 0i64;
		v36[1] = 0i64;
		v37 = 0;
		memset(v38, 0, sizeof(v38));
		v11 = (_DWORD*)v38 + 1;
		v12 = (int*)(v8 + 24);
		v13 = 5i64;
		do
		{
			v14 = *(v12 - 5);
			v15 = *v12;
			*(v11 - 1) = v14;
			*v11 = v15;
			if (v14 == 2)
			{
				*(int*)((char*)v12 + (_QWORD)v10 - 24) = v15;
			}
			else if (v14 == 4)
			{
				*(int*)((char*)v12 + (_QWORD)v9 - 24) = v15;
			}
			v11 += 2;
			++v12;
			--v13;
		} while (v13);
		v16 = 0;
		v17 = v38;
		v18 = 0i64;
		while (1)
		{
			v19 = *(_DWORD*)((char*)v34 + v18);
			if (v19)
			{
				v20 = sub_1400B5F60(a1, v19);
				v23 = v20;
				if (!v20)
					return 2147500037i64;
				v24 = sub_14040BB10(v20, v21, v38, v22, *(_DWORD*)(a2 + 384));
				if (!v24 || (unsigned __int64)v24 > *(_QWORD*)(v23 + 16))
					return 2147500037i64;
				v25 = *(_QWORD*)(*(_QWORD*)(v23 + 8) + 8i64 * ((unsigned int)v24 - 1));
				*(_DWORD*)v17 = *(_DWORD*)(v25 + 12);
				*((_DWORD*)v17 + 1) = *(_DWORD*)(v25 + 16);
				*v3 = v24;
			}
			else
			{
				v26 = *(_DWORD*)((char*)v36 + v18);
				if (v26)
				{
					if (!(unsigned int)sub_14040E9E0(a1, &v32, &v33, v26, v30, v31, v38))
						return 2147500037i64;
					v27 = v32;
					v28 = sub_1402479C0(v32);
					if (!v28)
						return 2147500037i64;
					v29 = *(_DWORD*)(v28 + 36);
					if ((v29 & 4) == 0 || (v29 & 0x200) == 0 || (*(_BYTE*)(v28 + 48) & 0x7F) == 0)
						return 2147500037i64;
					*(_DWORD*)v17 = 1;
					*((_DWORD*)v17 + 1) = v27;
					*v3 = v27 + 1;
				}
			}
			++v16;
			v18 += 4i64;
			++v17;
			++v3;
			if (v16 >= 5)
				return 0i64;
		}
	}
	return 0i64;
}
// 14040EDC5: conditional instruction was optimized away because al.1!=0
// 14040EDEF: conditional instruction was optimized away because esi.4<5u
// 14040EE5E: conditional instruction was optimized away because esi.4<5u
// 14040EDAF: variable 'v21' is possibly undefined
// 14040EDAF: variable 'v22' is possibly undefined
// 14040EE14: variable 'v30' is possibly undefined
// 14040EE14: variable 'v31' is possibly undefined

