//----- (00000001405AEE20) ----------------------------------------------------
__int64 __fastcall sub_1405AEE20(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	unsigned int* v4; // rsi
	__int64 v5; // r14
	__int64 v6; // r12
	unsigned int* v7; // rdi
	__int64 v8; // rcx
	_DWORD* v9; // rdx
	unsigned int* v10; // rdi
	__int64 v11; // r14
	__int64 v12; // rcx
	int* v13; // rdx
	int v14; // edx
	__int64 v15; // xmm0_8
	__int128 v16; // [rsp+20h] [rbp-49h] BYREF
	__int128 v17; // [rsp+30h] [rbp-39h]
	__int128 v18; // [rsp+40h] [rbp-29h]
	__int128 v19; // [rsp+50h] [rbp-19h]
	__int128 v20; // [rsp+60h] [rbp-9h] BYREF
	__int128 v21; // [rsp+70h] [rbp+7h]
	__int64 v22; // [rsp+80h] [rbp+17h]

	result = sub_1402070A0(*(_DWORD*)(a1 + 64));
	v3 = result;
	if (!result)
		return result;
	result = sub_1405ACD50(a1);
	if (!result || (result = sub_140207D60(*(_DWORD*)(result + 108))) == 0)
	{
		v10 = (unsigned int*)(v3 + 36);
		v11 = 4i64;
		while (1)
		{
			if (!*v10)
				goto LABEL_29;
			result = sub_14024B540(*v10);
			if (!result)
				goto LABEL_29;
			if ((*(_BYTE*)(a1 + 100) & 1) != 0)
				break;
			if (qword_140C65878)
			{
				v13 = (int*)result;
			LABEL_28:
				result = sub_140350D70(v12, v13);
			}
		LABEL_29:
			++v10;
			if (!--v11)
				return result;
		}
		v14 = 0;
		v16 = *(_OWORD*)result;
		v17 = *(_OWORD*)(result + 16);
		v18 = *(_OWORD*)(result + 32);
		v19 = *(_OWORD*)(result + 48);
		v20 = *(_OWORD*)(result + 64);
		v21 = *(_OWORD*)(result + 80);
		v15 = *(_QWORD*)(result + 96);
		result = (__int64)&v20 + 4;
		v22 = v15;
		do
		{
			++v14;
			*(_DWORD*)result = 0;
			result += 4i64;
			v12 = v14;
		} while ((unsigned __int64)v14 < 4);
		if (!qword_140C65878)
			goto LABEL_29;
		v13 = (int*)&v16;
		goto LABEL_28;
	}
	v4 = (unsigned int*)(result + 44);
	v5 = 4i64;
	v6 = v3 - result - 8;
	do
	{
		if (*v4)
		{
			v7 = (unsigned int*)sub_14024B540(*(unsigned int*)((char*)v4 + v6));
			result = sub_14024B540(*v4);
			if (result)
			{
				v16 = *(_OWORD*)result;
				v17 = *(_OWORD*)(result + 16);
				v18 = *(_OWORD*)(result + 32);
				v19 = *(_OWORD*)(result + 48);
				v20 = *(_OWORD*)(result + 64);
				v21 = *(_OWORD*)(result + 80);
				v22 = *(_QWORD*)(result + 96);
				if (v7)
				{
					result = *v7;
					LODWORD(v16) = *v7;
				}
			}
			else if (v7)
			{
				v16 = *(_OWORD*)v7;
				v17 = *((_OWORD*)v7 + 1);
				v18 = *((_OWORD*)v7 + 2);
				v19 = *((_OWORD*)v7 + 3);
				v20 = *((_OWORD*)v7 + 4);
				v21 = *((_OWORD*)v7 + 5);
				v22 = *((_QWORD*)v7 + 12);
			}
			if ((*(_BYTE*)(a1 + 100) & 1) != 0)
			{
				LODWORD(v8) = 0;
				v9 = (_DWORD*)&v20 + 1;
				do
				{
					v8 = (unsigned int)(v8 + 1);
					*v9++ = 0;
					result = (int)v8;
				} while ((unsigned __int64)(int)v8 < 4);
			}
			if (qword_140C65878)
				result = sub_140350D70(v8, (int*)&v16);
		}
		++v4;
		--v5;
	} while (v5);
	return result;
}
// 1405AEF7E: variable 'v8' is possibly undefined
// 1405AF03E: variable 'v12' is possibly undefined
// 140C65878: using guessed type __int64 qword_140C65878;

