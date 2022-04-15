//----- (00000001404177B0) ----------------------------------------------------
__int64 __fastcall sub_1404177B0(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // esi
	__int64** v4; // rbx
	_DWORD* v5; // rax
	_QWORD** v6; // rax
	_DWORD* v7; // rcx
	_DWORD* v8; // rax
	__int64* v9; // rdx
	__int64 v10; // r8
	_QWORD* v11; // rcx
	_QWORD* v12; // rcx
	_QWORD* v13; // r8
	_QWORD* v14; // rax
	_DWORD* v15; // rcx
	bool v16; // zf
	_QWORD* v17; // rcx
	_QWORD* v18; // rdx
	_DWORD* v19; // r8
	__int64 v20; // rax
	__int64 v21; // rcx
	unsigned __int64* v22; // rax
	_DWORD* v23; // rbx
	int v24; // eax

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		v4 = (__int64**)sub_140056AB0(a1, 1u);
	else
		v4 = 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
		v6 = (_QWORD**)sub_140056AB0(a1, 2u);
	else
		v6 = 0i64;
	if (!v4)
	{
		if (!v6)
		{
			v7 = (_DWORD*)a1[2];
			*v7 = 1;
			v7[2] = 1;
			goto LABEL_87;
		}
		goto LABEL_15;
	}
	if (!v6)
	{
	LABEL_15:
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
	LABEL_86:
		v8[2] = 1;
		goto LABEL_87;
	}
	v9 = *v4;
	if (*v4)
	{
		v10 = *v9;
		if (*v9)
		{
			v11 = *v6;
			if (*v6)
			{
				v8 = (_DWORD*)a1[2];
				LOBYTE(v2) = v10 == *v11;
				*v8 = v2;
				goto LABEL_86;
			}
		LABEL_20:
			v8 = (_DWORD*)a1[2];
			LOBYTE(v2) = v10 == 0;
			*v8 = v2;
			goto LABEL_86;
		}
	}
	v12 = *v6;
	if (*v6 && *v12)
		goto LABEL_15;
	if (v9 && *((_DWORD*)v9 + 302) && *((_DWORD*)v9 + 285) && v9 != (__int64*)-1136i64)
	{
		if (!v12 || !*((_DWORD*)v12 + 302) || !*((_DWORD*)v12 + 285) || v12 == (_QWORD*)-1136i64)
			goto LABEL_15;
		if (!*((_DWORD*)v12 + 302) || (v13 = v12 + 142, !*((_DWORD*)v12 + 285)))
			v13 = 0i64;
		if (!*((_DWORD*)v9 + 302) || (v14 = v9 + 142, !*((_DWORD*)v9 + 285)))
			v14 = 0i64;
		v15 = (_DWORD*)a1[2];
		v16 = *v14 == *v13;
		v15[2] = 1;
		LOBYTE(v2) = v16;
		*v15 = v2;
	}
	else
	{
		if (v12 && *((_DWORD*)v12 + 302) && *((_DWORD*)v12 + 285) && v12 != (_QWORD*)-1136i64)
			goto LABEL_15;
		if (v9 && *((_DWORD*)v9 + 296) && v9[1])
		{
			if (*((_DWORD*)v9 + 296))
				v10 = v9[1];
			else
				v10 = 0i64;
			if (v12 && *((_DWORD*)v12 + 296))
			{
				v8 = (_DWORD*)a1[2];
				LOBYTE(v2) = v10 == v12[1];
				*v8 = v2;
				goto LABEL_86;
			}
			goto LABEL_20;
		}
		if (v12 && *((_DWORD*)v12 + 296) && v12[1])
			goto LABEL_15;
		if (v9 && *((_DWORD*)v9 + 297) && v9 != (__int64*)-744i64)
		{
			if (!v12 || !*((_DWORD*)v12 + 297) || v12 == (_QWORD*)-744i64)
				goto LABEL_15;
			if (*((_DWORD*)v12 + 297))
				v17 = v12 + 93;
			else
				v17 = 0i64;
			if (*((_DWORD*)v9 + 297))
				v18 = v9 + 93;
			else
				v18 = 0i64;
			v19 = (_DWORD*)a1[2];
			v20 = *v18 - *v17;
			if (*v18 == *v17)
				v20 = v18[1] - v17[1];
			v19[2] = 1;
			LOBYTE(v2) = v20 == 0;
			*v19 = v2;
		}
		else
		{
			if (v12 && *((_DWORD*)v12 + 297) && v12 != (_QWORD*)-744i64)
				goto LABEL_15;
			if (!v9 || !*((_DWORD*)v9 + 294) || v9 == (__int64*)-32i64)
			{
				if (!v12 || !*((_DWORD*)v12 + 294) || v12 == (_QWORD*)-32i64)
				{
					v8 = (_DWORD*)a1[2];
					*v8 = 1;
					goto LABEL_86;
				}
				goto LABEL_15;
			}
			if (v12 && *((_DWORD*)v12 + 294))
				v21 = (__int64)(v12 + 4);
			else
				v21 = 0i64;
			v22 = (unsigned __int64*)(v9 + 4);
			if (!*((_DWORD*)v9 + 294))
				v22 = 0i64;
			v23 = (_DWORD*)a1[2];
			v24 = sub_1407E6AF0(v22, v21, 0x138ui64);
			v23[2] = 1;
			LOBYTE(v2) = v24 == 0;
			*v23 = v2;
		}
	}
LABEL_87:
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

