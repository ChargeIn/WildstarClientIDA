#include "../winhttp.h"

//----- (0000000140063490) ----------------------------------------------------
__int64 __fastcall sub_140063490(__int64 a1, __int64* a2, int a3)
{
	_QWORD* v6; // rcx
	__int64 v8; // rcx
	int v9; // edx
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	int v14; // eax
	_QWORD* v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rcx
	int v18; // edx
	_QWORD* v19; // rcx
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64 result; // rax
	int v23; // edx
	_QWORD* v24; // rcx
	__int64 v25; // rdx
	__int64 v26; // rcx
	int v27; // edx
	const char* v28; // rdx
	__int64 v29; // [rsp+30h] [rbp+8h] BYREF

	sub_140062AA0(a1, *(_DWORD*)a1);
	v6 = *(_QWORD**)(a1 + 64);
	if ((*v6)--)
	{
		v8 = *(_QWORD*)(a1 + 64);
		v9 = *(unsigned __int8*)(*(_QWORD*)(v8 + 8))++;
	}
	else
	{
		v10 = *(_QWORD*)(a1 + 64);
		v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v10 + 16))(
			*(_QWORD*)(v10 + 32),
			*(_QWORD*)(v10 + 24),
			&v29);
		if (v11 && (v12 = v29) != 0)
		{
			*(_QWORD*)(v10 + 8) = v11;
			v13 = v11 + 1;
			*(_QWORD*)v10 = v12 - 1;
			v9 = *(unsigned __int8*)(v13 - 1);
			*(_QWORD*)(v10 + 8) = v13;
		}
		else
		{
			v9 = -1;
		}
	}
	*(_DWORD*)a1 = v9;
	if (v9 == 10 || v9 == 13)
		sub_140062E00(a1);
	v14 = *(_DWORD*)a1;
	if (*(_DWORD*)a1 == -1)
	{
	LABEL_37:
		v28 = aUnfinishedLong_0;
		if (a2)
			v28 = aUnfinishedLong;
		sub_140062CF0(a1, v28, 287);
	}
	while (1)
	{
		if (v14 == 10 || v14 == 13)
		{
			sub_140062AA0(a1, 10);
			sub_140062E00(a1);
			if (!a2)
				*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = 0i64;
			goto LABEL_31;
		}
		if (v14 == 91)
		{
			if ((unsigned int)sub_140063340(a1) == a3)
			{
				sub_140062AA0(a1, *(_DWORD*)a1);
				v24 = *(_QWORD**)(a1 + 64);
				v25 = (*v24)--;
				v26 = *(_QWORD*)(a1 + 64);
				if (v25)
					v27 = *(unsigned __int8*)(*(_QWORD*)(v26 + 8))++;
				else
					v27 = sub_1400628A0(v26);
				*(_DWORD*)a1 = v27;
				if (!a3)
					sub_140062CF0(a1, aNestingOfIsDep, 91);
			}
			goto LABEL_31;
		}
		if (v14 != 93)
		{
			if (a2)
				sub_140062AA0(a1, *(_DWORD*)a1);
			v15 = *(_QWORD**)(a1 + 64);
			v16 = (*v15)--;
			v17 = *(_QWORD*)(a1 + 64);
			if (v16)
			{
				v18 = *(unsigned __int8*)(*(_QWORD*)(v17 + 8))++;
				*(_DWORD*)a1 = v18;
			}
			else
			{
				*(_DWORD*)a1 = sub_1400628A0(v17);
			}
			goto LABEL_31;
		}
		if ((unsigned int)sub_140063340(a1) == a3)
			break;
	LABEL_31:
		v14 = *(_DWORD*)a1;
		if (*(_DWORD*)a1 == -1)
			goto LABEL_37;
	}
	sub_140062AA0(a1, *(_DWORD*)a1);
	v19 = *(_QWORD**)(a1 + 64);
	v20 = (*v19)--;
	v21 = *(_QWORD*)(a1 + 64);
	if (v20)
	{
		result = *(_QWORD*)(v21 + 8) + 1i64;
		v23 = **(unsigned __int8**)(v21 + 8);
		*(_QWORD*)(v21 + 8) = result;
	}
	else
	{
		result = sub_1400628A0(v21);
		v23 = result;
	}
	*(_DWORD*)a1 = v23;
	if (a2)
	{
		result = sub_140062DA0(
			a1,
			(unsigned __int64*)(**(_QWORD**)(a1 + 72) + a3 + 2),
			*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) - 2 * (a3 + 2));
		*a2 = result;
	}
	return result;
}

