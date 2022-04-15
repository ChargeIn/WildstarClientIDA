#include "../winhttp.h"

//----- (00000001407AC430) ----------------------------------------------------
__int64 __fastcall sub_1407AC430(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	unsigned int v4; // ebp
	unsigned __int64 v10; // r10
	int v11; // r9d
	__int64 v12; // r11
	__int64 v13; // rax
	unsigned __int16* v14; // rbx
	__int64 v15; // r8
	unsigned __int16* v16; // rax
	__int64 v17; // r8
	int v18; // ecx
	int v19; // edx
	__int64 v20; // rbx
	__int64 v21; // rcx
	int v22; // eax
	unsigned int v23; // ecx
	__int64 v24; // rdx
	int v25; // esi
	int v26; // eax

	v4 = 0;
	if (!*(_DWORD*)(a2 + 144))
		return 0i64;
	v10 = *(_QWORD*)(a1 + 144);
	v11 = 0;
	if (v10)
	{
		v12 = *(_QWORD*)(a1 + 136);
		v13 = 0i64;
		v14 = (unsigned __int16*)(a2 + 68);
		while (1)
		{
			v15 = *(_QWORD*)(v12 + 8 * v13);
			v16 = v14;
			v17 = v15 + 68 - (_QWORD)v14;
			do
			{
				v18 = *(unsigned __int16*)((char*)v16 + v17);
				v19 = *v16 - v18;
				if (v19)
					break;
				++v16;
			} while (v18);
			if (!v19)
				break;
			v13 = (unsigned int)++v11;
			if ((unsigned int)v11 >= v10)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v11 = -1;
	}
	v20 = 8i64 * v11;
	v21 = *(_QWORD*)(*(_QWORD*)(a1 + 136) + v20);
	if (*(_DWORD*)(v21 + 380))
	{
		*(_DWORD*)(v21 + 380) = 0;
		v22 = sub_14018CDF0();
		v23 = *(_DWORD*)(a1 + 436352);
		v24 = *(_QWORD*)(v20 + *(_QWORD*)(a1 + 136));
		v25 = v22;
		if (*(_DWORD*)(v24 + 384) > v23)
			v23 = *(_DWORD*)(v24 + 384);
		v26 = v22 - v23;
		if (v25 == v23)
			v26 = 1;
		*(_DWORD*)(v24 + 388) += v26;
		if (a4
			&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 352i64))(
				a1,
				**(unsigned int**)(v20 + *(_QWORD*)(a1 + 136))))
		{
			if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)a1 + 136i64))(
				a1,
				a2,
				a3,
				0i64))
			{
				v4 = 1;
			}
			sub_1400035B0();
		}
	}
	return v4;
}

