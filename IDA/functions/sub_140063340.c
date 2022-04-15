//----- (0000000140063340) ----------------------------------------------------
__int64 __fastcall sub_140063340(__int64 a1)
{
	int v1; // r14d
	unsigned int v3; // esi
	_QWORD* v4; // rdx
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // rdi
	unsigned __int8* v9; // rcx
	__int64 v10; // rax
	_QWORD* v11; // rcx
	__int64 v13; // rcx
	int v14; // edx
	__int64 v15; // rdi
	unsigned __int8* v16; // rcx
	__int64 v17; // rax
	__int64 v19; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(_DWORD*)a1;
	v3 = 0;
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
		v9 = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v8 + 16))(
			*(_QWORD*)(v8 + 32),
			*(_QWORD*)(v8 + 24),
			&v19);
		if (v9 && v19)
		{
			v10 = v19 - 1;
			*(_QWORD*)(v8 + 8) = v9;
			*(_QWORD*)v8 = v10;
			v7 = *v9;
			*(_QWORD*)(v8 + 8) = v9 + 1;
		}
		else
		{
			v7 = -1;
		}
	}
	*(_DWORD*)a1 = v7;
	if (v7 == 61)
	{
		do
		{
			sub_140062AA0(a1, *(_DWORD*)a1);
			v11 = *(_QWORD**)(a1 + 64);
			if ((*v11)--)
			{
				v13 = *(_QWORD*)(a1 + 64);
				v14 = *(unsigned __int8*)(*(_QWORD*)(v13 + 8))++;
			}
			else
			{
				v15 = *(_QWORD*)(a1 + 64);
				v16 = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v15 + 16))(
					*(_QWORD*)(v15 + 32),
					*(_QWORD*)(v15 + 24),
					&v19);
				if (v16 && v19)
				{
					v17 = v19 - 1;
					*(_QWORD*)(v15 + 8) = v16;
					*(_QWORD*)v15 = v17;
					v14 = *v16;
					*(_QWORD*)(v15 + 8) = v16 + 1;
				}
				else
				{
					v14 = -1;
				}
			}
			++v3;
			*(_DWORD*)a1 = v14;
		} while (v14 == 61);
	}
	if (*(_DWORD*)a1 == v1)
		return v3;
	else
		return -1 - v3;
}

