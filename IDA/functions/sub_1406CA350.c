#include "../winhttp.h"

//----- (00000001406CA350) ----------------------------------------------------
__int64 __fastcall sub_1406CA350(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rbx
	__int64 v5; // r14
	_DWORD* v6; // rcx
	int v7; // eax
	_DWORD* v8; // r14
	int* v9; // rcx
	int* v10; // rbp
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rbx
	unsigned __int64 v13; // rbx
	int* v14; // rcx
	int* v15; // rbp
	unsigned __int64 v16; // r8
	unsigned __int64 v17; // rbx
	unsigned __int64 v18; // rbx
	__int64 v19; // rbp
	int* v20; // rcx
	int* v21; // r14
	unsigned __int64 v22; // r8
	unsigned __int64 v23; // rbx
	unsigned __int64 v24; // rbx
	__int64 v25; // rbp
	int* v26; // rcx
	int* v27; // r14
	unsigned __int64 v28; // r8
	unsigned __int64 v29; // rbx
	unsigned __int64 v30; // rbx
	__int64 v31; // rbp
	int* v32; // rcx
	int* v33; // r14
	unsigned __int64 v34; // r8
	unsigned __int64 v35; // rbx
	unsigned __int64 v36; // rbx
	unsigned int v37; // ebx
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rcx
	int v42; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1406CA0C0(a1);
	v3 = v2;
	if (v2)
	{
		v4 = 0i64;
		*(_DWORD*)(v2 + 1496) = 0;
		v5 = sub_140512120((__int64)a1, 2);
		if (v5)
		{
			v6 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v6 >= a1[2]
				|| v6 == dword_140A12138
				|| *(int*)(a1[3] + 40i64) <= 0
				|| (v7 = sub_140056D60(a1, 3u), v7 < 0))
			{
				if (aTsqbar[0])
				{
					do
						++v4;
					while (aTsqbar[v4]);
				}
				v14 = *(int**)(v3 + 1472);
				v15 = (int*)&aTsqbar[v4];
				v16 = (__int64)(*(_QWORD*)(v3 + 1480) - (_QWORD)v14) >> 1;
				v17 = (2 * v4) >> 1;
				if (v17 > v16)
				{
					sub_1407DB590(v14, (int*)L"TSQBar", 2 * v16);
					sub_14001C310(
						(_QWORD*)(v3 + 1464),
						(int*)&aTsqbar[(__int64)(*(_QWORD*)(v3 + 1480) - *(_QWORD*)(v3 + 1472)) >> 1],
						v15);
				}
				else
				{
					v18 = 2 * v17;
					sub_1407DB590(v14, (int*)L"TSQBar", v18);
					sub_14001C2B0(v3 + 1464, (int*)(v18 + *(_QWORD*)(v3 + 1472)), *(int**)(v3 + 1480));
				}
				*(_DWORD*)(v3 + 1496) = **(_DWORD**)(*(_QWORD*)v5 + 8i64);
			}
			else if ((unsigned int)v7 <= *(_DWORD*)(*(_QWORD*)v5 + 16i64))
			{
				v8 = *(_DWORD**)(*(_QWORD*)v5 + 8i64 * (unsigned int)v7 + 24);
				if (v8)
				{
					if (aTsqobar[0])
					{
						do
							++v4;
						while (aTsqobar[v4]);
					}
					v9 = *(int**)(v3 + 1472);
					v10 = (int*)&aTsqobar[v4];
					v11 = (__int64)(*(_QWORD*)(v3 + 1480) - (_QWORD)v9) >> 1;
					v12 = (2 * v4) >> 1;
					if (v12 > v11)
					{
						sub_1407DB590(v9, (int*)L"TSQOBar", 2 * v11);
						sub_14001C310(
							(_QWORD*)(v3 + 1464),
							(int*)&aTsqobar[(__int64)(*(_QWORD*)(v3 + 1480) - *(_QWORD*)(v3 + 1472)) >> 1],
							v10);
					}
					else
					{
						v13 = 2 * v12;
						sub_1407DB590(v9, (int*)L"TSQOBar", v13);
						sub_14001C2B0(v3 + 1464, (int*)(v13 + *(_QWORD*)(v3 + 1472)), *(int**)(v3 + 1480));
					}
					*(_DWORD*)(v3 + 1496) = *v8;
				}
			}
		}
		else
		{
			v19 = sub_1405278C0((__int64)a1, 2);
			if (v19)
			{
				if (aTsmbar[0])
				{
					do
						++v4;
					while (aTsmbar[v4]);
				}
				v20 = *(int**)(v3 + 1472);
				v21 = (int*)&aTsmbar[v4];
				v22 = (__int64)(*(_QWORD*)(v3 + 1480) - (_QWORD)v20) >> 1;
				v23 = (2 * v4) >> 1;
				if (v23 > v22)
				{
					sub_1407DB590(v20, (int*)L"TSMBar", 2 * v22);
					sub_14001C310(
						(_QWORD*)(v3 + 1464),
						(int*)&aTsmbar[(__int64)(*(_QWORD*)(v3 + 1480) - *(_QWORD*)(v3 + 1472)) >> 1],
						v21);
				}
				else
				{
					v24 = 2 * v23;
					sub_1407DB590(v20, (int*)L"TSMBar", v24);
					sub_14001C2B0(v3 + 1464, (int*)(v24 + *(_QWORD*)(v3 + 1472)), *(int**)(v3 + 1480));
				}
				*(_DWORD*)(v3 + 1496) = ***(_DWORD***)(v19 + 8);
			}
			else
			{
				v25 = sub_140527B60((__int64)a1, 2);
				if (v25)
				{
					if (aTspeobar[0])
					{
						do
							++v4;
						while (aTspeobar[v4]);
					}
					v26 = *(int**)(v3 + 1472);
					v27 = (int*)&aTspeobar[v4];
					v28 = (__int64)(*(_QWORD*)(v3 + 1480) - (_QWORD)v26) >> 1;
					v29 = (2 * v4) >> 1;
					if (v29 > v28)
					{
						sub_1407DB590(v26, (int*)L"TSPEOBar", 2 * v28);
						sub_14001C310(
							(_QWORD*)(v3 + 1464),
							(int*)&aTspeobar[(__int64)(*(_QWORD*)(v3 + 1480) - *(_QWORD*)(v3 + 1472)) >> 1],
							v27);
					}
					else
					{
						v30 = 2 * v29;
						sub_1407DB590(v26, (int*)L"TSPEOBar", v30);
						sub_14001C2B0(v3 + 1464, (int*)(v30 + *(_QWORD*)(v3 + 1472)), *(int**)(v3 + 1480));
					}
					*(_DWORD*)(v3 + 1496) = **(_DWORD**)(*(_QWORD*)(v25 + 8) + 8i64);
				}
				else
				{
					v31 = sub_140527CB0((__int64)a1, 2);
					if (v31)
					{
						if (aTscbar[0])
						{
							do
								++v4;
							while (aTscbar[v4]);
						}
						v32 = *(int**)(v3 + 1472);
						v33 = (int*)&aTscbar[v4];
						v34 = (__int64)(*(_QWORD*)(v3 + 1480) - (_QWORD)v32) >> 1;
						v35 = (2 * v4) >> 1;
						if (v35 > v34)
						{
							sub_1407DB590(v32, (int*)L"TSCBar", 2 * v34);
							sub_14001C310(
								(_QWORD*)(v3 + 1464),
								(int*)&aTscbar[(__int64)(*(_QWORD*)(v3 + 1480) - *(_QWORD*)(v3 + 1472)) >> 1],
								v33);
						}
						else
						{
							v36 = 2 * v35;
							sub_1407DB590(v32, (int*)L"TSCBar", v36);
							sub_14001C2B0(v3 + 1464, (int*)(v36 + *(_QWORD*)(v3 + 1472)), *(int**)(v3 + 1480));
						}
						*(_DWORD*)(v3 + 1496) = **(_DWORD**)(v31 + 8);
					}
					else
					{
						v37 = sub_140056E70(a1, 2);
						if (!sub_14002C740(v3 + 1464, L"ABar") || v37 >= 0xC)
						{
							v38 = qword_140C65898;
							*(_DWORD*)(v3 + 1496) = v37;
							v39 = *(_QWORD*)(v38 + 25744);
							if (v39)
							{
								if (*(_DWORD*)(v39 + 684))
								{
									v40 = *(_QWORD*)(v3 + 944);
									if (v40)
									{
										v42 = 0;
										(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v40 + 8i64))(v40, &v42);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B39778: using guessed type wchar_t aAbar[5];
// 140B399F0: using guessed type wchar_t aTscbar[7];
// 140B39A10: using guessed type wchar_t aTspeobar[9];
// 140B39A28: using guessed type wchar_t aTsmbar[7];
// 140B39A38: using guessed type wchar_t aTsqbar[7];
// 140B39A48: using guessed type wchar_t aTsqobar[8];
// 140C65898: using guessed type __int64 qword_140C65898;

