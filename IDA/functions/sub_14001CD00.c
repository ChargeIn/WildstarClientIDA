#include "../winhttp.h"

//----- (000000014001CD00) ----------------------------------------------------
__int64 __fastcall sub_14001CD00(__int64 a1)
{
	unsigned int v1; // r14d
	BOOL v3; // ebx
	int v4; // ecx
	int v5; // ebx
	unsigned int v7; // r8d
	int v8; // ecx
	__int64 v9; // rax
	unsigned int v10; // r12d
	__int64 v11; // r15
	int* v12; // rbp
	__int64 v13; // rbx
	int* v14; // rax
	int* v15; // rdi
	unsigned __int64 v16; // rbx
	unsigned int v17; // ebx
	_DWORD* v18; // rax

	v1 = 0;
	v3 = (unsigned int)(*(_DWORD*)(a1 + 136) - 3) <= 1;
	sub_140002E60(a1 + 72);
	v4 = *(_DWORD*)(a1 + 136);
	if ((unsigned int)(v4 - 5) > 1 || *(_DWORD*)(a1 + 56))
	{
		if (*(_DWORD*)(a1 + 592) == 6)
			return 0i64;
		v7 = *(_DWORD*)(a1 + 600);
		if (v7 == -1)
			return 0i64;
		v8 = *(_DWORD*)(a1 + 96);
		if (v8 > 0)
		{
			v9 = *(_QWORD*)(a1 + 168);
			if (!v9)
			{
				v10 = 1000 * v8 / 30;
				goto LABEL_15;
			}
			if (*(int*)(v9 + 20) > 0)
			{
				v10 = 1000 * v8 / *(_DWORD*)(v9 + 20);
				goto LABEL_15;
			}
		}
		v10 = 0;
	LABEL_15:
		if (v10 > v7)
		{
			do
			{
				v11 = *(_QWORD*)(a1 + 568);
				v12 = (int*)&unk_1409D091C;
				if (*(_QWORD*)(a1 + 608))
					v12 = *(int**)(a1 + 608);
				if (v12)
				{
					v13 = 0i64;
					if (*(_WORD*)v12)
					{
						do
							++v13;
						while (*((_WORD*)v12 + v13));
					}
					v14 = sub_14018B280(2 * v13 + 18, 0);
					if (v14)
					{
						*(_QWORD*)v14 = off_140B55060;
						*((_QWORD*)v14 + 1) = v13;
					}
					else
					{
						v14 = 0i64;
					}
					v15 = v14 + 4;
					v16 = 2 * v13;
					sub_1407DB590(v14 + 4, v12, v16);
					*(_WORD*)((char*)v15 + v16) = 0;
					*(_QWORD*)(a1 + 568) = v15;
				}
				else
				{
					*(_QWORD*)(a1 + 568) = 0i64;
				}
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				v17 = ++ * (_DWORD*)(a1 + 596);
				if (qword_140C63848)
				{
					v18 = (_DWORD*)qword_140C63848(off_140A694F0, v17, qword_140C63858);
				}
				else
				{
					if (dword_140C64024 || (int)sub_1401EDA80() < 0)
					{
					LABEL_36:
						*(_DWORD*)(a1 + 600) = -1;
						*(_QWORD*)(a1 + 608) = 0i64;
						continue;
					}
					v18 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64308 + 32i64))(
						qword_140C64308,
						v17);
				}
				if (!v18 || v18[1] != *(_DWORD*)(a1 + 592))
					goto LABEL_36;
				*(_DWORD*)(a1 + 600) = v18[2];
				*(_QWORD*)(a1 + 608) = sub_14034BDD0((__int64)v18, v18[3]);
			} while (v10 > *(_DWORD*)(a1 + 600));
		}
		return 0i64;
	}
	if (!v3 || (v5 = 1, v4 != 6))
		v5 = 0;
	sub_14001C830(a1);
	LOBYTE(v1) = v5 == 0;
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 120i64))(a1, v1);
	return 0i64;
}
// 14001CDB4: conditional instruction was optimized away because rax.8!=0
// 140A694F0: using guessed type wchar_t *off_140A694F0[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64024: using guessed type int dword_140C64024;
// 140C64308: using guessed type __int64 qword_140C64308;

