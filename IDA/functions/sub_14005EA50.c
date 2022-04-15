//----- (000000014005EA50) ----------------------------------------------------
__int64 __fastcall sub_14005EA50(__int64 a1, __int64* a2, int* a3, unsigned int* a4)
{
	int* v5; // r12
	int v8; // r15d
	int v9; // eax
	__int64 v10; // rdi
	_QWORD* v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rcx
	_QWORD* v14; // rbx
	__int64 result; // rax
	__int64 v16; // rcx
	__int64 v17; // rdx

	v5 = a3;
	v8 = 0;
	while (1)
	{
		v9 = *((_DWORD*)a2 + 2);
		if (v9 == 5)
			break;
		if (v9 == 7)
			v17 = *(_QWORD*)(*a2 + 16);
		else
			v17 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * *((int*)a2 + 2) + 224);
		if (v17)
		{
			a3 = *(int**)(*(_QWORD*)(a1 + 32) + 304i64);
			v14 = (_QWORD*)(*(_QWORD*)(v17 + 32) + 40
				* (a3[3] & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v17 + 11)) - 1)));
			while (*((_DWORD*)v14 + 6) != 4 || (int*)v14[2] != a3)
			{
				v14 = (_QWORD*)v14[4];
				if (!v14)
					goto LABEL_23;
			}
		}
		else
		{
		LABEL_23:
			v14 = &unk_140A12138;
		}
		if (!*((_DWORD*)v14 + 2))
			sub_14005A950(a1, (__int64)a2, aIndex_3);
	LABEL_26:
		if (*((_DWORD*)v14 + 2) == 6)
			return sub_14005E840(a1, (__int64)v14, (__int64)a2, (__int64)v5, (__int64)a4);
		++v8;
		a2 = v14;
		if (v8 >= 100)
			sub_14005ABE0(a1, aLoopInSettable, a3, &unk_140A12138);
	}
	v10 = *a2;
	v11 = sub_14005C450(*a2, v5);
	*(_BYTE*)(v10 + 10) = 0;
	v12 = (__int64)v11;
	if (v11 == (_QWORD*)&unk_140A12138)
	{
		if (!v5[2])
			sub_14005ABE0(a1, aTableIndexIsNi);
		v12 = sub_14005C260(a1, v10, v5);
	}
	if (!*(_DWORD*)(v12 + 8))
	{
		v13 = *(_QWORD*)(v10 + 16);
		if (v13)
		{
			if ((*(_BYTE*)(v13 + 10) & 2) == 0)
			{
				v14 = sub_140062370(v13, 1, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 304i64));
				if (v14)
					goto LABEL_26;
			}
		}
	}
	*(_QWORD*)v12 = *(_QWORD*)a4;
	result = a4[2];
	*(_DWORD*)(v12 + 8) = result;
	if ((int)a4[2] >= 4)
	{
		result = *(_QWORD*)a4;
		if ((*(_BYTE*)(*(_QWORD*)a4 + 9i64) & 3) != 0)
		{
			result = *(unsigned __int8*)(v10 + 9);
			if ((result & 4) != 0)
			{
				v16 = *(_QWORD*)(a1 + 32);
				*(_BYTE*)(v10 + 9) = result & 0xFB;
				result = *(_QWORD*)(v16 + 64);
				*(_QWORD*)(v10 + 48) = result;
				*(_QWORD*)(v16 + 64) = v10;
			}
		}
	}
	return result;
}
// 14005EC07: variable 'a3' is possibly undefined
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);
// 14005C260: using guessed type __int64 __fastcall sub_14005C260(_QWORD, _QWORD, _QWORD);

