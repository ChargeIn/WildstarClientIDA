//----- (0000000140063700) ----------------------------------------------------
__int64 __fastcall sub_140063700(__int64 a1, int a2, __int64* a3)
{
	_QWORD* v6; // rcx
	__int64 v8; // rcx
	int v9; // edx
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	int v14; // edx
	_QWORD* v15; // rcx
	__int64 v17; // rdi
	unsigned __int8* v18; // rax
	__int64 v19; // rcx
	_QWORD* v20; // rcx
	__int64 v22; // rcx
	int v23; // edx
	__int64 v24; // rdi
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rax
	char v28; // dl
	_QWORD* v29; // rcx
	_QWORD* v31; // rcx
	__int64 v33; // rcx
	int v34; // edx
	int v35; // edx
	int v36; // esi
	int v37; // r14d
	_QWORD* v38; // rcx
	__int64 v40; // rcx
	int v41; // edx
	__int64 v42; // rdi
	__int64 v43; // rax
	__int64 v44; // rcx
	__int64 v45; // rax
	_QWORD* v46; // rcx
	__int64 v47; // rdx
	__int64 v48; // rcx
	int v49; // edx
	_QWORD* v50; // rax
	__int64 result; // rax
	__int64 v52; // [rsp+20h] [rbp-48h] BYREF
	__int64 v53; // [rsp+28h] [rbp-40h] BYREF
	__int64 v54; // [rsp+30h] [rbp-38h] BYREF
	__int64 v55; // [rsp+70h] [rbp+8h] BYREF
	__int64 v56; // [rsp+88h] [rbp+20h] BYREF

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
			&v55);
		if (v11 && (v12 = v55) != 0)
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
	if (v9 != a2)
	{
		while (1)
		{
			v14 = *(_DWORD*)a1;
			if (*(_DWORD*)a1 == -1)
				sub_140062CF0(a1, aUnfinishedStri_0, 287);
			if (v14 == 10 || v14 == 13)
				sub_140062CF0(a1, aUnfinishedStri, 286);
			if (v14 == 92)
				break;
			sub_140062AA0(a1, v14);
			v15 = *(_QWORD**)(a1 + 64);
			if ((*v15)--)
			{
			LABEL_35:
				v33 = *(_QWORD*)(a1 + 64);
				v34 = *(unsigned __int8*)(*(_QWORD*)(v33 + 8))++;
				*(_DWORD*)a1 = v34;
			}
			else
			{
				v17 = *(_QWORD*)(a1 + 64);
				v18 = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v17 + 16))(
					*(_QWORD*)(v17 + 32),
					*(_QWORD*)(v17 + 24),
					&v55);
				if (!v18)
					goto LABEL_40;
				v19 = v55;
			LABEL_38:
				if (!v19)
					goto LABEL_40;
				*(_QWORD*)v17 = v19 - 1;
				*(_QWORD*)(v17 + 8) = v18;
				v35 = *v18;
				*(_QWORD*)(v17 + 8) = v18 + 1;
				*(_DWORD*)a1 = v35;
			}
		LABEL_52:
			if (*(_DWORD*)a1 == a2)
				goto LABEL_53;
		}
		v20 = *(_QWORD**)(a1 + 64);
		if ((*v20)--)
		{
			v22 = *(_QWORD*)(a1 + 64);
			v23 = *(unsigned __int8*)(*(_QWORD*)(v22 + 8))++;
		}
		else
		{
			v24 = *(_QWORD*)(a1 + 64);
			v25 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v24 + 16))(
				*(_QWORD*)(v24 + 32),
				*(_QWORD*)(v24 + 24),
				&v56);
			if (v25 && (v26 = v56) != 0)
			{
				*(_QWORD*)(v24 + 8) = v25;
				v27 = v25 + 1;
				*(_QWORD*)v24 = v26 - 1;
				v23 = *(unsigned __int8*)(v27 - 1);
				*(_QWORD*)(v24 + 8) = v27;
			}
			else
			{
				v23 = -1;
			}
		}
		*(_DWORD*)a1 = v23;
		switch (v23)
		{
		case -1:
			goto LABEL_52;
		case 10:
		case 13:
			sub_140062AA0(a1, 10);
			sub_140062E00(a1);
			goto LABEL_52;
		case 97:
			v28 = 7;
			goto LABEL_29;
		case 98:
			v28 = 8;
			goto LABEL_29;
		case 102:
			v28 = 12;
			goto LABEL_29;
		case 110:
			v28 = 10;
			goto LABEL_29;
		case 114:
			v28 = 13;
			goto LABEL_29;
		case 116:
			v28 = 9;
			goto LABEL_29;
		case 118:
			v28 = 11;
		LABEL_29:
			sub_140062AA0(a1, v28);
			v29 = *(_QWORD**)(a1 + 64);
			if ((*v29)--)
				goto LABEL_35;
			v17 = *(_QWORD*)(a1 + 64);
			v18 = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v17 + 16))(
				*(_QWORD*)(v17 + 32),
				*(_QWORD*)(v17 + 24),
				&v52);
			if (!v18)
				break;
			v19 = v52;
			goto LABEL_38;
		default:
			if ((unsigned int)sub_1407DE874(v23))
			{
				v36 = 0;
				v37 = 0;
				do
				{
					v37 = *(_DWORD*)a1 + 2 * (v37 + 4 * (v37 - 6));
					v38 = *(_QWORD**)(a1 + 64);
					if ((*v38)--)
					{
						v40 = *(_QWORD*)(a1 + 64);
						v41 = *(unsigned __int8*)(*(_QWORD*)(v40 + 8))++;
					}
					else
					{
						v42 = *(_QWORD*)(a1 + 64);
						v43 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v42 + 16))(
							*(_QWORD*)(v42 + 32),
							*(_QWORD*)(v42 + 24),
							&v54);
						if (v43 && (v44 = v54) != 0)
						{
							*(_QWORD*)(v42 + 8) = v43;
							v45 = v43 + 1;
							*(_QWORD*)v42 = v44 - 1;
							v41 = *(unsigned __int8*)(v45 - 1);
							*(_QWORD*)(v42 + 8) = v45;
						}
						else
						{
							v41 = -1;
						}
					}
					++v36;
					*(_DWORD*)a1 = v41;
				} while (v36 < 3 && (unsigned int)sub_1407DE874(v41));
				if (v37 > 255)
					sub_140062CF0(a1, aEscapeSequence, 286);
				sub_140062AA0(a1, v37);
				goto LABEL_52;
			}
			sub_140062AA0(a1, *(_DWORD*)a1);
			v31 = *(_QWORD**)(a1 + 64);
			if ((*v31)--)
				goto LABEL_35;
			v17 = *(_QWORD*)(a1 + 64);
			v18 = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v17 + 16))(
				*(_QWORD*)(v17 + 32),
				*(_QWORD*)(v17 + 24),
				&v53);
			if (v18)
			{
				v19 = v53;
				goto LABEL_38;
			}
			break;
		}
	LABEL_40:
		*(_DWORD*)a1 = -1;
		goto LABEL_52;
	}
LABEL_53:
	sub_140062AA0(a1, *(_DWORD*)a1);
	v46 = *(_QWORD**)(a1 + 64);
	v47 = (*v46)--;
	v48 = *(_QWORD*)(a1 + 64);
	if (v47)
		v49 = *(unsigned __int8*)(*(_QWORD*)(v48 + 8))++;
	else
		v49 = sub_1400628A0(v48);
	v50 = *(_QWORD**)(a1 + 72);
	*(_DWORD*)a1 = v49;
	result = sub_140062DA0(a1, (unsigned __int64*)(*v50 + 1i64), v50[1] - 2i64);
	*a3 = result;
	return result;
}

