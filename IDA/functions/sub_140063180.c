#include "../winhttp.h"

//----- (0000000140063180) ----------------------------------------------------
_BOOL8 __fastcall sub_140063180(__int64 a1, unsigned __int64* a2)
{
	_QWORD* v4; // rcx
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	_QWORD* v12; // rcx
	__int64 v14; // rcx
	int v15; // edx
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rax
	int v20; // edx
	__int64* v21; // rax
	char v22; // dl
	__int64 v23; // rcx
	__int64 v24; // r8
	_BOOL8 result; // rax
	__int64 v26; // [rsp+30h] [rbp+8h] BYREF

	do
	{
		sub_140062AA0(a1, *(_DWORD*)a1);
		v4 = *(_QWORD**)(a1 + 64);
		if ((*v4)--)
		{
			v6 = *(_QWORD*)(a1 + 64);
			v7 = *(unsigned __int8*)(*(_QWORD*)(v6 + 8))++;
		}
		else
		{
			v8 = *(_QWORD*)(a1 + 64);
			v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v8 + 16))(
				*(_QWORD*)(v8 + 32),
				*(_QWORD*)(v8 + 24),
				&v26);
			if (v9 && (v10 = v26) != 0)
			{
				*(_QWORD*)(v8 + 8) = v9;
				v11 = v9 + 1;
				*(_QWORD*)v8 = v10 - 1;
				v7 = *(unsigned __int8*)(v11 - 1);
				*(_QWORD*)(v8 + 8) = v11;
			}
			else
			{
				v7 = -1;
			}
		}
		*(_DWORD*)a1 = v7;
	} while ((unsigned int)sub_1407DE874(v7) || *(_DWORD*)a1 == 46);
	if (sub_1407DE0B4((__int64)aEe, *(_DWORD*)a1)
		&& (unsigned int)sub_140063010(a1)
		&& sub_1407DE0B4((__int64)asc_140C1E1BC, *(_DWORD*)a1))
	{
		sub_140063010(a1);
	}
	while ((unsigned int)sub_1407DE6F8(*(_DWORD*)a1) || *(_DWORD*)a1 == 95)
	{
		sub_140062AA0(a1, *(_DWORD*)a1);
		v12 = *(_QWORD**)(a1 + 64);
		if ((*v12)--)
		{
			v14 = *(_QWORD*)(a1 + 64);
			v15 = *(unsigned __int8*)(*(_QWORD*)(v14 + 8))++;
			*(_DWORD*)a1 = v15;
		}
		else
		{
			v16 = *(_QWORD*)(a1 + 64);
			v17 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v16 + 16))(
				*(_QWORD*)(v16 + 32),
				*(_QWORD*)(v16 + 24),
				&v26);
			if (v17 && (v18 = v26) != 0)
			{
				*(_QWORD*)(v16 + 8) = v17;
				v19 = v17 + 1;
				*(_QWORD*)v16 = v18 - 1;
				v20 = *(unsigned __int8*)(v19 - 1);
				*(_QWORD*)(v16 + 8) = v19;
				*(_DWORD*)a1 = v20;
			}
			else
			{
				*(_DWORD*)a1 = -1;
			}
		}
	}
	sub_140062AA0(a1, 0);
	v21 = *(__int64**)(a1 + 72);
	v22 = *(_BYTE*)(a1 + 88);
	v23 = v21[1];
	v24 = *v21;
	while (v23)
	{
		--v23;
		if (*(_BYTE*)(v24 + v23) == 46)
			*(_BYTE*)(v24 + v23) = v22;
	}
	result = sub_14005AC80(**(char***)(a1 + 72), a2);
	if (!result)
		return sub_1400630C0(a1, a2);
	return result;
}

