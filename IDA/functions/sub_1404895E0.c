//----- (00000001404895E0) ----------------------------------------------------
_QWORD* __fastcall sub_1404895E0(__int64 a1)
{
	_QWORD* v1; // rax
	__int64 v2; // rsi
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* result; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rcx
	unsigned __int64 v12; // r14
	unsigned __int64 v13; // rdi
	__int64 v14; // rcx
	__int64 v15; // rcx
	unsigned __int64 v16; // r13
	unsigned __int64 v17; // r12
	__int64 v18; // rbx
	unsigned int* v19; // rdi
	__int64 v20; // r8
	unsigned int v21; // edx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64* v24; // rax
	__int64 v25; // rax
	__int64 v26; // rcx
	unsigned __int64 v27; // r14
	__int64 v28; // rsi
	unsigned __int64 v29; // rdi
	__int64 v30; // r15
	__int64 v31; // rax
	__int64 v32; // [rsp+20h] [rbp-39h] BYREF
	__int64 v33; // [rsp+28h] [rbp-31h] BYREF
	__int64 v34; // [rsp+30h] [rbp-29h] BYREF
	unsigned __int64 v35; // [rsp+38h] [rbp-21h]
	__int64 v36; // [rsp+40h] [rbp-19h] BYREF
	unsigned __int64 v37; // [rsp+48h] [rbp-11h]
	__int64 v38; // [rsp+50h] [rbp-9h] BYREF
	unsigned __int64 v39; // [rsp+58h] [rbp-1h]
	char v40[24]; // [rsp+60h] [rbp+7h] BYREF
	int v42; // [rsp+C8h] [rbp+6Fh] BYREF
	_QWORD* v43; // [rsp+D0h] [rbp+77h]
	unsigned __int64 v44; // [rsp+D8h] [rbp+7Fh]

	v1 = *(_QWORD**)(a1 + 16);
	v2 = a1;
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = v3[5];
			sub_140008410(v4 + 8);
			sub_140008410(v4 + 40);
			sub_140008410(v4 + 72);
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(v2 + 16));
	}
	result = *(_QWORD**)(v2 + 48);
	v9 = (_QWORD*)result[2];
	v43 = v9;
	if (v9 == result)
		return result;
	do
	{
		v10 = v9[5];
		v35 = 0i64;
		v34 = 0i64;
		if ((int)sub_14048A580(v10, &v34) < 0)
		{
			if (v34)
			{
				v11 = v34 - 16;
				goto LABEL_50;
			}
			goto LABEL_51;
		}
		v12 = v35;
		v13 = 0i64;
		v44 = 0i64;
		if (!v35)
			goto LABEL_48;
		do
		{
			v39 = 0i64;
			v14 = *(_QWORD*)(v34 + 8 * v13);
			v38 = 0i64;
			if ((int)sub_14048A9E0(v14, &v38) < 0)
			{
				if (!v38)
					goto LABEL_46;
				v15 = v38 - 16;
				goto LABEL_45;
			}
			v16 = v39;
			v17 = 0i64;
			if (v39)
			{
				v18 = v38;
				do
				{
					v19 = *(unsigned int**)(v18 + 8 * v17);
					v37 = 0i64;
					v36 = 0i64;
					if ((int)sub_14048AE40((__int64)v19, &v36) < 0)
						goto LABEL_22;
					v20 = *(_QWORD*)(v2 + 16);
					v21 = *v19;
					v22 = *(_QWORD*)(v20 + 8);
					v23 = v20;
					while (v22)
					{
						if (*(_DWORD*)(v22 + 32) < v21)
						{
							v22 = *(_QWORD*)(v22 + 24);
						}
						else
						{
							v23 = v22;
							v22 = *(_QWORD*)(v22 + 16);
						}
					}
					if (v23 == v20 || v21 < *(_DWORD*)(v23 + 32))
					{
						v33 = *(_QWORD*)(v2 + 16);
						v24 = &v33;
					}
					else
					{
						v32 = v23;
						v24 = &v32;
					}
					v25 = *v24;
					if (v25 == v20 || (v26 = *(_QWORD*)(v25 + 40)) == 0)
					{
					LABEL_22:
						if (v36)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v36 - 16) + 8i64))(v36 - 16);
					}
					else
					{
						v27 = v37;
						v28 = v36;
						v29 = 0i64;
						if (v37)
						{
							v30 = v26 + 8;
							do
							{
								v42 = **(_DWORD**)(v28 + 8 * v29);
								sub_1400293C0(v30, (__int64)v40, &v42);
								++v29;
							} while (v29 < v27);
						}
						if (v28)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
						v2 = a1;
					}
					++v17;
				} while (v17 < v16);
				v13 = v44;
				v12 = v35;
			}
			if (v38)
			{
				v15 = v38 - 16;
			LABEL_45:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			}
		LABEL_46:
			v44 = ++v13;
		} while (v13 < v12);
		v9 = v43;
	LABEL_48:
		if (v34)
		{
			v11 = v34 - 16;
		LABEL_50:
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		}
	LABEL_51:
		v31 = v9[3];
		if (v31)
		{
			v9 = (_QWORD*)v9[3];
			v43 = (_QWORD*)v31;
			for (result = *(_QWORD**)(v31 + 16); result; result = (_QWORD*)result[2])
			{
				v9 = result;
				v43 = result;
			}
		}
		else
		{
			for (result = (_QWORD*)v9[1]; v9 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
				v9 = result;
			if ((_QWORD*)v9[3] != result)
				v9 = result;
			v43 = v9;
		}
	} while (v9 != *(_QWORD**)(v2 + 48));
	return result;
}
// 1404895E0: using guessed type char var_50[24];

