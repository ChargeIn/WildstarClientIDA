#include "../winhttp.h"

//----- (00000001403AD100) ----------------------------------------------------
__int64 __fastcall sub_1403AD100(__int64 a1, _QWORD* a2, __int64 a3, int* a4, int a5, int a6)
{
	__int64 v7; // r12
	_DWORD* v10; // rax
	int v11; // edx
	__int64 result; // rax
	unsigned int v13; // ecx
	_DWORD* v14; // rax
	__int64 v15; // rax
	_DWORD* v16; // rax
	__int64 v17; // rbx
	unsigned int v18; // r13d
	int v19; // ecx
	__int64 v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rcx
	unsigned int v23; // ebx
	unsigned int v24; // eax
	unsigned int v25; // ebp
	int v26; // r12d
	_DWORD* v27; // rdi
	int v28; // edx
	int v29; // ecx
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // rcx
	unsigned int v33; // ebx
	unsigned int v34; // eax
	int v35; // ebp
	_DWORD* v36; // rdi
	int v37; // edx
	int v38; // edx
	int* v39; // rax
	char v41; // [rsp+68h] [rbp+10h] BYREF

	v7 = a1;
	v10 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, char*))(*a2 + 32i64))(a2, &v41);
	v11 = *a4;
	if (*v10 == *a4 && v10[1] == a4[1])
		return 1i64;
	if (v11 >= 300)
		return 1i64;
	v13 = a4[1];
	if (v13 == -1 || !v11 && v13 >= 0x1F)
		return 1i64;
	if (a3)
	{
		v14 = (_DWORD*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a3 + 32i64))(a3, &v41);
		if (*v14 != *a4 || v14[1] != a4[1])
			return 1i64;
	}
	v15 = *(_QWORD*)(v7 + 25744);
	if (v15
		&& *(_DWORD*)(v15 + 684)
		&& (!*(_DWORD*)(*(__int64(__fastcall**)(_QWORD*, char*))(*a2 + 32i64))(a2, &v41) || !*a4))
	{
		return 63i64;
	}
	if (*(_DWORD*)(*(__int64(__fastcall**)(_QWORD*, char*))(*a2 + 32i64))(a2, &v41) == 2
		|| (v16 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, char*))(*a2 + 32i64))(a2, &v41), !*v16)
		&& (unsigned int)(v16[1] - 21) <= 9
		|| *a4 == 2
		|| !*a4 && (unsigned int)(a4[1] - 21) <= 9)
	{
		if (!a5)
			return 2i64;
	}
	if ((*(_DWORD*)(*(__int64(__fastcall**)(_QWORD*, char*))(*a2 + 32i64))(a2, &v41) == 10 || *a4 == 10) && !a6)
		return 2i64;
	if (*a4 == 1 && (unsigned int)a4[1] >= *(_DWORD*)(v7 + 188))
		return 1i64;
	v17 = *(_QWORD*)(*(_QWORD*)(v7 + 120) + 5640i64);
	if (!v17)
	{
	LABEL_35:
		v18 = 8;
		if ((*a4 & 0xFFFFFFF6) == 0 && *a4 != 1)
		{
			v19 = *(_DWORD*)(*(__int64(__fastcall**)(_QWORD*, char*))(*a2 + 32i64))(a2, &v41);
			if ((v19 & 0xFFFFFFF6) != 0 || v19 == 1)
			{
				v20 = a2[8];
				if ((*(_BYTE*)(v20 + 336) & 2) != 0
					&& (!a3 || **(_DWORD**)(a3 + 64) != *(_DWORD*)v20)
					&& (unsigned int)sub_1403AC840(v7 + 160, 1, *(_DWORD*)v20))
				{
					return 30i64;
				}
				v21 = a2[9];
				if (v21)
					v22 = a2[9];
				else
					v22 = a2[8] + 8i64;
				v23 = 0;
				if (!v21)
					v21 = a2[8] + 8i64;
				v24 = *(_DWORD*)(v21 + 304);
				v25 = 8;
				if (v24 < 8)
					v25 = v24;
				if (v25)
				{
					v26 = *(unsigned __int8*)(v22 + 308);
					v27 = (_DWORD*)a2 + 47;
					while (1)
					{
						if (_bittest(&v26, v23))
						{
							v28 = v23 >= 8 ? 0 : *v27;
							if ((!a3 || !(unsigned int)sub_14056A260(a3, v28)) && (unsigned int)sub_1403AF9E0(a1 + 160, v28))
								return 30i64;
						}
						++v23;
						++v27;
						if (v23 >= v25)
						{
							v7 = a1;
							break;
						}
					}
				}
			}
		}
		result = sub_1403AECD0(v7, (__int64)a2, a3, a4);
		if ((_DWORD)result || !a3)
			return result;
		if ((*a4 & 0xFFFFFFF6) == 0 && *a4 != 1)
			goto LABEL_87;
		v29 = *(_DWORD*)(*(__int64(__fastcall**)(_QWORD*, char*))(*a2 + 32i64))(a2, &v41);
		if ((v29 & 0xFFFFFFF6) != 0 || v29 == 1)
			goto LABEL_87;
		v30 = *(_QWORD*)(a3 + 64);
		if ((*(_BYTE*)(v30 + 336) & 2) == 0
			|| *(_DWORD*)v30 == *(_DWORD*)a2[8]
			|| !(unsigned int)sub_1403AC840(v7 + 160, 1, *(_DWORD*)v30))
		{
			v31 = *(_QWORD*)(a3 + 72);
			if (v31)
				v32 = *(_QWORD*)(a3 + 72);
			else
				v32 = *(_QWORD*)(a3 + 64) + 8i64;
			v33 = 0;
			if (!v31)
				v31 = *(_QWORD*)(a3 + 64) + 8i64;
			v34 = *(_DWORD*)(v31 + 304);
			if (v34 < 8)
				v18 = v34;
			if (v18)
			{
				v35 = *(unsigned __int8*)(v32 + 308);
				v36 = (_DWORD*)(a3 + 188);
				do
				{
					if (_bittest(&v35, v33))
					{
						v37 = v33 >= 8 ? 0 : *v36;
						if (!(unsigned int)sub_14056A260((__int64)a2, v37) && (unsigned int)sub_1403AF9E0(v7 + 160, v38))
							return 30i64;
					}
					++v33;
					++v36;
				} while (v33 < v18);
			}
		LABEL_87:
			v39 = (int*)(*(__int64(__fastcall**)(_QWORD*, char*))(*a2 + 32i64))(a2, &v41);
			return sub_1403AECD0(v7, a3, (__int64)a2, v39);
		}
		return 30i64;
	}
	while (*(_DWORD*)(v17 + 4) != 3
		|| *(_DWORD*)(v17 + 12) != 777
		|| !*(_QWORD*)(v17 + 32)
		|| !(unsigned int)sub_140195F70(v17 + 16))
	{
		v17 = *(_QWORD*)(v17 + 136);
		if (!v17)
			goto LABEL_35;
	}
	return 2i64;
}
// 1403AD3CE: variable 'v28' is possibly undefined
// 1403AD4E4: variable 'v38' is possibly undefined

